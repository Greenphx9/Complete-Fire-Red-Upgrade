#include "../defines.h"
#include "../defines_battle.h"
#include "../../include/random.h"
#include "../../include/constants/items.h"

#include "../../include/new/ability_tables.h"
#include "../../include/new/accuracy_calc.h"
#include "../../include/new/ai_advanced.h"
#include "../../include/new/ai_master.h"
#include "../../include/new/ai_scripts.h"
#include "../../include/new/ai_util.h"
#include "../../include/new/battle_start_turn_start.h"
#include "../../include/new/battle_util.h"
#include "../../include/new/battle_script_util.h"
#include "../../include/new/damage_calc.h"
#include "../../include/new/dynamax.h"
#include "../../include/new/end_turn.h"
#include "../../include/new/frontier.h"
#include "../../include/new/item.h"
#include "../../include/new/general_bs_commands.h"
#include "../../include/new/move_tables.h"
#include "../../include/new/species_tables.h"
#include "../../include/new/util.h"

/*
ai_negatives.c
	All possible subtractions to an AIs move viability.
*/

#define GOOD_AI (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_CHECK_BAD_MOVE)
#define TARGETING_PARTNER (bankDef == bankAtkPartner)
#define PARTNER_MOVE_EFFECT_IS_SAME (IS_DOUBLE_BATTLE \
									&& gBattleMoves[move].effect == gBattleMoves[partnerMove].effect \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& gBattleStruct->moveTarget[bankAtkPartner] == bankDef)
#define PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET (IS_DOUBLE_BATTLE \
									&& gBattleMoves[move].effect == gBattleMoves[partnerMove].effect \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE)
#define PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET (IS_DOUBLE_BATTLE \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& gBattleStruct->moveTarget[bankAtkPartner] == bankDef \
									&& (gBattleMoves[partnerMove].effect == EFFECT_SLEEP \
									 || gBattleMoves[partnerMove].effect == EFFECT_POISON \
									 || gBattleMoves[partnerMove].effect == EFFECT_TOXIC \
									 || gBattleMoves[partnerMove].effect == EFFECT_PARALYZE \
									 || gBattleMoves[partnerMove].effect == EFFECT_WILL_O_WISP \
									 || gBattleMoves[partnerMove].effect == EFFECT_YAWN \
									 || IsMaxMoveWithStatusEffect(partnerMove))) \

#define PARTNER_MOVE_EFFECT_IS_WEATHER (IS_DOUBLE_BATTLE \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& (gBattleMoves[partnerMove].effect == EFFECT_SUNNY_DAY \
									 || gBattleMoves[partnerMove].effect == EFFECT_RAIN_DANCE \
									 || gBattleMoves[partnerMove].effect == EFFECT_SANDSTORM \
									 || gBattleMoves[partnerMove].effect == EFFECT_HAIL \
									 || IsMaxMoveWithWeatherEffect(partnerMove)))
#define PARTNER_MOVE_EFFECT_IS_TERRAIN (IS_DOUBLE_BATTLE \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& (gBattleMoves[partnerMove].effect == EFFECT_SET_TERRAIN \
									 || IsMaxMoveWithTerrainEffect(partnerMove)))
#define PARTNER_MOVE_IS_TAILWIND_TRICKROOM (IS_DOUBLE_BATTLE \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& (partnerMove == MOVE_TAILWIND || partnerMove == MOVE_TRICKROOM))

#define PARTNER_MOVE_IS_CONFUSION_MAX_MOVE (IS_DOUBLE_BATTLE \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& IsMaxMoveWithConfusionEffect(partnerMove))
#define PARTNER_MOVE_IS_TRAP_DAMAGE_MAX_MOVE (IS_DOUBLE_BATTLE \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& IsMaxMoveWithTrapDamageEffect(partnerMove))
#define PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(effect) (IS_DOUBLE_BATTLE \
									&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
									&& IsMaxMoveWithEffect(partnerMove, effect))

#define PARTNER_MOVE_IS_SAME (IS_DOUBLE_BATTLE \
							  && move == partnerMove \
						   	  && gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
							  && gBattleStruct->moveTarget[bankAtkPartner] == bankDef)
#define PARTNER_MOVE_IS_SAME_NO_TARGET (IS_DOUBLE_BATTLE \
										&& gChosenMovesByBanks[bankAtkPartner] != MOVE_NONE \
										&& move == partnerMove)
#define GOOD_AI_MOVE_LOCKED (GOOD_AI \
                               && (IsChoiceItemEffectOrAbility(data->atkItemEffect, data->atkAbility) || gDisableStructs[bankAtk].encoreTimer > 0))

#define ATTACKER_ASLEEP (data->atkStatus1 & STATUS1_SLEEP && data->atkStatus1 > 1)
#define TARGET_ASLEEP (data->defStatus1 & STATUS1_SLEEP && data->defStatus1 > 1)

#define ATTACKER_ASLEEP (data->atkStatus1 & STATUS1_SLEEP && data->atkStatus1 > 1)
#define TARGET_ASLEEP (data->defStatus1 & STATUS1_SLEEP && data->defStatus1 > 1)

//Doubles is now defined as being a non 1v1 Double Battle
#undef IS_DOUBLE_BATTLE
#define IS_DOUBLE_BATTLE (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && ((BATTLER_ALIVE(data->foe1) && BATTLER_ALIVE(data->foe2)) || BATTLER_ALIVE(bankAtkPartner)))

extern move_effect_t gSetStatusMoveEffects[];
extern move_effect_t gStatLoweringMoveEffects[];
extern move_effect_t gConfusionMoveEffects[];
extern const struct FlingStruct gFlingTable[];

//This file's functions:
static void AI_Flee(void);
static void AI_Watch(void);

u8 AIScript_Negatives(const u8 bankAtk, const u8 bankDef, const u16 originalMove, const u8 originalViability, struct AIScript* data)
{
	s16 viability = originalViability;
	u16 predictedMove = IsValidMovePrediction(bankDef, bankAtk); //The move the target is likely to make against the attacker
	u8 decreased;
	u32 i;
	u8 atkAbility2, defAbility2;

	u16 move = TryReplaceMoveWithZMove(bankAtk, bankDef, originalMove);

	data->atkAbility = GetAIAbility(bankAtk, bankDef, move);
	data->defAbility = GetAIAbility(bankDef, bankAtk, predictedMove);

	if (IS_MOLD_BREAKER(data->atkAbility, move)
	&& gSpecialAbilityFlags[data->defAbility].gMoldBreakerIgnoredAbilities)
		data->defAbility = ABILITY_NONE;

	u8 moveEffect = gBattleMoves[move].effect;
	u8 moveSplit = CalcMoveSplit(move, bankAtk, bankDef);
	u8 moveTarget = GetBaseMoveTarget(move, bankAtk);
	u8 moveType = GetMoveTypeSpecial(bankAtk, move);
	u8 moveFlags = gBattleMoves[move].flags;
	u16 moveAcc = AccuracyCalc(move, bankAtk, bankDef);
	u16 partnerMove = data->partnerMove;
	u8 bankAtkPartner = data->bankAtkPartner;

	if(gDisableStructs[bankAtk].disabledMove == move)
    {
        DECREASE_VIABILITY(100); //Should never use a disabled move
        return viability;
    }


	//Affects User Check
	if (moveTarget & MOVE_TARGET_USER)
		goto MOVESCR_CHECK_0;

	//Check who Partner's attacking in doubles
	if (data->partnerHandling && moveSplit == SPLIT_STATUS)
	{
		DECREASE_VIABILITY(9); //Don't use a status move on the mon who the Partner is set to KO
		return viability;
	}

	//Ranged Move Check
	if (moveTarget & (MOVE_TARGET_BOTH | MOVE_TARGET_ALL))
	{
		if (moveType == TYPE_ELECTRIC && ABILITY_ON_OPPOSING_FIELD(bankAtk, ABILITY_LIGHTNINGROD))
		{
			DECREASE_VIABILITY(20);
			return viability;
		}
		else if (moveType == TYPE_WATER && ABILITY_ON_OPPOSING_FIELD(bankAtk, ABILITY_STORMDRAIN))
		{
			DECREASE_VIABILITY(20);
			return viability;
		}
	}

	#ifdef AI_TRY_TO_KILL_RATE
		u8 killRate = AI_TRY_TO_KILL_RATE;

		#ifdef VAR_GAME_DIFFICULTY
		if (VarGet(VAR_GAME_DIFFICULTY) == OPTIONS_EASY_DIFFICULTY)
			killRate = AI_TRY_TO_KILL_RATE / 5;
		#endif

		if (AI_THINKING_STRUCT->aiFlags == AI_SCRIPT_CHECK_BAD_MOVE //Only basic AI
		&& gRandomTurnNumber % 100 < killRate
		&& DamagingMoveInMoveset(bankAtk)
		&& !TARGETING_PARTNER)
		{
			if (IS_SINGLE_BATTLE || CountAliveMonsInBattle(BATTLE_ALIVE_DEF_SIDE, bankAtk, bankDef) == 1) //Single Battle or only 1 target left
			{
				if (MoveKnocksOutPossiblyGoesFirstWithBestAccuracy(move, bankAtk, bankDef, TRUE)) //Check going first
					INCREASE_VIABILITY(7);
				else if (IsStrongestMove(move, bankAtk, bankDef))
					INCREASE_VIABILITY(2);
			}
			else //Double Battle
			{
				IncreaseDoublesDamageViability(&viability, 0xFF, bankAtk, bankDef, move);
			}
		}
	#endif

	// Gravity Table Prevention Check
	if (IsGravityActive() && gSpecialMoveFlags[move].gGravityBannedMoves)
		return 0; //Can't select this move period

	// Ungrounded check
	if (CheckGrounding(bankDef) == IN_AIR && moveType == TYPE_GROUND && move != MOVE_THOUSANDARROWS
	&& (data->atkAbility != ABILITY_MOLDBREAKER && data->defAbility != ABILITY_LEVITATE)) //make sure we can still click thousandarrows, ground moves w/mold breaker vs levitat
		return 0;

	// Powder Move Checks (safety goggles, defender has grass type, overcoat, and powder move table)
	if (gSpecialMoveFlags[move].gPowderMoves && !IsAffectedByPowder(bankDef))
		DECREASE_VIABILITY(10); //No return b/c could be reduced further by absorb abilities

	//Dynamax Check
	if (IsDynamaxed(bankDef) && gSpecialMoveFlags[move].gDynamaxBannedMoves)
	{
		DECREASE_VIABILITY(10);
		return viability; //Move Fails
	}

	//Don't use poltergeist if target has no item
	if (data->defItem == ITEM_NONE && move == MOVE_POLTERGEIST) {
		DECREASE_VIABILITY(20);
		return viability;
	}

	//Target Ability Checks
	if (NO_MOLD_BREAKERS(data->atkAbility, move))
	{
		switch (data->defAbility) { //Type-specific ability checks - primordial weather handled separately

			//Electric
			case ABILITY_VOLTABSORB:
			case ABILITY_MOTORDRIVE:
			case ABILITY_LIGHTNINGROD:
				if (moveType == TYPE_ELECTRIC) // && (moveSplit != SPLIT_STATUS))
				{
					if (!TARGETING_PARTNER) //Good idea to attack partner
					{
						DECREASE_VIABILITY(20);
						return viability;
					}
				}
				break;

			//Water
			case ABILITY_WATERABSORB:
			case ABILITY_DRYSKIN:
			case ABILITY_STORMDRAIN:
				if (moveType == TYPE_WATER)
				{
					if (!TARGETING_PARTNER) //Good idea to attack partner
					{
						DECREASE_VIABILITY(20);
						return viability;
					}
				}
				break;

			//case ABILITY_WATERCOMPACTION:
			//	if (moveType == TYPE_WATER)
			//		return viability - 10;
			//	break;

			//Fire
			case ABILITY_FLASHFIRE:
				if (moveType == TYPE_FIRE)
				{
					if (!TARGETING_PARTNER) //Good idea to attack partner
					{
						DECREASE_VIABILITY(20);
						return viability;
					}
				}
				break;

			//Grass
			case ABILITY_SAPSIPPER:
				if (moveType == TYPE_GRASS)
				{
					if (!TARGETING_PARTNER) //Good idea to attack partner
					{
						DECREASE_VIABILITY(20);
						return viability;
					}
				}
				break;

			//Dark
			case ABILITY_JUSTIFIED:
				if (moveType == TYPE_DARK && moveSplit != SPLIT_STATUS)
				{
					if (!TARGETING_PARTNER //Don't decrement if the partner is the target (handled later)
					&& AI_STAT_CAN_RISE(bankDef, STAT_ATK) //Ability can activate
					&& !MoveKnocksOutXHits(move, bankAtk, bankDef, 2) //This attack won't KO in a couple hits
					&& RealPhysicalMoveInMoveset(bankDef))
					{
						DECREASE_VIABILITY(4); //Don't risk raising enemy stats
						//Don't return because could get worse from here
					}
				}
				break;

			//Multiple move types
			case ABILITY_RATTLED:
				if (moveSplit != SPLIT_STATUS
				&& (moveType == TYPE_DARK || moveType == TYPE_GHOST || moveType == TYPE_BUG))
				{
					if (!TARGETING_PARTNER //Don't decrement if the partner is the target (handled later)
					&& AI_STAT_CAN_RISE(bankDef, STAT_SPEED) //Ability can activate
					&& !MoveKnocksOutXHits(move, bankAtk, bankDef, 1) //This attack won't KO yet
					&& SpeedCalc(bankAtk) > SpeedCalc(bankDef)) //The attacker is currently faster
					{
						if (MoveKnocksOutXHits(move, bankAtk, bankDef, 2))
							DECREASE_VIABILITY(1); //Risk it, but not best choice because foe might outspeed and strike back harder
						else
							DECREASE_VIABILITY(9); //Don't risk raising enemy stats
						//Don't return because could get worse from here
					}
				}
				break;
			case ABILITY_STEAMENGINE:
				if (moveSplit != SPLIT_STATUS
				&& (moveType == TYPE_WATER || moveType == TYPE_FIRE))
				{
					if (!TARGETING_PARTNER //Don't decrement if the partner is the target (handled later)
					&& AI_STAT_CAN_RISE(bankDef, STAT_SPEED) //Ability can activate
					&& !MoveKnocksOutXHits(move, bankAtk, bankDef, 1) //This attack won't KO yet
					&& SpeedCalc(bankAtk) > SpeedCalc(bankDef)) //The attacker is currently faster
					{
						if (MoveKnocksOutXHits(move, bankAtk, bankDef, 2))
							DECREASE_VIABILITY(5); //Not best choice because foe might outspeed and strike back harder
						else
							DECREASE_VIABILITY(9); //Don't risk raising enemy stats
						//Don't return because could get worse from here
					}
				}
				break;

			//Move category checks
			case ABILITY_SOUNDPROOF:
				if (CheckSoundMove(move))
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_BULLETPROOF:
				if (gSpecialMoveFlags[move].gBallBombMoves)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_QUEENLYMAJESTY:
				if (PriorityCalc(bankAtk, ACTION_USE_MOVE, move) > 0) //Check if right num
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_AROMAVEIL:
				if (gSpecialMoveFlags[move].gAromaVeilProtectedMoves)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_SWEETVEIL:
				if (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_FLOWERVEIL:
				if (IsOfType(bankDef, TYPE_GRASS)
				&& (CheckTableForMovesEffect(move, gSetStatusMoveEffects) || CheckTableForMovesEffect(move, gStatLoweringMoveEffects)))
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_MAGICBOUNCE:
				if (moveFlags & FLAG_MAGIC_COAT_AFFECTED)
				{
					DECREASE_VIABILITY(20);
					return viability;
				}
				break;

			case ABILITY_CONTRARY:
				if (CheckTableForMovesEffect(move, gStatLoweringMoveEffects))
				{
					if (!TARGETING_PARTNER) //Good idea to attack partner
					{
						DECREASE_VIABILITY(20);
						return viability;
					}
				}
				break;

			case ABILITY_CLEARBODY:
			//case ABILITY_FULLMETALBODY:
				if (CheckTableForMovesEffect(move, gStatLoweringMoveEffects)
				|| move == MOVE_PARTINGSHOT)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_MIRRORARMOR:
				if (CheckTableForMovesEffect(move, gStatLoweringMoveEffects))
				{
					DECREASE_VIABILITY(20);
					return viability;
				}
				break;

			case ABILITY_HYPERCUTTER:
				if ((moveEffect == EFFECT_ATTACK_DOWN ||  moveEffect == EFFECT_ATTACK_DOWN_2)
				&& move != MOVE_PLAYNICE && move != MOVE_NOBLEROAR && move != MOVE_TEARFULLOOK && move != MOVE_VENOMDRENCH)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_KEENEYE:
				if (moveEffect == EFFECT_ACCURACY_DOWN
				||  moveEffect == EFFECT_ACCURACY_DOWN_2)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_BIGPECKS:
				if (moveEffect == EFFECT_DEFENSE_DOWN
				||  moveEffect == EFFECT_DEFENSE_DOWN_2)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_DEFIANT:
				if (moveSplit == SPLIT_STATUS && CheckTableForMovesEffect(move, gStatLoweringMoveEffects))
				{
					if (!TARGETING_PARTNER //Good idea to attack partner
					&& AI_STAT_CAN_RISE(bankDef, STAT_ATK) //Ability can activate
					&& RealPhysicalMoveInMoveset(bankDef)) //Target has a move that the ability will affect
					{
						DECREASE_VIABILITY(8); //Not 10 b/c move still works, just not recommended
						return viability;
					}
				}
				break;

			case ABILITY_COMPETITIVE:
				if (moveSplit == SPLIT_STATUS && CheckTableForMovesEffect(move, gStatLoweringMoveEffects)) //Status moves
				{
					if (!TARGETING_PARTNER //Good idea to attack partner
					&& AI_STAT_CAN_RISE(bankDef, STAT_SPATK) //Ability can activate
					&& SpecialMoveInMoveset(bankDef)) //Target has a move that the ability will affect
					{
						DECREASE_VIABILITY(8); //Not 10 b/c move still works, just not recommended
						return viability;
					}
				}
				break;

			case ABILITY_COMATOSE:
				if (CheckTableForMovesEffect(move, gSetStatusMoveEffects))
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_SHIELDSDOWN:
				if (GetBankPartyData(bankDef)->species == SPECIES_MINIOR_SHIELD
				&&  CheckTableForMovesEffect(move, gSetStatusMoveEffects))
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case ABILITY_WONDERSKIN:
				if (moveSplit == SPLIT_STATUS)
					moveAcc = 50;
				break;

			case ABILITY_LEAFGUARD:
				if (WEATHER_HAS_EFFECT && (gBattleWeather & WEATHER_SUN_ANY)
				&& data->defItemEffect != ITEM_EFFECT_UTILITY_UMBRELLA
				&& CheckTableForMovesEffect(move, gSetStatusMoveEffects))
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;
		}

		//Target Partner Ability Check
		if (IS_DOUBLE_BATTLE && !TARGETING_PARTNER)
		{
			switch (data->defPartnerAbility) {
				case ABILITY_LIGHTNINGROD:
					if (moveType == TYPE_ELECTRIC && !IsMoveRedirectionPrevented(move, data->atkAbility))
					{
						DECREASE_VIABILITY(20);
						return viability;
					}
					break;

				case ABILITY_STORMDRAIN:
					if (moveType == TYPE_WATER && !IsMoveRedirectionPrevented(move, data->atkAbility))
					{
						DECREASE_VIABILITY(20);
						return viability;
					}
					break;

				case ABILITY_MAGICBOUNCE:
				if (moveFlags & FLAG_MAGIC_COAT_AFFECTED && moveTarget & (MOVE_TARGET_BOTH | MOVE_TARGET_ALL | MOVE_TARGET_OPPONENTS_FIELD))
				{
					DECREASE_VIABILITY(20);
					return viability;
				}
				break;

				case ABILITY_SWEETVEIL:
					if (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN)
					{
						DECREASE_VIABILITY(10);
						return viability;
					}
					break;

				case ABILITY_FLOWERVEIL:
					if ((IsOfType(bankDef, TYPE_GRASS))
					&& (CheckTableForMovesEffect(move, gSetStatusMoveEffects) || CheckTableForMovesEffect(move, gStatLoweringMoveEffects)))
					{
						DECREASE_VIABILITY(10);
						return viability;
					}
					break;

				case ABILITY_AROMAVEIL:
					if (gSpecialMoveFlags[move].gAromaVeilProtectedMoves)
					{
						DECREASE_VIABILITY(10);
						return viability;
					}
					break;

				case ABILITY_QUEENLYMAJESTY:
					if (PriorityCalc(bankAtk, ACTION_USE_MOVE, move) > 0) //Check if right num
					{
						DECREASE_VIABILITY(10);
						return viability;
					}
					break;
			}
		}
	}

	#ifndef OLD_PRANKSTER
	if (data->atkAbility == ABILITY_PRANKSTER)
	{
		if (IsOfType(bankDef, TYPE_DARK)
		&& moveSplit == SPLIT_STATUS
		&& !(moveTarget & (MOVE_TARGET_OPPONENTS_FIELD | MOVE_TARGET_USER))) //Directly strikes target
		{
			DECREASE_VIABILITY(10);
			return viability;
		}
	}
	#endif

	//Terrain Check
	if (CheckGrounding(bankDef) == GROUNDED)
	{
		switch (gTerrainType) {
			case ELECTRIC_TERRAIN:
				if (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case MISTY_TERRAIN:
				if (CheckTableForMovesEffect(move, gSetStatusMoveEffects) || CheckTableForMovesEffect(move, gConfusionMoveEffects))
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;

			case PSYCHIC_TERRAIN:
				if (PriorityCalc(bankAtk, ACTION_USE_MOVE, move) > 0)
				{
					DECREASE_VIABILITY(10);
					return viability;
				}
				break;
		}
	}

MOVESCR_CHECK_0:
	//Throat Chop Check
	if (CantUseSoundMoves(bankAtk) && CheckSoundMove(move))
		return 0; //Can't select this move period

	//Heal Block Check
	if (IsHealBlocked(bankAtk) && CheckHealingMove(move))
		return 0; //Can't select this move period

	//Raid Battle Check
	if (IsRaidBattle())
	{
		if (gSpecialMoveFlags[move].gRaidBattleBannedMoves)
			return 0; //This move won't work at all.

		if (GetBattlerPosition(bankAtk) == B_POSITION_OPPONENT_LEFT && gSpecialMoveFlags[move].gRaidBattleBannedRaidMonMoves)
			return 0; //This move really shouldn't be used

		if (bankAtk != bankDef
		&& GetBattlerPosition(bankDef) == B_POSITION_OPPONENT_LEFT
		&& gNewBS->dynamaxData.raidShieldsUp
		&& moveSplit == SPLIT_STATUS) //Status moves can't be used while Raid Shields are up
		{
			DECREASE_VIABILITY(10);
			return viability;
		}
	}

	//Primal Weather Check
	if (gBattleWeather & WEATHER_SUN_PRIMAL && moveType == TYPE_WATER && moveSplit != SPLIT_STATUS)
	{
		DECREASE_VIABILITY(20);
		return viability;
	}
	else if (gBattleWeather & WEATHER_RAIN_PRIMAL && moveType == TYPE_FIRE && moveSplit != SPLIT_STATUS)
	{
		DECREASE_VIABILITY(20);
		return viability;
	}

	//Powder & Ion Deluge Check
	if (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_CHECK_BAD_MOVE) //Not dumb AI
	{
		if (moveType == TYPE_FIRE)
		{
			if (HasUsedMove(bankDef, MOVE_POWDER) && AI_THINKING_STRUCT->simulatedRNG[0] < 75)
			{
				//Don't use Fire-type move 75% of the time
				DECREASE_VIABILITY(19);
				return viability;
			}
		}
		else if (moveType == TYPE_NORMAL)
		{
			if (HasUsedMove(bankDef, MOVE_IONDELUGE) && AI_THINKING_STRUCT->simulatedRNG[0] < 75
			&& (data->defAbility == ABILITY_VOLTABSORB || data->defAbility == ABILITY_MOTORDRIVE || data->defAbility == ABILITY_LIGHTNINGROD))
			{
				//Don't use Normal-type move 75% of the time
				DECREASE_VIABILITY(19);
				return viability;
			}
		}
	}

	//Status Wide Guard Check
	if (IS_DOUBLE_BATTLE
	&& moveSplit == SPLIT_STATUS
	&& moveTarget & (MOVE_TARGET_BOTH | MOVE_TARGET_ALL))
	{
		if (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_CHECK_BAD_MOVE //Not dumb AI
		&& AI_THINKING_STRUCT->simulatedRNG[0] < 75 //75% chance AI will care about Wide Guard this round
		&& (HasUsedMove(bankDef, MOVE_WIDEGUARD) //Unlike the damage calc, this only cares if the foe has revealed Wide Guard
		 || (BATTLER_ALIVE(data->bankDefPartner) && HasUsedMove(data->bankDefPartner, MOVE_WIDEGUARD))))
		{
			DECREASE_VIABILITY(10);
			return viability;
		}
		else if (gSideStatuses[SIDE(bankDef)] & SIDE_STATUS_WIDE_GUARD) //Mainly for Raid Boss so it doesn't attack multiple times in a row
		{
			DECREASE_VIABILITY(10);
			return viability;
		}
	}

	// Check Move Effects
	switch (moveEffect)
	{
		case EFFECT_HIT:
			goto AI_STANDARD_DAMAGE;

		case EFFECT_SLEEP:
			if (AI_SpecialTypeCalc(move, bankAtk, bankDef) & MOVE_RESULT_NO_EFFECT)
			{
				DECREASE_VIABILITY(10);
				break;
			}

			#ifdef SPECIES_DARKRAI
			if (move == MOVE_DARKVOID && data->atkSpecies != SPECIES_DARKRAI)
			{
				DECREASE_VIABILITY(10);
				break;
			}
			#endif

		AI_CHECK_SLEEP: ;
			if (!CanBePutToSleep(bankDef, TRUE)
			|| (MoveBlockedBySubstitute(move, bankAtk, bankDef))
			|| PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_ABSORB:
			if (data->defAbility == ABILITY_LIQUIDOOZE)
				DECREASE_VIABILITY(6);

			if (move == MOVE_STRENGTHSAP)
			{
				if (data->defAbility == ABILITY_CONTRARY)
					DECREASE_VIABILITY(10);
				else if (!AI_STAT_CAN_FALL(bankDef, STAT_STAGE_ATK))
					DECREASE_VIABILITY(10);
				break;
			}
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_EXPLOSION:
		#ifdef OKAY_WITH_AI_SUICIDE
			if (NO_MOLD_BREAKERS(data->atkAbility, move) && ABILITY_ON_FIELD(ABILITY_DAMP))
			{
				DECREASE_VIABILITY(10);
			}
			else if (data->defStatus3 & STATUS3_SEMI_INVULNERABLE && MoveWouldHitFirst(move, bankAtk, bankDef))
			{
				DECREASE_VIABILITY(10); //Don't explode if target will still be semi-invulnerable when attack lands
			}
			else if (ViableMonCountFromBank(bankDef) == 1 //If the Target only has one PKMN left
			&& MoveKnocksOutXHits(move, bankAtk, bankDef, 1)) //The AI can knock out the target
			{
				//Good to use move
			}
			else if (IS_DOUBLE_BATTLE)
			{
				if (ViableMonCountFromBank(bankDef) == 2 //If the Target has both Pokemon remaining in doubles
				&& MoveKnocksOutXHits(move, bankAtk, bankDef, 1)
				&& MoveKnocksOutXHits(move, bankAtk, data->bankDefPartner, 1))
				{
					//Good to use move
				}
				else
					DECREASE_VIABILITY(4);
			}
			else //Single Battle
			{
				if (MoveKnocksOutXHits(move, bankAtk, bankDef, 1)) //The AI can knock out the target
				{
					if (ViableMonCountFromBank(bankDef) == 1) //If the Target only has one PKMN left
					{
						//Good to use move
					}
					else if (CanKnockOutWithoutMove(move, bankAtk, bankDef, FALSE))
						DECREASE_VIABILITY(10); //Better to use a different move to knock out
				}
				else
					DECREASE_VIABILITY(4);
			}

			goto AI_STANDARD_DAMAGE;
		#else
			DECREASE_VIABILITY(10);
		#endif
			break;

		case EFFECT_DREAM_EATER:
			if (data->defAbility != ABILITY_COMATOSE && !(data->defStatus1 & STATUS1_SLEEP))
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_MIRROR_MOVE: //May cause issues with priority calcs?
			switch (move) {
				case MOVE_COPYCAT:
					if (MoveWouldHitFirst(move, bankAtk, bankDef))
					{
					COPYCAT_CHECK_LAST_MOVE:
						if (gNewBS->LastUsedMove == MOVE_NONE
						|| gNewBS->LastUsedMove == 0xFFFF
						|| gSpecialMoveFlags[gNewBS->LastUsedMove].gCopycatBannedMoves
						|| FindMovePositionInMoveset(gNewBS->LastUsedMove, bankAtk) < 4) //If you have the move, use it directly
							DECREASE_VIABILITY(10);
						else
							return AIScript_Negatives(bankAtk, bankDef, gNewBS->LastUsedMove, originalViability, data);
					}
					else
					{
						if (predictedMove == MOVE_NONE)
							goto COPYCAT_CHECK_LAST_MOVE;
						else if (gSpecialMoveFlags[predictedMove].gCopycatBannedMoves
							 || FindMovePositionInMoveset(predictedMove, bankAtk) < 4)
						{
							DECREASE_VIABILITY(10);
						}
						else
							return AIScript_Negatives(bankAtk, bankDef, predictedMove, originalViability, data);
					}
					break;

				default: //Mirror Move
					if (gBattleStruct->lastTakenMoveFrom[bankAtk][bankDef] != MOVE_NONE)
						return AIScript_Negatives(bankAtk, bankDef, gBattleStruct->lastTakenMoveFrom[bankAtk][bankDef], originalViability, data);
					DECREASE_VIABILITY(10);
			}
			break;

		case EFFECT_SPLASH:
			if (!IsTypeZCrystal(data->atkItem, gBattleMoves[move].type) || gNewBS->zMoveData.used[bankAtk])
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_TELEPORT:
			if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
			{
				if (!HasMonToSwitchTo(bankAtk))
					DECREASE_VIABILITY(10);
			}
			else //Wild Battle
			{
				if (SIDE(bankAtk) == B_SIDE_PLAYER)
				{
					if (!HasMonToSwitchTo(bankAtk))
						DECREASE_VIABILITY(10);
				}
				else //Wild Enemy
				{
					if (IS_DOUBLE_BATTLE || IsTrapped(bankAtk, FALSE))
						DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_ATTACK_UP:
		case EFFECT_ATTACK_UP_2:
			if (GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10); //Don't set up when potential to be choice locked (fixes issues with Tricking Choice items onto AI)
			else if (data->atkAbility != ABILITY_CONTRARY)
			{
				switch (move) {
					case MOVE_HONECLAWS:
						if (STAT_STAGE(bankAtk, STAT_STAGE_ATK) >= STAT_STAGE_MAX
						&& (STAT_STAGE(bankAtk, STAT_STAGE_ACC) >= STAT_STAGE_MAX || !RealPhysicalMoveInMoveset(bankAtk)))
							DECREASE_VIABILITY(10);
						break;

					default:
						if (STAT_STAGE(bankAtk, STAT_STAGE_ATK) >= STAT_STAGE_MAX || !RealPhysicalMoveInMoveset(bankAtk))
							DECREASE_VIABILITY(10);
				}
			}
			else
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_DEFENSE_UP:
		case EFFECT_DEFENSE_UP_2:
		case EFFECT_DEFENSE_CURL:
			if (GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else
			{
				switch (move) {
					case MOVE_FLOWERSHIELD:
						if (!IsOfType(bankAtk, TYPE_GRASS)
						&&  !(IS_DOUBLE_BATTLE && IsOfType(bankAtkPartner, TYPE_GRASS)))
							DECREASE_VIABILITY(10);
						break;

					case MOVE_MAGNETICFLUX:
						if (data->atkAbility == ABILITY_PLUS || data->atkAbility == ABILITY_MINUS)
							goto AI_COSMIC_POWER;

						if (IS_DOUBLE_BATTLE)
						{
							if (data->atkPartnerAbility == ABILITY_PLUS || data->atkPartnerAbility == ABILITY_MINUS)
							{
								if ((STAT_STAGE(bankAtkPartner, STAT_STAGE_DEF) >= STAT_STAGE_MAX)
								&&  (STAT_STAGE(bankAtkPartner, STAT_STAGE_SPDEF) >= STAT_STAGE_MAX))
									DECREASE_VIABILITY(10);
							}
						}
						break;

					case MOVE_AROMATICMIST:
						if (!IS_DOUBLE_BATTLE
						|| bankDef != bankAtkPartner
						|| !BATTLER_ALIVE(bankAtkPartner)
						|| data->atkPartnerAbility == ABILITY_CONTRARY
						|| !AI_STAT_CAN_RISE(bankAtkPartner, STAT_STAGE_SPDEF))
							DECREASE_VIABILITY(10);
						break;

					case MOVE_STUFFCHEEKS:
						if (gNewBS->SavedConsumedItems[bankAtk] == ITEM_NONE || !IsBerry(gNewBS->SavedConsumedItems[bankAtk]))
							DECREASE_VIABILITY(10);
						break;

					default:
						if (data->atkAbility == ABILITY_CONTRARY || !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_DEF))
							DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_SPEED_UP:
		case EFFECT_SPEED_UP_2:
			if (data->atkAbility == ABILITY_CONTRARY || !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPEED)
			|| GOOD_AI_MOVE_LOCKED
			|| (IsTrickRoomActive() && gNewBS->TrickRoomTimer != 1)) //Trick Room not about to end
				DECREASE_VIABILITY(10);
			else if(IsTrickRoomActive())
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SPECIAL_ATTACK_UP:
		case EFFECT_SPECIAL_ATTACK_UP_2:
			if (GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else
			{
				switch(move) {
					case MOVE_GROWTH:
					case MOVE_WORKUP:
					AI_WORK_UP_CHECK: ;
						if (data->atkAbility == ABILITY_CONTRARY
						|| ((!AI_STAT_CAN_RISE(bankAtk,STAT_STAGE_ATK)|| !RealPhysicalMoveInMoveset(bankAtk))
						 && (!AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPATK) || !SpecialMoveInMoveset(bankAtk))))
							DECREASE_VIABILITY(10);
						break;

					case MOVE_ROTOTILLER:
						if (IS_DOUBLE_BATTLE)
						{
							if (!(IsOfType(bankAtk, TYPE_GRASS)
								  && CheckGrounding(bankAtk)
								  && data->atkAbility != ABILITY_CONTRARY
								  && (AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_ATK) || AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPATK)))
							&&  !(IsOfType(bankAtkPartner, TYPE_GRASS)
								  && CheckGrounding(bankAtkPartner)
								  && data->atkPartnerAbility != ABILITY_CONTRARY
								  && (AI_STAT_CAN_RISE(bankAtkPartner, STAT_STAGE_ATK) || AI_STAT_CAN_RISE(bankAtkPartner, STAT_STAGE_SPATK))))
							{
								DECREASE_VIABILITY(10);
							}
						}
						else if (!(IsOfType(bankAtk, TYPE_GRASS)
								&& CheckGrounding(bankAtk)
								&& data->atkAbility != ABILITY_CONTRARY
								&& (AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_ATK) || AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPATK))))
						{
							DECREASE_VIABILITY(10);
						}
						break;

					case MOVE_GEARUP:
						if (data->atkAbility == ABILITY_PLUS || data->atkAbility == ABILITY_MINUS)
							goto AI_WORK_UP_CHECK;

						if (IS_DOUBLE_BATTLE)
						{
							if (data->atkPartnerAbility == ABILITY_PLUS || data->atkPartnerAbility == ABILITY_MINUS)
							{
								if ((!AI_STAT_CAN_RISE(bankAtkPartner, STAT_STAGE_ATK) || !RealPhysicalMoveInMoveset(bankAtk))
								&&  (!AI_STAT_CAN_RISE(bankAtkPartner, STAT_STAGE_SPATK) || !SpecialMoveInMoveset(bankAtk)))
									DECREASE_VIABILITY(10);
							}
						}
						break;

					default:
						if (data->atkAbility == ABILITY_CONTRARY || !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPATK) || !SpecialMoveInMoveset(bankAtk))
							DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_SPECIAL_DEFENSE_UP:
		case EFFECT_SPECIAL_DEFENSE_UP_2:
		AI_SPDEF_RAISE_1: ;
			if (data->atkAbility == ABILITY_CONTRARY || GOOD_AI_MOVE_LOCKED || !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPDEF))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_ACCURACY_UP:
		case EFFECT_ACCURACY_UP_2:
			if (data->atkAbility == ABILITY_CONTRARY || GOOD_AI_MOVE_LOCKED || !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_ACC))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_EVASION_UP:
		case EFFECT_EVASION_UP_2:
		case EFFECT_MINIMIZE:
			if (GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else
			{
				switch (move) {
					case MOVE_ACUPRESSURE:
						if (StatsMaxed(bankDef) || data->defAbility == ABILITY_CONTRARY)
							DECREASE_VIABILITY(10);
						break;

					default:
						if (data->atkAbility == ABILITY_CONTRARY || !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_EVASION))
							DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_ATTACK_DOWN:
		case EFFECT_ATTACK_DOWN_2:
			decreased = FALSE;
			switch (move) {
				case MOVE_VENOMDRENCH:
					if (!(data->defStatus1 & STATUS_PSN_ANY))
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
						break;
					}
					//Poisoned target
					else if (STAT_STAGE(bankDef, STAT_STAGE_SPEED) == STAT_STAGE_MIN
						 && (STAT_STAGE(bankDef, STAT_STAGE_SPATK) == STAT_STAGE_MIN || !SpecialMoveInMoveset(bankDef))
						 && (STAT_STAGE(bankDef, STAT_STAGE_ATK) == STAT_STAGE_MIN || !RealPhysicalMoveInMoveset(bankDef)))
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
					}
					break;

				case MOVE_PLAYNICE:
				case MOVE_NOBLEROAR:
				case MOVE_TEARFULLOOK:
					if ((STAT_STAGE(bankDef, STAT_STAGE_SPATK) == STAT_STAGE_MIN || !SpecialMoveInMoveset(bankDef))
					&&  (STAT_STAGE(bankDef, STAT_STAGE_ATK) == STAT_STAGE_MIN || !RealPhysicalMoveInMoveset(bankDef)))
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
					}
					break;

				default:
					if (STAT_STAGE(bankDef, STAT_STAGE_ATK) == STAT_STAGE_MIN || !RealPhysicalMoveInMoveset(bankDef))
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
					}
			}
			if (decreased) break;

		AI_SUBSTITUTE_CHECK:
			if (MoveBlockedBySubstitute(move, bankAtk, bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_DEFENSE_DOWN:
		case EFFECT_DEFENSE_DOWN_2:
			if (STAT_STAGE(bankDef, STAT_STAGE_DEF) == STAT_STAGE_MIN
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SPEED_DOWN:
		case EFFECT_SPEED_DOWN_2:
			if (STAT_STAGE(bankDef, STAT_STAGE_SPEED) == STAT_STAGE_MIN
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SPECIAL_ATTACK_DOWN:
		case EFFECT_SPECIAL_ATTACK_DOWN_2:
			if (move == MOVE_CAPTIVATE
			&& (data->atkGender == MON_GENDERLESS || data->defGender == MON_GENDERLESS || data->atkGender == data->defGender))
				DECREASE_VIABILITY(10);
			else if (STAT_STAGE(bankDef, STAT_STAGE_SPATK) == STAT_STAGE_MIN || !SpecialMoveInMoveset(bankDef)
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SPECIAL_DEFENSE_DOWN:
		case EFFECT_SPECIAL_DEFENSE_DOWN_2:
			if (STAT_STAGE(bankDef, STAT_STAGE_SPDEF) == STAT_STAGE_MIN
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_ACCURACY_DOWN:
		case EFFECT_ACCURACY_DOWN_2:
			if (STAT_STAGE(bankDef, STAT_STAGE_ACC) == STAT_STAGE_MIN
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_EVASION_DOWN:
		case EFFECT_EVASION_DOWN_2:
		AI_LOWER_EVASION:
			if (STAT_STAGE(bankDef, STAT_STAGE_EVASION) == STAT_STAGE_MIN
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_HAZE:
		AI_HAZE_CHECK: ;
			decreased = FALSE;
			if (AI_THINKING_STRUCT->aiFlags <= AI_SCRIPT_SEMI_SMART) //Smart AI probably won't care about own boosts if it has Haze
			{
				//Don't want to reset own high stats
				for (i = STAT_STAGE_ATK; i < BATTLE_STATS_NO; ++i)
				{
					if (STAT_STAGE(bankAtk, i) > 6 || (IS_DOUBLE_BATTLE && STAT_STAGE(bankAtkPartner, i) > 6))
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
						break;
					}
				}

				if (decreased)
					break;
			}

			//Don't want to reset enemy lowered stats
			for (i = STAT_STAGE_ATK; i < BATTLE_STATS_NO; ++i)
			{
				if (STAT_STAGE(bankDef, i) < 6 || (IS_DOUBLE_BATTLE && STAT_STAGE(data->bankDefPartner, i) < 6))
				{
					DECREASE_VIABILITY(10);
					break;
				}
			}

			if (PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_BIDE:
			if (!DamagingMoveInMoveset(bankDef)
			||  GetHealthPercentage(bankAtk) < 30 //Close to death
			||  data->defStatus1 & (STATUS1_SLEEP
			#ifndef FROSTBITE
			                      | STATUS1_FREEZE
			#endif
			                       )) //No point in biding if can't take damage
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_ROAR:
			if (PARTNER_MOVE_EFFECT_IS_SAME)
			{
				DECREASE_VIABILITY(10); //Don't blow out the same Pokemon twice
			}
			else if (WillFaintFromSecondaryDamage(bankDef) //Don't blow out a Pokemon that'll faint this turn
			||  GetLeechSeedDamage(bankDef) > 0
			||  GetNightmareDamage(bankDef) > 0
			||  GetCurseDamage(bankDef) > 0
			||  GetTrapDamage(bankDef) > 0
			||  GetPoisonDamage(bankDef) >= gBattleMons[bankDef].maxHP / 4) //Or is taking Bad secondary damage.
			{
				DECREASE_VIABILITY(10);
			}
			else
			{
				switch (move) {
					case MOVE_DRAGONTAIL:
					case MOVE_CIRCLETHROW:
						goto AI_STANDARD_DAMAGE;

					default:
						if (!HasMonToSwitchTo(bankDef)
						||  data->defAbility == ABILITY_SUCTIONCUPS
						||  data->defStatus3 & STATUS3_ROOTED)
							DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_CONVERSION:
			if (move == MOVE_REFLECTTYPE)
			{
				u8 defType1 = gBattleMons[bankDef].type1;
				u8 defType2 = gBattleMons[bankDef].type2;
				u8 defType3 = gBattleMons[bankDef].type3;

				//If target has no type
				if((IS_BLANK_TYPE(defType1))
				&& (IS_BLANK_TYPE(defType2))
				&& (IS_BLANK_TYPE(defType3)))
				{
					DECREASE_VIABILITY(10);
				}
				else if (MoveBlockedBySubstitute(move, bankAtk, bankDef))
				{
					DECREASE_VIABILITY(10);
				}
				else
				{
					//If target has no main types, but has a third type
					if ((IS_BLANK_TYPE(defType1))
					&&  (IS_BLANK_TYPE(defType2))
					&& !(IS_BLANK_TYPE(defType3)))
					{
						defType1 = TYPE_NORMAL;
						defType2 = TYPE_NORMAL;
					}
					else //Target Has Main Type
					{
						if (IS_BLANK_TYPE(defType1))
							defType1 = defType2;
						else if (IS_BLANK_TYPE(defType2))
							defType2 = defType1;

						if (IS_BLANK_TYPE(defType3)) //Just in case it has a burned out Fire type
							defType3 = TYPE_BLANK;
					}

					if (gBattleMons[bankAtk].type1 == defType1
					&&  gBattleMons[bankAtk].type2 == defType2
					&&  gBattleMons[bankAtk].type3 == defType3)
						DECREASE_VIABILITY(10);	//All types already match
				}
			}
			else
			{
				//Check first move type
				if (IsOfType(bankAtk, gBattleMoves[gBattleMons[bankAtk].moves[0]].type))
					DECREASE_VIABILITY(10);
			}
			break;

		case EFFECT_RESTORE_HP:
		case EFFECT_MORNING_SUN:
		AI_RECOVERY:
			switch (move) {
				case MOVE_PURIFY:
					if (!(data->defStatus1 & STATUS_ANY)
					|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
					{
						DECREASE_VIABILITY(10);
						break;
					}
					else if (bankDef == bankAtkPartner)
						break; //Always heal your ally
					else if (GetHealthPercentage(bankAtk) == 100)
						DECREASE_VIABILITY(10);
					else if (GetHealthPercentage(bankAtk) >= 90)
						DECREASE_VIABILITY(8); //No point in healing, but should at least do it if nothing better
					break;

				default:
					if (GetHealthPercentage(bankAtk) == 100)
						DECREASE_VIABILITY(10);
					else if (GetHealthPercentage(bankAtk) >= 90)
						DECREASE_VIABILITY(9); //No point in healing, but should at least do it if nothing better
			}
			break;

		case EFFECT_REST:
			if (!CanRest(bankAtk))
				DECREASE_VIABILITY(10);
			goto AI_RECOVERY;

		case EFFECT_POISON:
		case EFFECT_TOXIC:
			if (move == MOVE_TOXICTHREAD
			&& STAT_STAGE(bankDef, STAT_STAGE_SPEED) > STAT_STAGE_MIN
			&& data->defAbility != ABILITY_CONTRARY)
				break;

			if (AI_SpecialTypeCalc(move, bankAtk, bankDef) & MOVE_RESULT_NO_EFFECT)
			{
				DECREASE_VIABILITY(10);
				break;
			}

		AI_POISON_CHECK: ;
			if (!CanBePoisoned(bankDef, bankAtk, TRUE)
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef)
			|| PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_LIGHT_SCREEN:
			if (gSideStatuses[SIDE(bankAtk)] & SIDE_STATUS_LIGHTSCREEN || (MoveInMoveset(MOVE_BRICKBREAK, bankDef) || (MoveInMoveset(MOVE_DEFOG, bankDef) )))
				DECREASE_VIABILITY(10);
			else if (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_SEMI_SMART //Only smart AI
				&& !IsBankIncapacitated(bankDef) //Enemy can attack
				&& (HasUsedMoveWithEffect(bankDef, EFFECT_BRICK_BREAK) || HasUsedMove(bankDef, MOVE_DEFOG))) //Has used a move that could break screens before
					DECREASE_VIABILITY(9); //Better not to use screen since player will probably try to cheese AI
				break;
			break;

		case EFFECT_0HKO:
			if ((IsDynamaxed(bankDef) && !(gNewBS->dynamaxData.raidShieldsUp && bankDef == BANK_RAID_BOSS)) //Only Dynamaxed foe that can be hit is one with shields up
			|| AI_SpecialTypeCalc(move, bankAtk, bankDef) & (MOVE_RESULT_NO_EFFECT | MOVE_RESULT_MISSED)
			|| (NO_MOLD_BREAKERS(data->atkAbility, move) && data->defAbility == ABILITY_STURDY)
			|| gBattleMons[bankAtk].level < gBattleMons[bankDef].level
			|| (move == MOVE_SHEERCOLD && IsOfType(bankDef, TYPE_ICE)))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_RECOIL_IF_MISS:
			if (data->atkAbility != ABILITY_MAGICGUARD && moveAcc < 75)
				DECREASE_VIABILITY(6);
			goto AI_STANDARD_DAMAGE;

		case EFFECT_MIST:
			if (BankSideHasMist(bankAtk)
			|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_FOCUS_ENERGY:
			if (data->atkStatus2 & STATUS2_FOCUS_ENERGY
			|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_CRIT_PLUS))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_RECOIL:
			if (data->atkAbility == ABILITY_MAGICGUARD || data->atkAbility == ABILITY_ROCKHEAD)
				goto AI_STANDARD_DAMAGE;

			u32 recoilDmg = GetFinalAIMoveDamage(move, bankAtk, bankDef, 1, NULL);

			if (gSpecialMoveFlags[move].gPercent25RecoilMoves)
				recoilDmg = MathMax(1, recoilDmg / 4);
			else if (gSpecialMoveFlags[move].gPercent33RecoilMoves)
				recoilDmg = MathMax(1, recoilDmg / 3);
			else if (gSpecialMoveFlags[move].gPercent50RecoilMoves)
				recoilDmg = MathMax(1, recoilDmg / 2);
			else if (move == MOVE_MINDBLOWN || move == MOVE_STEELBEAM)
			{
				if (MoveBlockedBySubstitute(move, bankAtk, bankDef))
				{
					DECREASE_VIABILITY(9);
					goto AI_STANDARD_DAMAGE; //Don't use Mind Blown to break a Substitute
				}

				recoilDmg = MathMax(1, gBattleMons[bankAtk].maxHP / 2);
			}

			if (recoilDmg >= gBattleMons[bankAtk].hp //Recoil kills attacker
			&&  ViableMonCountFromBank(bankDef) > 1) //Foe has more than 1 target left
			{
				if (!MoveKnocksOutXHits(move, bankAtk, bankDef, 1) //This move doesn't knock out
				|| CanKnockOutWithoutMove(move, bankAtk, bankDef, TRUE)) //Or has another move that does knock out
					DECREASE_VIABILITY(4); //Not as good to use move if you'll faint and not win
			}

			goto AI_STANDARD_DAMAGE;

		case EFFECT_CONFUSE:
		AI_CONFUSE:
			if (PARTNER_MOVE_IS_CONFUSION_MAX_MOVE)
			{
				DECREASE_VIABILITY(10);
				break;
			}

			switch (move) {
				case MOVE_TEETERDANCE: //Check if can affect either target
					if ((IsConfused(bankDef)
					  || (NO_MOLD_BREAKERS(data->atkAbility, move) && data->defAbility == ABILITY_OWNTEMPO)
					  || (CheckGrounding(bankDef) == GROUNDED && gTerrainType == MISTY_TERRAIN)
					  || (MoveBlockedBySubstitute(move, bankAtk, bankDef)))
					&&  (IsConfused(data->bankDefPartner)
					  || (NO_MOLD_BREAKERS(data->atkAbility, move) && data->defPartnerAbility == ABILITY_OWNTEMPO)
					  || (CheckGrounding(data->bankDefPartner) == GROUNDED && gTerrainType == MISTY_TERRAIN)
					  || (MoveBlockedBySubstitute(move, bankAtk, data->bankDefPartner))))
					{
						DECREASE_VIABILITY(10);
					}
					break;
				default:
					if (IsConfused(bankDef)
					|| (NO_MOLD_BREAKERS(data->atkAbility, move) && data->defAbility == ABILITY_OWNTEMPO)
					|| (CheckGrounding(bankDef) == GROUNDED && gTerrainType == MISTY_TERRAIN)
					|| (MoveBlockedBySubstitute(move, bankAtk, bankDef))
					|| PARTNER_MOVE_EFFECT_IS_SAME)
						DECREASE_VIABILITY(10);
			}
			break;

		case EFFECT_TRANSFORM:
			if (data->atkStatus2 & STATUS2_TRANSFORMED
			||  data->defStatus2 & (STATUS2_TRANSFORMED | STATUS2_SUBSTITUTE)) //Leave out Illusion b/c AI is supposed to be fooled
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_REFLECT:
			switch (move)
			{
				case MOVE_AURORAVEIL:
					if (gNewBS->AuroraVeilTimers[SIDE(bankAtk)]
					|| !(gBattleWeather & WEATHER_HAIL_ANY)
					|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
					|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_AURORA_VEIL)
					|| (MoveInMoveset(MOVE_BRICKBREAK, bankDef) || (MoveInMoveset(MOVE_DEFOG, bankDef))))
						DECREASE_VIABILITY(10);
					break;

				default:
					if (gSideStatuses[SIDE(bankAtk)] & SIDE_STATUS_REFLECT
					|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
					|| (MoveInMoveset(MOVE_BRICKBREAK, bankDef) || (MoveInMoveset(MOVE_DEFOG, bankDef)))) 
						DECREASE_VIABILITY(10);
					else if (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_SEMI_SMART //Only smart AI
					&& !IsBankIncapacitated(bankDef) //Enemy can attack
					&& (HasUsedMoveWithEffect(bankDef, EFFECT_BRICK_BREAK) || HasUsedMove(bankDef, MOVE_DEFOG))) //Has used a move that could break screens before
						DECREASE_VIABILITY(9); //Better not to use screen since player will probably try to cheese AI
					break;
			}
			break;

		case EFFECT_PARALYZE:
		AI_PARALYZE_CHECK: ;
			if (!CanBeParalyzed(bankDef, TRUE)
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef)
			|| PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET)
				DECREASE_VIABILITY(10);
			else if (move != MOVE_GLARE
				&& AI_SpecialTypeCalc(move, bankAtk, bankDef) & MOVE_RESULT_NO_EFFECT)
			{
				DECREASE_VIABILITY(10);
			}
			break;

		//Add check for sound move?
		case EFFECT_SUBSTITUTE:
			if (data->atkStatus2 & STATUS2_SUBSTITUTE
			|| GetHealthPercentage(bankAtk) <= 25)
				DECREASE_VIABILITY(10);
			else if (ABILITY(bankDef) == ABILITY_INFILTRATOR
			|| SoundMoveInMoveset(bankDef))
				DECREASE_VIABILITY(8);
			break;

		case EFFECT_RECHARGE:
			if (data->atkAbility != ABILITY_TRUANT
			&& MoveKnocksOutXHits(move, bankAtk, bankDef, 1)
			&& CanKnockOutWithoutMove(move, bankAtk, bankDef, TRUE))
				DECREASE_VIABILITY(9); //Never use move as finisher if you don't have to
			goto AI_STANDARD_DAMAGE;

		case EFFECT_SPITE:
			if (MoveWouldHitFirst(move, bankAtk, bankDef))
			{
				if (gLastUsedMoves[bankDef] == MOVE_NONE
				||  gLastUsedMoves[bankDef] == 0xFFFF)
					DECREASE_VIABILITY(10);
			}
			else if (predictedMove == MOVE_NONE)
				DECREASE_VIABILITY(10);
			else
				goto AI_SUBSTITUTE_CHECK;
			break;

		case EFFECT_MIMIC:
			if (MoveWouldHitFirst(move, bankAtk, bankDef))
			{
				if (gLastUsedMoves[bankDef] == MOVE_NONE
				||  gLastUsedMoves[bankDef] == 0xFFFF
				||  gSpecialMoveFlags[gLastUsedMoves[bankDef]].gMimicBannedMoves
				||  IsZMove(gLastPrintedMoves[bankDef])
				||  IsAnyMaxMove(gLastPrintedMoves[bankDef]))
					DECREASE_VIABILITY(10);
			}
			else if (predictedMove == MOVE_NONE)
				DECREASE_VIABILITY(10);
			else
				goto AI_SUBSTITUTE_CHECK;
			break;

		case EFFECT_METRONOME:
			break;

		case EFFECT_LEECH_SEED:
			if (IsOfType(bankDef, TYPE_GRASS)
			|| data->defStatus2 & STATUS2_SUBSTITUTE
			|| data->defStatus3 & STATUS3_LEECHSEED
			|| data->defAbility == ABILITY_LIQUIDOOZE
			|| data->defAbility == ABILITY_MAGICGUARD
			|| PARTNER_MOVE_EFFECT_IS_SAME)
				DECREASE_VIABILITY(10);
			else
				goto AI_SUBSTITUTE_CHECK;
			break;

		case EFFECT_DISABLE:
			if (gDisableStructs[bankDef].disableTimer1 == 0
			&&  data->defItemEffect != ITEM_EFFECT_CURE_ATTRACT
			&& !PARTNER_MOVE_EFFECT_IS_SAME)
			{
				if (MoveWouldHitFirst(move, bankAtk, bankDef))
				{
					if (gLastUsedMoves[bankDef] == MOVE_NONE
					|| gLastUsedMoves[bankDef] == 0xFFFF)
						DECREASE_VIABILITY(10);
				}
				else if (predictedMove == MOVE_NONE)
					DECREASE_VIABILITY(10);
			}
			else
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_COUNTER:
		case EFFECT_MIRROR_COAT:
			if (SPLIT(predictedMove) == SPLIT_STATUS
			|| predictedMove == MOVE_NONE
			|| MoveBlockedBySubstitute(predictedMove, bankDef, bankAtk))
				DECREASE_VIABILITY(10);

			if (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_CHECK_BAD_MOVE //Semi-Smart/Smart AI only
			&& move != MOVE_METALBURST
			&& gLastUsedMoves[bankDef] != MOVE_NONE && gLastUsedMoves[bankDef] != 0xFFFF //Player attacked last turn
			&& gBattleMoves[gLastUsedMoves[bankAtk]].effect == moveEffect //The AI tried using the same move last turn
			&& CalcMoveSplit(gLastUsedMoves[bankDef], bankDef, bankAtk) != CalcMoveSplit(gNewBS->ai.previousMovePredictions[bankDef][bankAtk], bankDef, bankAtk) //But the player used a move split other than what was predicted
			&& AI_THINKING_STRUCT->simulatedRNG[1] & 1) //50% of the time
			{
				DECREASE_VIABILITY(8); //It's not unreasonable to think that they'll try something else again
			}
			goto AI_STANDARD_DAMAGE;

		case EFFECT_ENCORE:
			if (gDisableStructs[bankDef].encoreTimer == 0
			&&  data->defItemEffect != ITEM_EFFECT_CURE_ATTRACT
			&& !IsDynamaxed(bankDef)
			&& !PARTNER_MOVE_EFFECT_IS_SAME)
			{
				if (MoveWouldHitFirst(move, bankAtk, bankDef))
				{
					if (gLastUsedMoves[bankDef] == MOVE_NONE
					|| gLastUsedMoves[bankDef] == 0xFFFF
					|| gSpecialMoveFlags[gLastUsedMoves[bankDef]].gMovesThatCallOtherMoves
					|| IsZMove(gLastPrintedMoves[bankDef])
					|| IsAnyMaxMove(gLastPrintedMoves[bankDef]))
						DECREASE_VIABILITY(10);
				}
				else if (predictedMove == MOVE_NONE)
					DECREASE_VIABILITY(10);
			}
			else
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_ENDEAVOR:
			if (gBattleMons[bankAtk].hp > (gBattleMons[bankAtk].hp + gBattleMons[bankDef].hp) / 2)
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_PAIN_SPLIT:
			if (gBattleMons[bankAtk].hp > (gBattleMons[bankAtk].hp + gBattleMons[bankDef].hp) / 2)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SNORE:
			if (((data->atkStatus1 & STATUS_SLEEP) == 1 || !(data->atkStatus1 & STATUS_SLEEP))
			&& data->atkAbility != ABILITY_COMATOSE)
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_SLEEP_TALK:
			if (((data->atkStatus1 & STATUS_SLEEP) == 1 || !(data->atkStatus1 & STATUS_SLEEP))
			&& data->atkAbility != ABILITY_COMATOSE)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_CONVERSION_2:
			if (gNewBS->LastUsedTypes[bankDef] == 0)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_LOCK_ON:
			switch (move) {
				case MOVE_LASERFOCUS:
					if (IsLaserFocused(bankAtk))
						DECREASE_VIABILITY(10);
					else if (data->defAbility == ABILITY_SHELLARMOR)
						DECREASE_VIABILITY(8);
					break;

				default: //Lock on
					if ((data->defStatus3 & STATUS3_LOCKON && gDisableStructs[bankDef].bankWithSureHit == bankAtk) //It's the target that has the status, not the attacker!
					|| data->atkAbility == ABILITY_NOGUARD
					|| data->defAbility == ABILITY_NOGUARD
					|| PARTNER_MOVE_EFFECT_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
			}
			break;

		case EFFECT_SKETCH:
			if (gLastUsedMoves[bankDef] == MOVE_NONE)
				DECREASE_VIABILITY(10);
			else
				goto AI_SUBSTITUTE_CHECK;
			break;

		case EFFECT_DESTINY_BOND:
			if (gNewBS->DestinyBondCounters[bankAtk] != 0
			|| data->atkStatus2 & STATUS2_DESTINY_BOND)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_FALSE_SWIPE:
			if (MoveKnocksOutXHits(move, bankAtk, bankDef, 1)
			&&  CanKnockOutWithoutMove(move, bankAtk, bankDef, FALSE))
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_HEAL_BELL:
			if (CheckSoundMove(move))
			{
				if (!PartyMemberStatused(bankAtk, TRUE) //Check Soundproof
				|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET)
					DECREASE_VIABILITY(10);
			}
			else if (!PartyMemberStatused(bankAtk, FALSE)
			|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
			|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_AROMATHERAPY))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_MEAN_LOOK:
			switch (move) {
				case MOVE_SPIRITSHACKLE:
				case MOVE_ANCHORSHOT:
					goto AI_STANDARD_DAMAGE;

				default: //Mean look
					if (IsTrapped(bankDef, TRUE)
					|| PARTNER_MOVE_EFFECT_IS_SAME
					|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_MEAN_LOOK))
						DECREASE_VIABILITY(10);
					break;
			}
			break;

		case EFFECT_NIGHTMARE:
			if (data->defStatus2 & STATUS2_NIGHTMARE
			|| !(data->defStatus1 & STATUS_SLEEP || data->defAbility == ABILITY_COMATOSE)
			|| PARTNER_MOVE_EFFECT_IS_SAME)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_CURSE:
			if (IsOfType(bankAtk, TYPE_GHOST))
			{
				if (data->defStatus2 & STATUS2_CURSED
				|| PARTNER_MOVE_EFFECT_IS_SAME)
					DECREASE_VIABILITY(10);
				else if (GetHealthPercentage(bankAtk) <= 50)
					DECREASE_VIABILITY(6);
			}
			else //Regular Curse
			{
				if (data->atkAbility == ABILITY_CONTRARY)
				{
					if (!AI_STAT_CAN_FALL(bankAtk, STAT_STAGE_ATK)
					&& !AI_STAT_CAN_FALL(bankAtk, STAT_STAGE_DEF)
					&& !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPEED))
						DECREASE_VIABILITY(10);
				}
				else
				{
					if (!AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_ATK)
					&& !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_DEF)
					&& !AI_STAT_CAN_FALL(bankAtk, STAT_STAGE_SPEED))
						DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_PROTECT:
			decreased = FALSE;
			switch (move) {
				case MOVE_QUICKGUARD:
				case MOVE_WIDEGUARD:
				case MOVE_CRAFTYSHIELD:
					if (!IS_DOUBLE_BATTLE)
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
					}
					break;

				case MOVE_MATBLOCK:
					if (!gDisableStructs[bankAtk].isFirstTurn)
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
					}
					break;

				case MOVE_ENDURE:
					if (gBattleMons[bankAtk].hp == 1 || IsTakingSecondaryDamage(bankAtk)) //Don't use Endure if you'll die after using it
					{
						DECREASE_VIABILITY(10);
						decreased = TRUE;
					}
					break;
			}
			if (decreased)
				break;

			if (gBattleMons[bankDef].status2 & STATUS2_RECHARGE)
			{
				DECREASE_VIABILITY(10);
				break;
			}

			if (ABILITY(bankDef) == ABILITY_UNSEENFIST) //Don't protect if move goes through protect
			{ 
				DECREASE_VIABILITY(10);
				break;
			}

			if (gBattleMoves[gLastResultingMoves[bankAtk]].effect == EFFECT_PROTECT
			&&  move != MOVE_QUICKGUARD
			&&  move != MOVE_WIDEGUARD
			&&  move != MOVE_CRAFTYSHIELD) //These moves have infinite usage
			{
				if (WillFaintFromSecondaryDamage(bankAtk)
				&&  data->defAbility != ABILITY_MOXIE
				#ifdef ABILITY_GRIMNEIGH
				&&  data->defAbility != ABILITY_GRIMNEIGH
				#endif
				#ifdef ABILITY_CHILLINGNEIGH
				&&  data->defAbility != ABILITY_CHILLINGNEIGH
				#endif
				#ifdef ABILITY_ASONE_GRIM
				&&  data->defAbility != ABILITY_ASONE_GRIM
				#endif
				#ifdef ABILITY_ASONE_CHILLING
				&&  data->defAbility != ABILITY_ASONE_CHILLING
				#endif
				&&  data->defAbility != ABILITY_BEASTBOOST)
				{
					DECREASE_VIABILITY(10); //Don't protect if you're going to faint after protecting
				}
				else if (gDisableStructs[bankAtk].protectUses >= 2)
				{
					DECREASE_VIABILITY(10);
				}
				else if (move == MOVE_KINGSSHIELD && gDisableStructs[bankAtk].protectUses > 0)
				{
					DECREASE_VIABILITY(9); //Pretty much never use King's Shield more than once in a row
				}
				else if (gDisableStructs[bankAtk].protectUses == 1 && AI_THINKING_STRUCT->simulatedRNG[1] & 1) //50% chance of using two Protects in a row
				{
					if (IS_SINGLE_BATTLE)
						DECREASE_VIABILITY(6);
					else
						DECREASE_VIABILITY(10); //Don't try double protecting in doubles
				}
			}

			if (AI_THINKING_STRUCT->aiFlags == AI_SCRIPT_CHECK_BAD_MOVE //Only basic AI
			&& IS_DOUBLE_BATTLE) //Make the regular AI know how to use Protect minimally in Doubles
			{
				u8 shouldProtect = ShouldProtect(bankAtk, bankDef, move);
				if (shouldProtect == USE_PROTECT || shouldProtect == PROTECT_FROM_FOES)
					IncreaseFoeProtectionViability(&viability, 0xFF, bankAtk, bankDef);
				else if (shouldProtect == PROTECT_FROM_ALLIES)
					IncreaseAllyProtectionViability(&viability, 0xFF);
			}
			break;

		case EFFECT_SPIKES:
			if (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_SEMI_SMART //Only smart AI
			&& !IsBankIncapacitated(bankDef) //Enemy can attack
			&& (HasUsedMoveWithEffect(bankDef, EFFECT_RAPID_SPIN))) //Has used a move that removed hazards before
			{
				DECREASE_VIABILITY(9); //Better not to use hazard since player will probably try to cheese AI
				break;
			}
			else if (IS_DOUBLE_BATTLE)
			{
				if (ViableMonCountFromBank(bankDef) <= 2)
				{
					DECREASE_VIABILITY(10);
					break;
				}
			}
			else
			{
				if (ViableMonCountFromBank(bankDef) <= 3
				|| MoveInMoveset(MOVE_DEFOG, bankDef)
				|| MoveInMoveset(MOVE_RAPIDSPIN, bankDef))
				{
					DECREASE_VIABILITY(10);
					break;
				}
			}

			switch (move) {
				case MOVE_STEALTHROCK:
					if (gSideTimers[SIDE(bankDef)].srAmount > 0
					|| PARTNER_MOVE_IS_SAME_NO_TARGET //Only one mon needs to set up Stealth Rocks
					|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_STEALTH_ROCK))
						DECREASE_VIABILITY(10);
					break;

				case MOVE_TOXICSPIKES:
					if (gSideTimers[SIDE(bankDef)].tspikesAmount >= 2)
						DECREASE_VIABILITY(10);
					else if (PARTNER_MOVE_IS_SAME_NO_TARGET && gSideTimers[SIDE(bankDef)].tspikesAmount == 1)
						DECREASE_VIABILITY(10); //Only one mon needs to set up the last layer of Toxic Spikes
					break;

				case MOVE_STICKYWEB:
					if (gSideTimers[SIDE(bankDef)].stickyWeb)
						DECREASE_VIABILITY(10);
					else if (PARTNER_MOVE_IS_SAME_NO_TARGET && gSideTimers[SIDE(bankDef)].stickyWeb)
						DECREASE_VIABILITY(10); //Only one mon needs to set up Sticky Web
					break;

				default: //Spikes
					if (gSideTimers[SIDE(bankDef)].spikesAmount >= 3)
						DECREASE_VIABILITY(10);
					else if (PARTNER_MOVE_IS_SAME_NO_TARGET && gSideTimers[SIDE(bankDef)].spikesAmount == 2)
						DECREASE_VIABILITY(10); //Only one mon needs to set up the last layer of Spikes
					break;
			}
			break;

		case EFFECT_FORESIGHT:
			switch (move) {
				case MOVE_MIRACLEEYE:
					if (data->defStatus3 & STATUS3_MIRACLE_EYED)
						DECREASE_VIABILITY(10);

					if (STAT_STAGE(bankDef, STAT_STAGE_EVASION) <= 4
					|| !(IsOfType(bankDef, TYPE_DARK))
					|| PARTNER_MOVE_EFFECT_IS_SAME)
						DECREASE_VIABILITY(9);
					break;

				default: //Foresight
					if (data->defStatus2 & STATUS2_FORESIGHT)
						DECREASE_VIABILITY(10);
					else if (STAT_STAGE(bankDef, STAT_STAGE_EVASION) <= 4
						|| !(IsOfType(bankDef, TYPE_GHOST))
						|| PARTNER_MOVE_EFFECT_IS_SAME)
					{
						DECREASE_VIABILITY(9);
					}
					break;
			}
			break;

		case EFFECT_PERISH_SONG:
			if (IS_DOUBLE_BATTLE)
			{
				if (ViableMonCountFromBank(bankAtk) <= 2
				&&  data->atkAbility != ABILITY_SOUNDPROOF
				&&  data->atkPartnerAbility != ABILITY_SOUNDPROOF
				&&  ViableMonCountFromBank(FOE(bankAtk)) >= 3)
					DECREASE_VIABILITY(10); //Don't wipe your team if you're going to lose

				else if ((!BATTLER_ALIVE(FOE(bankAtk)) || ABILITY(FOE(bankAtk)) == ABILITY_SOUNDPROOF || gStatuses3[FOE(bankAtk)] & STATUS3_PERISH_SONG)
				&&  (!BATTLER_ALIVE(PARTNER(FOE(bankAtk))) || ABILITY(PARTNER(FOE(bankAtk))) == ABILITY_SOUNDPROOF || gStatuses3[PARTNER(FOE(bankAtk))] & STATUS3_PERISH_SONG))
					DECREASE_VIABILITY(10); //Both enemies are perish songed

				else if (PARTNER_MOVE_EFFECT_IS_SAME)
					DECREASE_VIABILITY(10);
			}
			else
			{
				if (ViableMonCountFromBank(bankAtk) == 1
				&&  data->atkAbility != ABILITY_SOUNDPROOF
				&&  ViableMonCountFromBank(bankDef) >= 2)
					DECREASE_VIABILITY(10);

				if (gStatuses3[FOE(bankAtk)] & STATUS3_PERISH_SONG || ABILITY(FOE(bankAtk)) == ABILITY_SOUNDPROOF)
					DECREASE_VIABILITY(10);
			}
			break;

		case EFFECT_SANDSTORM:
			if (gBattleWeather & (WEATHER_SANDSTORM_ANY | WEATHER_PRIMAL_ANY | WEATHER_CIRCUS)
			|| PARTNER_MOVE_EFFECT_IS_WEATHER)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SWAGGER:
			if (bankDef == bankAtkPartner)
			{
				if (data->defAbility == ABILITY_CONTRARY)
					DECREASE_VIABILITY(10);
			}
			else
				goto AI_CONFUSE;
			goto AI_SUBSTITUTE_CHECK;

		case EFFECT_ATTRACT:
			if (!CanBeInfatuated(bankDef, bankAtk)
			|| PARTNER_MOVE_EFFECT_IS_SAME
			|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_INFATUATE_FOES))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SAFEGUARD:
			if (BankSideHasSafeguard(bankAtk)
			|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_BURN_UP:
			if (!IsOfType(bankAtk, TYPE_FIRE))
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_BATON_PASS:
			if (move == MOVE_UTURN || move == MOVE_VOLTSWITCH || move == MOVE_FLIPTURN)
			{
				goto AI_STANDARD_DAMAGE;
			}
			else if (!HasMonToSwitchTo(bankAtk))
			{
				DECREASE_VIABILITY(10);
				break;
			}
			else if (move == MOVE_PARTINGSHOT)
			{
				if (data->defAbility == ABILITY_CONTRARY)
				{
					if (STAT_STAGE(bankDef, STAT_STAGE_ATK) >= STAT_STAGE_MAX
					&& STAT_STAGE(bankDef, STAT_STAGE_SPATK) >= STAT_STAGE_MAX)
					{
						DECREASE_VIABILITY(10);
						break;
					}
				}
				else
				{
					if (STAT_STAGE(bankDef, STAT_STAGE_ATK) == STAT_STAGE_MIN
					&& STAT_STAGE(bankDef, STAT_STAGE_SPATK) == STAT_STAGE_MIN)
					{
						DECREASE_VIABILITY(10);
						break;
					}
				}
			}
			else //Baton pass
			{
				//Check Substitute, Aqua Ring, Magnet Rise, Ingrain, and stats
				if (data->atkStatus2 & STATUS2_SUBSTITUTE
				|| (data->atkStatus3 & (STATUS3_ROOTED | STATUS3_AQUA_RING | STATUS3_LEVITATING | STATUS3_POWER_TRICK))
				|| AnyStatIsRaised(bankAtk))
					break;

				DECREASE_VIABILITY(6);
				break;
			}
			break;

		case EFFECT_RAPID_SPIN:
			if (move == MOVE_DEFOG)
			{
				if (gSideStatuses[SIDE(bankDef)] & (SIDE_STATUS_REFLECT | SIDE_STATUS_LIGHTSCREEN | SIDE_STATUS_SAFEGUARD | SIDE_STATUS_MIST)
				|| gNewBS->AuroraVeilTimers[SIDE(bankDef)] != 0
				|| gSideStatuses[SIDE(bankAtk)] & SIDE_STATUS_SPIKES)
				{
					if (PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
					|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_DEFOG))
					{
						DECREASE_VIABILITY(10); //Only need one hazards removal
						break;
					}
				}

				if (gSideStatuses[SIDE(bankDef)] & SIDE_STATUS_SPIKES)
				{
					DECREASE_VIABILITY(10); //Don't blow away opposing spikes
					break;
				}

				if (IS_DOUBLE_BATTLE)
				{
					if (gBattleMoves[partnerMove].effect == EFFECT_SPIKES //Partner is going to set up hazards
					&& !MoveWouldHitBeforeOtherMove(move, bankAtk, partnerMove, bankAtkPartner)) //Partner is going to set up before the potential Defog
					{
						DECREASE_VIABILITY(10);
						break; //Don't use Defog if partner is going to set up hazards
					}
				}

				goto AI_LOWER_EVASION;
			}
			else if (move == MOVE_RAPIDSPIN && (IsOfType(bankDef, TYPE_GHOST))) //Don't use rapid spin if opponent is a ghost type
			{
				DECREASE_VIABILITY(10);
				break; 
			}
			else if ((data->atkStatus2 & STATUS2_WRAPPED) || (data->atkStatus3 & STATUS3_LEECHSEED))
				goto AI_STANDARD_DAMAGE;

			goto AI_STANDARD_DAMAGE; //Rapid Spin

		case EFFECT_RAIN_DANCE:
			if (gBattleWeather & (WEATHER_RAIN_ANY | WEATHER_PRIMAL_ANY | WEATHER_CIRCUS)
			|| PARTNER_MOVE_EFFECT_IS_WEATHER)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SUNNY_DAY:
			if (gBattleWeather & (WEATHER_SUN_ANY | WEATHER_PRIMAL_ANY | WEATHER_CIRCUS)
			|| PARTNER_MOVE_EFFECT_IS_WEATHER)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_BELLY_DRUM:
			if (data->atkAbility == ABILITY_CONTRARY)
				DECREASE_VIABILITY(10);
			else if (GetHealthPercentage(bankAtk) <= 50)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_PSYCH_UP:
			if (move == MOVE_SPECTRALTHIEF)
				goto AI_STANDARD_DAMAGE;
			else
				goto AI_HAZE_CHECK;
			break;

		case EFFECT_FUTURE_SIGHT:
			if (gWishFutureKnock.futureSightCounter[bankDef] != 0)
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_SEMI_INVULNERABLE: ;
			if (data->atkItemEffect == ITEM_EFFECT_POWER_HERB)
				goto AI_STANDARD_DAMAGE;

			if (predictedMove != MOVE_NONE
			&& MoveWouldHitFirst(move, bankAtk, bankDef)
			&& gBattleMoves[predictedMove].effect == EFFECT_SEMI_INVULNERABLE)
				DECREASE_VIABILITY(10); //Don't Fly if opponent is going to Fly after you

			goto TWO_TURN_ATTACK_CHECK;

		case EFFECT_SOLARBEAM:
			if (WEATHER_HAS_EFFECT && gBattleWeather & WEATHER_SUN_ANY && data->atkItemEffect != ITEM_EFFECT_UTILITY_UMBRELLA)
				goto AI_STANDARD_DAMAGE;
			//Fallthrough

		case EFFECT_RAZOR_WIND:
		case EFFECT_SKULL_BASH:
		case EFFECT_SKY_ATTACK:
		TWO_TURN_ATTACK_CHECK:
			if (data->atkItemEffect == ITEM_EFFECT_POWER_HERB)
				goto AI_STANDARD_DAMAGE;

			if (WillFaintFromSecondaryDamage(bankAtk))
				DECREASE_VIABILITY(10); //Attacker will faint while charging

			if (AI_THINKING_STRUCT->aiFlags > AI_SCRIPT_CHECK_BAD_MOVE) //Semi-Smart or SMart AI
			{
				if (!(data->defStatus1 & (STATUS1_PARALYSIS | STATUS1_FREEZE)) //Target won't randomly not be able to attack
				&& (data->defStatus2 & STATUS2_CONFUSION) < 3 //Foe wouldn't be confused when the attack would hit
				&& !(data->defStatus2 & STATUS2_INFATUATION) //Foe wouldn't miss the attack since they'll never be immobilized by love
				&& !TARGET_ASLEEP) //Target is awake (not that they could wake up and protect for the second turn but that's fair and not AI abuse
				{
					if (HasProtectionMoveInMoveset(bankDef, CHECK_REGULAR_PROTECTION) //Foe could protect before the attack hits
					&& !WillFaintFromSecondaryDamage(bankDef)) //And the foe protecting is reasonable
						DECREASE_VIABILITY(8); //Better not to use this attack, but still can if need be
					else if (CanKnockOut(bankDef, bankAtk) //Attacker can be knocked out
					&& predictedMove != MOVE_NONE)
						DECREASE_VIABILITY(4);
				}
			}

			goto AI_STANDARD_DAMAGE;

		case EFFECT_FAKE_OUT:
			if (!gDisableStructs[bankAtk].isFirstTurn)
				DECREASE_VIABILITY(10);
			else if (move == MOVE_FAKEOUT)
			{
				if (IsChoiceItemEffectOrAbility(data->atkItemEffect, data->atkAbility)
				&& (ViableMonCountFromBank(bankDef) >= 2 || !MoveKnocksOutXHits(MOVE_FAKEOUT, bankAtk, bankDef, 1)))
				{
					if (!HasMonToSwitchTo(bankAtk))
						DECREASE_VIABILITY(10); //Don't lock the attacker into Fake Out if they can't switch out afterwards.
				}
			}

			goto AI_STANDARD_DAMAGE;

		case EFFECT_STOCKPILE:
			if (gDisableStructs[bankAtk].stockpileCounter >= 3)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_SPIT_UP:
			if (gDisableStructs[bankAtk].stockpileCounter == 0)
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_SWALLOW:
			if (gDisableStructs[bankAtk].stockpileCounter == 0)
				DECREASE_VIABILITY(10);
			else
				goto AI_RECOVERY;
			break;

		case EFFECT_HAIL:
			if (gBattleWeather & (WEATHER_HAIL_ANY | WEATHER_PRIMAL_ANY | WEATHER_CIRCUS)
			|| PARTNER_MOVE_EFFECT_IS_WEATHER)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_TORMENT:
			if (!CanBeTormented(bankDef)
			|| PARTNER_MOVE_EFFECT_IS_SAME
			|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_TORMENT_FOES))
			{
				DECREASE_VIABILITY(10);
				break;
			}
			if (data->defItemEffect == ITEM_EFFECT_CURE_ATTRACT)
				DECREASE_VIABILITY(6);
			goto AI_SUBSTITUTE_CHECK;

		case EFFECT_FLATTER:
			if (bankDef == bankAtkPartner)
			{
				if (data->defAbility == ABILITY_CONTRARY)
					DECREASE_VIABILITY(10);
			}
			else
				goto AI_CONFUSE;
			goto AI_SUBSTITUTE_CHECK;

		case EFFECT_WILL_O_WISP:
		AI_BURN_CHECK: ;
			if (!CanBeBurned(bankDef, TRUE)
			|| MoveBlockedBySubstitute(move, bankAtk, bankDef)
			|| PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_MEMENTO:
			if (!HasMonToSwitchTo(bankAtk)
			|| PARTNER_MOVE_EFFECT_IS_SAME)
			{
				DECREASE_VIABILITY(10);
				break;
			}

			switch (move) {
				case MOVE_HEALINGWISH:
				case MOVE_LUNARDANCE:
					if (TeamFullyHealedMinusBank(bankAtk))
						DECREASE_VIABILITY(10);
					break;

				case MOVE_FINALGAMBIT:
					//Just the viablemonfromcount check, but not stat check
					goto AI_STANDARD_DAMAGE;

				default: //Memento
					if (MoveBlockedBySubstitute(move, bankAtk, bankDef))
						DECREASE_VIABILITY(10);
					else if (STAT_STAGE(bankDef, STAT_STAGE_ATK) == STAT_STAGE_MIN
						  && STAT_STAGE(bankDef, STAT_STAGE_SPATK) == STAT_STAGE_MIN)
					{
						DECREASE_VIABILITY(10);
					}
					else
						goto AI_SUBSTITUTE_CHECK;
			}
			break;

		case EFFECT_FOCUS_PUNCH: ;
			switch (move) {
				case MOVE_SHELLTRAP: ;
					if (!CheckContact(predictedMove, bankDef))
						DECREASE_VIABILITY(10); //Probably better not to use it
					else
						goto AI_STANDARD_DAMAGE;
					break;

				case MOVE_BEAKBLAST:
					goto AI_STANDARD_DAMAGE;

				default:
					if (predictedMove != MOVE_NONE
					&& !MoveBlockedBySubstitute(predictedMove, bankDef, bankAtk)
					&& SPLIT(predictedMove) != SPLIT_STATUS
					&& gBattleMoves[predictedMove].power != 0)
						DECREASE_VIABILITY(10); //Probably better not to use it
					else
						goto AI_STANDARD_DAMAGE;
			}
			break;

		case EFFECT_NATURE_POWER:
			return AIScript_Negatives(bankAtk, bankDef, GetNaturePowerMove(), originalViability, data);

		case EFFECT_CHARGE:
			if (data->atkStatus3 & STATUS3_CHARGED_UP)
			{
				DECREASE_VIABILITY(10);
				break;
			}

			if (!MoveTypeInMoveset(bankAtk, TYPE_ELECTRIC))
				goto AI_SPDEF_RAISE_1;
			break;

		case EFFECT_TAUNT:
			if (IsTaunted(bankDef)
			|| data->defAbility == ABILITY_OBLIVIOUS
			|| PARTNER_MOVE_EFFECT_IS_SAME)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_FOLLOW_ME:
		case EFFECT_HELPING_HAND:
			if (!IS_DOUBLE_BATTLE
			||  !BATTLER_ALIVE(bankAtkPartner)
			||  PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
			||  (partnerMove != MOVE_NONE && SPLIT(partnerMove) == SPLIT_STATUS)
			||  gBattleStruct->monToSwitchIntoId[bankAtkPartner] != PARTY_SIZE) //Partner is switching out.
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_TRICK:	
			switch (move) {
				case MOVE_BESTOW:
					if (data->atkItem == ITEM_NONE
					|| !CanTransferItem(data->atkSpecies, data->atkItem))
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				default: //Trick
					if ((data->atkItem == ITEM_NONE && data->defItem == ITEM_NONE)
					|| !CanTransferItem(data->atkSpecies, data->atkItem)
					|| !CanTransferItem(data->atkSpecies, data->defItem)
					|| !CanTransferItem(data->defSpecies, data->atkItem)
					|| !CanTransferItem(data->defSpecies, data->defItem)
					|| (data->defAbility == ABILITY_STICKYHOLD))
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
			}
			break;

		case EFFECT_ROLE_PLAY: ;
			u8 atkAbility = *GetAbilityLocation(bankAtk);
			u8 defAbility = *GetAbilityLocation(bankDef);

			if (atkAbility == defAbility
			||  defAbility == ABILITY_NONE
			||  gSpecialAbilityFlags[atkAbility].gRolePlayAttackerBannedAbilities
			||  gSpecialAbilityFlags[defAbility].gRolePlayBannedAbilities)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_WISH:
			if (gWishFutureKnock.wishCounter[bankAtk] != 0)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_ASSIST: ;
			u8 i, firstMonId, lastMonId;
			struct Pokemon* party = LoadPartyRange(bankAtk, &firstMonId, &lastMonId);

			for (i = firstMonId; i < lastMonId; ++i)
			{
				if (party[i].species != SPECIES_NONE
				&& !GetMonData(&party[i], MON_DATA_IS_EGG, NULL)
				&& gBattlerPartyIndexes[i] != gBattlerPartyIndexes[bankAtk])
					break; //At least one other Pokemon on team
			}

			if (i == lastMonId)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_INGRAIN:
			switch (move) {
				case MOVE_AQUARING:
					if (data->atkStatus3 & STATUS3_AQUA_RING)
						DECREASE_VIABILITY(10);
					break;

				default:
					if (data->atkStatus3 & STATUS3_ROOTED)
						DECREASE_VIABILITY(10);
			}
			break;

		case EFFECT_SUPERPOWER:
			if (move == MOVE_HYPERSPACEFURY && data->atkSpecies != SPECIES_HOOPA_UNBOUND)
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_MAGIC_COAT:
			if (!MagicCoatableMovesInMoveset(bankDef))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_RECYCLE:
			if (move == MOVE_BELCH)
			{
				if (!(gNewBS->canBelch[SIDE(bankAtk)] & gBitTable[gBattlerPartyIndexes[bankAtk]]))
					DECREASE_VIABILITY(10);
				else
					goto AI_STANDARD_DAMAGE;
			}
			else if (gNewBS->SavedConsumedItems[bankAtk] == ITEM_NONE || data->atkItem != ITEM_NONE)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_YAWN:
			if (data->defStatus3 & STATUS3_YAWN || data->defStatus1 & STATUS_SLEEP)
				DECREASE_VIABILITY(10);
			else
				goto AI_CHECK_SLEEP;
			break;

		case EFFECT_KNOCK_OFF:
			if (data->defItemEffect == ITEM_EFFECT_ASSAULT_VEST
			|| (data->defItemEffect == ITEM_EFFECT_CHOICE_BAND && data->atkAbility != ABILITY_GORILLATACTICS && gBattleStruct->choicedMove[bankDef]))
			{
				if (GetStrongestMove(bankDef, bankAtk) == MOVE_NONE
				|| AI_SpecialTypeCalc(GetStrongestMove(bankDef, bankAtk), bankDef, bankAtk) & (MOVE_RESULT_NO_EFFECT | MOVE_RESULT_MISSED))
					DECREASE_VIABILITY(9); //Don't use Knock Off is the enemy's only moves don't affect the AI
			}
			
			if (move == MOVE_CORROSIVEGAS)
			{
				if (data->defAbility == ABILITY_STICKYHOLD
				|| !CanKnockOffItem(bankDef))
					DECREASE_VIABILITY(10);
				else
					goto AI_SUBSTITUTE_CHECK;
			}
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_SKILL_SWAP: ;
			u8 atkAbility2 = *GetAbilityLocation(bankAtk); //Get actual abilities
			u8 defAbility2 = *GetAbilityLocation(bankDef);

			switch (move) {
				case MOVE_WORRYSEED:
					if (defAbility2 == ABILITY_INSOMNIA
					|| gSpecialAbilityFlags[defAbility2].gWorrySeedBannedAbilities
					|| MoveBlockedBySubstitute(move, bankAtk, bankDef))
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_GASTROACID:
					if (IsAbilitySuppressed(bankDef)
					||  gSpecialAbilityFlags[defAbility2].gGastroAcidBannedAbilities
					||  MoveBlockedBySubstitute(move, bankAtk, bankDef))
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_ENTRAINMENT:
					if (atkAbility2 == ABILITY_NONE
					||  IsDynamaxed(bankDef)
					||  gSpecialAbilityFlags[atkAbility2].gEntrainmentBannedAbilitiesAttacker
					||  gSpecialAbilityFlags[defAbility2].gEntrainmentBannedAbilitiesTarget
					||  MoveBlockedBySubstitute(move, bankAtk, bankDef))
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_COREENFORCER:
					goto AI_STANDARD_DAMAGE;

				case MOVE_SIMPLEBEAM:
					if (defAbility2 == ABILITY_SIMPLE
					||  gSpecialAbilityFlags[defAbility2].gSimpleBeamBannedAbilities
					||  MoveBlockedBySubstitute(move, bankAtk, bankDef))
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				default: //Skill Swap
					if (atkAbility2 == ABILITY_NONE || defAbility2 == ABILITY_NONE
					|| IsDynamaxed(bankAtk)
					|| IsDynamaxed(bankDef)
					|| gSpecialAbilityFlags[atkAbility2].gSkillSwapBannedAbilities
					|| gSpecialAbilityFlags[defAbility2].gSkillSwapBannedAbilities)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
			}
			break;

		case EFFECT_IMPRISON:
			if (data->atkStatus3 & STATUS3_IMPRISONED)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_REFRESH:
			if (!(data->atkStatus1 & (STATUS1_PSN_ANY | STATUS1_BURN | STATUS1_PARALYSIS
			#ifdef FROSTBITE
			                       | STATUS1_FREEZE
			#endif
			                         )))
			{
				DECREASE_VIABILITY(10);
				break;
			}
			else if (move == MOVE_PSYCHOSHIFT)
			{
				if (data->atkStatus1 & STATUS1_PSN_ANY)
					goto AI_POISON_CHECK;
				else if (data->atkStatus1 & STATUS1_BURN)
					goto AI_BURN_CHECK;
				else if (data->atkStatus1 & STATUS1_PARALYSIS)
					goto AI_PARALYZE_CHECK;
				else if (ATTACKER_ASLEEP)
					goto AI_CHECK_SLEEP;
				#ifdef FROSTBITE
				else if (data->atkStatus1 & STATUS1_FREEZE)
				{
					if (!CanBeFrozen(bankDef, TRUE)
					|| MoveBlockedBySubstitute(move, bankAtk, bankDef)
					|| PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET)
						DECREASE_VIABILITY(10);
				}
				#endif
				else
					DECREASE_VIABILITY(10);
			}
			break;

		case EFFECT_SNATCH:
			//Check target for any snatchable moves
			if (!HasSnatchableMove(bankDef)
			|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_MUD_SPORT:
			if (IsMudSportActive()
			|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_TICKLE:
			if (data->defAbility == ABILITY_CONTRARY)
			{
				DECREASE_VIABILITY(10);
				break;
			}
			else
			{
				if ((STAT_STAGE(bankDef, STAT_STAGE_ATK) == STAT_STAGE_MIN || !RealPhysicalMoveInMoveset(bankDef))
				&&  STAT_STAGE(bankDef, STAT_STAGE_DEF) == STAT_STAGE_MIN)
				{
					DECREASE_VIABILITY(10);
					break;
				}
			}
			goto AI_SUBSTITUTE_CHECK;

		case EFFECT_DEF_SPD_UP: //Shelter
			if (data->atkAbility == ABILITY_CONTRARY || GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else if (!AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_DEF) && !AI_STAT_CAN_RISE(bankAtk, STAT_STAGE_SPEED))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_COSMIC_POWER:
			if (data->atkAbility == ABILITY_CONTRARY || GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else if(MoveInMoveset(MOVE_HAZE, bankDef) || MoveInMoveset(MOVE_FREEZYFROST, bankDef)) {
				DECREASE_VIABILITY(10);
			}
			else
			{
				AI_COSMIC_POWER:
				if (STAT_STAGE(bankAtk, STAT_STAGE_DEF) >= STAT_STAGE_MAX
				&& STAT_STAGE(bankAtk, STAT_STAGE_SPDEF) >= STAT_STAGE_MAX)
					DECREASE_VIABILITY(10);
			}
			break;

		case EFFECT_EXTREME_EVOBOOST:
			if (MainStatsMaxed(bankAtk) || GOOD_AI_MOVE_LOCKED)
			{
				DECREASE_VIABILITY(10);
				break;
			}

			switch (move) {
				case MOVE_NORETREAT:
					if (gNewBS->trappedByNoRetreat & gBitTable[bankAtk])
						DECREASE_VIABILITY(10);
					break;
				case MOVE_CLANGOROUSSOUL:
					if (gBattleMons[bankAtk].hp <= gBattleMons[bankAtk].maxHP / 3)
						DECREASE_VIABILITY(10);
					break;	
			}
			break;

		case EFFECT_BULK_UP:
			if (data->atkAbility == ABILITY_CONTRARY || GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else
			{
				switch (move) {
					case MOVE_COIL:
						if (STAT_STAGE(bankAtk, STAT_STAGE_ACC) >= STAT_STAGE_MAX
						&& (STAT_STAGE(bankAtk, STAT_STAGE_ATK) >= STAT_STAGE_MAX && !RealPhysicalMoveInMoveset(bankAtk))
						&&  STAT_STAGE(bankAtk, STAT_STAGE_DEF) >= STAT_STAGE_MAX)
							DECREASE_VIABILITY(10);
						break;

					default:
						if ((STAT_STAGE(bankAtk, STAT_STAGE_ATK) >= STAT_STAGE_MAX && !RealPhysicalMoveInMoveset(bankAtk))
						&&  STAT_STAGE(bankAtk, STAT_STAGE_DEF) >= STAT_STAGE_MAX)
							DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_WATER_SPORT:
			if (IsWaterSportActive()
			|| PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET)
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_CALM_MIND:
			if (data->atkAbility == ABILITY_CONTRARY || GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else
			{
				switch (move) {
					case MOVE_QUIVERDANCE:
					case MOVE_GEOMANCY:
						if (STAT_STAGE(bankAtk, STAT_STAGE_SPEED) >= STAT_STAGE_MAX
						&& (STAT_STAGE(bankAtk, STAT_STAGE_SPATK) >= STAT_STAGE_MAX || !SpecialMoveInMoveset(bankAtk))
						&&  STAT_STAGE(bankAtk, STAT_STAGE_SPDEF) >= STAT_STAGE_MAX)
							DECREASE_VIABILITY(10);
						else if (IsTrickRoomActive() && gNewBS->TrickRoomTimer != 1) //Trick Room not about to end
							DECREASE_VIABILITY(10);
						break;

					default:
						if ((STAT_STAGE(bankAtk, STAT_STAGE_SPATK) >= STAT_STAGE_MAX || !SpecialMoveInMoveset(bankAtk))
						&&  STAT_STAGE(bankAtk, STAT_STAGE_SPDEF) >= STAT_STAGE_MAX)
							DECREASE_VIABILITY(10);
				}
			}
			break;

		case EFFECT_DRAGON_DANCE:
			if (data->atkAbility == ABILITY_CONTRARY || GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else
			{
				switch (move) {
					case MOVE_SHELLSMASH:
						if (data->atkAbility == ABILITY_CONTRARY)
							goto AI_COSMIC_POWER;

						if ((STAT_STAGE(bankAtk, STAT_STAGE_SPATK) >= STAT_STAGE_MAX || !SpecialMoveInMoveset(bankAtk))
						&&  (STAT_STAGE(bankAtk, STAT_STAGE_ATK) >= STAT_STAGE_MAX || !RealPhysicalMoveInMoveset(bankAtk))
						&&  (STAT_STAGE(bankAtk, STAT_STAGE_SPEED) >= STAT_STAGE_MAX))
							DECREASE_VIABILITY(10);
						else if (IsTrickRoomActive() && gNewBS->TrickRoomTimer != 1) //Trick Room not about to end
							DECREASE_VIABILITY(10);
						break;

					default: //Dragon Dance + Shift Gear
						if (data->atkAbility == ABILITY_CONTRARY
						|| (IsTrickRoomActive() && gNewBS->TrickRoomTimer != 1)) //Trick Room not about to end
							DECREASE_VIABILITY(10);
						else
						{
							if ((STAT_STAGE(bankAtk, STAT_STAGE_ATK) >= STAT_STAGE_MAX || !RealPhysicalMoveInMoveset(bankAtk))
							&&  (STAT_STAGE(bankAtk, STAT_STAGE_SPEED) >= STAT_STAGE_MAX))
								DECREASE_VIABILITY(10);
						}
				}
			}
			break;

		case EFFECT_STAT_SWAP_SPLIT:
			if (bankDef == bankAtkPartner)
				break;

			if (GOOD_AI_MOVE_LOCKED)
				DECREASE_VIABILITY(10);
			else
			{
				switch (move) {
					case MOVE_POWERTRICK:
						if (gBattleMons[bankAtk].defense >= gBattleMons[bankAtk].attack && !RealPhysicalMoveInMoveset(bankAtk))
							DECREASE_VIABILITY(10);
						break;

					case MOVE_POWERSWAP: //Don't use if attacker's stat stages are higher than opponents
						if (STAT_STAGE(bankAtk, STAT_STAGE_ATK) >= STAT_STAGE(bankDef, STAT_STAGE_SPATK)
						&&  STAT_STAGE(bankAtk, STAT_STAGE_SPATK) >= STAT_STAGE(bankDef, STAT_STAGE_SPATK))
							DECREASE_VIABILITY(10);
						else
							goto AI_SUBSTITUTE_CHECK;
						break;

					case MOVE_GUARDSWAP: //Don't use if attacker's stat stages are higher than opponents
						if (STAT_STAGE(bankAtk, STAT_STAGE_DEF) >= STAT_STAGE(bankDef, STAT_STAGE_SPDEF)
						&&  STAT_STAGE(bankAtk, STAT_STAGE_SPDEF) >= STAT_STAGE(bankDef, STAT_STAGE_SPDEF))
							DECREASE_VIABILITY(10);
						else
							goto AI_SUBSTITUTE_CHECK;
						break;

					case MOVE_SPEEDSWAP:
						#ifdef FLAG_WEIGHT_SPEED_BATTLE
						if (FlagGet(FLAG_WEIGHT_SPEED_BATTLE))
							DECREASE_VIABILITY(10);
						else
						#endif
						if (IsTrickRoomActive() && gNewBS->TrickRoomTimer != 1) //Trick Room not about to end
						{
							if (gBattleMons[bankAtk].speed <= gBattleMons[bankDef].speed)
							{
								DECREASE_VIABILITY(10);
								break;
							}
						}
						else if (gBattleMons[bankAtk].speed >= gBattleMons[bankDef].speed)
						{
							DECREASE_VIABILITY(10);
							break;
						}
						
						goto AI_SUBSTITUTE_CHECK;

					case MOVE_HEARTSWAP: ;
						u8 attackerPositiveStages = CountBanksPositiveStatStages(bankAtk);
						u8 attackerNegativeStages = CountBanksNegativeStatStages(bankAtk);
						u8 targetPositiveStages = CountBanksPositiveStatStages(bankDef);
						u8 targetNegativeStages = CountBanksNegativeStatStages(bankDef);

						if (attackerPositiveStages >= targetPositiveStages
						&&  attackerNegativeStages <= targetNegativeStages)
							DECREASE_VIABILITY(10);
						else
							goto AI_SUBSTITUTE_CHECK;
						break;

					case MOVE_POWERSPLIT: ;
						u8 atkAttack = gBattleMons[bankAtk].attack;
						u8 defAttack = gBattleMons[bankDef].attack;
						u8 atkSpAttack = gBattleMons[bankAtk].spAttack;
						u8 defSpAttack = gBattleMons[bankDef].spAttack;

						if (atkAttack + atkSpAttack >= defAttack + defSpAttack) //Combined attacker stats are > than combined target stats
							DECREASE_VIABILITY(10);
						else
							goto AI_SUBSTITUTE_CHECK;
						break;

					case MOVE_GUARDSPLIT: ;
						u8 atkDefense = gBattleMons[bankAtk].defense;
						u8 defDefense = gBattleMons[bankDef].defense;
						u8 atkSpDefense = gBattleMons[bankAtk].spDefense;
						u8 defSpDefense = gBattleMons[bankDef].spDefense;

						if (atkDefense + atkSpDefense >= defDefense + defSpDefense) //Combined attacker stats are > than combined target stats
							DECREASE_VIABILITY(10);
						else
							goto AI_SUBSTITUTE_CHECK;
						break;
				}
			}
			break;

		case EFFECT_ME_FIRST: ;
			if (move == MOVE_MEFIRST && predictedMove != MOVE_NONE)
			{
				if (!MoveWouldHitFirst(move, bankAtk, bankDef))
					DECREASE_VIABILITY(10);
				else
					return AIScript_Negatives(bankAtk, bankDef, predictedMove, originalViability, data);
			}
			else //Target is predicted to switch most likely
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_NATURAL_GIFT:
			if (data->atkAbility == ABILITY_KLUTZ
			|| IsMagicRoomActive()
			|| GetPocketByItemId(data->atkItem) != POCKET_BERRIES)
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_SET_TERRAIN:
			if (PARTNER_MOVE_EFFECT_IS_TERRAIN
			|| (gBattleTypeFlags & BATTLE_TYPE_BATTLE_CIRCUS && gBattleCircusFlags & BATTLE_CIRCUS_TERRAIN))
			{
				DECREASE_VIABILITY(10);
				break;
			}

			switch (move) {
				case MOVE_ELECTRICTERRAIN:
					if (gTerrainType == ELECTRIC_TERRAIN)
						DECREASE_VIABILITY(10);
					break;
				case MOVE_GRASSYTERRAIN:
					if (gTerrainType == GRASSY_TERRAIN)
						DECREASE_VIABILITY(10);
					break;
				case MOVE_MISTYTERRAIN:
					if (gTerrainType == MISTY_TERRAIN)
						DECREASE_VIABILITY(10);
					break;
				case MOVE_PSYCHICTERRAIN:
					if (gTerrainType == PSYCHIC_TERRAIN)
						DECREASE_VIABILITY(10);
					break;
			}
			break;

		case EFFECT_PLEDGE:
			if (IS_DOUBLE_BATTLE
			&&  gBattleMons[bankAtkPartner].hp > 0)
			{
				if (partnerMove != MOVE_NONE
				&&  gBattleMoves[partnerMove].effect == EFFECT_PLEDGE
				&&  move != partnerMove) //Different pledge moves
				{
					if (gBattleMons[bankAtkPartner].status1 & (STATUS1_SLEEP
					#ifndef FROSTBITE
					                                         | STATUS1_FREEZE
					#endif
					                                          )
					&&  gBattleMons[bankAtkPartner].status1 != 1) //Will wake up this turn
						DECREASE_VIABILITY(10); //Don't use combo move if your partner will cause failure
				}
			}
			goto AI_STANDARD_DAMAGE;

		case EFFECT_FIELD_EFFECTS:
			switch (move) {
				case MOVE_TRICKROOM:
					if (PARTNER_MOVE_IS_TAILWIND_TRICKROOM)
						DECREASE_VIABILITY(10);

					if (IsTrickRoomActive()) //Trick Room Up
					{
						if (GetPokemonOnSideSpeedAverage(bankAtk) < GetPokemonOnSideSpeedAverage(bankDef)) //Attacker side slower than target side
							DECREASE_VIABILITY(10); //Keep the Trick Room up
					}
					else //No Trick Room Up
					{
						if (GetPokemonOnSideSpeedAverage(bankAtk) > GetPokemonOnSideSpeedAverage(bankDef)) //Attacker side faster than target side
							DECREASE_VIABILITY(10); //Keep the Trick Room down
					}
					break;

				case MOVE_MAGICROOM:
					if (IsMagicRoomActive()
					|| PARTNER_MOVE_IS_SAME_NO_TARGET)
						DECREASE_VIABILITY(10);
					break;

				case MOVE_WONDERROOM:
					if (IsWonderRoomActive()
					|| PARTNER_MOVE_IS_SAME_NO_TARGET)
						DECREASE_VIABILITY(10);
					break;

				case MOVE_GRAVITY:
					if ((IsGravityActive()
					&&  !IsOfType(bankAtk, TYPE_FLYING)
					&&  !IsFloatingWithMagnetism(bankAtk) //Should revert Gravity in this case
					&&  data->atkItemEffect != ITEM_EFFECT_AIR_BALLOON) //Should revert Gravity in this case
					|| PARTNER_MOVE_IS_SAME_NO_TARGET
					|| PARTNER_MOVE_IS_MAX_MOVE_WITH_EFFECT(MAX_EFFECT_GRAVITY))
						DECREASE_VIABILITY(10);
					else if (!IsGravityActive() && IsFloatingWithMagnetism(bankAtk))
						DECREASE_VIABILITY(10); //Has Gravity to revert it if set by someone else
					break;

				case MOVE_IONDELUGE:
					if (IsIonDelugeActive()
					|| PARTNER_MOVE_IS_SAME_NO_TARGET)
						DECREASE_VIABILITY(10);
					break;

				case MOVE_PLASMAFISTS:
					goto AI_STANDARD_DAMAGE;
			}
			break;

		case EFFECT_FLING:
			if (!CanFling(data->atkItem, data->atkSpecies, data->atkAbility, bankAtk, gNewBS->EmbargoTimers[bankAtk]))
				DECREASE_VIABILITY(10);

			u8 effect = gFlingTable[data->atkItem].effect;

			switch (effect) {
				case MOVE_EFFECT_BURN:
					goto AI_BURN_CHECK;

				case MOVE_EFFECT_PARALYSIS:
					goto AI_PARALYZE_CHECK;

				case MOVE_EFFECT_POISON:
				case MOVE_EFFECT_TOXIC:
					goto AI_POISON_CHECK;

				case MOVE_EFFECT_FREEZE:
					if (!CanBeFrozen(bankDef, TRUE)
					 || MoveBlockedBySubstitute(move, bankAtk, bankDef))
						DECREASE_VIABILITY(10);
					break;
			}

			goto AI_STANDARD_DAMAGE;

		case EFFECT_ATTACK_BLOCKERS:
			switch (move) {
				case MOVE_EMBARGO:
					if (data->defAbility == ABILITY_KLUTZ
					|| IsMagicRoomActive()
					|| gNewBS->EmbargoTimers[bankDef] != 0
					|| PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_POWDER:
					if (!MoveTypeInMoveset(bankDef, TYPE_FIRE)
					|| PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_TELEKINESIS:
					if (data->defStatus3 & (STATUS3_TELEKINESIS | STATUS3_ROOTED | STATUS3_SMACKED_DOWN)
					||  IsGravityActive()
					||  data->defItemEffect == ITEM_EFFECT_IRON_BALL
					||  gSpecialSpeciesFlags[data->defSpecies].telekinesisBan
					|| PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_THROATCHOP:
					goto AI_STANDARD_DAMAGE;

				default: //Heal Block
					if (IsHealBlocked(bankDef)
					|| PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;
			}
			break;

		case EFFECT_TYPE_CHANGES:
			switch (move) {
				case MOVE_SOAK:
					if (PARTNER_MOVE_IS_SAME
					|| (gBattleMons[bankDef].type1 == TYPE_WATER
					 && gBattleMons[bankDef].type2 == TYPE_WATER
					 && gBattleMons[bankDef].type3 == TYPE_BLANK))
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_TRICKORTREAT:
					if (gBattleMons[bankDef].type1 == TYPE_GHOST
					||  gBattleMons[bankDef].type2 == TYPE_GHOST
					||  gBattleMons[bankDef].type3 == TYPE_GHOST
					||  PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				case MOVE_FORESTSCURSE:
					if (gBattleMons[bankDef].type1 == TYPE_GRASS
					||  gBattleMons[bankDef].type2 == TYPE_GRASS
					||  gBattleMons[bankDef].type3 == TYPE_GRASS
					||  PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;
			}
			break;

		case EFFECT_HEAL_TARGET:
			switch (move) {
				case MOVE_POLLENPUFF:
					if (!TARGETING_PARTNER)
						goto AI_STANDARD_DAMAGE;
					else
						goto AI_HEAL_TARGET;

				default:
					if (!TARGETING_PARTNER) //Don't heal enemies
						DECREASE_VIABILITY(10);
					else
					{
						AI_HEAL_TARGET:
						if (BATTLER_MAX_HP(bankDef))
							DECREASE_VIABILITY(10);
						if (gBattleMons[bankDef].hp > gBattleMons[bankDef].maxHP / 2)
							DECREASE_VIABILITY(5);
						else
							goto AI_SUBSTITUTE_CHECK;
					}
			}
			break;

		case EFFECT_TOPSY_TURVY_ELECTRIFY:
			switch (move) {
				case MOVE_ELECTRIFY:
					if (!MoveWouldHitFirst(move, bankAtk, bankDef)
					||  GetMoveTypeSpecial(bankDef, predictedMove) == TYPE_ELECTRIC //Move will already be electric type
					||  PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else
						goto AI_SUBSTITUTE_CHECK;
					break;

				default: ; //Topsy Turvy
					if (!TARGETING_PARTNER)
					{
						u8 targetPositiveStages = CountBanksPositiveStatStages(bankDef);
						u8 targetNegativeStages = CountBanksNegativeStatStages(bankDef);

						if (targetPositiveStages == 0 //No good stat changes to make bad
						||  PARTNER_MOVE_IS_SAME)
							DECREASE_VIABILITY(10);

						else if (targetNegativeStages < targetPositiveStages)
							DECREASE_VIABILITY(5); //More stages would be made positive than negative
						
						else
							goto AI_SUBSTITUTE_CHECK;
					}
			}
			break;

		case EFFECT_FAIRY_LOCK_HAPPY_HOUR:
			switch (move) {
				case MOVE_FAIRYLOCK:
					if (IsFairyLockActive()
					||  PARTNER_MOVE_IS_SAME_NO_TARGET)
						DECREASE_VIABILITY(10);
					break;

				case MOVE_HAPPYHOUR:
					if ((gBattleTypeFlags & (BATTLE_TYPE_LINK
											| BATTLE_TYPE_EREADER_TRAINER
											| BATTLE_TYPE_FRONTIER
											| BATTLE_TYPE_TRAINER_TOWER))
					|| !(gBattleTypeFlags & BATTLE_TYPE_TRAINER) //Wild battle
					|| SIDE(bankAtk) != B_SIDE_PLAYER) //Only increase money amount if will benefit player
					{
						if (!IsTypeZCrystal(data->atkItem, gBattleMoves[move].type) || gNewBS->zMoveData.used[bankAtk] || IsMegaZMoveBannedBattle())
							DECREASE_VIABILITY(10);
					}
					else //Normal battle
					{
						if (!IsTypeZCrystal(data->atkItem, gBattleMoves[move].type) || gNewBS->zMoveData.used[bankAtk] || IsMegaZMoveBannedBattle())
						{
							if (gNewBS->usedHappyHour != 0) //Already used Happy Hour
								DECREASE_VIABILITY(10);
						}
					}
					break;

				case MOVE_CELEBRATE:
				case MOVE_HOLDHANDS:
					if (!IsTypeZCrystal(data->atkItem, gBattleMoves[move].type)
					|| data->atkItemQuality != gBattleMoves[move].type //Compare original move type
					|| gNewBS->zMoveData.used[bankAtk])
						DECREASE_VIABILITY(10);
					break;
			}
			break;

		case EFFECT_INSTRUCT_AFTER_YOU_QUASH:
			switch (move) {
				case MOVE_INSTRUCT: ;
					u16 instructedMove;

					if (!MoveWouldHitFirst(move, bankAtk, bankDef))
						instructedMove = predictedMove;
					else
						instructedMove = gLastPrintedMoves[bankDef];

					if (instructedMove == MOVE_NONE
					||  IsDynamaxed(bankDef)
					||  gSpecialMoveFlags[instructedMove].gInstructBannedMoves
					||  gSpecialMoveFlags[instructedMove].gMovesThatCallOtherMoves
					|| (IsZMove(instructedMove))
					|| (gLockedMoves[bankDef] != 0 && gLockedMoves[bankDef] != 0xFFFF)
					||  gBattleMons[bankDef].status2 & STATUS2_MULTIPLETURNS
					||  PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					else if (IS_DOUBLE_BATTLE)
					{
						if (!TARGETING_PARTNER)
							DECREASE_VIABILITY(10);
					}
					else //Singles Only
					{
						if (GetBaseMoveTarget(instructedMove, bankDef) & (MOVE_TARGET_SELECTED
																		| MOVE_TARGET_DEPENDS
																		| MOVE_TARGET_RANDOM
																		| MOVE_TARGET_BOTH
																		| MOVE_TARGET_ALL
																		| MOVE_TARGET_OPPONENTS_FIELD)
						&& instructedMove != MOVE_MINDBLOWN && instructedMove != MOVE_STEELBEAM)
							DECREASE_VIABILITY(10); //Don't force the enemy to attack you again unless it can kill itself with Mind Blown
						else if (instructedMove != MOVE_MINDBLOWN)
							DECREASE_VIABILITY(5); //Do something better
					}
					break;

				case MOVE_QUASH:
					if (!IS_DOUBLE_BATTLE
					|| !MoveWouldHitFirst(move, bankAtk, bankDef)
					||  PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					break;

				default: //After You
					if (!TARGETING_PARTNER
					|| !IS_DOUBLE_BATTLE
					|| !MoveWouldHitFirst(move, bankAtk, bankDef)
					||  PARTNER_MOVE_IS_SAME)
						DECREASE_VIABILITY(10);
					break;
			}
			break;

		case EFFECT_SUCKER_PUNCH: ;
			//TODO: MAKE SURE LOGIC IS ALSO HANDLED IN AI BEST MOVE CALC
			//		If AI is dumb AI or semi-smart use regular logic
			//		If AI hasn't used Sucker Punch yet, regular logic
			//		If Bank is controlled by Player use regular logic
			//		If AI has revealed Sucker Punch (maybe check PP?)
			//			If foe can use a status move
			//				50% chance to pick Sucker Punch
			if (predictedMove != MOVE_NONE)
			{
				if (SPLIT(predictedMove) == SPLIT_STATUS
				|| !MoveWouldHitFirst(move, bankAtk, bankDef))
				{
					DECREASE_VIABILITY(10);
					break;
				}
			}
			else if ( Random() % 2 == 0) {
				DECREASE_VIABILITY(10);
			}

			//If the foe has move prediction, assume damage move for now.
			goto AI_STANDARD_DAMAGE;

		case EFFECT_TEAM_EFFECTS:
			switch (move) {
				case MOVE_TAILWIND:
					if (BankHasTailwind(bankAtk)
					||  PARTNER_MOVE_IS_TAILWIND_TRICKROOM
					||  (IsTrickRoomActive() && gNewBS->TrickRoomTimer != 1)) //Trick Room active and not ending this turn
						DECREASE_VIABILITY(10);
					break;

				case MOVE_LUCKYCHANT:
					if (gNewBS->LuckyChantTimers[SIDE(bankAtk)] != 0
					||  PARTNER_MOVE_IS_SAME_NO_TARGET)
						DECREASE_VIABILITY(10);
					break;

				case MOVE_MAGNETRISE:
					if (IsGravityActive()
					|| gNewBS->MagnetRiseTimers[bankAtk] != 0
					|| data->atkItemEffect == ITEM_EFFECT_IRON_BALL
					|| data->atkStatus3 & (STATUS3_ROOTED | STATUS3_LEVITATING | STATUS3_SMACKED_DOWN)
					|| CheckGrounding(bankAtk) == IN_AIR)
						DECREASE_VIABILITY(10);
					break;
			}
			break;

		case EFFECT_CAMOUFLAGE:
			if (IsOfType(bankAtk, GetCamouflageType()))
				DECREASE_VIABILITY(10);
			break;

		case EFFECT_LASTRESORT_SKYDROP:
			switch (move) {
				case MOVE_LASTRESORT:
					if (!CanUseLastResort(bankAtk))
						DECREASE_VIABILITY(10);
					else
						goto AI_STANDARD_DAMAGE;
					break;

			default: //Sky Drop
				if (WillFaintFromWeatherSoon(bankAtk)
				||  MoveBlockedBySubstitute(move, bankAtk, bankDef)
				||  GetActualSpeciesWeight(data->defSpecies, data->defAbility, data->defItemEffect, bankDef, TRUE) >= 2000) //200.0 kg
					DECREASE_VIABILITY(10);
				else
					goto AI_STANDARD_DAMAGE;
			}
			break;

		case EFFECT_DAMAGE_SET_TERRAIN:
			if (move == MOVE_STEELROLLER && gTerrainType == 0)
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		case EFFECT_POLTERGEIST:
			if (WillPoltergeistFail(data->defItem, data->defAbility))
				DECREASE_VIABILITY(10);
			else
				goto AI_STANDARD_DAMAGE;
			break;

		default:
		AI_STANDARD_DAMAGE: ;
			if (moveSplit != SPLIT_STATUS && !TARGETING_PARTNER)
			{
				if (AI_SpecialTypeCalc(move, bankAtk, bankDef) & (MOVE_RESULT_NO_EFFECT | MOVE_RESULT_MISSED))
					DECREASE_VIABILITY(15);
			}
			break;
	} //Move effects switch

	if (IS_DOUBLE_BATTLE
	&&  partnerMove != MOVE_NONE
	&&  gBattleMoves[partnerMove].effect == EFFECT_HELPING_HAND
	&&  moveSplit == SPLIT_STATUS)
		DECREASE_VIABILITY(10); //Don't use a status move if partner wants to help

	//Put Acc check here

	if (viability < 0)
		return 0;

	return viability;
}

static void AI_Flee(void)
{
	AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_FLEE | AI_ACTION_DO_NOT_ATTACK);
}

u8 AIScript_Roaming(const u8 bankAtk, const unusedArg u8 bankDef, const unusedArg u16 move, const u8 originalViability, unusedArg struct AIScript* data)
{
	u8 atkAbility = ABILITY(bankAtk);
	u8 atkItemEffect = ITEM_EFFECT(bankAtk);

	if (atkAbility == ABILITY_RUNAWAY
	||  atkItemEffect == ITEM_EFFECT_CAN_ALWAYS_RUN
	||  IsOfType(bankAtk, TYPE_GHOST))
	{
		AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_FLEE | AI_ACTION_DO_NOT_ATTACK);
	}
	else if (IsTrapped(bankAtk, FALSE))
	{
		return originalViability;
	}

	AI_Flee();
	return originalViability;
}

static void AI_Watch(void)
{
	AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_WATCH | AI_ACTION_DO_NOT_ATTACK);
}

u8 AIScript_Safari(const unusedArg u8 bankAtk, const unusedArg u8 bankDef, const unusedArg u16 move, const u8 originalViability, unusedArg struct AIScript* data)
{
	u8 safariFleeRate = gBattleStruct->safariEscapeFactor * 5; // Safari flee rate, from 0-20.

	if ((u8) (Random() % 100) < safariFleeRate)
	{
		AI_Flee();
	}
	else
	{
		AI_Watch();
	}

	return originalViability;
}

u8 AIScript_FirstBattle(const unusedArg u8 bankAtk, const unusedArg u8 bankDef, const unusedArg u16 move, const u8 originalViability, unusedArg struct AIScript* data)
{
	s16 viability = originalViability;
	if (GetHealthPercentage(bankDef) < 20 &&  SPLIT(move) != SPLIT_STATUS)
		DECREASE_VIABILITY(20); //Only use status moves to let the player win

	if (viability < 0)
		return 0;

	return viability;
}

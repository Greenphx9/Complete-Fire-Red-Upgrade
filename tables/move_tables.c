#include "../../src/defines.h"
#include "../../include/constants/moves.h"
#include "../../include/new/move_tables.h"

const struct SpecialMoveFlags gSpecialMoveFlags[MOVES_COUNT] =
{
#ifdef MOVE_FLY
	[MOVE_FLY] =
	{
		.gGravityBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_JUMPKICK
	[MOVE_JUMPKICK] =
	{
		.gGravityBannedMoves = TRUE,
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_HIGHJUMPKICK
	[MOVE_HIGHJUMPKICK] =
	{
		.gGravityBannedMoves = TRUE,
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_SPLASH
	[MOVE_SPLASH] =
	{
		.gGravityBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_BOUNCE
	[MOVE_BOUNCE] =
	{
		.gGravityBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_MAGNETRISE
	[MOVE_MAGNETRISE] =
	{
		.gGravityBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_TELEKINESIS
	[MOVE_TELEKINESIS] =
	{
		.gGravityBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SKYDROP
	[MOVE_SKYDROP] =
	{
		.gGravityBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gDynamaxBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_FLYINGPRESS
	[MOVE_FLYINGPRESS] =
	{
		.gGravityBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
	},
#endif
#ifdef MOVE_STRUGGLE
	[MOVE_STRUGGLE] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gMimicBannedMoves = TRUE,
		.gTypeChangeExceptionMoves = TRUE,
		.gRandomizerBanTable = TRUE,
	},
#endif
#ifdef MOVE_BELCH
	[MOVE_BELCH] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_CHATTER
	[MOVE_CHATTER] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_COVET
	[MOVE_COVET] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_THIEF
	[MOVE_THIEF] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_FOCUSPUNCH
	[MOVE_FOCUSPUNCH] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_SHELLTRAP
	[MOVE_SHELLTRAP] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_BEAKBLAST
	[MOVE_BEAKBLAST] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
		.gBallBombMoves = TRUE,
		.gStrongBeakBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_COUNTER
	[MOVE_COUNTER] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_MIRRORCOAT
	[MOVE_MIRRORCOAT] =
	{
		.gMeFirstBannedMoves = TRUE,
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_METALBURST
	[MOVE_METALBURST] =
	{
		.gMeFirstBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_ASSIST
	[MOVE_ASSIST] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gMovesThatCallOtherMoves = TRUE,
	},
#endif
#ifdef MOVE_BANEFULBUNKER
	[MOVE_BANEFULBUNKER] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_BESTOW
	[MOVE_BESTOW] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_CELEBRATE
	[MOVE_CELEBRATE] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_CIRCLETHROW
	[MOVE_CIRCLETHROW] =
	{
		.gCopycatBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_COPYCAT
	[MOVE_COPYCAT] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gMovesThatCallOtherMoves = TRUE,
	},
#endif
#ifdef MOVE_DESTINYBOND
	[MOVE_DESTINYBOND] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_DETECT
	[MOVE_DETECT] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONTAIL
	[MOVE_DRAGONTAIL] =
	{
		.gCopycatBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gTailMoves = TRUE,
	},
#endif
#ifdef MOVE_ENDURE
	[MOVE_ENDURE] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_FEINT
	[MOVE_FEINT] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gMovesThatLiftProtectTable = TRUE,
	},
#endif
#ifdef MOVE_FOLLOWME
	[MOVE_FOLLOWME] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_HELPINGHAND
	[MOVE_HELPINGHAND] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_HOLDHANDS
	[MOVE_HOLDHANDS] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_KINGSSHIELD
	[MOVE_KINGSSHIELD] =
	{
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_MATBLOCK
	[MOVE_MATBLOCK] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_MEFIRST
	[MOVE_MEFIRST] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
		.gMovesThatCallOtherMoves = TRUE,
	},
#endif
#ifdef MOVE_METRONOME
	[MOVE_METRONOME] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gMimicBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gMovesThatCallOtherMoves = TRUE,
	},
#endif
#ifdef MOVE_MIMIC
	[MOVE_MIMIC] =
	{
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gMimicBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_MIRRORMOVE
	[MOVE_MIRRORMOVE] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gMovesThatCallOtherMoves = TRUE,
	},
#endif
#ifdef MOVE_PROTECT
	[MOVE_PROTECT] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_RAGEPOWDER
	[MOVE_RAGEPOWDER] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gPowderMoves = TRUE,
	},
#endif
#ifdef MOVE_ROAR
	[MOVE_ROAR] =
	{
		.gCopycatBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gDynamaxBannedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_SKETCH
	[MOVE_SKETCH] =
	{
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gMimicBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_SLEEPTALK
	[MOVE_SLEEPTALK] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gMovesThatCallOtherMoves = TRUE,
	},
#endif
#ifdef MOVE_SNATCH
	[MOVE_SNATCH] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_SPIKYSHIELD
	[MOVE_SPIKYSHIELD] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_SPOTLIGHT
	[MOVE_SPOTLIGHT] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SWITCHEROO
	[MOVE_SWITCHEROO] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_TRANSFORM
	[MOVE_TRANSFORM] =
	{
		.gCopycatBannedMoves = TRUE,
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_TRICK
	[MOVE_TRICK] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_WHIRLWIND
	[MOVE_WHIRLWIND] =
	{
		.gCopycatBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gDynamaxBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_OBSTRUCT
	[MOVE_OBSTRUCT] =
	{
		.gCopycatBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_INSTRUCT
	[MOVE_INSTRUCT] =
	{
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gRaidBattleBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_BIDE
	[MOVE_BIDE] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DIG
	[MOVE_DIG] =
	{
		.gInstructBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DIVE
	[MOVE_DIVE] =
	{
		.gInstructBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_FREEZESHOCK
	[MOVE_FREEZESHOCK] =
	{
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_GEOMANCY
	[MOVE_GEOMANCY] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_ICEBURN
	[MOVE_ICEBURN] =
	{
		.gInstructBannedMoves = TRUE,
		.gMetronomeBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_METEORBEAM
	[MOVE_METEORBEAM] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_PHANTOMFORCE
	[MOVE_PHANTOMFORCE] =
	{
		.gInstructBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gMovesThatLiftProtectTable = TRUE,
	},
#endif
#ifdef MOVE_RAZORWIND
	[MOVE_RAZORWIND] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_SHADOWFORCE
	[MOVE_SHADOWFORCE] =
	{
		.gInstructBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gMovesThatLiftProtectTable = TRUE,
	},
#endif
#ifdef MOVE_SKULLBASH
	[MOVE_SKULLBASH] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SKYATTACK
	[MOVE_SKYATTACK] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_SOLARBEAM
	[MOVE_SOLARBEAM] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SOLARBLADE
	[MOVE_SOLARBLADE] =
	{
		.gInstructBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SNORE
	[MOVE_SNORE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gSoundMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_NATUREPOWER
	[MOVE_NATUREPOWER] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gAssistBannedMoves = TRUE,
		.gMovesThatCallOtherMoves = TRUE,
	},
#endif
#ifdef MOVE_WIDEGUARD
	[MOVE_WIDEGUARD] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_AFTERYOU
	[MOVE_AFTERYOU] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_QUICKGUARD
	[MOVE_QUICKGUARD] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_QUASH
	[MOVE_QUASH] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_TECHNOBLAST
	[MOVE_TECHNOBLAST] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_RELICSONG
	[MOVE_RELICSONG] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_SECRETSWORD
	[MOVE_SECRETSWORD] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSpecialAttackPhysicalDamageMoves = TRUE,
	},
#endif
#ifdef MOVE_SNARL
	[MOVE_SNARL] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_VCREATE
	[MOVE_VCREATE] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_CRAFTYSHIELD
	[MOVE_CRAFTYSHIELD] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DIAMONDSTORM
	[MOVE_DIAMONDSTORM] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_STEAMERUPTION
	[MOVE_STEAMERUPTION] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gMovesCanUnfreezeAttacker = TRUE,
		.gMovesCanUnfreezeTarget = TRUE,
	},
#endif
#ifdef MOVE_HYPERSPACEHOLE
	[MOVE_HYPERSPACEHOLE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
		.gMovesThatLiftProtectTable = TRUE,
	},
#endif
#ifdef MOVE_THOUSANDARROWS
	[MOVE_THOUSANDARROWS] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
		.gIgnoreInAirMoves = TRUE,
	},
#endif
#ifdef MOVE_THOUSANDWAVES
	[MOVE_THOUSANDWAVES] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_LIGHTOFRUIN
	[MOVE_LIGHTOFRUIN] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gPercent50RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_ORIGINPULSE
	[MOVE_ORIGINPULSE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gPulseAuraMoves = TRUE,
	},
#endif
#ifdef MOVE_PRECIPICEBLADES
	[MOVE_PRECIPICEBLADES] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONASCENT
	[MOVE_DRAGONASCENT] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_HYPERSPACEFURY
	[MOVE_HYPERSPACEFURY] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
		.gMovesThatLiftProtectTable = TRUE,
	},
#endif
#ifdef MOVE_FLEURCANNON
	[MOVE_FLEURCANNON] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SPECTRALTHIEF
	[MOVE_SPECTRALTHIEF] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_SUNSTEELSTRIKE
	[MOVE_SUNSTEELSTRIKE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_MOONGEISTBEAM
	[MOVE_MOONGEISTBEAM] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_NATURESMADNESS
	[MOVE_NATURESMADNESS] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_MINDBLOWN
	[MOVE_MINDBLOWN] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
		.gHalfMaxHealthRecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_PLASMAFISTS
	[MOVE_PLASMAFISTS] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_PHOTONGEYSER
	[MOVE_PHOTONGEYSER] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gMoldBreakerMoves = TRUE,
		.gMovesThatChangePhysicality = TRUE,
	},
#endif
#ifdef MOVE_DOUBLEIRONBASH
	[MOVE_DOUBLEIRONBASH] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_DYNAMAXCANNON
	[MOVE_DYNAMAXCANNON] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSleepTalkBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_CLANGOROUSSOUL
	[MOVE_CLANGOROUSSOUL] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gDanceMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_BODYPRESS
	[MOVE_BODYPRESS] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DECORATE
	[MOVE_DECORATE] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DRUMBEATING
	[MOVE_DRUMBEATING] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSkyBattleBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SNAPTRAP
	[MOVE_SNAPTRAP] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_PYROBALL
	[MOVE_PYROBALL] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
		.gMovesCanUnfreezeAttacker = TRUE,
	},
#endif
#ifdef MOVE_BEHEMOTHBLADE
	[MOVE_BEHEMOTHBLADE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BEHEMOTHBASH
	[MOVE_BEHEMOTHBASH] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_AURAWHEEL
	[MOVE_AURAWHEEL] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_BREAKINGSWIPE
	[MOVE_BREAKINGSWIPE] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_BRANCHPOKE
	[MOVE_BRANCHPOKE] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_OVERDRIVE
	[MOVE_OVERDRIVE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_APPLEACID
	[MOVE_APPLEACID] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_GRAVAPPLE
	[MOVE_GRAVAPPLE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SPIRITBREAK
	[MOVE_SPIRITBREAK] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_STRANGESTEAM
	[MOVE_STRANGESTEAM] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LIFEDEW
	[MOVE_LIFEDEW] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_FALSESURRENDER
	[MOVE_FALSESURRENDER] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_METEORASSAULT
	[MOVE_METEORASSAULT] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_ETERNABEAM
	[MOVE_ETERNABEAM] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_STEELBEAM
	[MOVE_STEELBEAM] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
		.gHalfMaxHealthRecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_JUNGLEHEALING
	[MOVE_JUNGLEHEALING] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
		.gRandomizerBanTable = TRUE,
	},
#endif
#ifdef MOVE_WICKEDBLOW
	[MOVE_WICKEDBLOW] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gPunchingMoves = TRUE,
		.gAlwaysCriticalMoves = TRUE,
	},
#endif
#ifdef MOVE_SURGINGSTRIKES
	[MOVE_SURGINGSTRIKES] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gPunchingMoves = TRUE,
		.gAlwaysCriticalMoves = TRUE,
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_FREEZINGGLARE
	[MOVE_FREEZINGGLARE] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_THUNDEROUSKICK
	[MOVE_THUNDEROUSKICK] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_FIERYWRATH
	[MOVE_FIERYWRATH] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_EERIESPELL
	[MOVE_EERIESPELL] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_THUNDERCAGE
	[MOVE_THUNDERCAGE] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONENERGY
	[MOVE_DRAGONENERGY] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_ASTRALBARRAGE
	[MOVE_ASTRALBARRAGE] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_GLACIALLANCE
	[MOVE_GLACIALLANCE] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_DARKVOID
	[MOVE_DARKVOID] =
	{
		.gMetronomeBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_CHLOROBLAST
	[MOVE_CHLOROBLAST] =
	{
		.gMetronomeBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
		.gPercent25RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_UPROAR
	[MOVE_UPROAR] =
	{
		.gSleepTalkBannedMoves = TRUE,
		.gParentalBondBannedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_FLING
	[MOVE_FLING] =
	{
		.gParentalBondBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SELFDESTRUCT
	[MOVE_SELFDESTRUCT] =
	{
		.gParentalBondBannedMoves = TRUE,
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_EXPLOSION
	[MOVE_EXPLOSION] =
	{
		.gParentalBondBannedMoves = TRUE,
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_MISTYEXPLOSION
	[MOVE_MISTYEXPLOSION] =
	{
		.gParentalBondBannedMoves = TRUE,
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_FINALGAMBIT
	[MOVE_FINALGAMBIT] =
	{
		.gParentalBondBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_ENDEAVOR
	[MOVE_ENDEAVOR] =
	{
		.gParentalBondBannedMoves = TRUE,
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_ICEBALL
	[MOVE_ICEBALL] =
	{
		.gParentalBondBannedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_ROLLOUT
	[MOVE_ROLLOUT] =
	{
		.gParentalBondBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SLAM
	[MOVE_SLAM] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_STOMP
	[MOVE_STOMP] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gKickingMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_BODYSLAM
	[MOVE_BODYSLAM] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
	},
#endif
#ifdef MOVE_SURF
	[MOVE_SURF] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gIgnoreUnderwaterMoves = TRUE,
	},
#endif
#ifdef MOVE_SEISMICTOSS
	[MOVE_SEISMICTOSS] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_EARTHQUAKE
	[MOVE_EARTHQUAKE] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gIgnoreUndergoundMoves = TRUE,
	},
#endif
#ifdef MOVE_FISSURE
	[MOVE_FISSURE] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gIgnoreUndergoundMoves = TRUE,
	},
#endif
#ifdef MOVE_SUBSTITUTE
	[MOVE_SUBSTITUTE] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SPIKES
	[MOVE_SPIKES] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_MAGNITUDE
	[MOVE_MAGNITUDE] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gIgnoreUndergoundMoves = TRUE,
	},
#endif
#ifdef MOVE_INGRAIN
	[MOVE_INGRAIN] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_MUDSPORT
	[MOVE_MUDSPORT] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_MUDDYWATER
	[MOVE_MUDDYWATER] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FRENZYPLANT
	[MOVE_FRENZYPLANT] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_WATERSPORT
	[MOVE_WATERSPORT] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_GRAVITY
	[MOVE_GRAVITY] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSpecialWholeFieldMoves = TRUE,
	},
#endif
#ifdef MOVE_TOXICSPIKES
	[MOVE_TOXICSPIKES] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_EARTHPOWER
	[MOVE_EARTHPOWER] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_GRASSKNOT
	[MOVE_GRASSKNOT] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gDynamaxBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_SMACKDOWN
	[MOVE_SMACKDOWN] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gIgnoreInAirMoves = TRUE,
	},
#endif
#ifdef MOVE_HEAVYSLAM
	[MOVE_HEAVYSLAM] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gDynamaxBannedMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
	},
#endif
#ifdef MOVE_WATERPLEDGE
	[MOVE_WATERPLEDGE] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_FIREPLEDGE
	[MOVE_FIREPLEDGE] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_GRASSPLEDGE
	[MOVE_GRASSPLEDGE] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_BULLDOZE
	[MOVE_BULLDOZE] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_HEATCRASH
	[MOVE_HEATCRASH] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gDynamaxBannedMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
	},
#endif
#ifdef MOVE_ROTOTILLER
	[MOVE_ROTOTILLER] =
	{
		.gSkyBattleBannedMoves = TRUE,
		.gSpecialWholeFieldMoves = TRUE,
	},
#endif
#ifdef MOVE_GRASSYTERRAIN
	[MOVE_GRASSYTERRAIN] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_MISTYTERRAIN
	[MOVE_MISTYTERRAIN] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_ELECTRICTERRAIN
	[MOVE_ELECTRICTERRAIN] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_LANDSWRATH
	[MOVE_LANDSWRATH] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYCHICTERRAIN
	[MOVE_PSYCHICTERRAIN] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_HEADLONGRUSH
	[MOVE_HEADLONGRUSH] =
	{
		.gSkyBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_BUGBITE
	[MOVE_BUGBITE] =
	{
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_INCINERATE
	[MOVE_INCINERATE] =
	{
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_KNOCKOFF
	[MOVE_KNOCKOFF] =
	{
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_PERISHSONG
	[MOVE_PERISHSONG] =
	{
		.gRaidBattleBannedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_PLUCK
	[MOVE_PLUCK] =
	{
		.gRaidBattleBannedMoves = TRUE,
		.gStrongBeakBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SUPERFANG
	[MOVE_SUPERFANG] =
	{
		.gRaidBattleBannedMoves = TRUE,
	},
#endif
#ifdef MOVE_MEMENTO
	[MOVE_MEMENTO] =
	{
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_HEALINGWISH
	[MOVE_HEALINGWISH] =
	{
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_LUNARDANCE
	[MOVE_LUNARDANCE] =
	{
		.gRaidBattleBannedRaidMonMoves = TRUE,
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_PAINSPLIT
	[MOVE_PAINSPLIT] =
	{
		.gRaidBattleBannedRaidMonMoves = TRUE,
	},
#endif
#ifdef MOVE_LOWKICK
	[MOVE_LOWKICK] =
	{
		.gDynamaxBannedMoves = TRUE,
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_ACID
	[MOVE_ACID] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ACIDSPRAY
	[MOVE_ACIDSPRAY] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_AIRSLASH
	[MOVE_AIRSLASH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ANCHORSHOT
	[MOVE_ANCHORSHOT] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ANCIENTPOWER
	[MOVE_ANCIENTPOWER] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ASTONISH
	[MOVE_ASTONISH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_AURORABEAM
	[MOVE_AURORABEAM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BARBBARRAGE
	[MOVE_BARBBARRAGE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BITE
	[MOVE_BITE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBitingMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_BITTERMALICE
	[MOVE_BITTERMALICE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BLAZEKICK
	[MOVE_BLAZEKICK] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gKickingMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_BLEAKWINDSTORM
	[MOVE_BLEAKWINDSTORM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BLIZZARD
	[MOVE_BLIZZARD] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BLUEFLARE
	[MOVE_BLUEFLARE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BOLTSTRIKE
	[MOVE_BOLTSTRIKE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BONECLUB
	[MOVE_BONECLUB] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_BUBBLE
	[MOVE_BUBBLE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BUBBLEBEAM
	[MOVE_BUBBLEBEAM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_BUGBUZZ
	[MOVE_BUGBUZZ] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_BURNINGJEALOUSY
	[MOVE_BURNINGJEALOUSY] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CEASELESSEDGE
	[MOVE_CEASELESSEDGE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CHARGEBEAM
	[MOVE_CHARGEBEAM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CLANGOROUS_SOULBLAZE
	[MOVE_CLANGOROUS_SOULBLAZE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_CONFUSION
	[MOVE_CONFUSION] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CONSTRICT
	[MOVE_CONSTRICT] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CROSSPOISON
	[MOVE_CROSSPOISON] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CRUNCH
	[MOVE_CRUNCH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBitingMoves = TRUE,
	},
#endif
#ifdef MOVE_CRUSHCLAW
	[MOVE_CRUSHCLAW] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_DARKPULSE
	[MOVE_DARKPULSE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPulseAuraMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_DIRECLAW
	[MOVE_DIRECLAW] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_DISCHARGE
	[MOVE_DISCHARGE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_DIZZYPUNCH
	[MOVE_DIZZYPUNCH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONBREATH
	[MOVE_DRAGONBREATH] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONRUSH
	[MOVE_DRAGONRUSH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_DYNAMICPUNCH
	[MOVE_DYNAMICPUNCH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_ELECTROWEB
	[MOVE_ELECTROWEB] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_EMBER
	[MOVE_EMBER] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ENERGYBALL
	[MOVE_ENERGYBALL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_EXTRASENSORY
	[MOVE_EXTRASENSORY] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_FAKEOUT
	[MOVE_FAKEOUT] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_FIERYDANCE
	[MOVE_FIERYDANCE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_FIREBLAST
	[MOVE_FIREBLAST] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FIREFANG
	[MOVE_FIREFANG] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBitingMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_FIRELASH
	[MOVE_FIRELASH] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FIREPUNCH
	[MOVE_FIREPUNCH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_FLAMECHARGE
	[MOVE_FLAMECHARGE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FLAMEWHEEL
	[MOVE_FLAMEWHEEL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gMovesCanUnfreezeAttacker = TRUE,
	},
#endif
#ifdef MOVE_FLAMETHROWER
	[MOVE_FLAMETHROWER] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FLAREBLITZ
	[MOVE_FLAREBLITZ] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gMovesCanUnfreezeAttacker = TRUE,
		.gPercent33RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_FLASHCANNON
	[MOVE_FLASHCANNON] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FOCUSBLAST
	[MOVE_FOCUSBLAST] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_FORCEPALM
	[MOVE_FORCEPALM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FREEZEDRY
	[MOVE_FREEZEDRY] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_GENESIS_SUPERNOVA
	[MOVE_GENESIS_SUPERNOVA] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_GLACIATE
	[MOVE_GLACIATE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gMovesThatChangePhysicality = TRUE,
	},
#endif
#ifdef MOVE_GUNKSHOT
	[MOVE_GUNKSHOT] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_HEADBUTT
	[MOVE_HEADBUTT] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_HEARTSTAMP
	[MOVE_HEARTSTAMP] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_HEATWAVE
	[MOVE_HEATWAVE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_HURRICANE
	[MOVE_HURRICANE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gIgnoreInAirMoves = TRUE,
		.gAlwaysHitInRainMoves = TRUE,
	},
#endif
#ifdef MOVE_HYPERFANG
	[MOVE_HYPERFANG] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBitingMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_ICEBEAM
	[MOVE_ICEBEAM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ICEFANG
	[MOVE_ICEFANG] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBitingMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_ICEPUNCH
	[MOVE_ICEPUNCH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_ICICLECRASH
	[MOVE_ICICLECRASH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_ICYWIND
	[MOVE_ICYWIND] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_INFERNALPARADE
	[MOVE_INFERNALPARADE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_INFERNO
	[MOVE_INFERNO] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_IRONHEAD
	[MOVE_IRONHEAD] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_IRONTAIL
	[MOVE_IRONTAIL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gTailMoves = TRUE,
	},
#endif
#ifdef MOVE_LAVAPLUME
	[MOVE_LAVAPLUME] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LEAFTORNADO
	[MOVE_LEAFTORNADO] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LICK
	[MOVE_LICK] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LIQUIDATION
	[MOVE_LIQUIDATION] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LOWSWEEP
	[MOVE_LOWSWEEP] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LUNGE
	[MOVE_LUNGE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LUSTERPURGE
	[MOVE_LUSTERPURGE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_METALCLAW
	[MOVE_METALCLAW] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_METEORMASH
	[MOVE_METEORMASH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_MIRRORSHOT
	[MOVE_MIRRORSHOT] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_MISTBALL
	[MOVE_MISTBALL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_MOONBLAST
	[MOVE_MOONBLAST] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_MOUNTAINGALE
	[MOVE_MOUNTAINGALE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_MUDBOMB
	[MOVE_MUDBOMB] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_MUDSHOT
	[MOVE_MUDSHOT] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_MUDSLAP
	[MOVE_MUDSLAP] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_MYSTICALFIRE
	[MOVE_MYSTICALFIRE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_NEEDLEARM
	[MOVE_NEEDLEARM] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_NIGHTDAZE
	[MOVE_NIGHTDAZE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_NUZZLE
	[MOVE_NUZZLE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_OCTAZOOKA
	[MOVE_OCTAZOOKA] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_OMINOUSWIND
	[MOVE_OMINOUSWIND] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_PLAYROUGH
	[MOVE_PLAYROUGH] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_POISONFANG
	[MOVE_POISONFANG] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBitingMoves = TRUE,
	},
#endif
#ifdef MOVE_POISONJAB
	[MOVE_POISONJAB] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_POISONSTING
	[MOVE_POISONSTING] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_POISONTAIL
	[MOVE_POISONTAIL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gTailMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_POWDERSNOW
	[MOVE_POWDERSNOW] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_POWERUPPUNCH
	[MOVE_POWERUPPUNCH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYBEAM
	[MOVE_PSYBEAM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYCHIC
	[MOVE_PSYCHIC] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYSHIELDBASH
	[MOVE_PSYSHIELDBASH] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_RAZORSHELL
	[MOVE_RAZORSHELL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ROCKCLIMB
	[MOVE_ROCKCLIMB] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ROCKSLIDE
	[MOVE_ROCKSLIDE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_ROCKSMASH
	[MOVE_ROCKSMASH] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ROCKTOMB
	[MOVE_ROCKTOMB] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ROLLINGKICK
	[MOVE_ROLLINGKICK] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gKickingMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_SACREDFIRE
	[MOVE_SACREDFIRE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gMovesCanUnfreezeAttacker = TRUE,
	},
#endif
#ifdef MOVE_SANDSEARSTORM
	[MOVE_SANDSEARSTORM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SCALD
	[MOVE_SCALD] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gMovesCanUnfreezeAttacker = TRUE,
		.gMovesCanUnfreezeTarget = TRUE,
	},
#endif
#ifdef MOVE_SCORCHINGSANDS
	[MOVE_SCORCHINGSANDS] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gMovesCanUnfreezeAttacker = TRUE,
		.gMovesCanUnfreezeTarget = TRUE,
	},
#endif
#ifdef MOVE_SEARINGSHOT
	[MOVE_SEARINGSHOT] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_SECRETPOWER
	[MOVE_SECRETPOWER] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SEEDFLARE
	[MOVE_SEEDFLARE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SHADOWBALL
	[MOVE_SHADOWBALL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_SHADOWBONE
	[MOVE_SHADOWBONE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SHELLSIDEARM
	[MOVE_SHELLSIDEARM] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gRandomizerBanTable = TRUE,
	},
#endif
#ifdef MOVE_SIGNALBEAM
	[MOVE_SIGNALBEAM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SILVERWIND
	[MOVE_SILVERWIND] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SKITTERSMACK
	[MOVE_SKITTERSMACK] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SLUDGE
	[MOVE_SLUDGE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SLUDGEBOMB
	[MOVE_SLUDGEBOMB] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_SLUDGEWAVE
	[MOVE_SLUDGEWAVE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SMOG
	[MOVE_SMOG] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SPARK
	[MOVE_SPARK] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SPARKLINGARIA
	[MOVE_SPARKLINGARIA] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_SPIRITSHACKLE
	[MOVE_SPIRITSHACKLE] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SPRINGTIDESTORM
	[MOVE_SPRINGTIDESTORM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_STEAMROLLER
	[MOVE_STEAMROLLER] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gAlwaysHitWhenMinimizedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_STEELWING
	[MOVE_STEELWING] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_STOKED_SPARKSURFER
	[MOVE_STOKED_SPARKSURFER] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_STONEAXE
	[MOVE_STONEAXE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_STRUGGLEBUG
	[MOVE_STRUGGLEBUG] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_THROATCHOP
	[MOVE_THROATCHOP] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_THUNDER
	[MOVE_THUNDER] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gIgnoreInAirMoves = TRUE,
		.gAlwaysHitInRainMoves = TRUE,
	},
#endif
#ifdef MOVE_THUNDERBOLT
	[MOVE_THUNDERBOLT] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_THUNDERFANG
	[MOVE_THUNDERFANG] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBitingMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_THUNDERPUNCH
	[MOVE_THUNDERPUNCH] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_THUNDERSHOCK
	[MOVE_THUNDERSHOCK] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_TRIATTACK
	[MOVE_TRIATTACK] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_TRIPLEARROWS
	[MOVE_TRIPLEARROWS] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_TROPKICK
	[MOVE_TROPKICK] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_TWINEEDLE
	[MOVE_TWINEEDLE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_TWISTER
	[MOVE_TWISTER] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
		.gIgnoreInAirMoves = TRUE,
	},
#endif
#ifdef MOVE_VOLTTACKLE
	[MOVE_VOLTTACKLE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPercent33RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_WATERPULSE
	[MOVE_WATERPULSE] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gPulseAuraMoves = TRUE,
	},
#endif
#ifdef MOVE_WATERFALL
	[MOVE_WATERFALL] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_WILDBOLTSTORM
	[MOVE_WILDBOLTSTORM] =
	{
		.gSheerForceBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_ZAPCANNON
	[MOVE_ZAPCANNON] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_ZENHEADBUTT
	[MOVE_ZENHEADBUTT] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_ZINGZAP
	[MOVE_ZINGZAP] =
	{
		.gSheerForceBoostedMoves = TRUE,
		.gFlinchChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_COMETPUNCH
	[MOVE_COMETPUNCH] =
	{
		.gPunchingMoves = TRUE,
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_MEGAPUNCH
	[MOVE_MEGAPUNCH] =
	{
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_MACHPUNCH
	[MOVE_MACHPUNCH] =
	{
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_SHADOWPUNCH
	[MOVE_SHADOWPUNCH] =
	{
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_SKYUPPERCUT
	[MOVE_SKYUPPERCUT] =
	{
		.gPunchingMoves = TRUE,
		.gIgnoreInAirMoves = TRUE,
	},
#endif
#ifdef MOVE_HAMMERARM
	[MOVE_HAMMERARM] =
	{
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAINPUNCH
	[MOVE_DRAINPUNCH] =
	{
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_BULLETPUNCH
	[MOVE_BULLETPUNCH] =
	{
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_ICEHAMMER
	[MOVE_ICEHAMMER] =
	{
		.gPunchingMoves = TRUE,
	},
#endif
#ifdef MOVE_DOUBLEKICK
	[MOVE_DOUBLEKICK] =
	{
		.gKickingMoves = TRUE,
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_MEGAKICK
	[MOVE_MEGAKICK] =
	{
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_TRIPLEAXEL
	[MOVE_TRIPLEAXEL] =
	{
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_TRIPLEKICK
	[MOVE_TRIPLEKICK] =
	{
		.gKickingMoves = TRUE,
	},
#endif
#ifdef MOVE_AURASPHERE
	[MOVE_AURASPHERE] =
	{
		.gPulseAuraMoves = TRUE,
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONPULSE
	[MOVE_DRAGONPULSE] =
	{
		.gPulseAuraMoves = TRUE,
	},
#endif
#ifdef MOVE_HEALPULSE
	[MOVE_HEALPULSE] =
	{
		.gPulseAuraMoves = TRUE,
	},
#endif
#ifdef MOVE_TERRAINPULSE
	[MOVE_TERRAINPULSE] =
	{
		.gPulseAuraMoves = TRUE,
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYCHICFANGS
	[MOVE_PSYCHICFANGS] =
	{
		.gBitingMoves = TRUE,
	},
#endif
#ifdef MOVE_JAWLOCK
	[MOVE_JAWLOCK] =
	{
		.gBitingMoves = TRUE,
	},
#endif
#ifdef MOVE_FISHIOUSREND
	[MOVE_FISHIOUSREND] =
	{
		.gBitingMoves = TRUE,
	},
#endif
#ifdef MOVE_LEECHFANG
	[MOVE_LEECHFANG] =
	{
		.gBitingMoves = TRUE,
	},
#endif
#ifdef MOVE_BARRAGE
	[MOVE_BARRAGE] =
	{
		.gBallBombMoves = TRUE,
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_BULLETSEED
	[MOVE_BULLETSEED] =
	{
		.gBallBombMoves = TRUE,
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_EGGBOMB
	[MOVE_EGGBOMB] =
	{
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_ELECTROBALL
	[MOVE_ELECTROBALL] =
	{
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_GYROBALL
	[MOVE_GYROBALL] =
	{
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_MAGNETBOMB
	[MOVE_MAGNETBOMB] =
	{
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_POLLENPUFF
	[MOVE_POLLENPUFF] =
	{
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_ROCKBLAST
	[MOVE_ROCKBLAST] =
	{
		.gBallBombMoves = TRUE,
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_ROCKWRECKER
	[MOVE_ROCKWRECKER] =
	{
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_SEEDBOMB
	[MOVE_SEEDBOMB] =
	{
		.gBallBombMoves = TRUE,
	},
#endif
#ifdef MOVE_WEATHERBALL
	[MOVE_WEATHERBALL] =
	{
		.gBallBombMoves = TRUE,
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_SWORDSDANCE
	[MOVE_SWORDSDANCE] =
	{
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_PETALDANCE
	[MOVE_PETALDANCE] =
	{
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_FEATHERDANCE
	[MOVE_FEATHERDANCE] =
	{
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_TEETERDANCE
	[MOVE_TEETERDANCE] =
	{
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONDANCE
	[MOVE_DRAGONDANCE] =
	{
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_QUIVERDANCE
	[MOVE_QUIVERDANCE] =
	{
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_REVELATIONDANCE
	[MOVE_REVELATIONDANCE] =
	{
		.gDanceMoves = TRUE,
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_VICTORYDANCE
	[MOVE_VICTORYDANCE] =
	{
		.gDanceMoves = TRUE,
	},
#endif
#ifdef MOVE_COTTONSPORE
	[MOVE_COTTONSPORE] =
	{
		.gPowderMoves = TRUE,
	},
#endif
#ifdef MOVE_MAGICPOWDER
	[MOVE_MAGICPOWDER] =
	{
		.gPowderMoves = TRUE,
	},
#endif
#ifdef MOVE_POISONPOWDER
	[MOVE_POISONPOWDER] =
	{
		.gPowderMoves = TRUE,
	},
#endif
#ifdef MOVE_POWDER
	[MOVE_POWDER] =
	{
		.gPowderMoves = TRUE,
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_SLEEPPOWDER
	[MOVE_SLEEPPOWDER] =
	{
		.gPowderMoves = TRUE,
	},
#endif
#ifdef MOVE_SPORE
	[MOVE_SPORE] =
	{
		.gPowderMoves = TRUE,
	},
#endif
#ifdef MOVE_STUNSPORE
	[MOVE_STUNSPORE] =
	{
		.gPowderMoves = TRUE,
	},
#endif
#ifdef MOVE_GROWL
	[MOVE_GROWL] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_SING
	[MOVE_SING] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_SUPERSONIC
	[MOVE_SUPERSONIC] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_SCREECH
	[MOVE_SCREECH] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_HEALBELL
	[MOVE_HEALBELL] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_HYPERVOICE
	[MOVE_HYPERVOICE] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_METALSOUND
	[MOVE_METALSOUND] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_GRASSWHISTLE
	[MOVE_GRASSWHISTLE] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_HOWL
	[MOVE_HOWL] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_ROUND
	[MOVE_ROUND] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_ECHOEDVOICE
	[MOVE_ECHOEDVOICE] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_NOBLEROAR
	[MOVE_NOBLEROAR] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_DISARMINGVOICE
	[MOVE_DISARMINGVOICE] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_PARTINGSHOT
	[MOVE_PARTINGSHOT] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_BOOMBURST
	[MOVE_BOOMBURST] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_CONFIDE
	[MOVE_CONFIDE] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_CLANGINGSCALES
	[MOVE_CLANGINGSCALES] =
	{
		.gSoundMoves = TRUE,
	},
#endif
#ifdef MOVE_TAILWHIP
	[MOVE_TAILWHIP] =
	{
		.gTailMoves = TRUE,
	},
#endif
#ifdef MOVE_TAILGLOW
	[MOVE_TAILGLOW] =
	{
		.gTailMoves = TRUE,
	},
#endif
#ifdef MOVE_AQUATAIL
	[MOVE_AQUATAIL] =
	{
		.gTailMoves = TRUE,
	},
#endif
#ifdef MOVE_TAILSLAP
	[MOVE_TAILSLAP] =
	{
		.gTailMoves = TRUE,
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_DRILLPECK
	[MOVE_DRILLPECK] =
	{
		.gDrillMoves = TRUE,
		.gStrongBeakBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_HORNDRILL
	[MOVE_HORNDRILL] =
	{
		.gDrillMoves = TRUE,
	},
#endif
#ifdef MOVE_DRILLRUN
	[MOVE_DRILLRUN] =
	{
		.gDrillMoves = TRUE,
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_DISABLE
	[MOVE_DISABLE] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gAromaVeilProtectedMoves = TRUE,
	},
#endif
#ifdef MOVE_HAZE
	[MOVE_HAZE] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_CURSE
	[MOVE_CURSE] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_CONVERSION2
	[MOVE_CONVERSION2] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_SPITE
	[MOVE_SPITE] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_FORESIGHT
	[MOVE_FORESIGHT] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_ATTRACT
	[MOVE_ATTRACT] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gAromaVeilProtectedMoves = TRUE,
	},
#endif
#ifdef MOVE_ENCORE
	[MOVE_ENCORE] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gAromaVeilProtectedMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYCHUP
	[MOVE_PSYCHUP] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_TORMENT
	[MOVE_TORMENT] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gAromaVeilProtectedMoves = TRUE,
	},
#endif
#ifdef MOVE_TAUNT
	[MOVE_TAUNT] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gAromaVeilProtectedMoves = TRUE,
	},
#endif
#ifdef MOVE_ROLEPLAY
	[MOVE_ROLEPLAY] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_SKILLSWAP
	[MOVE_SKILLSWAP] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_IMPRISON
	[MOVE_IMPRISON] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_GRUDGE
	[MOVE_GRUDGE] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_ODORSLEUTH
	[MOVE_ODORSLEUTH] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_MIRACLEEYE
	[MOVE_MIRACLEEYE] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_POWERSWAP
	[MOVE_POWERSWAP] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_GUARDSWAP
	[MOVE_GUARDSWAP] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_HEARTSWAP
	[MOVE_HEARTSWAP] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_DEFOG
	[MOVE_DEFOG] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_REFLECTTYPE
	[MOVE_REFLECTTYPE] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_FAIRYLOCK
	[MOVE_FAIRYLOCK] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_PLAYNICE
	[MOVE_PLAYNICE] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_AROMATICMIST
	[MOVE_AROMATICMIST] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_MAGNETICFLUX
	[MOVE_MAGNETICFLUX] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gSpecialWholeFieldMoves = TRUE,
	},
#endif
#ifdef MOVE_GEARUP
	[MOVE_GEARUP] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gSpecialWholeFieldMoves = TRUE,
	},
#endif
#ifdef MOVE_SPEEDSWAP
	[MOVE_SPEEDSWAP] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_TEATIME
	[MOVE_TEATIME] =
	{
		.gSubstituteBypassMoves = TRUE,
		.gRandomizerBanTable = TRUE,
	},
#endif
#ifdef MOVE_STEALTHROCK
	[MOVE_STEALTHROCK] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_STICKYWEB
	[MOVE_STICKYWEB] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_COACHING
	[MOVE_COACHING] =
	{
		.gSubstituteBypassMoves = TRUE,
	},
#endif
#ifdef MOVE_HIDDENPOWER
	[MOVE_HIDDENPOWER] =
	{
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_JUDGMENT
	[MOVE_JUDGMENT] =
	{
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_NATURALGIFT
	[MOVE_NATURALGIFT] =
	{
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_MULTIATTACK
	[MOVE_MULTIATTACK] =
	{
		.gTypeChangeExceptionMoves = TRUE,
	},
#endif
#ifdef MOVE_SACREDSWORD
	[MOVE_SACREDSWORD] =
	{
		.gIgnoreStatChangesMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CHIPAWAY
	[MOVE_CHIPAWAY] =
	{
		.gIgnoreStatChangesMoves = TRUE,
	},
#endif
#ifdef MOVE_DARKESTLARIAT
	[MOVE_DARKESTLARIAT] =
	{
		.gIgnoreStatChangesMoves = TRUE,
	},
#endif
#ifdef MOVE_KARATECHOP
	[MOVE_KARATECHOP] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_RAZORLEAF
	[MOVE_RAZORLEAF] =
	{
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CRABHAMMER
	[MOVE_CRABHAMMER] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_SLASH
	[MOVE_SLASH] =
	{
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_AEROBLAST
	[MOVE_AEROBLAST] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_CROSSCHOP
	[MOVE_CROSSCHOP] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_AIRCUTTER
	[MOVE_AIRCUTTER] =
	{
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_LEAFBLADE
	[MOVE_LEAFBLADE] =
	{
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_NIGHTSLASH
	[MOVE_NIGHTSLASH] =
	{
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_SHADOWCLAW
	[MOVE_SHADOWCLAW] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYCHOCUT
	[MOVE_PSYCHOCUT] =
	{
		.gHighCriticalChanceMoves = TRUE,
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_STONEEDGE
	[MOVE_STONEEDGE] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_ATTACKORDER
	[MOVE_ATTACKORDER] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_SPACIALREND
	[MOVE_SPACIALREND] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_SNIPESHOT
	[MOVE_SNIPESHOT] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_ESPERWING
	[MOVE_ESPERWING] =
	{
		.gHighCriticalChanceMoves = TRUE,
	},
#endif
#ifdef MOVE_STORMTHROW
	[MOVE_STORMTHROW] =
	{
		.gAlwaysCriticalMoves = TRUE,
	},
#endif
#ifdef MOVE_FROSTBREATH
	[MOVE_FROSTBREATH] =
	{
		.gAlwaysCriticalMoves = TRUE,
	},
#endif
#ifdef MOVE_ZIPPYZAP
	[MOVE_ZIPPYZAP] =
	{
		.gAlwaysCriticalMoves = TRUE,
	},
#endif
#ifdef MOVE_STRIPEDDIVE
	[MOVE_STRIPEDDIVE] =
	{
		.gAlwaysCriticalMoves = TRUE,
	},
#endif
#ifdef MOVE_MALICIOUS_MOONSAULT
	[MOVE_MALICIOUS_MOONSAULT] =
	{
		.gAlwaysHitWhenMinimizedMoves = TRUE,
	},
#endif
#ifdef MOVE_LIGHT_THAT_BURNS_THE_SKY
	[MOVE_LIGHT_THAT_BURNS_THE_SKY] =
	{
		.gMoldBreakerMoves = TRUE,
		.gMovesThatChangePhysicality = TRUE,
	},
#endif
#ifdef MOVE_MENACING_MOONRAZE_MAELSTROM
	[MOVE_MENACING_MOONRAZE_MAELSTROM] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_SEARING_SUNRAZE_SMASH
	[MOVE_SEARING_SUNRAZE_SMASH] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_G_MAX_DRUM_SOLO_P
	[MOVE_G_MAX_DRUM_SOLO_P] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_G_MAX_DRUM_SOLO_S
	[MOVE_G_MAX_DRUM_SOLO_S] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_G_MAX_FIREBALL_P
	[MOVE_G_MAX_FIREBALL_P] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_G_MAX_FIREBALL_S
	[MOVE_G_MAX_FIREBALL_S] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_G_MAX_HYDROSNIPE_P
	[MOVE_G_MAX_HYDROSNIPE_P] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_G_MAX_HYDROSNIPE_S
	[MOVE_G_MAX_HYDROSNIPE_S] =
	{
		.gMoldBreakerMoves = TRUE,
	},
#endif
#ifdef MOVE_FUSIONFLARE
	[MOVE_FUSIONFLARE] =
	{
		.gMovesCanUnfreezeAttacker = TRUE,
	},
#endif
#ifdef MOVE_BURNUP
	[MOVE_BURNUP] =
	{
		.gMovesCanUnfreezeAttacker = TRUE,
	},
#endif
#ifdef MOVE_HEX
	[MOVE_HEX] =
	{
		.gDoubleDamageOnStatus = TRUE,
	},
#endif
#ifdef MOVE_ARMTHRUST
	[MOVE_ARMTHRUST] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_BONERUSH
	[MOVE_BONERUSH] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_DOUBLESLAP
	[MOVE_DOUBLESLAP] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_FURYATTACK
	[MOVE_FURYATTACK] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
		.gStrongBeakBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FURYSWIPES
	[MOVE_FURYSWIPES] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_ICICLESPEAR
	[MOVE_ICICLESPEAR] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_PINMISSILE
	[MOVE_PINMISSILE] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_SCALESHOT
	[MOVE_SCALESHOT] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_SPIKECANNON
	[MOVE_SPIKECANNON] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_WATERSHURIKEN
	[MOVE_WATERSHURIKEN] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_TRIPLEDIVE
	[MOVE_TRIPLEDIVE] =
	{
		.gTwoToFiveStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_BONEMERANG
	[MOVE_BONEMERANG] =
	{
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_DOUBLEHIT
	[MOVE_DOUBLEHIT] =
	{
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONDARTS
	[MOVE_DRAGONDARTS] =
	{
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_DUALCHOP
	[MOVE_DUALCHOP] =
	{
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_DUALWINGBEAT
	[MOVE_DUALWINGBEAT] =
	{
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_GEARGRIND
	[MOVE_GEARGRIND] =
	{
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_TWINBEAM
	[MOVE_TWINBEAM] =
	{
		.gTwoStrikesMoves = TRUE,
	},
#endif
#ifdef MOVE_TAKEDOWN
	[MOVE_TAKEDOWN] =
	{
		.gPercent25RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_SUBMISSION
	[MOVE_SUBMISSION] =
	{
		.gPercent25RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_WILDCHARGE
	[MOVE_WILDCHARGE] =
	{
		.gPercent25RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_HEADCHARGE
	[MOVE_HEADCHARGE] =
	{
		.gPercent25RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_DRAGONHAMMER
	[MOVE_DRAGONHAMMER] =
	{
		.gPercent25RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_DOUBLEEDGE
	[MOVE_DOUBLEEDGE] =
	{
		.gPercent33RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_BRAVEBIRD
	[MOVE_BRAVEBIRD] =
	{
		.gPercent33RecoilMoves = TRUE,
		.gStrongBeakBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_WOODHAMMER
	[MOVE_WOODHAMMER] =
	{
		.gPercent33RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_WAVECRASH
	[MOVE_WAVECRASH] =
	{
		.gPercent33RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_HEADSMASH
	[MOVE_HEADSMASH] =
	{
		.gPercent50RecoilMoves = TRUE,
	},
#endif
#ifdef MOVE_GUST
	[MOVE_GUST] =
	{
		.gIgnoreInAirMoves = TRUE,
	},
#endif
#ifdef MOVE_WHIRLPOOL
	[MOVE_WHIRLPOOL] =
	{
		.gIgnoreUnderwaterMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYSHOCK
	[MOVE_PSYSHOCK] =
	{
		.gSpecialAttackPhysicalDamageMoves = TRUE,
	},
#endif
#ifdef MOVE_PSYSTRIKE
	[MOVE_PSYSTRIKE] =
	{
		.gSpecialAttackPhysicalDamageMoves = TRUE,
	},
#endif
#ifdef MOVE_FLOWERSHIELD
	[MOVE_FLOWERSHIELD] =
	{
		.gSpecialWholeFieldMoves = TRUE,
	},
#endif
#ifdef MOVE_HEALBLOCK
	[MOVE_HEALBLOCK] =
	{
		.gAromaVeilProtectedMoves = TRUE,
	},
#endif
#ifdef MOVE_NONE
	[MOVE_NONE] =
	{
		.gRandomizerBanTable = TRUE,
	},
#endif
#ifdef MOVE_COURTCHANGE
	[MOVE_COURTCHANGE] =
	{
		.gRandomizerBanTable = TRUE,
	},
#endif
#ifdef MOVE_PECK
	[MOVE_PECK] =
	{
		.gStrongBeakBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_AERIALACE
	[MOVE_AERIALACE] =
	{
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_FURYCUTTER
	[MOVE_FURYCUTTER] =
	{
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_XSCISSOR
	[MOVE_XSCISSOR] =
	{
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_CUT
	[MOVE_CUT] =
	{
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
#ifdef MOVE_KOWTOWCLEAVE
	[MOVE_KOWTOWCLEAVE] =
	{
		.gSharpnessBoostedMoves = TRUE,
	},
#endif
};

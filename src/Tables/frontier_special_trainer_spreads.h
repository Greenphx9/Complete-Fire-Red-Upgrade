#include "../config.h"
#include "../../include/global.h"
#include "../../include/new/catching.h"
#include "../../include/new/frontier.h"
#include "../../include/constants/moves.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"
#include "../../include/constants/trainer_classes.h"
/*
frontier_special_trainer_spreads.h
	set up battle frontier species for special trainers, including EVs, IVs, nature, ability, ball type, etc!
	
structs to edit:
	gSpecialTowerSpread_Palmer1
	gSpecialTowerSpread_Palmer2
	gLegendaryTowerSpread_Palmer1
	gMiddleCupTowerSpread_Palmer1
	gLittleCupTowerSpread_Palmer1
	gLittleCupTowerSpread_Palmer2
	gSpecialTowerSpread_Pat1
	gSpecialTowerSpread_Pat2
	gLegendaryTowerSpread_Pat1
	gLegendaryTowerSpread_Pat2
	gMiddleCupTowerSpread_Pat1
	gMiddleCupTowerSpread_Pat2
	gLittleCupTowerSpread_Pat1
	gLittleCupTowerSpread_Pat2
	gSpecialTowerSpread_Pablo1Format1
	gSpecialTowerSpread_Pablo1Format2
	gSpecialTowerSpread_Pablo2Format1
	gSpecialTowerSpread_Pablo2Format2
	gSpecialTowerSpread_Paula1
	gSpecialTowerSpread_Paula2
	gLegendaryTowerSpread_Paula1
	gLegendaryTowerSpread_Paula2
	gMiddleCupTowerSpread_Paula1
	gMiddleCupTowerSpread_Paula2
	gLittleCupTowerSpread_Paula1
	gLittleCupTowerSpread_Paula2
	gSpecialTowerSpread_Skeli
	gLegendaryTowerSpread_Skeli
	gMiddleCupTowerSpread_Skeli
	gLittleCupTowerSpread_Skeli
	gSpecialTowerSpread_Golche
	gLegendaryTowerSpread_Golche
	gMiddleCupTowerSpread_Golche
	gLittleCupTowerSpread_Golche
	gSpecialTowerSpread_Gail
	gLegendaryTowerSpread_Gail
	gMiddleCupTowerSpread_Gail
	gLittleCupTowerSpread_Gail
	gSpecialTowerSpread_Lixdel
	gLegendaryTowerSpread_Lixdel
	gMiddleCupTowerSpread_Lixdel
	gLittleCupTowerSpread_Lixdel
	gSpecialTowerSpread_Cynthia
	gLegendaryTowerSpread_Cynthia
	gMiddleCupTowerSpread_Cynthia
	gLittleCupTowerSpread_Cynthia
	gSpecialTowerSpread_Red
	gLegendaryTowerSpread_Red
	gMiddleCupTowerSpread_Red
	gLittleCupTowerSpread_Red
	gSpecialTowerSpread_BigMo
	gLegendaryTowerSpread_BigMo
	gMiddleCupTowerSpread_BigMo
	gLittleCupTowerSpread_BigMo
	gSpecialTowerSpread_Galavan
	gLegendaryTowerSpread_Galavan
	gMiddleCupTowerSpread_Galavan
	gLittleCupTowerSpread_Galavan
	gSpecialTowerSpread_Candice
	gLegendaryTowerSpread_Candice
	gMiddleCupTowerSpread_Candice
	gLittleCupTowerSpread_Candice
	gSpecialTowerSpread_Giovanni
	gLegendaryTowerSpread_Giovanni
	gMiddleCupTowerSpread_Giovanni
	gLittleCupTowerSpread_Giovanni
*/

const struct BattleTowerSpread gSpecialTowerSpread_Cynthia[] =
{
    {
        .species = SPECIES_SPIRITOMB,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .hpEv = 248,
        .spAtkEv = 252,
        .spDefEv = 8,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DARKPULSE,
            MOVE_PSYCHIC,
            MOVE_SILVERWIND,
            MOVE_EMBARGO,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SPIRITOMB,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_HIDDEN, //Infiltrator
        .hpEv = 252,
        .atkEv = 252,
        .defEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_POLTERGEIST,
            MOVE_SHADOWSNEAK,
            MOVE_SUCKERPUNCH,
            MOVE_TRICK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SPIRITOMB,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .hpEv = 252,
        .defEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_REST,
            MOVE_SLEEPTALK,
            MOVE_CALMMIND,
            MOVE_DARKPULSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ROSERADE,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Poison Point
        .spAtkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_TOXICSPIKES,
            MOVE_SPIKES,
            MOVE_SLUDGEBOMB,
            MOVE_GIGADRAIN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ROSERADE,
        .item = ITEM_BIG_ROOT,
        .ability = FRONTIER_ABILITY_1, //Natural Cure
        .spAtkEv = 252,
        .spDefEv = 252,
        .spdEv = 4,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_GIGADRAIN,
            MOVE_LEECHSEED,
            MOVE_SYNTHESIS,
            MOVE_INGRAIN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GASTRODON,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Storm Drain
        .hpEv = 252,
        .atkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WATERFALL,
            MOVE_EARTHQUAKE,
            MOVE_STONEEDGE,
            MOVE_BODYSLAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GASTRODON,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Storm Drain
        .hpEv = 252,
        .defEv = 252,
        .spAtkEv = 4,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SCALD,
            MOVE_EARTHPOWER,
            MOVE_RECOVER,
            MOVE_TOXIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GASTRODON,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Storm Drain
        .hpEv = 252,
        .defEv = 128,
        .spDefEv = 122,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_TOXIC,
            MOVE_COUNTER,
            MOVE_MIRRORCOAT,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LUCARIO,
        .item = ITEM_LUCARIONITE,
        .ability = FRONTIER_ABILITY_2, //Inner Focus
        .atkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_CLOSECOMBAT,
            MOVE_ROCKSLIDE,
            MOVE_BULLETPUNCH,
            MOVE_BLAZEKICK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LUCARIO,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Inner Focus
        .spAtkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_CALMMIND,
            MOVE_AURASPHERE,
            MOVE_FLASHCANNON,
            MOVE_STEELBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MILOTIC,
        .item = ITEM_WIDE_LENS,
        .ability = FRONTIER_ABILITY_2, //Competitive
        .hpEv = 252,
        .spAtkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_HYDROPUMP,
            MOVE_BLIZZARD,
            MOVE_MIRRORCOAT,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MILOTIC,
        .item = ITEM_FLAME_ORB,
        .ability = FRONTIER_ABILITY_1, //Marvel Scale
        .hpEv = 252,
        .defEv = 252,
        .spAtkEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SCALD,
            MOVE_ICEBEAM,
            MOVE_RECOVER,
            MOVE_FLIPTURN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MILOTIC,
        .item = ITEM_LUM_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Cute Charm
        .atkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DRAGONDANCE,
            MOVE_WATERFALL,
            MOVE_TRIPLEAXEL,
            MOVE_REST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GARCHOMP,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Rough Skin
        .atkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SWORDSDANCE,
            MOVE_SCALESHOT,
            MOVE_EARTHQUAKE,
            MOVE_FIREFANG,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GARCHOMP,
        .item = ITEM_GARCHOMPITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Rough Skin
        .atkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SANDSTORM,
            MOVE_STONEEDGE,
            MOVE_SCALESHOT,
            MOVE_EARTHQUAKE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GARCHOMP,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Rough Skin
        .spAtkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DRACOMETEOR,
            MOVE_EARTHPOWER,
            MOVE_FIREBLAST,
            MOVE_SURF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TOGEKISS,
        .item = ITEM_KINGS_ROCK,
        .ability = FRONTIER_ABILITY_2, //Serene Grace
        .spAtkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_AIRSLASH,
            MOVE_THUNDERWAVE,
            MOVE_FLAMETHROWER,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TOGEKISS,
        .item = ITEM_EXPERT_BELT,
        .ability = FRONTIER_ABILITY_2, //Serene Grace
        .spAtkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_AURASPHERE,
            MOVE_AIRSLASH,
            MOVE_GRASSKNOT,
            MOVE_DAZZLINGGLEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TOGEKISS,
        .item = ITEM_POWER_HERB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Super Luck
        .hpEv = 252,
        .atkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SKYATTACK,
            MOVE_DRAINPUNCH,
            MOVE_EXTREMESPEED,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_EELEKTROSS,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .hpEv = 252,
        .spAtkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_THUNDERBOLT,
            MOVE_VOLTSWITCH,
            MOVE_FLAMETHROWER,
            MOVE_GIGADRAIN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_EELEKTROSS,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_HIDDEN, //Levitate
        .hpEv = 252,
        .atkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WILDCHARGE,
            MOVE_FIREPUNCH,
            MOVE_BRICKBREAK,
            MOVE_UTURN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BRAVIARY,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Defiant
        .hpEv = 252,
        .atkEv = 4,
        .spDefEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SUBSTITUTE,
            MOVE_BULKUP,
            MOVE_FACADE,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BRAVIARY,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //Defiant
        .atkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_FACADE,
            MOVE_BRAVEBIRD,
            MOVE_ZENHEADBUTT,
            MOVE_UTURN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};
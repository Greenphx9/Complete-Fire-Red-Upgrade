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

const struct BattleTowerSpread gSpecialTowerSpread_Brock[] = 
{
    {
        .species = SPECIES_TYRANITAR,
        .item = ITEM_ASSAULT_VEST,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_1, //Sand Stream
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
            MOVE_STONEEDGE,
            MOVE_PURSUIT,
            MOVE_ICEPUNCH,
            MOVE_EARTHQUAKE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TYRANITAR,
        .item = ITEM_LEFTOVERS,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_1, //Sand Stream
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
            MOVE_CRUNCH,
            MOVE_EARTHQUAKE,
            MOVE_STONEEDGE,
            MOVE_PURSUIT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TYRANITAR,
        .item = ITEM_CHOICE_BAND,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_1, //Sand Stream
        .hpEv = 40,
        .atkEv = 252,
        .spDefEv = 48,
        .spdEv = 168,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_STONEEDGE,
            MOVE_CRUNCH,
            MOVE_PURSUIT,
            MOVE_SUPERPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ARCANINE_H,
        .item = ITEM_CHOICE_BAND,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Rock Head
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
            MOVE_FLAREBLITZ,
            MOVE_HEADSMASH,
            MOVE_WILDCHARGE,
            MOVE_CLOSECOMBAT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ARCANINE_H,
        .item = ITEM_LIFE_ORB,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Rock Head
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
            MOVE_HEADSMASH,
            MOVE_FLAREBLITZ,
            MOVE_WILDCHARGE,
            MOVE_MORNINGSUN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GOLEM,
        .item = ITEM_CUSTAP_BERRY,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_2, //Sturdy
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
            MOVE_STEALTHROCK,
            MOVE_EARTHQUAKE,
            MOVE_STONEEDGE,
            MOVE_EXPLOSION,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GOLEM,
        .item = ITEM_PASSHO_BERRY,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_2, //Sturdy
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
            MOVE_SMACKDOWN,
            MOVE_EARTHQUAKE,
            MOVE_FIREPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GOLEM_A,
        .item = ITEM_ELECTRIC_GEM,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_HIDDEN, //Galvanize
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
            MOVE_RETURN,
            MOVE_EARTHQUAKE,
            MOVE_STONEEDGE,
            MOVE_FIREPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STEELIX,
        .item = ITEM_STEELIXITE,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_2, //Sturdy
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
            MOVE_EARTHQUAKE,
            MOVE_HEAVYSLAM,
            MOVE_STONEEDGE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STEELIX,
        .item = ITEM_LIFE_ORB,
        .nature = NATURE_MODEST,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
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
            MOVE_FLASHCANNON,
            MOVE_EARTHPOWER,
            MOVE_DARKPULSE,
            MOVE_ANCIENTPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RHYPERIOR,
        .item = ITEM_CHOICE_BAND,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_2, //Solid Rock
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
            MOVE_ROCKWRECKER,
            MOVE_EARTHQUAKE,
            MOVE_ICEPUNCH,
            MOVE_FIREPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RHYPERIOR,
        .item = ITEM_LIFE_ORB,
        .nature = NATURE_ADAMANT,
        .ability = FRONTIER_ABILITY_2, //Solid Rock
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
            MOVE_ROCKWRECKER,
            MOVE_EARTHQUAKE,
            MOVE_SMACKDOWN,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RHYPERIOR,
        .item = ITEM_WEAKNESS_POLICY,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_2, //Solid Rock
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
            MOVE_ROCKPOLISH,
            MOVE_STONEEDGE,
            MOVE_EARTHQUAKE,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_OMASTAR,
        .item = ITEM_FOCUS_SASH,
        .nature = NATURE_MODEST,
        .ability = FRONTIER_ABILITY_HIDDEN, //Weak Armor
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
            MOVE_SHELLSMASH,
            MOVE_SCALD,
            MOVE_EARTHPOWER,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_KABUTOPS,
        .item = ITEM_FOCUS_SASH,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Weak Armor
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
            MOVE_BRICKBREAK,
            MOVE_STONEEDGE,
            MOVE_WATERFALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_AERODACTYL,
        .item = ITEM_FOCUS_SASH,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_2, //Pressure
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
            MOVE_TAUNT,
            MOVE_STEALTHROCK,
            MOVE_EARTHQUAKE,
            MOVE_DUALWINGBEAT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_AERODACTYL,
        .item = ITEM_AERODACTYLITE,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Unnerve
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
            MOVE_STONEEDGE,
            MOVE_DUALWINGBEAT,
            MOVE_EARTHQUAKE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NIHILEGO,
        .item = ITEM_POWER_HERB,
        .nature = NATURE_TIMID,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .defEv = 80,
        .spAtkEv = 176,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_METEORBEAM,
            MOVE_SLUDGEWAVE,
            MOVE_THUNDERBOLT,
            MOVE_GRASSKNOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NIHILEGO,
        .item = ITEM_CHOICE_SCARF,
        .nature = NATURE_TIMID,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .spAtkEv = 252,
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
            MOVE_POWERGEM,
            MOVE_THUNDERBOLT,
            MOVE_DAZZLINGGLEAM,
            MOVE_GRASSKNOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NIHILEGO,
        .item = ITEM_ASSAULT_VEST,
        .nature = NATURE_MODEST,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
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
            MOVE_SLUDGEWAVE,
            MOVE_POWERGEM,
            MOVE_GRASSKNOT,
            MOVE_DAZZLINGGLEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TERRAKION,
        .item = ITEM_CHOICE_BAND,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_1, //Justified
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
            MOVE_STONEEDGE,
            MOVE_EARTHQUAKE,
            MOVE_MEGAHORN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TERRAKION,
        .item = ITEM_CHOICE_SCARF,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_1, //Justified
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
            MOVE_STONEEDGE,
            MOVE_CLOSECOMBAT,
            MOVE_EARTHQUAKE,
            MOVE_MEGAHORN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TERRAKION,
        .item = ITEM_LIFE_ORB,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_1, //Justified
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
            MOVE_STONEEDGE,
            MOVE_CLOSECOMBAT,
            MOVE_EARTHQUAKE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DIANCIE,
        .item = ITEM_DIANCITE,
        .nature = NATURE_JOLLY,
        .ability = FRONTIER_ABILITY_1, //Clear Body
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
            MOVE_DIAMONDSTORM,
            MOVE_PLAYROUGH,
            MOVE_BODYPRESS,
            MOVE_STEALTHROCK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    }
};

const struct BattleTowerSpread gSpecialTowerSpread_Misty[] =
{
    {
        .species = SPECIES_PELIPPER,
        .item = ITEM_EXPERT_BELT,
        .ability = FRONTIER_ABILITY_2, //Drizzle
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
            MOVE_WEATHERBALL,
            MOVE_AIRSLASH,
            MOVE_ICEBEAM,
            MOVE_SHOCKWAVE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PELIPPER,
        .item = ITEM_DAMP_ROCK,
        .ability = FRONTIER_ABILITY_2, //Drizzle
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
            MOVE_SCALD,
            MOVE_DEFOG,
            MOVE_ROOST,
            MOVE_UTURN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PELIPPER,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_2, //Drizzle
        .spAtkEv = 252,
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
            MOVE_HYDROPUMP,
            MOVE_AIRSLASH,
            MOVE_UTURN,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SWAMPERT,
        .item = ITEM_SWAMPERTITE,
        .ability = FRONTIER_ABILITY_1, //Torrent
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
            MOVE_WATERFALL,
            MOVE_DARKESTLARIAT,
            MOVE_BRICKBREAK,
            MOVE_EARTHQUAKE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SWAMPERT,
        .item = ITEM_SWAMPERTITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Damp
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
            MOVE_WATERFALL,
            MOVE_EARTHQUAKE,
            MOVE_ICEPUNCH,
            MOVE_FLIPTURN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GRENINJA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Protean
        .spAtkEv = 252,
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
            MOVE_HYDROPUMP,
            MOVE_ICEBEAM,
            MOVE_DARKPULSE,
            MOVE_UTURN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GRENINJA,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_2, //Battle Bond
        .spAtkEv = 252,
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
            MOVE_HYDROPUMP,
            MOVE_ICEBEAM,
            MOVE_DARKPULSE,
            MOVE_EXTRASENSORY,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TOXAPEX,
        .item = ITEM_BLACK_SLUDGE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .hpEv = 252,
        .defEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SCALD,
            MOVE_TOXIC,
            MOVE_TOXICSPIKES,
            MOVE_BANEFULBUNKER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TAPU_FINI,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Misty Surge
        .hpEv = 248,
        .defEv = 68,
        .spdEv = 192,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_CALMMIND,
            MOVE_TAUNT,
            MOVE_SCALD,
            MOVE_DRAININGKISS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TAPU_FINI,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Misty Surge
        .hpEv = 248,
        .spDefEv = 68,
        .spdEv = 192,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WHIRLPOOL,
            MOVE_NATURESMADNESS,
            MOVE_TAUNT,
            MOVE_MOONBLAST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GYARADOS,
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = FRONTIER_ABILITY_1, //Intimidate
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
            MOVE_SUBSTITUTE,
            MOVE_WATERFALL,
            MOVE_ICEFANG,
            MOVE_DRAGONDANCE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GYARADOS,
        .item = ITEM_GYARADOSITE,
        .ability = FRONTIER_ABILITY_1, //Mold Breaker
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
            MOVE_CRUNCH,
            MOVE_SUBSTITUTE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MANAPHY,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Hydration
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
            MOVE_TAILGLOW,
            MOVE_SCALD,
            MOVE_ICEBEAM,
            MOVE_REST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ROTOM_WASH,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .hpEv = 252,
        .defEv = 200,
        .spdEv = 56,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_HYDROPUMP,
            MOVE_VOLTSWITCH,
            MOVE_PAINSPLIT,
            MOVE_WILLOWISP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_URSHIFU_RAPID,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //Unseen Fist
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
            MOVE_SURGINGSTRIKES,
            MOVE_CLOSECOMBAT,
            MOVE_UTURN,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SLOWKING,
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .hpEv = 252,
        .defEv = 76,
        .spDefEv = 180,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SCALD,
            MOVE_FUTURESIGHT,
            MOVE_SLACKOFF,
            MOVE_TELEPORT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SLOWBRO,
        .item = ITEM_SLOWBRONITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .hpEv = 248,
        .defEv = 216,
        .spDefEv = 44,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_TOXIC,
            MOVE_SCALD,
            MOVE_SLACKOFF,
            MOVE_IRONDEFENSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_AZUMARILL,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_2, //Huge Power
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
            MOVE_AQUAJET,
            MOVE_PLAYROUGH,
            MOVE_BELLYDRUM,
            MOVE_KNOCKOFF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CRAWDAUNT,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Adaptability
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
            MOVE_KNOCKOFF,
            MOVE_CRABHAMMER,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_KELDEO,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Justified
        .spAtkEv = 252,
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
            MOVE_HYDROPUMP,
            MOVE_SECRETSWORD,
            MOVE_SCALD,
            MOVE_ICYWIND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PRIMARINA,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Torrent
        .hpEv = 4,
        .spAtkEv = 252,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_HYDROPUMP,
            MOVE_MOONBLAST,
            MOVE_ICEBEAM,
            MOVE_SCALD,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SHARPEDO,
        .item = ITEM_SHARPEDONITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Speed Boost
        .hpEv = 4,
        .atkEv = 252,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_CRUNCH,
            MOVE_ICEFANG,
            MOVE_EARTHQUAKE,
            MOVE_PROTECT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BARRASKEWDA,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .atkEv = 252,
        .defEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_LIQUIDATION,
            MOVE_CLOSECOMBAT,
            MOVE_FLIPTURN,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STARMIE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Analytic
        .spAtkEv = 252,
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
            MOVE_HYDROPUMP,
            MOVE_THUNDERBOLT,
            MOVE_ICEBEAM,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};
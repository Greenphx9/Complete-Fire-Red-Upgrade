#include "../config.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"
#include "../../include/constants/moves.h"


static const struct BattleTowerSpread sRaidPartnerSpread_Laphicet_Rank2[] =
{
    {
        .species = SPECIES_MARILL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Huge Power
        .nature = NATURE_ADAMANT,
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
            MOVE_AQUATAIL,
            MOVE_PLAYROUGH,
            MOVE_IRONTAIL,
            MOVE_BRUTALSWING,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_TOGETIC,
        .item = ITEM_SCOPE_LENS,
        .ability = FRONTIER_ABILITY_1, //Super Luck
        .nature = NATURE_MODEST,
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
            MOVE_AIRCUTTER,
            MOVE_DAZZLINGGLEAM,
            MOVE_MYSTICALFIRE,
            MOVE_TRIATTACK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_FLOETTE,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_1, //Flower Veil
        .nature = NATURE_MODEST,
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
            MOVE_DAZZLINGGLEAM,
            MOVE_MAGICALLEAF,
            MOVE_PSYCHIC,
            MOVE_PROTECT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Laphicet_Rank5[] =
{
    {
        .species = SPECIES_AZUMARILL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Huge Power
        .nature = NATURE_ADAMANT,
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
            MOVE_WATERFALL,
            MOVE_PLAYROUGH,
            MOVE_ICEPUNCH,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_TOGEKISS,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Serene Grace
        .nature = NATURE_TIMID,
        .hpEv = 248,
        .defEv = 8,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DAZZLINGGLEAM,
            MOVE_AIRSLASH,
            MOVE_FLAMETHROWER,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MAWILE,
        .item = ITEM_MAWILITE,
        .ability = FRONTIER_ABILITY_2, //Intimidate
        .nature = NATURE_ADAMANT,
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
            MOVE_PLAYROUGH,
            MOVE_IRONHEAD,
            MOVE_ICEPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Laphicet_Rank6[] =
{
	{
		.species = SPECIES_FLOETTE_ETERNAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spdEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1,
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIGHTOFRUIN,
			MOVE_ENERGYBALL,
			MOVE_PSYCHIC,
			MOVE_FLASH,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TAPU_LELE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PSYCHICSURGE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_PSYSHOCK,
			MOVE_FOCUSBLAST,
			MOVE_THUNDERBOLT,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.shiny = TRUE,
	},
	{
		.species = SPECIES_ZACIAN_CROWNED,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTREPIDSWORD
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_BEHEMOTHBLADE,
			MOVE_WILDCHARGE,
			MOVE_PLAYROUGH,
			MOVE_CLOSECOMBAT,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Mlc_Rank2[] =
{
    {
        .species = SPECIES_MAREANIE,
        .item = ITEM_BLACK_SLUDGE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_IMPISH,
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
            MOVE_TOXIC,
            MOVE_WIDEGUARD,
            MOVE_SCALD,
            MOVE_KNOCKOFF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ONIX,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_2, //Sturdy
        .nature = NATURE_IMPISH,
        .hpEv = 252,
        .atkEv = 4,
        .defEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_BULLDOZE,
            MOVE_ROCKSLIDE,
            MOVE_BREAKINGSWIPE,
            MOVE_BODYPRESS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GLIGAR,
        .item = ITEM_YACHE_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Immunity
        .nature = NATURE_JOLLY,
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
            MOVE_KNOCKOFF,
            MOVE_ROCKSLIDE,
            MOVE_POISONJAB,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Mlc_Rank5[] =
{
    {
        .species = SPECIES_TOXAPEX,
        .item = ITEM_BLACK_SLUDGE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_BOLD,
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
            MOVE_TOXIC,
            MOVE_BANEFULBUNKER,
            MOVE_SCALD,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STEELIX,
        .item = ITEM_STEELIXITE,
        .ability = FRONTIER_ABILITY_2, //Sturdy
        .nature = NATURE_BRAVE,
        .hpEv = 252,
        .atkEv = 208,
        .spDefEv = 48,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_GYROBALL,
            MOVE_EARTHQUAKE,
            MOVE_BODYPRESS,
            MOVE_STONEEDGE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GLISCOR,
        .item = ITEM_TOXIC_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Poison Heal
        .nature = NATURE_ADAMANT,
        .hpEv = 184,
        .atkEv = 252,
        .spdEv = 72,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_EARTHQUAKE,
            MOVE_FACADE,
            MOVE_STONEEDGE,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Mlc_Rank6[] =
{
    {
        .species = SPECIES_LUGIA_S,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Multiscale
        .nature = NATURE_TIMID,
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
            MOVE_PSYCHOBOOST,
            MOVE_SHADOWSTORM,
            MOVE_AEROBLAST,
            MOVE_EARTHPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CELESTEELA,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_BOLD,
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
            MOVE_AIRSLASH,
            MOVE_FLASHCANNON,
            MOVE_LEECHSEED,
            MOVE_PROTECT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GROUDON,
        .item = ITEM_RED_ORB,
        .ability = FRONTIER_ABILITY_1, //Drought
        .nature = NATURE_JOLLY,
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
            MOVE_PRECIPICEBLADES,
            MOVE_FIREPUNCH,
            MOVE_STONEEDGE,
            MOVE_DRAGONCLAW,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Keith_Rank2[] =
{
    {
        .species = SPECIES_FERROSEED,
        .item = ITEM_ROCKY_HELMET,
        .ability = FRONTIER_ABILITY_1, //Iron Barbs
        .nature = NATURE_RELAXED,
        .hpEv = 252,
        .defEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_GYROBALL,
            MOVE_SEEDBOMB,
            MOVE_KNOCKOFF,
            MOVE_LEECHSEED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
		.shiny = TRUE,
    },
    {
        .species = SPECIES_FRILLISH,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Cursed Body
        .nature = NATURE_MODEST,
        .hpEv = 244,
        .spAtkEv = 68,
        .spDefEv = 196,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WATERPULSE,
            MOVE_GIGADRAIN,
            MOVE_SHADOWBALL,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_YANMA,
        .item = ITEM_FOCUS_SASH,
        .ability = FRONTIER_ABILITY_1, //Speed Boost
        .nature = NATURE_MODEST,
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
            MOVE_SILVERWIND,
            MOVE_AIRCUTTER,
            MOVE_GIGADRAIN,
            MOVE_PSYCHIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Keith_Rank5[] =
{
    {
        .species = SPECIES_FERROTHORN,
        .item = ITEM_ROCKY_HELMET,
        .ability = FRONTIER_ABILITY_1, //Iron Barbs
        .nature = NATURE_RELAXED,
        .hpEv = 252,
        .defEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_LEECHSEED,
            MOVE_GYROBALL,
            MOVE_KNOCKOFF,
            MOVE_BODYPRESS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_JELLICENT,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Cursed Body
        .nature = NATURE_BOLD,
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
            MOVE_SHADOWBALL,
            MOVE_ENERGYBALL,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_YANMEGA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Tinted Lens
        .nature = NATURE_TIMID,
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
            MOVE_BUGBUZZ,
            MOVE_GIGADRAIN,
            MOVE_PSYCHIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Keith_Rank6[] =
{
    {
        .species = SPECIES_FERROTHORN,
        .item = ITEM_ROCKY_HELMET,
        .ability = FRONTIER_ABILITY_1, //Iron Barbs
        .nature = NATURE_RELAXED,
        .hpEv = 252,
        .defEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_LEECHSEED,
            MOVE_GYROBALL,
            MOVE_KNOCKOFF,
            MOVE_BODYPRESS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_KYOGRE,
        .item = ITEM_BLUE_ORB,
        .ability = FRONTIER_ABILITY_1, //Drizzle
        .nature = NATURE_TIMID,
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
            MOVE_WATERSPOUT,
            MOVE_ORIGINPULSE,
            MOVE_ICEBEAM,
            MOVE_THUNDER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PHEROMOSA,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_JOLLY,
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
            MOVE_UTURN,
            MOVE_TRIPLEAXEL,
            MOVE_POISONJAB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Notekeeper_Rank2[] =
{
    {
        .species = SPECIES_TEDDIURSA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pickup
        .nature = NATURE_JOLLY,
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
            MOVE_FACADE,
            MOVE_PAYBACK,
            MOVE_PLAYROUGH,
            MOVE_ROCKTOMB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_LAMPENT,
        .item = ITEM_WISE_GLASSES,
        .ability = FRONTIER_ABILITY_2, //Flame Body
        .nature = NATURE_TIMID,
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
            MOVE_HEX,
            MOVE_FLAMETHROWER,
            MOVE_ENERGYBALL,
            MOVE_PSYCHIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SLOWPOKE_G,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_ADAMANT,
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
            MOVE_ZENHEADBUTT,
            MOVE_BULLDOZE,
            MOVE_HEADBUTT,
            MOVE_IRONTAIL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Notekeeper_Rank5[] =
{
    {
        .species = SPECIES_URSARING,
        .item = ITEM_FLAME_ORB,
        .ability = FRONTIER_ABILITY_1, //Guts
        .nature = NATURE_JOLLY,
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
            MOVE_FACADE,
            MOVE_EARTHQUAKE,
            MOVE_THUNDERPUNCH,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_CHANDELURE,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Flash Fire
        .nature = NATURE_TIMID,
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
            MOVE_FIREBLAST,
            MOVE_SHADOWBALL,
            MOVE_ENERGYBALL,
            MOVE_PSYCHIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SLOWKING_G,
        .item = ITEM_BLACK_SLUDGE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_CALM,
        .hpEv = 252,
        .defEv = 12,
        .spAtkEv = 124,
        .spDefEv = 120,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_EERIESPELL,
            MOVE_SLUDGEBOMB,
            MOVE_FLAMETHROWER,
            MOVE_SLACKOFF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Notekeeper_Rank6[] =
{
    {
        .species = SPECIES_URSALUNA,
        .item = ITEM_FLAME_ORB,
        .ability = FRONTIER_ABILITY_1, //Guts
        .nature = NATURE_ADAMANT,
        .hpEv = 248,
        .atkEv = 252,
        .spDefEv = 8,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_FACADE,
            MOVE_EARTHQUAKE,
            MOVE_ICEPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_LUNALA,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Shadow Shield
        .nature = NATURE_MODEST,
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
            MOVE_MOONGEISTBEAM,
            MOVE_FOCUSBLAST,
            MOVE_ICEBEAM,
            MOVE_PSYSHOCK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NAGANADEL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_TIMID,
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
            MOVE_SLUDGEWAVE,
            MOVE_FIREBLAST,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Kiibo_Rank2[] =
{
    {
        .species = SPECIES_MAGNEMITE,
        .item = ITEM_AIR_BALLOON,
        .ability = FRONTIER_ABILITY_2, //Sturdy
        .nature = NATURE_TIMID,
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
            MOVE_FLASH,
            MOVE_VOLTSWITCH,
            MOVE_FLASHCANNON,
            MOVE_SIGNALBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PALPITOAD,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Water Absorb
        .nature = NATURE_MODEST,
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
            MOVE_BUBBLEBEAM,
            MOVE_MUDSHOT,
            MOVE_HYPERVOICE,
            MOVE_SLUDGEBOMB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_HOUNDOUR,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Flash Fire
        .nature = NATURE_TIMID,
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
            MOVE_SNARL,
            MOVE_INCINERATE,
            MOVE_DREAMEATER,
            MOVE_ROUND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Kiibo_Rank5[] =
{
    {
        .species = SPECIES_MAGNETON,
        .item = ITEM_AIR_BALLOON,
        .ability = FRONTIER_ABILITY_2, //Sturdy
        .nature = NATURE_TIMID,
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
            MOVE_THUNDERBOLT,
            MOVE_VOLTSWITCH,
            MOVE_FLASHCANNON,
            MOVE_AURORABEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SEISMITOAD,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .nature = NATURE_ADAMANT,
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
            MOVE_LIQUIDATION,
            MOVE_EARTHQUAKE,
            MOVE_ICEPUNCH,
            MOVE_POWERWHIP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_HOUNDOOM,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Flash Fire
        .nature = NATURE_TIMID,
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
            MOVE_FIREBLAST,
            MOVE_FLAMETHROWER,
            MOVE_DARKPULSE,
            MOVE_SLUDGEBOMB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Kiibo_Rank6[] =
{
    {
        .species = SPECIES_MAGNEZONE,
        .item = ITEM_AIR_BALLOON,
        .ability = FRONTIER_ABILITY_2, //Sturdy
        .nature = NATURE_MODEST,
        .spAtkEv = 252,
        .spDefEv = 8,
        .spdEv = 248,
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
            MOVE_FLASHCANNON,
            MOVE_AURORABEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SUICUNE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_HYDROPUMP,
            MOVE_SHADOWBALL,
            MOVE_ICEBEAM,
            MOVE_SIGNALBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RESHIRAM,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Turboblaze
        .nature = NATURE_TIMID,
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
            MOVE_BLUEFLARE,
            MOVE_DRAGONPULSE,
            MOVE_EARTHPOWER,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Simply_Rank2[] =
{
    {
        .species = SPECIES_SENTRET,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Frisk
        .nature = NATURE_ADAMANT,
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
            MOVE_SLAM,
            MOVE_SUCKERPUNCH,
            MOVE_THIEF,
            MOVE_SHADOWCLAW,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_CLEFAIRY,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_2, //Magic Guard
        .nature = NATURE_MODEST,
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
            MOVE_DISARMINGVOICE,
            MOVE_MAGICALLEAF,
            MOVE_MYSTICALFIRE,
            MOVE_SOFTBOILED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_AZURILL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Huge Power
        .nature = NATURE_ADAMANT,
        .hpEv = 248,
        .atkEv = 252,
        .spDefEv = 8,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SLAM,
            MOVE_BOUNCE,
            MOVE_WATERFALL,
            MOVE_BRUTALSWING,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Simply_Rank5[] =
{
    {
        .species = SPECIES_FURRET,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Frisk
        .nature = NATURE_JOLLY,
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
            MOVE_BODYSLAM,
            MOVE_FIREPUNCH,
            MOVE_ICEPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_MINIOR_BLUE,
        .item = ITEM_FLYING_GEM,
        .ability = FRONTIER_ABILITY_1, //Shields Down
        .nature = NATURE_JOLLY,
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
            MOVE_EARTHQUAKE,
            MOVE_ACROBATICS,
            MOVE_ZENHEADBUTT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_HATTERENE,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Magic Bounce
        .nature = NATURE_MODEST,
        .hpEv = 252,
        .spAtkEv = 244,
        .spdEv = 12,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DAZZLINGGLEAM,
            MOVE_PSYSHOCK,
            MOVE_MYSTICALFIRE,
            MOVE_GIGADRAIN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Simply_Rank6[] =
{
    {
        .species = SPECIES_MEW,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Synchronize
        .nature = NATURE_TIMID,
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
            MOVE_PSYSHOCK,
            MOVE_SHADOWBALL,
            MOVE_THUNDERBOLT,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_PHEROMOSA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_JOLLY,
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
            MOVE_LUNGE,
            MOVE_TRIPLEAXEL,
            MOVE_POISONJAB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BLACEPHALON,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_TIMID,
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
            MOVE_FIREBLAST,
            MOVE_FLAMETHROWER,
            MOVE_SHADOWBALL,
            MOVE_PSYSHOCK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx_Rank2[] =
{
    {
        .species = SPECIES_HONEDGE,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_1, //No Guard
        .nature = NATURE_ADAMANT,
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
            MOVE_SHADOWSNEAK,
            MOVE_ROCKSLIDE,
            MOVE_NIGHTSLASH,
            MOVE_SLASH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_GASTLY,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_TIMID,
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
            MOVE_HEX,
            MOVE_VENOSHOCK,
            MOVE_DARKPULSE,
            MOVE_UPROAR,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_GOLETT,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Iron Fist
        .nature = NATURE_ADAMANT,
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
            MOVE_SHADOWPUNCH,
            MOVE_STOMPINGTANTRUM,
            MOVE_ICEPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx_Rank5[] =
{
	{
        .species = SPECIES_AEGISLASH,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Stance Change
        .nature = NATURE_ADAMANT,
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
            MOVE_KINGSSHIELD,
            MOVE_SHADOWCLAW,
            MOVE_IRONHEAD,
            MOVE_SACREDSWORD,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_GENGAR,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Cursed Body
        .nature = NATURE_TIMID,
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
            MOVE_SHADOWBALL,
            MOVE_SLUDGEWAVE,
            MOVE_DAZZLINGGLEAM,
            MOVE_DARKPULSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_GOLURK,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //No Guard
        .nature = NATURE_JOLLY,
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
            MOVE_POLTERGEIST,
            MOVE_EARTHQUAKE,
            MOVE_DYNAMICPUNCH,
            MOVE_STONEEDGE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx_Rank6[] =
{
    {
        .species = SPECIES_LUNALA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Shadow Shield
        .nature = NATURE_MODEST,
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
            MOVE_MOONGEISTBEAM,
            MOVE_FOCUSBLAST,
            MOVE_ICEBEAM,
            MOVE_PSYSHOCK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_GENGAR,
        .item = ITEM_GENGARITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Cursed Body
        .nature = NATURE_TIMID,
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
            MOVE_SHADOWBALL,
            MOVE_DARKPULSE,
            MOVE_SLUDGEWAVE,
            MOVE_DAZZLINGGLEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_BLACEPHALON,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_TIMID,
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
            MOVE_FIREBLAST,
            MOVE_FLAMETHROWER,
            MOVE_SHADOWBALL,
            MOVE_PSYCHIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx2_Rank2[] =
{
    {
        .species = SPECIES_MAGNEMITE,
        .item = ITEM_MAGNET,
        .ability = FRONTIER_ABILITY_2, //Sturdy
        .nature = NATURE_TIMID,
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
            MOVE_FLASH,
            MOVE_FLASHCANNON,
            MOVE_VOLTSWITCH,
            MOVE_SIGNALBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_SCYTHER,
        .item = ITEM_FIGY_BERRY,
        .ability = FRONTIER_ABILITY_2, //Technician
        .nature = NATURE_JOLLY,
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
            MOVE_DUALWINGBEAT,
            MOVE_BRUTALSWING,
            MOVE_FURYCUTTER,
            MOVE_BRICKBREAK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_NIDORAN_M,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Poison Point
        .nature = NATURE_JOLLY,
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
            MOVE_DOUBLEKICK,
            MOVE_POISONTAIL,
            MOVE_SUCKERPUNCH,
            MOVE_SHADOWCLAW,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx2_Rank5[] =
{
    {
        .species = SPECIES_MAGNEZONE,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_2, //Sturdy
        .nature = NATURE_TIMID,
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
            MOVE_VOLTSWITCH,
            MOVE_THUNDERBOLT,
            MOVE_FLASHCANNON,
            MOVE_AURORABEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_SCIZOR,
        .item = ITEM_SCIZORITE,
        .ability = FRONTIER_ABILITY_2, //Technician
        .nature = NATURE_IMPISH,
        .hpEv = 248,
        .defEv = 16,
        .spDefEv = 244,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_KNOCKOFF,
            MOVE_BULLETPUNCH,
            MOVE_BUGBITE,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_NIDOKING,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
        .nature = NATURE_TIMID,
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
            MOVE_SLUDGEWAVE,
            MOVE_EARTHPOWER,
            MOVE_FLAMETHROWER,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx2_Rank6[] =
{
    {
        .species = SPECIES_MAGEARNA_P,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Soul-Heart
        .nature = NATURE_TIMID,
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
            MOVE_DAZZLINGGLEAM,
            MOVE_FLASHCANNON,
            MOVE_THUNDERBOLT,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_GENESECT,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Download
        .nature = NATURE_JOLLY,
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
            MOVE_EXTREMESPEED,
            MOVE_LEECHLIFE,
            MOVE_IRONHEAD,
            MOVE_BLAZEKICK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_LANDORUS,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
        .nature = NATURE_TIMID,
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
            MOVE_EARTHPOWER,
            MOVE_SLUDGEWAVE,
            MOVE_PSYCHIC,
            MOVE_FOCUSBLAST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx3_Rank2[] =
{
    {
        .species = SPECIES_SHROOMISH,
        .item = ITEM_TOXIC_ORB,
        .ability = FRONTIER_ABILITY_2, //Poison Heal
        .nature = NATURE_ADAMANT,
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
            MOVE_BULLETSEED,
            MOVE_HEADBUTT,
            MOVE_DRAINPUNCH,
            MOVE_LEECHSEED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_PORYGON,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_2, //Download
        .nature = NATURE_JOLLY,
        .atkEv = 252,
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
            MOVE_SWIFT,
            MOVE_ELECTROWEB,
            MOVE_ICYWIND,
            MOVE_PSYSHOCK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_SLOWPOKE,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_ADAMANT,
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
            MOVE_ZENHEADBUTT,
            MOVE_LIQUIDATION,
            MOVE_BULLDOZE,
            MOVE_IRONTAIL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx3_Rank5[] =
{
    {
        .species = SPECIES_BRELOOM,
        .item = ITEM_FOCUS_SASH,
        .ability = FRONTIER_ABILITY_HIDDEN, //Technician
        .nature = NATURE_JOLLY,
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
            MOVE_BULLETSEED,
            MOVE_FORCEPALM,
            MOVE_MACHPUNCH,
            MOVE_ROCKTOMB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_PORYGON2,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_2, //Download
        .nature = NATURE_MODEST,
        .hpEv = 196,
        .spAtkEv = 252,
        .spDefEv = 60,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_TRIATTACK,
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
            MOVE_SHADOWBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_SLOWBRO,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_MODEST,
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
            MOVE_SCALD,
            MOVE_PSYCHIC,
            MOVE_ICEBEAM,
            MOVE_FLAMETHROWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Greenphx3_Rank6[] =
{
    {
        .species = SPECIES_KARTANA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_JOLLY,
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
            MOVE_LEAFBLADE,
            MOVE_SMARTSTRIKE,
            MOVE_SACREDSWORD,
            MOVE_KNOCKOFF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_PORYGON_Z,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Adaptability
        .nature = NATURE_TIMID,
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
            MOVE_SHADOWBALL,
            MOVE_TECHNOBLAST,
            MOVE_ICEBEAM,
            MOVE_CONVERSION,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
    {
        .species = SPECIES_PALKIA,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_HYDROPUMP,
            MOVE_FIREBLAST,
            MOVE_THUNDERBOLT,
            MOVE_SPACIALREND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
        .shiny = TRUE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Red_Rank2[] =
{
    {
        .species = SPECIES_BULBASAUR,
        .item = ITEM_BLACK_SLUDGE,
        .ability = FRONTIER_ABILITY_1, //Overgrow
        .nature = NATURE_TIMID,
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
            MOVE_MEGADRAIN,
            MOVE_SLUDGE,
            MOVE_ROUND,
            MOVE_LEECHSEED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CHARMANDER,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_2, //Tough Claws
        .nature = NATURE_JOLLY,
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
            MOVE_FLAMECHARGE,
            MOVE_SLASH,
            MOVE_DRAGONCLAW,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SQUIRTLE,
        .item = ITEM_WISE_GLASSES,
        .ability = FRONTIER_ABILITY_2, //Mega Launcher
        .nature = NATURE_TIMID,
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
            MOVE_WATERPULSE,
            MOVE_DRAGONPULSE,
            MOVE_ICYWIND,
            MOVE_AURASPHERE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Red_Rank5[] =
{
    {
        .species = SPECIES_VENUSAUR,
        .item = ITEM_BLACK_SLUDGE,
        .ability = FRONTIER_ABILITY_1, //Overgrow
        .nature = NATURE_MODEST,
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
            MOVE_SUBSTITUTE,
            MOVE_GIGADRAIN,
            MOVE_SLUDGEBOMB,
            MOVE_SYNTHESIS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CHARIZARD,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Tough Claws
        .nature = NATURE_JOLLY,
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
            MOVE_DRAGONCLAW,
            MOVE_THUNDERPUNCH,
            MOVE_DUALWINGBEAT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BLASTOISE,
        .item = ITEM_WIKI_BERRY,
        .ability = FRONTIER_ABILITY_2, //Mega Launcher
        .nature = NATURE_TIMID,
        .hpEv = 4,
        .spAtkEv = 252,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WATERPULSE,
            MOVE_DARKPULSE,
            MOVE_AURASPHERE,
            MOVE_DRAGONPULSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Red_Rank6[] =
{
    {
        .species = SPECIES_MEWTWO,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_PSYSTRIKE,
            MOVE_SHADOWBALL,
            MOVE_FLAMETHROWER,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DRAGONITE,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_1, //Multiscale
        .nature = NATURE_JOLLY,
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
            MOVE_DRAGONCLAW,
            MOVE_DUALWINGBEAT,
            MOVE_EARTHQUAKE,
            MOVE_EXTREMESPEED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MEW,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Synchronize
        .nature = NATURE_TIMID,
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
            MOVE_PSYSHOCK,
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
            MOVE_FOCUSBLAST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Gary_Rank2[] =
{
    {
        .species = SPECIES_GROWLITHE,
        .item = ITEM_CHARCOAL,
        .ability = FRONTIER_ABILITY_1, //Intimidate
        .nature = NATURE_JOLLY,
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
            MOVE_FLAMECHARGE,
            MOVE_FLAMEWHEEL,
            MOVE_PLAYROUGH,
            MOVE_PSYCHICFANGS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_EXEGGCUTE,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Harvest
        .nature = NATURE_MODEST,
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
            MOVE_GIGADRAIN,
            MOVE_DREAMEATER,
            MOVE_UPROAR,
            MOVE_SLUDGEBOMB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MAGIKARP,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .nature = NATURE_NAUGHTY,
        .atkEv = 252,
        .spAtkEv = 4,
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
            MOVE_BOUNCE,
            MOVE_TACKLE,
            MOVE_SPLASH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Gary_Rank5[] =
{
    {
        .species = SPECIES_ARCANINE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Intimidate
        .nature = NATURE_JOLLY,
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
            MOVE_WILDCHARGE,
            MOVE_PLAYROUGH,
            MOVE_PSYCHICFANGS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_EXEGGUTOR,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Harvest
        .nature = NATURE_MODEST,
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
            MOVE_GIGADRAIN,
            MOVE_DREAMEATER,
            MOVE_SLUDGEBOMB,
            MOVE_ANCIENTPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GYARADOS,
        .item = ITEM_POWER_HERB,
        .ability = FRONTIER_ABILITY_1, //Intimidate
        .nature = NATURE_JOLLY,
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
            MOVE_BOUNCE,
            MOVE_EARTHQUAKE,
            MOVE_POWERWHIP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Gary_Rank6[] =
{
    {
        .species = SPECIES_ARTICUNO,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_MODEST,
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
            MOVE_FREEZEDRY,
            MOVE_ICEBEAM,
            MOVE_AIRSLASH,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ZAPDOS,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Static
        .nature = NATURE_TIMID,
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
            MOVE_THUNDERBOLT,
            MOVE_HURRICANE,
            MOVE_HEATWAVE,
            MOVE_SIGNALBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_MOLTRES,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Flame Body
        .nature = NATURE_TIMID,
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
            MOVE_FLAMETHROWER,
            MOVE_SCORCHINGSANDS,
            MOVE_AIRSLASH,
            MOVE_EXTRASENSORY,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Ash_Rank2[] =
{
    {
        .species = SPECIES_PIKACHU_CAP_ORIGINAL,
        .item = ITEM_LIGHT_BALL,
        .ability = FRONTIER_ABILITY_HIDDEN, //Lightning Rod
        .nature = NATURE_TIMID,
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
            MOVE_ELECTROWEB,
            MOVE_DRAININGKISS,
            MOVE_SWIFT,
            MOVE_SIGNALBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DRATINI,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Shed Skin
        .nature = NATURE_ADAMANT,
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
            MOVE_AQUATAIL,
            MOVE_BREAKINGSWIPE,
            MOVE_BRUTALSWING,
            MOVE_IRONTAIL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GASTLY,
        .item = ITEM_BLACK_SLUDGE,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_TIMID,
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
            MOVE_HEX,
            MOVE_VENOSHOCK,
            MOVE_UPROAR,
            MOVE_ENERGYBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Ash_Rank5[] =
{
    {
        .species = SPECIES_PIKACHU_CAP_ORIGINAL,
        .item = ITEM_LIGHT_BALL,
        .ability = FRONTIER_ABILITY_HIDDEN, //Lightning Rod
        .nature = NATURE_TIMID,
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
            MOVE_THUNDERBOLT,
            MOVE_SURF,
            MOVE_DRAININGKISS,
            MOVE_GRASSKNOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DRAGONITE,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Multiscale
        .nature = NATURE_JOLLY,
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
            MOVE_OUTRAGE,
            MOVE_FIREPUNCH,
            MOVE_EXTREMESPEED,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GENGAR,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Levitate
        .nature = NATURE_TIMID,
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
            MOVE_SHADOWBALL,
            MOVE_SLUDGEBOMB,
            MOVE_DARKPULSE,
            MOVE_DAZZLINGGLEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Ash_Rank6[] =
{
    {
        .species = SPECIES_PIKACHU_CAP_ORIGINAL,
        .item = ITEM_LIGHT_BALL,
        .ability = FRONTIER_ABILITY_HIDDEN, //Lightning Rod
        .nature = NATURE_TIMID,
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
            MOVE_THUNDERBOLT,
            MOVE_SURF,
            MOVE_DRAININGKISS,
            MOVE_GRASSKNOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DRACOVISH,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_2, //Strong Jaw
        .nature = NATURE_JOLLY,
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
            MOVE_FISHIOUSREND,
            MOVE_CRUNCH,
            MOVE_OUTRAGE,
            MOVE_ICEFANG,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LUCARIO,
        .item = ITEM_LUCARIONITE,
        .ability = FRONTIER_ABILITY_1, //Steadfast
        .nature = NATURE_JOLLY,
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
            MOVE_METEORMASH,
            MOVE_CLOSECOMBAT,
            MOVE_ICEPUNCH,
            MOVE_BULLETPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Brendan_Rank2[] =
{
    {
        .species = SPECIES_MUDKIP,
        .item = ITEM_SHELL_BELL,
        .ability = FRONTIER_ABILITY_1, //Torrent
        .nature = NATURE_ADAMANT,
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
            MOVE_ROCKSMASH,
            MOVE_ROCKTHROW,
            MOVE_BITE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ARON,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_1, //Sturdy
        .nature = NATURE_ADAMANT,
        .hpEv = 248,
        .atkEv = 252,
        .spDefEv = 8,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_ROCKTOMB,
            MOVE_IRONTAIL,
            MOVE_SHADOWCLAW,
            MOVE_BULLDOZE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SEEDOT,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_1, //Chlorophyll
        .nature = NATURE_ADAMANT,
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
            MOVE_BULLETSEED,
            MOVE_PAYBACK,
            MOVE_RETALIATE,
            MOVE_ROCKSMASH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Brendan_Rank5[] =
{
    {
        .species = SPECIES_SWAMPERT,
        .item = ITEM_SWAMPERTITE,
        .ability = FRONTIER_ABILITY_1, //Torrent
        .nature = NATURE_JOLLY,
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
            MOVE_STONEEDGE,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_AGGRON,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Rock Head
        .nature = NATURE_ADAMANT,
        .hpEv = 252,
        .atkEv = 120,
        .defEv = 132,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_BODYPRESS,
            MOVE_HEAVYSLAM,
            MOVE_EARTHQUAKE,
            MOVE_HEADSMASH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SHIFTRY,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Chlorophyll
        .nature = NATURE_ADAMANT,
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
            MOVE_LEAFBLADE,
            MOVE_KNOCKOFF,
            MOVE_BRICKBREAK,
            MOVE_SUCKERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Brendan_Rank6[] =
{
    {
        .species = SPECIES_KYOGRE,
        .item = ITEM_BLUE_ORB,
        .ability = FRONTIER_ABILITY_1, //Drizzle
        .nature = NATURE_TIMID,
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
            MOVE_WATERSPOUT,
            MOVE_THUNDER,
            MOVE_ICEBEAM,
            MOVE_ORIGINPULSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LATIOS,
        .item = ITEM_LATIOSITE,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_TIMID,
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
            MOVE_PSYCHIC,
            MOVE_MYSTICALFIRE,
            MOVE_DRAGONPULSE,
            MOVE_SURF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_JIRACHI,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Serene Grace
        .nature = NATURE_JOLLY,
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
            MOVE_IRONHEAD,
            MOVE_ZENHEADBUTT,
            MOVE_ICEPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_May_Rank2[] =
{
    {
        .species = SPECIES_TORCHIC,
        .item = ITEM_EXPERT_BELT,
        .ability = FRONTIER_ABILITY_HIDDEN, //Speed Boost
        .nature = NATURE_JOLLY,
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
            MOVE_FLAMECHARGE,
            MOVE_AERIALACE,
            MOVE_ROCKSLIDE,
            MOVE_SHADOWCLAW,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_WHISMUR,
        .item = ITEM_NORMAL_GEM,
        .ability = FRONTIER_ABILITY_1, //Soundproof
        .nature = NATURE_MODEST,
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
            MOVE_HYPERVOICE,
            MOVE_EXTRASENSORY,
            MOVE_DISARMINGVOICE,
            MOVE_ICYWIND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LOTAD,
        .item = ITEM_BLUNDER_POLICY,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .nature = NATURE_MODEST,
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
            MOVE_WHIRLPOOL,
            MOVE_BUBBLEBEAM,
            MOVE_MEGADRAIN,
            MOVE_ICYWIND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_May_Rank5[] =
{
    {
        .species = SPECIES_BLAZIKEN,
        .item = ITEM_BLAZIKENITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Speed Boost
        .nature = NATURE_ADAMANT,
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
            MOVE_FIREPUNCH,
            MOVE_BRICKBREAK,
            MOVE_THUNDERPUNCH,
            MOVE_KNOCKOFF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_EXPLOUD,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Scrappy
        .nature = NATURE_TIMID,
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
            MOVE_BOOMBURST,
            MOVE_FLAMETHROWER,
            MOVE_SURF,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LUDICOLO,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .nature = NATURE_MODEST,
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
            MOVE_HYDROPUMP,
            MOVE_GIGADRAIN,
            MOVE_ICEBEAM,
            MOVE_FOCUSBLAST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_May_Rank6[] =
{
    {
        .species = SPECIES_GROUDON,
        .item = ITEM_RED_ORB,
        .ability = FRONTIER_ABILITY_1, //Drought
        .nature = NATURE_JOLLY,
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
            MOVE_PRECIPICEBLADES,
            MOVE_HEATCRASH,
            MOVE_DRAGONCLAW,
            MOVE_STONEEDGE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LATIAS,
        .item = ITEM_LATIASITE,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_TIMID,
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
            MOVE_PSYSHOCK,
            MOVE_DRAGONPULSE,
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DEOXYS_ATTACK,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_PSYCHIC,
            MOVE_SHADOWBALL,
            MOVE_FOCUSBLAST,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Hailey_Rank2[] =
{
    {
        .species = SPECIES_SNOVER,
        .item = ITEM_ICE_GEM,
        .ability = FRONTIER_ABILITY_1, //Snow Warning
        .nature = NATURE_TIMID,
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
            MOVE_WEATHERBALL,
            MOVE_MAGICALLEAF,
            MOVE_ROUND,
            MOVE_WATERPULSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CUBCHOO,
        .item = ITEM_EXPERT_BELT,
        .ability = FRONTIER_ABILITY_2, //Slush Rush
        .nature = NATURE_MODEST,
        .hpEv = 4,
        .spAtkEv = 252,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_FROSTBREATH,
            MOVE_BRINE,
            MOVE_GRASSKNOT,
            MOVE_ROUND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_AMAURA,
        .item = ITEM_MAGO_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Snow Warning
        .nature = NATURE_TIMID,
        .defEv = 4,
        .spAtkEv = 252,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_AURORABEAM,
            MOVE_ANCIENTPOWER,
            MOVE_MUDSHOT,
            MOVE_CHARGEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Hailey_Rank5[] =
{
    {
        .species = SPECIES_ABOMASNOW,
        .item = ITEM_ABOMASITE,
        .ability = FRONTIER_ABILITY_1, //Snow Warning
        .nature = NATURE_ADAMANT,
        .atkEv = 252,
        .spDefEv = 8,
        .spdEv = 248,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WOODHAMMER,
            MOVE_ICEPUNCH,
            MOVE_EARTHQUAKE,
            MOVE_ICESHARD,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BEARTIC,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Slush Rush
        .nature = NATURE_ADAMANT,
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
            MOVE_ICICLECRASH,
            MOVE_BRICKBREAK,
            MOVE_PLAYROUGH,
            MOVE_ROCKSLIDE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_VANILLUXE,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_2, //Snow Warning
        .nature = NATURE_TIMID,
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
            MOVE_BLIZZARD,
            MOVE_FREEZEDRY,
            MOVE_FLASHCANNON,
            MOVE_SIGNALBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Hailey_Rank6[] =
{
    {
        .species = SPECIES_NINETALES_A,
        .item = ITEM_FOCUS_SASH,
        .ability = FRONTIER_ABILITY_HIDDEN, //Snow Warning
        .nature = NATURE_TIMID,
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
            MOVE_BLIZZARD,
            MOVE_MOONBLAST,
            MOVE_PSYSHOCK,
            MOVE_FREEZEDRY,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CALYREX_ICE_RIDER,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //As One (Glastrier)
        .nature = NATURE_ADAMANT,
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
            MOVE_GLACIALLANCE,
            MOVE_HIGHHORSEPOWER,
            MOVE_ZENHEADBUTT,
            MOVE_CLOSECOMBAT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_KYUREM_WHITE,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Turboblaze
        .nature = NATURE_TIMID,
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
            MOVE_DRAGONPULSE,
            MOVE_FUSIONFLARE,
            MOVE_FREEZEDRY,
            MOVE_EARTHPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Lyra_Rank2[] =
{
    {
        .species = SPECIES_MARILL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Huge Power
        .nature = NATURE_ADAMANT,
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
            MOVE_AQUATAIL,
            MOVE_PLAYROUGH,
            MOVE_BRUTALSWING,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PORYGON,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Analytic
        .nature = NATURE_QUIET,
        .hpEv = 252,
        .spAtkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_SWIFT,
            MOVE_DREAMEATER,
            MOVE_SIGNALBEAM,
            MOVE_CHARGEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TANGELA,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_BOLD,
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
            MOVE_MEGADRAIN,
            MOVE_ANCIENTPOWER,
            MOVE_SLUDGEBOMB,
            MOVE_ROUND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Lyra_Rank5[] =
{
    {
        .species = SPECIES_AZUMARILL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Huge Power
        .nature = NATURE_ADAMANT,
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
            MOVE_LIQUIDATION,
            MOVE_PLAYROUGH,
            MOVE_ICEPUNCH,
            MOVE_BRICKBREAK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PORYGON2,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Analytic
        .nature = NATURE_QUIET,
        .hpEv = 252,
        .spAtkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_TRIATTACK,
            MOVE_THUNDERBOLT,
            MOVE_ICEBEAM,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TANGROWTH,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_CALM,
        .hpEv = 252,
        .defEv = 4,
        .spDefEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_SLUDGEBOMB,
            MOVE_GIGADRAIN,
            MOVE_FOCUSBLAST,
            MOVE_ANCIENTPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Lyra_Rank6[] =
{
    {
        .species = SPECIES_HO_OH,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_JOLLY,
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
            MOVE_SACREDFIRE,
            MOVE_BRAVEBIRD,
            MOVE_EARTHQUAKE,
            MOVE_ZENHEADBUTT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PORYGON_Z,
        .item = ITEM_CHOICE_SCARF,
        .ability = FRONTIER_ABILITY_1, //Adaptability
        .nature = NATURE_TIMID,
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
            MOVE_TECHNOBLAST,
            MOVE_SHADOWBALL,
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LUGIA,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Multiscale
        .nature = NATURE_MODEST,
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
            MOVE_PSYCHIC,
            MOVE_AEROBLAST,
            MOVE_EARTHPOWER,
            MOVE_HYDROPUMP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Aelius_Rank2[] =
{
    {
        .species = SPECIES_VULPIX,
        .item = ITEM_CHARCOAL,
        .ability = FRONTIER_ABILITY_HIDDEN, //Drought
        .nature = NATURE_TIMID,
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
            MOVE_INCINERATE,
            MOVE_HEX,
            MOVE_ROUND,
            MOVE_DARKPULSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_HOUNDOUR,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_1, //Solar Power
        .nature = NATURE_MODEST,
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
            MOVE_INCINERATE,
            MOVE_SNARL,
            MOVE_SLUDGEBOMB,
            MOVE_MUDSLAP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CHARMANDER,
        .item = ITEM_FIRE_GEM,
        .ability = FRONTIER_ABILITY_HIDDEN, //Solar Power
        .nature = NATURE_JOLLY,
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
            MOVE_FIREFANG,
            MOVE_THUNDERPUNCH,
            MOVE_BRICKBREAK,
            MOVE_FACADE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Aelius_Rank5[] =
{
    {
        .species = SPECIES_NINETALES,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_HIDDEN, //Drought
        .nature = NATURE_TIMID,
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
            MOVE_FLAMETHROWER,
            MOVE_SOLARBEAM,
            MOVE_SCORCHINGSANDS,
            MOVE_SHADOWBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_HOUNDOOM,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Solar Power
        .nature = NATURE_TIMID,
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
            MOVE_FIREBLAST,
            MOVE_FIERYWRATH,
            MOVE_SLUDGEBOMB,
            MOVE_SHADOWBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CHARIZARD,
        .item = ITEM_CHARIZARDITE_Y,
        .ability = FRONTIER_ABILITY_HIDDEN, //Solar Power
        .nature = NATURE_TIMID,
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
            MOVE_WEATHERBALL,
            MOVE_SOLARBEAM,
            MOVE_SCORCHINGSANDS,
            MOVE_ANCIENTPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Aelius_Rank6[] =
{
    {
        .species = SPECIES_GROUDON,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Drought
        .nature = NATURE_JOLLY,
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
            MOVE_PRECIPICEBLADES,
            MOVE_STONEEDGE,
            MOVE_HEATCRASH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RESHIRAM,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Turboblaze
        .nature = NATURE_TIMID,
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
            MOVE_BLUEFLARE,
            MOVE_DRAGONPULSE,
            MOVE_SCORCHINGSANDS,
            MOVE_FOCUSBLAST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CHARIZARD,
        .item = ITEM_CHARIZARDITE_Y,
        .ability = FRONTIER_ABILITY_HIDDEN, //Solar Power
        .nature = NATURE_TIMID,
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
            MOVE_WEATHERBALL,
            MOVE_SOLARBEAM,
            MOVE_SCORCHINGSANDS,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Brock_Rank2[] =
{
    {
        .species = SPECIES_GEODUDE,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_1, //Sturdy
        .nature = NATURE_ADAMANT,
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
            MOVE_BULLDOZE,
            MOVE_ROCKSMASH,
            MOVE_STRENGTH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_OMANYTE,
        .item = ITEM_MYSTIC_WATER,
        .ability = FRONTIER_ABILITY_2, //Swift Swim
        .nature = NATURE_MODEST,
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
            MOVE_BRINE,
            MOVE_ANCIENTPOWER,
            MOVE_ICYWIND,
            MOVE_MUDSHOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ONIX,
        .item = ITEM_HARD_STONE,
        .ability = FRONTIER_ABILITY_1, //Rock Head
        .nature = NATURE_JOLLY,
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
            MOVE_DRAGONTAIL,
            MOVE_SANDTOMB,
            MOVE_BRUTALSWING,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_KABUTO,
        .item = ITEM_MYSTIC_WATER,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .nature = NATURE_NAUGHTY,
        .atkEv = 252,
        .spAtkEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WATERPULSE,
            MOVE_ROCKTOMB,
            MOVE_KNOCKOFF,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Brock_Rank5[] =
{
    {
        .species = SPECIES_GOLEM,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //Sturdy
        .nature = NATURE_BRAVE,
        .hpEv = 252,
        .atkEv = 252,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_STONEEDGE,
            MOVE_EARTHQUAKE,
            MOVE_THUNDERPUNCH,
            MOVE_GYROBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_OMASTAR,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .nature = NATURE_MODEST,
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
            MOVE_HYDROPUMP,
            MOVE_ICEBEAM,
            MOVE_ANCIENTPOWER,
            MOVE_EARTHPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STEELIX,
        .item = ITEM_STEELIXITE,
        .ability = FRONTIER_ABILITY_1, //Rock Head
        .nature = NATURE_BRAVE,
        .hpEv = 92,
        .atkEv = 252,
        .defEv = 160,
        .spDefEv = 4,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 0,
        .moves = 
        {
            MOVE_EARTHQUAKE,
            MOVE_STONEEDGE,
            MOVE_GYROBALL,
            MOVE_BODYPRESS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_KABUTOPS,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Swift Swim
        .nature = NATURE_ADAMANT,
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
            MOVE_WATERFALL,
            MOVE_LEECHLIFE,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Brock_Rank6[] =
{
    {
        .species = SPECIES_LANDORUS,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
        .nature = NATURE_TIMID,
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
            MOVE_EARTHPOWER,
            MOVE_PSYCHIC,
            MOVE_SLUDGEWAVE,
            MOVE_FOCUSBLAST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NIHILEGO,
        .item = ITEM_POWER_HERB,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_TIMID,
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
            MOVE_METEORBEAM,
            MOVE_SLUDGEWAVE,
            MOVE_GRASSKNOT,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TYRANITAR,
        .item = ITEM_TYRANITARITE,
        .ability = FRONTIER_ABILITY_1, //Sand Stream
        .nature = NATURE_ADAMANT,
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
            MOVE_CRUNCH,
            MOVE_ICEPUNCH,
            MOVE_FIREPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Misty_Rank2[] =
{
    {
        .species = SPECIES_PSYDUCK,
        .item = ITEM_SHELL_BELL,
        .ability = FRONTIER_ABILITY_HIDDEN, //Swift Swim
        .nature = NATURE_MODEST,
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
            MOVE_WATERPULSE,
            MOVE_ICYWIND,
            MOVE_PSYBEAM,
            MOVE_CLEARSMOG,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_WOOPER,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Unaware
        .nature = NATURE_ADAMANT,
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
            MOVE_AQUATAIL,
            MOVE_SLAM,
            MOVE_STOMPINGTANTRUM,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STARYU,
        .item = ITEM_EXPERT_BELT,
        .ability = FRONTIER_ABILITY_HIDDEN, //Analytic
        .nature = NATURE_TIMID,
        .spAtkEv = 252,
        .spDefEv = 4,
        .hpEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_PSYBEAM,
            MOVE_BRINE,
            MOVE_ICYWIND,
            MOVE_POWERGEM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Misty_Rank5[] =
{
    {
        .species = SPECIES_GOLDUCK,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Swift Swim
        .nature = NATURE_MODEST,
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
            MOVE_PSYCHIC,
            MOVE_SCALD,
            MOVE_ICEBEAM,
            MOVE_SIGNALBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_QUAGSIRE,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Unaware
        .nature = NATURE_ADAMANT,
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
            MOVE_LIQUIDATION,
            MOVE_EARTHQUAKE,
            MOVE_ROCKSLIDE,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STARMIE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Natural Cure
        .nature = NATURE_TIMID,
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
            MOVE_SCALD,
            MOVE_ICEBEAM,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Misty_Rank6[] =
{
    {
        .species = SPECIES_KYOGRE,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Drizzle
        .nature = NATURE_TIMID,
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
            MOVE_WATERSPOUT,
            MOVE_ORIGINPULSE,
            MOVE_THUNDER,
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
        .nature = NATURE_ADAMANT,
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
            MOVE_ICEPUNCH,
            MOVE_EARTHQUAKE,
            MOVE_HAMMERARM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GRENINJA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Protean
        .nature = NATURE_TIMID,
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
            MOVE_HYDROPUMP,
            MOVE_ICEBEAM,
            MOVE_DARKPULSE,
            MOVE_EXTRASENSORY,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cheryl_Rank2[] =
{
    {
        .species = SPECIES_DRIFLOON,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_2, //Unburden
        .nature = NATURE_MODEST,
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
            MOVE_OMINOUSWIND,
            MOVE_ICYWIND,
            MOVE_CLEARSMOG,
            MOVE_CHARGEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_WAILMER,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Oblivious
        .nature = NATURE_MODEST,
        .spAtkEv = 252,
        .spDefEv = 8,
        .spdEv = 248,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_BRINE,
            MOVE_ICEBEAM,
            MOVE_HYPERVOICE,
            MOVE_CLEARSMOG,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_HAPPINY,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_2, //Serene Grace
        .nature = NATURE_MODEST,
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
            MOVE_DISARMINGVOICE,
            MOVE_PSYCHIC,
            MOVE_FLAMETHROWER,
            MOVE_HYPERVOICE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cheryl_Rank5[] =
{
    {
        .species = SPECIES_DRIFBLIM,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_2, //Unburden
        .nature = NATURE_MODEST,
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
            MOVE_SHADOWBALL,
            MOVE_THUNDERBOLT,
            MOVE_PSYCHIC,
            MOVE_STRENGTHSAP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_WAILORD,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Oblivious
        .nature = NATURE_MODEST,
        .spAtkEv = 252,
        .spDefEv = 8,
        .spdEv = 248,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_WATERSPOUT,
            MOVE_HYDROPUMP,
            MOVE_ICEBEAM,
            MOVE_CLEARSMOG,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CHANSEY,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Serene Grace
        .nature = NATURE_BOLD,
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
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
            MOVE_TRIATTACK,
            MOVE_SOFTBOILED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cheryl_Rank6[] =
{
    {
        .species = SPECIES_DARKRAI,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Bad Dreams
        .nature = NATURE_TIMID,
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
            MOVE_DARKPULSE,
            MOVE_SHADOWBALL,
            MOVE_SLUDGEBOMB,
            MOVE_SPACIALREND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PALKIA,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_SPACIALREND,
            MOVE_HYDROPUMP,
            MOVE_FIREBLAST,
            MOVE_AURASPHERE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ARCEUS,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Multitype
        .nature = NATURE_JOLLY,
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
            MOVE_EXTREMESPEED,
            MOVE_SHADOWCLAW,
            MOVE_BRICKBREAK,
            MOVE_ZENHEADBUTT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Juniper_Rank2[] =
{
    {
        .species = SPECIES_TEPIG,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_HIDDEN, //Rock Head
        .nature = NATURE_JOLLY,
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
            MOVE_FLAMECHARGE,
            MOVE_WILDCHARGE,
            MOVE_ROCKTOMB,
            MOVE_STOMPINGTANTRUM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_OSHAWOTT,
        .item = ITEM_MYSTIC_WATER,
        .ability = FRONTIER_ABILITY_2, //Justified
        .nature = NATURE_MODEST,
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
            MOVE_WATERPULSE,
            MOVE_GRASSKNOT,
            MOVE_AIRSLASH,
            MOVE_ICYWIND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SNIVY,
        .item = ITEM_WISE_GLASSES,
        .ability = FRONTIER_ABILITY_HIDDEN, //Contrary
        .nature = NATURE_MODEST,
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
            MOVE_ENERGYBALL,
            MOVE_TWISTER,
            MOVE_MEGADRAIN,
            MOVE_WRINGOUT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Juniper_Rank5[] =
{
    {
        .species = SPECIES_EMBOAR,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Rock Head
        .nature = NATURE_ADAMANT,
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
            MOVE_WILDCHARGE,
            MOVE_HEADSMASH,
            MOVE_BRICKBREAK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SAMUROTT,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_HIDDEN, //Intrepid Sword
        .nature = NATURE_ADAMANT,
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
            MOVE_LIQUIDATION,
            MOVE_SACREDSWORD,
            MOVE_KNOCKOFF,
            MOVE_MEGAHORN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SERPERIOR,
        .item = ITEM_SITRUS_BERRY,
        .ability = FRONTIER_ABILITY_HIDDEN, //Contrary
        .nature = NATURE_TIMID,
        .hpEv = 4,
        .spAtkEv = 252,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_LEAFSTORM,
            MOVE_DRAGONPULSE,
            MOVE_WRINGOUT,
            MOVE_SUBSTITUTE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Juniper_Rank6[] =
{
    {
        .species = SPECIES_RESHIRAM,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_1, //Turboblaze
        .nature = NATURE_MODEST,
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
            MOVE_DRAGONPULSE,
            MOVE_BLUEFLARE,
            MOVE_EARTHPOWER,
            MOVE_PSYCHIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ZEKROM,
        .item = ITEM_AIR_BALLOON,
        .ability = FRONTIER_ABILITY_1, //Teravolt
        .nature = NATURE_JOLLY,
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
            MOVE_BOLTSTRIKE,
            MOVE_DRAGONCLAW,
            MOVE_DUALWINGBEAT,
            MOVE_SHADOWCLAW,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_KYUREM,
        .item = ITEM_NEVER_MELT_ICE,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_FREEZEDRY,
            MOVE_EARTHPOWER,
            MOVE_DRAGONPULSE,
            MOVE_ROOST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Buck_Rank2[] =
{
    {
        .species = SPECIES_EEVEE,
        .item = ITEM_SILK_SCARF,
        .ability = FRONTIER_ABILITY_2, //Adaptability
        .nature = NATURE_ADAMANT,
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
            MOVE_BODYSLAM,
            MOVE_IRONTAIL,
            MOVE_BITE,
            MOVE_QUICKATTACK,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DUSKULL,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_ADAMANT,
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
            MOVE_THIEF,
            MOVE_SHADOWSNEAK,
            MOVE_SKITTERSMACK,
            MOVE_SUCKERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BALTOY,
        .item = ITEM_GROUND_GEM,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_MODEST,
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
            MOVE_SCORCHINGSANDS,
            MOVE_DREAMEATER,
            MOVE_CHARGEBEAM,
            MOVE_GRASSKNOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Buck_Rank5[] =
{
    {
        .species = SPECIES_UMBREON,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Dark Aura
        .nature = NATURE_MODEST,
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
            MOVE_DARKPULSE,
            MOVE_SNARL,
            MOVE_PSYCHIC,
            MOVE_SHADOWBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DUSKNOIR,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_JOLLY,
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
            MOVE_POLTERGEIST,
            MOVE_FIREPUNCH,
            MOVE_ICEPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CLAYDOL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_TIMID,
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
            MOVE_EARTHPOWER,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_SHADOWBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Buck_Rank6[] =
{
    {
        .species = SPECIES_DARKRAI,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Bad Dreams
        .nature = NATURE_TIMID,
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
            MOVE_DARKPULSE,
            MOVE_FOCUSBLAST,
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_GIRATINA_ORIGIN,
        .item = ITEM_GRISEOUS_ORB,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_ADAMANT,
        .atkEv = 252,
        .spDefEv = 8,
        .spdEv = 248,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DRAGONCLAW,
            MOVE_POLTERGEIST,
            MOVE_EARTHQUAKE,
            MOVE_IRONHEAD,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CRESSELIA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Levitate
        .nature = NATURE_TIMID,
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
            MOVE_PSYSHOCK,
            MOVE_SHADOWBALL,
            MOVE_MOONBLAST,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Marley_Rank2[] =
{
    {
        .species = SPECIES_GROWLITHE,
        .item = ITEM_CHARCOAL,
        .ability = FRONTIER_ABILITY_2, //Flash Fire
        .nature = NATURE_JOLLY,
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
            MOVE_FIREFANG,
            MOVE_THIEF,
            MOVE_AERIALACE,
            MOVE_WILDCHARGE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STARYU,
        .item = ITEM_MYSTIC_WATER,
        .ability = FRONTIER_ABILITY_2, //Natural Cure
        .nature = NATURE_TIMID,
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
            MOVE_BRINE,
            MOVE_PSYBEAM,
            MOVE_POWERGEM,
            MOVE_TWISTER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_VOLTORB,
        .item = ITEM_MAGNET,
        .ability = FRONTIER_ABILITY_2, //Static
        .nature = NATURE_TIMID,
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
            MOVE_CHARGEBEAM,
            MOVE_SHOCKWAVE,
            MOVE_SIGNALBEAM,
            MOVE_SWIFT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Marley_Rank5[] =
{
    {
        .species = SPECIES_ARCANINE,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_2, //Flash Fire
        .nature = NATURE_JOLLY,
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
            MOVE_WILDCHARGE,
            MOVE_PLAYROUGH,
            MOVE_CLOSECOMBAT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_STARMIE,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_2, //Natural Cure
        .nature = NATURE_TIMID,
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
            MOVE_PSYCHIC,
            MOVE_HYDROPUMP,
            MOVE_POWERGEM,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ELECTRODE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_2, //Static
        .nature = NATURE_HASTY,
        .atkEv = 4,
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
            MOVE_THUNDERBOLT,
            MOVE_VOLTSWITCH,
            MOVE_SIGNALBEAM,
            MOVE_EXPLOSION,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Marley_Rank6[] =
{
    {
        .species = SPECIES_ENTEI,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_JOLLY,
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
            MOVE_SACREDFIRE,
            MOVE_STOMPINGTANTRUM,
            MOVE_STONEEDGE,
            MOVE_EXTREMESPEED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SUICUNE,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_HYDROPUMP,
            MOVE_ICEBEAM,
            MOVE_SHADOWBALL,
            MOVE_EXTRASENSORY,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RAIKOU,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_THUNDERBOLT,
            MOVE_VOLTSWITCH,
            MOVE_AURASPHERE,
            MOVE_EXTRASENSORY,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Riley_Rank2[] =
{
    {
        .species = SPECIES_RIOLU,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_2, //Inner Focus
        .nature = NATURE_JOLLY,
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
            MOVE_LOWSWEEP,
            MOVE_BITE,
            MOVE_BULLETPUNCH,
            MOVE_DUALCHOP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BAGON,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
        .nature = NATURE_NAUGHTY,
        .atkEv = 252,
        .spAtkEv = 4,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DRAGONBREATH,
            MOVE_FIREFANG,
            MOVE_ZENHEADBUTT,
            MOVE_ROCKSLIDE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CRANIDOS,
        .item = ITEM_HARD_STONE,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
        .nature = NATURE_JOLLY,
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
            MOVE_ROCKTOMB,
            MOVE_IRONTAIL,
            MOVE_ROCKSMASH,
            MOVE_CRUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Riley_Rank5[] =
{
    {
        .species = SPECIES_LUCARIO,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_2, //Inner Focus
        .nature = NATURE_JOLLY,
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
            MOVE_BLAZEKICK,
            MOVE_CLOSECOMBAT,
            MOVE_METEORMASH,
            MOVE_EXTREMESPEED,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SALAMENCE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Intimidate
        .nature = NATURE_JOLLY,
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
            MOVE_DRAGONCLAW,
            MOVE_DUALWINGBEAT,
            MOVE_FIREFANG,
            MOVE_EARTHQUAKE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RAMPARDOS,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
        .nature = NATURE_JOLLY,
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
            MOVE_ROCKSLIDE,
            MOVE_ZENHEADBUTT,
            MOVE_FIREPUNCH,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Riley_Rank6[] =
{
    {
        .species = SPECIES_LUCARIO,
        .item = ITEM_LUCARIONITE,
        .ability = FRONTIER_ABILITY_2, //Inner Focus
        .nature = NATURE_JOLLY,
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
            MOVE_BULLETPUNCH,
            MOVE_CLOSECOMBAT,
            MOVE_METEORMASH,
            MOVE_ICEPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DIALGA,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_DRAGONPULSE,
            MOVE_FLASHCANNON,
            MOVE_FLAMETHROWER,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TERRAKION,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Justified
        .nature = NATURE_JOLLY,
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
            MOVE_POISONJAB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Chili_Rank2[] =
{
    {
        .species = SPECIES_PANSEAR,
        .item = ITEM_WIKI_BERRY,
        .ability = FRONTIER_ABILITY_1, //Gluttony
        .nature = NATURE_MODEST,
        .spAtkEv = 252,
        .spDefEv = 8,
        .spdEv = 248,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_FIREPLEDGE,
            MOVE_DISARMINGVOICE,
            MOVE_GRASSKNOT,
            MOVE_ROUND,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DARUMAKA,
        .item = ITEM_CHOICE_SCARF,
        .ability = FRONTIER_ABILITY_1, //Hustle
        .nature = NATURE_JOLLY,
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
            MOVE_FIREFANG,
            MOVE_ZENHEADBUTT,
            MOVE_ROCKTOMB,
            MOVE_UTURN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NUMEL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Oblivious
        .nature = NATURE_ADAMANT,
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
            MOVE_FLAMEWHEEL,
            MOVE_BULLDOZE,
            MOVE_ROCKTOMB,
            MOVE_IRONHEAD,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Chili_Rank5[] =
{
    {
        .species = SPECIES_SIMISEAR,
        .item = ITEM_WIKI_BERRY,
        .ability = FRONTIER_ABILITY_1, //Gluttony
        .nature = NATURE_TIMID,
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
            MOVE_FIREBLAST,
            MOVE_FOCUSBLAST,
            MOVE_GRASSKNOT,
            MOVE_BELCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DARMANITAN,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Sheer Force
        .nature = NATURE_JOLLY,
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
            MOVE_FIREPUNCH,
            MOVE_ROCKSLIDE,
            MOVE_IRONHEAD,
            MOVE_ZENHEADBUTT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CAMERUPT,
        .item = ITEM_CAMERUPTITE,
        .ability = FRONTIER_ABILITY_2, //Solid Rock
        .nature = NATURE_MODEST,
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
            MOVE_LAVAPLUME,
            MOVE_EARTHPOWER,
            MOVE_FLASHCANNON,
            MOVE_REST,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Chili_Rank6[] =
{
    {
        .species = SPECIES_GROUDON,
        .item = ITEM_RED_ORB,
        .ability = FRONTIER_ABILITY_1, //Desolate Land
        .nature = NATURE_JOLLY,
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
            MOVE_FIREPUNCH,
            MOVE_PRECIPICEBLADES,
            MOVE_STONEEDGE,
            MOVE_HEAVYSLAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_HO_OH,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Regenerator
        .nature = NATURE_JOLLY,
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
            MOVE_SACREDFIRE,
            MOVE_BRAVEBIRD,
            MOVE_EARTHQUAKE,
            MOVE_ZENHEADBUTT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_RESHIRAM,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Turboblaze
        .nature = NATURE_TIMID,
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
            MOVE_BLUEFLARE,
            MOVE_DRAGONPULSE,
            MOVE_EARTHPOWER,
            MOVE_PSYCHIC,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cress_Rank2[] =
{
    {
        .species = SPECIES_PANPOUR,
        .item = ITEM_WIKI_BERRY,
        .ability = FRONTIER_ABILITY_1, //Gluttony
        .nature = NATURE_TIMID,
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
            MOVE_WATERPLEDGE,
            MOVE_DISARMINGVOICE,
            MOVE_ROUND,
            MOVE_GRASSKNOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_TYMPOLE,
        .item = ITEM_MYSTIC_WATER,
        .ability = FRONTIER_ABILITY_HIDDEN, //Water Absorb
        .nature = NATURE_TIMID,
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
            MOVE_BUBBLEBEAM,
            MOVE_MUDSHOT,
            MOVE_ICYWIND,
            MOVE_INFESTATION,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CORPHISH,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_HIDDEN, //Adaptability
        .nature = NATURE_JOLLY,
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
            MOVE_RAZORSHELL,
            MOVE_PAYBACK,
            MOVE_METALCLAW,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cress_Rank5[] =
{
    {
        .species = SPECIES_SIMIPOUR,
        .item = ITEM_WIKI_BERRY,
        .ability = FRONTIER_ABILITY_1, //Gluttony
        .nature = NATURE_TIMID,
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
            MOVE_SCALD,
            MOVE_ICEBEAM,
            MOVE_FOCUSBLAST,
            MOVE_GRASSKNOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SEISMITOAD,
        .item = ITEM_WATER_GEM,
        .ability = FRONTIER_ABILITY_HIDDEN, //Water Absorb
        .nature = NATURE_ADAMANT,
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
            MOVE_LIQUIDATION,
            MOVE_STOMPINGTANTRUM,
            MOVE_POISONJAB,
            MOVE_DRAINPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_CRAWDAUNT,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_HIDDEN, //Adaptability
        .nature = NATURE_JOLLY,
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
            MOVE_CRABHAMMER,
            MOVE_KNOCKOFF,
            MOVE_CRUNCH,
            MOVE_AQUAJET,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cress_Rank6[] =
{
    {
        .species = SPECIES_KYOGRE,
        .item = ITEM_BLUE_ORB,
        .ability = FRONTIER_ABILITY_1, //Primordial Sea
        .nature = NATURE_TIMID,
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
            MOVE_WATERSPOUT,
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
            MOVE_ORIGINPULSE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PALKIA,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
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
            MOVE_SPACIALREND,
            MOVE_FIREBLAST,
            MOVE_HYDROPUMP,
            MOVE_THUNDERBOLT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ARCEUS_WATER,
        .item = ITEM_SPLASH_PLATE,
        .ability = FRONTIER_ABILITY_1, //Multitype
        .nature = NATURE_MODEST,
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
            MOVE_JUDGMENT,
            MOVE_ICEBEAM,
            MOVE_SPACIALREND,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cilan_Rank2[] =
{
    {
        .species = SPECIES_PANSAGE,
        .item = ITEM_WIKI_BERRY,
        .ability = FRONTIER_ABILITY_1, //Gluttony
        .nature = NATURE_TIMID,
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
            MOVE_MAGICALLEAF,
            MOVE_DISARMINGVOICE,
            MOVE_ROUND,
            MOVE_GRASSPLEDGE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PETILIL,
        .item = ITEM_WISE_GLASSES,
        .ability = FRONTIER_ABILITY_1, //Chlorophyll
        .nature = NATURE_MODEST,
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
            MOVE_MEGADRAIN,
            MOVE_POLLENPUFF,
            MOVE_ROUND,
            MOVE_PROTECT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_COTTONEE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Prankster
        .nature = NATURE_TIMID,
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
            MOVE_GIGADRAIN,
            MOVE_FAIRYWIND,
            MOVE_DREAMEATER,
            MOVE_SUBSTITUTE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cilan_Rank5[] =
{
    {
        .species = SPECIES_SIMISAGE,
        .item = ITEM_WIKI_BERRY,
        .ability = FRONTIER_ABILITY_1, //Gluttony
        .nature = NATURE_TIMID,
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
            MOVE_GIGADRAIN,
            MOVE_ENERGYBALL,
            MOVE_FOCUSBLAST,
            MOVE_DISARMINGVOICE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_LILLIGANT,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Chlorophyll
        .nature = NATURE_MODEST,
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
            MOVE_GIGADRAIN,
            MOVE_ENERGYBALL,
            MOVE_DREAMEATER,
            MOVE_POLLENPUFF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_WHIMSICOTT,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Prankster
        .nature = NATURE_TIMID,
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
            MOVE_GIGADRAIN,
            MOVE_MOONBLAST,
            MOVE_PSYCHIC,
            MOVE_SHADOWBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Cilan_Rank6[] =
{
    {
        .species = SPECIES_SHAYMIN_SKY,
        .item = ITEM_CHOICE_SPECS,
        .ability = FRONTIER_ABILITY_1, //Serene Grace
        .nature = NATURE_TIMID,
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
            MOVE_SEEDFLARE,
            MOVE_EARTHPOWER,
            MOVE_DAZZLINGGLEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_KARTANA,
        .item = ITEM_CHOICE_BAND,
        .ability = FRONTIER_ABILITY_1, //Beast Boost
        .nature = NATURE_JOLLY,
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
            MOVE_LEAFBLADE,
            MOVE_SMARTSTRIKE,
            MOVE_SACREDSWORD,
            MOVE_KNOCKOFF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SERPERIOR,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Contrary
        .nature = NATURE_TIMID,
        .spAtkEv = 252,
        .spDefEv = 4,
        .spdEv = 252,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
        .moves = 
        {
            MOVE_LEAFSTORM,
            MOVE_DRAGONPULSE,
            MOVE_HIDDENPOWER,
            MOVE_SYNTHESIS,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Steven_Rank2[] =
{
    {
        .species = SPECIES_BELDUM,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_1, //Clear Body
        .nature = NATURE_ADAMANT,
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
            MOVE_TACKLE,
            MOVE_HEADBUTT,
            MOVE_ZENHEADBUTT,
            MOVE_IRONHEAD,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_DRILBUR,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_HIDDEN, //Mold Breaker
        .nature = NATURE_JOLLY,
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
            MOVE_BULLDOZE,
            MOVE_ROCKTOMB,
            MOVE_METALCLAW,
            MOVE_CRUSHCLAW,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ARON,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Sturdy
        .nature = NATURE_IMPISH,
        .hpEv = 144,
        .atkEv = 252,
        .defEv = 112,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_BODYPRESS,
            MOVE_IRONTAIL,
            MOVE_FACADE,
            MOVE_DIG,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Steven_Rank5[] =
{
    {
        .species = SPECIES_METAGROSS,
        .item = ITEM_STEEL_GEM,
        .ability = FRONTIER_ABILITY_1, //Clear Body
        .nature = NATURE_JOLLY,
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
            MOVE_METEORMASH,
            MOVE_EARTHQUAKE,
            MOVE_ZENHEADBUTT,
            MOVE_BULLETPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_EXCADRILL,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Mold Breaker
        .nature = NATURE_JOLLY,
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
            MOVE_EARTHQUAKE,
            MOVE_ROCKSLIDE,
            MOVE_IRONHEAD,
            MOVE_ROCKTOMB,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_AGGRON,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_2, //Rock Head
        .nature = NATURE_IMPISH,
        .hpEv = 12,
        .atkEv = 252,
        .defEv = 236,
        .spDefEv = 8,
        .hpIv = 31,
        .atkIv = 31,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_HEADSMASH,
            MOVE_IRONHEAD,
            MOVE_BODYPRESS,
            MOVE_EARTHQUAKE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Steven_Rank6[] =
{
    {
        .species = SPECIES_METAGROSS,
        .item = ITEM_METAGROSSITE,
        .ability = FRONTIER_ABILITY_1, //Clear Body
        .nature = NATURE_JOLLY,
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
            MOVE_METEORMASH,
            MOVE_EARTHQUAKE,
            MOVE_ZENHEADBUTT,
            MOVE_THUNDERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NECROZMA_DUSK_MANE,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Prism Armor
        .nature = NATURE_JOLLY,
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
            MOVE_SUNSTEELSTRIKE,
            MOVE_EARTHQUAKE,
            MOVE_PHOTONGEYSER,
            MOVE_MORNINGSUN,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_ZACIAN_CROWNED,
        .item = ITEM_RUSTED_SWORD,
        .ability = FRONTIER_ABILITY_1, //Intrepid Sword
        .nature = NATURE_JOLLY,
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
            MOVE_BEHEMOTHBLADE,
            MOVE_PLAYROUGH,
            MOVE_WILDCHARGE,
            MOVE_CLOSECOMBAT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Adrian_Rank2[] =
{
    {
        .species = SPECIES_NIDORAN_M,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Poison Point
        .nature = NATURE_ADAMANT,
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
            MOVE_POISONTAIL,
            MOVE_PECK,
            MOVE_FURYATTACK,
            MOVE_THIEF,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_PAWNIARD,
        .item = ITEM_EVIOLITE,
        .ability = FRONTIER_ABILITY_1, //Defiant
        .nature = NATURE_JOLLY,
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
            MOVE_METALCLAW,
            MOVE_REVENGE,
            MOVE_KNOCKOFF,
            MOVE_DUALCHOP,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SLOWPOKE,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_QUIET,
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
            MOVE_WATERPULSE,
            MOVE_DREAMEATER,
            MOVE_SIGNALBEAM,
            MOVE_MUDSHOT,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Adrian_Rank5[] =
{
    {
        .species = SPECIES_NIDOKING,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_HIDDEN, //Sheer Force
        .nature = NATURE_TIMID,
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
            MOVE_SLUDGEWAVE,
            MOVE_EARTHPOWER,
            MOVE_FLAMETHROWER,
            MOVE_ICEBEAM,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_BISHARP,
        .item = ITEM_LEFTOVERS,
        .ability = FRONTIER_ABILITY_1, //Defiant
        .nature = NATURE_JOLLY,
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
            MOVE_IRONHEAD,
            MOVE_KNOCKOFF,
            MOVE_PSYCHOCUT,
            MOVE_SUCKERPUNCH,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_SLOWKING,
        .item = ITEM_ASSAULT_VEST,
        .ability = FRONTIER_ABILITY_HIDDEN, //Regenerator
        .nature = NATURE_QUIET,
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
            MOVE_DREAMEATER,
            MOVE_HYDROPUMP,
            MOVE_FIREBLAST,
            MOVE_SHADOWBALL,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

static const struct BattleTowerSpread sRaidPartnerSpread_Adrian_Rank6[] =
{
    {
        .species = SPECIES_ETERNATUS,
        .item = ITEM_LIFE_ORB,
        .ability = FRONTIER_ABILITY_1, //Pressure
        .nature = NATURE_TIMID,
        .defEv = 4,
        .spAtkEv = 252,
        .spdEv = 252,
        .hpIv = 31,
        .atkIv = 0,
        .defIv = 31,
        .spAtkIv = 31,
        .spDefIv = 31,
        .spdIv = 31,
        .moves = 
        {
            MOVE_DYNAMAXCANNON,
            MOVE_FLAMETHROWER,
            MOVE_SLUDGEBOMB,
            MOVE_RECOVER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_YVELTAL,
        .item = ITEM_MUSCLE_BAND,
        .ability = FRONTIER_ABILITY_1, //Dark Aura
        .nature = NATURE_ADAMANT,
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
            MOVE_KNOCKOFF,
            MOVE_DUALWINGBEAT,
            MOVE_SUCKERPUNCH,
            MOVE_ROCKSLIDE,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
    {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .item = ITEM_POWER_HERB,
        .ability = FRONTIER_ABILITY_1, //Prism Armor
        .nature = NATURE_TIMID,
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
            MOVE_METEORBEAM,
            MOVE_MOONGEISTBEAM,
            MOVE_PHOTONGEYSER,
            MOVE_EARTHPOWER,
        },
        .forSingles = TRUE,
        .forDoubles = TRUE,
        .modifyMovesDoubles = FALSE,
    },
};

extern const u8 sTrainerName_Laphicet[];
extern const u8 sTrainerName_Mlc[];
extern const u8 sTrainerName_Keith[];
extern const u8 sTrainerName_Note[];
extern const u8 sTrainerName_Kiibo[];
extern const u8 sTrainerName_Simply[];
extern const u8 sTrainerName_Greenphx[];
extern const u8 sTrainerName_Red[];
extern const u8 sTrainerName_Gary[];
extern const u8 sTrainerName_Ash[];
extern const u8 sTrainerName_Brendan[];
extern const u8 sTrainerName_May[];
extern const u8 sTrainerName_Hailey[];
extern const u8 sTrainerName_Lyra[];
extern const u8 sTrainerName_Aelius[];
extern const u8 sTrainerName_Brock[];
extern const u8 sTrainerName_Misty[];
extern const u8 sTrainerName_Cheryl[];
extern const u8 sTrainerName_Juniper[];
extern const u8 sTrainerName_Buck[];
extern const u8 sTrainerName_Marley[];
extern const u8 sTrainerName_Riley[];
extern const u8 sTrainerName_Chili[];
extern const u8 sTrainerName_Cress[];
extern const u8 sTrainerName_Cilan[];
extern const u8 sTrainerName_Steven[];
extern const u8 sTrainerName_Adrian[];

const struct MultiRaidTrainer gRaidPartners[] =
{
	{
		.owNum = 263,
		.trainerClass = CLASS_ORACLE,
		.backSpriteId = TRAINER_BACK_PIC_LAPHICET,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Laphicet,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Laphicet_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Laphicet_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Laphicet_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Laphicet_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Laphicet_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Laphicet_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_ANABEL,
		.trainerClass = CLASS_READ_DOCS,
		.backSpriteId = TRAINER_BACK_PIC_ANABEL,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Mlc,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Mlc_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Mlc_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Mlc_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Mlc_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Mlc_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Mlc_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_FERROTHORN,
		.trainerClass = CLASS_FERRO_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_KEITH,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Keith,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Keith_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Keith_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Keith_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Keith_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Keith_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Keith_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_WES,
		.trainerClass = CLASS_INFOSEEKER,
		.backSpriteId = TRAINER_BACK_PIC_WES,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Note,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Notekeeper_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Notekeeper_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Notekeeper_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Notekeeper_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Notekeeper_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Notekeeper_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_STEVEN,
		.trainerClass = CLASS_PROFESSOR,
		.backSpriteId = TRAINER_BACK_PIC_STEVEN,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Kiibo,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Kiibo_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Kiibo_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Kiibo_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Kiibo_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Kiibo_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Kiibo_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_MIRA,
		.trainerClass = CLASS_BETA_TESTER,
		.backSpriteId = TRAINER_BACK_PIC_MIRA,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Simply,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Simply_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Simply_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Simply_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Simply_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Simply_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Simply_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_GREENPHX,
		.trainerClass = CLASS_CREATOR,
		.backSpriteId = TRAINER_BACK_PIC_GREENPHX,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Greenphx,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Greenphx_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Greenphx_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Greenphx_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_GREENPHX,
		.trainerClass = CLASS_CREATOR,
		.backSpriteId = TRAINER_BACK_PIC_GREENPHX,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Greenphx,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Greenphx2_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Greenphx2_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Greenphx2_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx2_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx2_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx2_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_GREENPHX,
		.trainerClass = CLASS_CREATOR,
		.backSpriteId = TRAINER_BACK_PIC_GREENPHX,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Greenphx,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Greenphx3_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Greenphx3_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Greenphx3_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx3_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx3_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Greenphx3_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_RED_DUPE,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_RED,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Red,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Red_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Red_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Red_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Red_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Red_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Red_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_GARY,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_GARY,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Gary,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Gary_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Gary_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Gary_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Red_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Red_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Red_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_ASH,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_ASH,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Ash,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Ash_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Ash_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Ash_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Ash_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Ash_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Ash_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BRENDAN,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_BRENDAN,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Brendan,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Brendan_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Brendan_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Brendan_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Brendan_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Brendan_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Brendan_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_MAY,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_MAY,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_May,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_May_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_May_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_May_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_May_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_May_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_May_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_LITTLE_GIRL,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_MIRA,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Hailey,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Hailey_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Hailey_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Hailey_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Hailey_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Hailey_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Hailey_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_LYRA,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_LYRA,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Lyra,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Lyra_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Lyra_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Lyra_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Lyra_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Lyra_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Lyra_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_TAMER,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_HUGH,
		.gender =  MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Aelius,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Aelius_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Aelius_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Aelius_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Aelius_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Aelius_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Aelius_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_BROCK,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_BROCK,
		.gender =  MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Brock,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Brock_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Brock_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Brock_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Brock_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Brock_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Brock_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_MISTY,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_MISTY,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Misty,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Misty_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Misty_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Misty_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Misty_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Misty_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Misty_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_CHERYL,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_CHERYL,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Cheryl,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Cheryl_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Cheryl_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Cheryl_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cheryl_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cheryl_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cheryl_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_JUNIPER,
		.trainerClass = CLASS_PROFESSOR,
		.backSpriteId = TRAINER_BACK_PIC_JUNIPER,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Juniper,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Juniper_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Juniper_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Juniper_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Juniper_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Juniper_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Juniper_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_BUCK,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_BUCK,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Buck,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Buck_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Buck_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Buck_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Buck_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Buck_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Buck_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_MARLEY,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_MARLEY,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Marley,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Marley_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Marley_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Marley_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Marley_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Marley_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Marley_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_RILEY,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_RILEY,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Riley,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Riley_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Riley_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Riley_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Riley_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Riley_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Riley_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_CHILI,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_CHILI,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Chili,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Chili_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Chili_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Chili_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Chili_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Chili_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Chili_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_CRESS,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_CRESS,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Cress,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Cress_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Cress_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Cress_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cress_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cress_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cress_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_CILAN,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_CILAN,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Cilan,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Cilan_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Cilan_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Cilan_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cilan_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cilan_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Cilan_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_STEVEN,
		.trainerClass = CLASS_CHAMPION_RS,
		.backSpriteId = TRAINER_BACK_PIC_STEVEN,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Steven,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Steven_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Steven_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Steven_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Steven_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Steven_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Steven_Rank6),
		},
	},
    {
		.owNum = EVENT_OBJ_GFX_ADRIAN,
		.trainerClass = CLASS_PKMN_TRAINER_3,
		.backSpriteId = TRAINER_BACK_PIC_ADRIAN,
		.gender = MALE,
		.otId = 0x87116209,
		.name = sTrainerName_Adrian,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Adrian_Rank2,
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = sRaidPartnerSpread_Adrian_Rank5,
			[SIX_STAR_RAID] = sRaidPartnerSpread_Adrian_Rank6,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Adrian_Rank2),
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Adrian_Rank5),
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Adrian_Rank6),
		},
	},
};

const u8 gNumRaidPartners = NELEMS(gRaidPartners);

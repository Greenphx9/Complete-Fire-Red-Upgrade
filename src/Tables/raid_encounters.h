#include "../config.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"
#include "../../include/new/dynamax.h"

static struct Raid sRoute3Raids1Star[] =
{
	{
		.species = SPECIES_NOIBAT,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TRAPINCH,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute3Raids2Star[] =
{
	{
		.species = SPECIES_JANGMO_O,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_RESIST_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DREEPY,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_GENIUS_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute3Raids3Star[] =
{
	{
		.species = SPECIES_PELIPPER,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DRAKLOAK,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_SWIFT_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute3Raids4Star[] =
{
	{
		.species = SPECIES_SLIGGOO,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SLIGGOO_H,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_KOMMO_O,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute3Raids5Star[] =
{
	{
		.species = SPECIES_TURTONATOR,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_RESIST_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HAXORUS,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_GENIUS_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FLAPPLE_GIGA,
		.ability = RAID_ABILITY_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_GENIUS_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute3Raids6Star[] =
{
	{
		.species = SPECIES_RAIKOU,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_RESIST_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_CHOICE_SPECS,
		/*  4 %*/ ITEM_CHOICE_SCARF,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TYPE_NULL,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_FIRE_MEMORY,
		/* 80 %*/ ITEM_ELECTRIC_MEMORY,
		/* 80 %*/ ITEM_WATER_MEMORY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_PSYCHIC_MEMORY,
		/* 30 %*/ ITEM_DARK_MEMORY,
		/* 25 %*/ ITEM_FAIRY_MEMORY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BUG_MEMORY,
		},
	},
};

static struct Raid sRoute4Raids1Star[] =
{
	{
		.species = SPECIES_GRUBBIN,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_EKANS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute4Raids2Star[] =
{
	{
		.species = SPECIES_JOLTIK,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_NINCADA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute4Raids3Star[] =
{
	{
		.species = SPECIES_DURANT,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_KECLEON,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute4Raids4Star[] =
{
	{
		.species = SPECIES_GALVANTULA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARAQUANID,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute4Raids5Star[] =
{
	{
		.species = SPECIES_ORBEETLE_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GLISCOR,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};


static struct Raid sRoute4Raids6Star[] =
{
	{
		.species = SPECIES_LATIOS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HEATRAN,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute24Raids1Star[] =
{
	{
		.species = SPECIES_SEEDOT,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ODDISH,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_SWIFT_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute24Raids2Star[] =
{
	{
		.species = SPECIES_NUZLEAF,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PUMPKABOO,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute24Raids3Star[] =
{
	{
		.species = SPECIES_GLOOM,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_RESIST_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ROSELIA,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_GENIUS_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute24Raids4Star[] =
{
	{
		.species = SPECIES_LOPUNNY,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_STEENEE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_SWIFT_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute24Raids5Star[] =
{
	{
		.species = SPECIES_TYPHLOSION,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TYPHLOSION_H,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FERALIGATR,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MEGANIUM,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CHARIZARD_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BLASTOISE_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VENUSAUR_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute24Raids6Star[] =
{
	{
		.species = SPECIES_SUICUNE,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_LEFTOVERS,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute25Raids1Star[] =
{
	{
		.species = SPECIES_DRILBUR,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BARBOACH,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute25Raids2Star[] =
{
	{
		.species = SPECIES_VOLTORB,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VOLTORB_H,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CRABRAWLER,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute25Raids3Star[] =
{
	{
		.species = SPECIES_INDEEDEE,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_GENIUS_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_STEELIX,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_RESIST_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute25Raids4Star[] =
{
	{
		.species = SPECIES_TOUCANNON,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_GENIUS_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GOGOAT,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_RESIST_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute25Raids5Star[] =
{
	{
		.species = SPECIES_DELPHOX,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GRENINJA,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CHESNAUGHT,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_RESIST_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
		{
		.species = SPECIES_CINDERACE_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
		{
		.species = SPECIES_INTELEON_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_RILLABOOM_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute25Raids6Star[] =
{
	{
		.species = SPECIES_UXIE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_LEFTOVERS,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MESPRIT,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_LEFTOVERS,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_AZELF,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CLEVER_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_LEFTOVERS,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};


static struct Raid sRoute5Raids1Star[] =
{
	{
		.species = SPECIES_SKWOVET,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ZIGZAGOON,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute5Raids2Star[] =
{
	{
		.species = SPECIES_FLABEBE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SWADLOON,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute5Raids3Star[] =
{
	{
		.species = SPECIES_MUNCHLAX,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SALAZZLE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute5Raids4Star[] =
{
	{
		.species = SPECIES_ZEBSTRIKA,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SAWSBUCK,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute5Raids5Star[] =
{
	{
		.species = SPECIES_CENTISKORCH_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DARMANITAN_G,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute5Raids6Star[] =
{
	{
		.species = SPECIES_HOOPA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_SITRUS_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CELEBI,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_IAPAPA_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute6Raids1Star[] =
{
	{
		.species = SPECIES_HELIOPTILE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_EEVEE,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute6Raids2Star[] =
{
	{
		.species = SPECIES_DROWZEE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MISDREAVUS,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute6Raids3Star[] =
{
	{
		.species = SPECIES_UNFEZANT,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DUBWOOL,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute6Raids4Star[] =
{
	{
		.species = SPECIES_BRELOOM,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CAMERUPT,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute6Raids5Star[] =
{
	{
		.species = SPECIES_SNORLAX_GIGA,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_EEVEE_GIGA,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute6Raids6Star[] =
{
	{
		.species = SPECIES_TORNADUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_LEFTOVERS,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ENAMORUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_LEFTOVERS,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SHAYMIN,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute11Raids1Star[] =
{
	{
		.species = SPECIES_PARAS,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_YUNGOOS,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute11Raids2Star[] =
{
	{
		.species = SPECIES_APPLIN,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ROSELIA,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute11Raids3Star[] =
{
	{
		.species = SPECIES_FURFROU,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LEAVANNY,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute11Raids4Star[] =
{
	{
		.species = SPECIES_WHIMSICOTT,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FERROTHORN,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute11Raids5Star[] =
{
	{
		.species = SPECIES_SIMISAGE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SIMISEAR,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SIMIPOUR,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_KINGLER_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute11Raids6Star[] =
{
	{
		.species = SPECIES_MELMETAL,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_CHOICE_BAND,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ENTEI,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_CHOICE_SPECS,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sMtMoonRaids1Star[] =
{
	{
		.species = SPECIES_GEODUDE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GEODUDE_A,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sMtMoonRaids2Star[] =
{
	{
		.species = SPECIES_RHYHORN,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SHUCKLE,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sMtMoonRaids3Star[] =
{
	{
		.species = SPECIES_CRUSTLE,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CARBINK,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sMtMoonRaids4Star[] =
{
	{
		.species = SPECIES_COALOSSAL,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_STONJOURNER,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sMtMoonRaids5Star[] =
{
	{
		.species = SPECIES_LYCANROC,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LYCANROC_N,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LYCANROC_DUSK,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DREDNAW_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_COALOSSAL_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sMtMoonRaids6Star[] =
{
	{
		.species = SPECIES_TERRAKION,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PAYAPA_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_EXPERT_BELT,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LANDORUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_FOCUS_SASH,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_FOCUS_SASH,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute9Raids2Star[] =
{
	{
		.species = SPECIES_DODUO,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MURKROW,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute9Raids3Star[] =
{
	{
		.species = SPECIES_GRANBULL,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WATCHOG,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute9Raids4Star[] =
{
	{
		.species = SPECIES_ALOMOMOLA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_YANMEGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute9Raids5Star[] =
{
	{
		.species = SPECIES_PROBOPASS,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GLISCOR,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SEVIPER,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ZANGOOSE,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SANDACONDA_GIGA,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PRETTY_WING,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_POMEG_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute9Raids6Star[] =
{
	{
		.species = SPECIES_ZARUDE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_CHOICE_BAND,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_LEFTOVERS,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LATIAS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_SOUL_DEW,
		/*  1 %*/ ITEM_SOUL_DEW,
		},
	},
};

static struct Raid sRockTunnelRaids2Star[] =
{
	{
		.species = SPECIES_ROGGENROLA,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CARKOL,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_AGUAV_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_RARE_CANDY,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PHANPY,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRockTunnelRaids3Star[] =
{
	{
		.species = SPECIES_CRUSTLE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SUDOWOODO,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 50 %*/ ITEM_AGUAV_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_RARE_CANDY,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MINIOR_SHIELD,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRockTunnelRaids4Star[] =
{
	{
		.species = SPECIES_ONIX,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_LUCKY_EGG,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_COALOSSAL,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 50 %*/ ITEM_AGUAV_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_RARE_CANDY,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CAMERUPT,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_LUCKY_EGG,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRockTunnelRaids5Star[] =
{
	{
		.species = SPECIES_STONJOURNER,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_LUCKY_EGG,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_STEELIX,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 50 %*/ ITEM_AGUAV_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_RARE_CANDY,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MAGCARGO,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_LUCKY_EGG,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LAPRAS_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_LUCKY_EGG,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRockTunnelRaids6Star[] =
{
	{
		.species = SPECIES_TERRAKION,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PAYAPA_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_HEALTH_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_EXPERT_BELT,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LANDORUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_FOCUS_SASH,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_LUCKY_EGG,
		/*  4 %*/ ITEM_FOCUS_SASH,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute8Raids2Star[] =
{
	{
		.species = SPECIES_DRIFLOON,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LITWICK,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNUBBULL,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_BABIRI_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute8Raids3Star[] =
{
	{
		.species = SPECIES_CORVISQUIRE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SALAZZLE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_PAYAPA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_KRICKETUNE,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FLYING_GEM,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute8Raids4Star[] =
{
	{
		.species = SPECIES_XATU,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TORKOAL,
		.ability = RAID_ABILITY_2,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_EELEKTROSS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FLYING_GEM,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute8Raids5Star[] =
{
	{
		.species = SPECIES_HAWLUCHA,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_PAYAPA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_NINETALES,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARCANINE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARCANINE_H,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GOGOAT,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FLYING_GEM,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PYROAR,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FLYING_GEM,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GARBODOR_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_BALM_MUSHROOM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FLYING_GEM,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute8Raids6Star[] =
{
	{
		.species = SPECIES_VOLCANION,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_CHOICE_SPECS,
		/* 25 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_LUCKY_EGG,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_THUNDURUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_ELECTRIC_GEM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_CHOICE_SPECS,
		},
	},
	{
		.species = SPECIES_ENAMORUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_SITRUS_BERRY,
		/* 50 %*/ ITEM_ELECTRIC_GEM,
		/* 30 %*/ ITEM_GREPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_CHOICE_SPECS,
		},
	},
};

static struct Raid sPokemonTowerRaids2Star[] =
{
	{
		.species = SPECIES_DUSKULL,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KELPSY_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_PEARL_STRING,
		/*  4 %*/ ITEM_EXPERT_BELT,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HONEDGE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MISDREAVUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BALM_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sPokemonTowerRaids3Star[] =
{
	{
		.species = SPECIES_HAUNTER,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KELPSY_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_PEARL_STRING,
		/*  4 %*/ ITEM_EXPERT_BELT,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DOUBLADE,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DRIFBLIM,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MISMAGIUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BALM_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sPokemonTowerRaids4Star[] =
{
	{
		.species = SPECIES_TREVENANT,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KELPSY_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_PEARL_STRING,
		/*  4 %*/ ITEM_EXPERT_BELT,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DUSCLOPS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_POLTEAGEIST,
		.ability = RAID_ABILITY_HIDDEN,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CURSOLA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BALM_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sPokemonTowerRaids5Star[] =
{
	{
		.species = SPECIES_JELLICENT,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KELPSY_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_PEARL_STRING,
		/*  4 %*/ ITEM_EXPERT_BELT,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GENGAR_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_AEGISLASH,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_RUNERIGUS,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BALM_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GENGAR_GIGA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BALM_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sPokemonTowerRaids6Star[] =
{
	{
		.species = SPECIES_HOOPA,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KELPSY_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_COMET_SHARD,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_PEARL_STRING,
		/*  4 %*/ ITEM_EXPERT_BELT,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HOOPA_UNBOUND,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_FOCUS_SASH,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SPECTRIER,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_CHOICE_SPECS,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GHOST_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_COMET_SHARD,
		/*  1 %*/ ITEM_CHOICE_SCARF,
		},
	},
	{
		.species = SPECIES_MARSHADOW,
		.ability = RAID_ABILITY_1,
		.drops =
		{
		/*100 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 80 %*/ ITEM_SPELL_TAG,
		/* 50 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 25 %*/ ITEM_RARE_CANDY,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_BALM_MUSHROOM,
		/*  4 %*/ ITEM_FOCUS_SASH,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute7Raids2Star[] =
{
	{
		.species = SPECIES_NATU,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_RHYHORN,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_ROCK_GEM,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARIADOS,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_PAYAPA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_POISON_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute7Raids3Star[] =
{
	{
		.species = SPECIES_SIGILYPH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CRUSTLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_ROCK_GEM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LEDIAN,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HOUNDOOM,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_FIRE_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VIGOROTH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute7Raids4Star[] =
{
	{
		.species = SPECIES_INDEEDEE,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GIGALITH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_ROCK_GEM,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FLOATZEL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DRACOZOLT,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_DRAGON_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GOLURK,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_COLBUR_BERRY,
		/* 50 %*/ ITEM_GHOST_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute7Raids5Star[] =
{
	{
		.species = SPECIES_MR_RIME,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_RHYPERIOR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_ROCK_GEM,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HOUNDOOM,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HATTERENE_GIGA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute7Raids6Star[] =
{
	{
		.species = SPECIES_COBALION,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_PAYAPA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_GRASS_GEM,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TAPU_KOKO,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 50 %*/ ITEM_ELECTRIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ZERAORA,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 50 %*/ ITEM_ELECTRIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MELOETTA,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute16Raids2Star[] =
{
	{
		.species = SPECIES_ESPURR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNEASEL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_ICE_GEM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNEASEL_H,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_ICE_GEM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PATRAT,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_PAYAPA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_POISON_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute16Raids3Star[] =
{
	{
		.species = SPECIES_MUSHARNA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LIEPARD,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_DARK_GEM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PURUGLY,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_PAYAPA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute16Raids4Star[] =
{
	{
		.species = SPECIES_GOTHITELLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SHIFTRY,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_DARK_GEM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_DARK_GEM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TOUCANNON,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_NORMAL_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute16Raids5Star[] =
{
	{
		.species = SPECIES_SOLROCK,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LUNATONE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_COLBUR_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GARDEVOIR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_KEBIA_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 50 %*/ ITEM_FAIRY_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MALAMAR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_DARK_GEM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BISHARP,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_DARK_GEM,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WEAVILE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_LUM_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_DARK_GEM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_BIG_NUGGET,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNEASLER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
			/*100 %*/ ITEM_CHOPLE_BERRY,
			/* 80 %*/ ITEM_TANGA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 50 %*/ ITEM_QUALOT_BERRY,
			/* 50 %*/ ITEM_BIG_MUSHROOM,
			/* 30 %*/ ITEM_LUM_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_DARK_GEM,
			/* 25 %*/ ITEM_ICE_GEM,
			/*  5 %*/ ITEM_STARDUST,
			/*  4 %*/ ITEM_BIG_NUGGET,
			/*  1 %*/ ITEM_NUGGET,
			},
	},
	{
		.species = SPECIES_FLORGES,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_BABIRI_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 50 %*/ ITEM_FAIRY_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GRIMMSNARL_GIGA,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
			/*100 %*/ ITEM_BABIRI_BERRY,
			/* 80 %*/ ITEM_BABIRI_BERRY,
			/* 80 %*/ ITEM_KEBIA_BERRY,
			/* 50 %*/ ITEM_FAIRY_GEM,
			/* 50 %*/ ITEM_BIG_MUSHROOM,
			/* 30 %*/ ITEM_SITRUS_BERRY,
			/* 30 %*/ ITEM_MUSCLE_WING,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_DARK_GEM,
			/*  5 %*/ ITEM_BIG_MUSHROOM,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
			},
	},
};

static struct Raid sRoute16Raids6Star[] =
{
	{
		.species = SPECIES_TAPU_LELE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_KEBIA_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 80 %*/ ITEM_BABIRI_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VIRIZION,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_COBA_BERRY,
		/* 80 %*/ ITEM_KEBIA_BERRY,
		/* 80 %*/ ITEM_PAYAPA_BERRY,
		/* 50 %*/ ITEM_FIGHTING_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute12Raids2Star[] =
{
	{
		.species = SPECIES_COTTONEE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GOSSIFLEUR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FERROSEED,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PAWNIARD,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute12Raids3Star[] =
{
	{
		.species = SPECIES_ROSERADE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CHERRIM,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FIRE_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_STEELIX,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BRONZONG,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute12Raids4Star[] =
{
	{
		.species = SPECIES_ELDEGOSS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WHIMSICOTT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BISHARP,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FERROTHORN,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute12Raids5Star[] =
{
	{
		.species = SPECIES_APPLETUN,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FLAPPLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MAWILE,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TOGEDEMARU,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ALCREMIE_GIGA,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute12Raids6Star[] =
{
	{
		.species = SPECIES_TAPU_BULU,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_TINY_MUSHROOM,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_COBALION,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_SHUCA_BERRY,
		/* 50 %*/ ITEM_STEEL_GEM,
		/* 50 %*/ ITEM_BIG_MUSHROOM,
		/* 30 %*/ ITEM_AGUAV_BERRY,
		/* 30 %*/ ITEM_MUSCLE_WING,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_BIG_MUSHROOM,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute14Raids2Star[] =
{
	{
		.species = SPECIES_SNOVER,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DELIBIRD,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DARUMAKA_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNORUNT,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute14Raids3Star[] =
{
	{
		.species = SPECIES_PILOSWINE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_AVALUGG,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GLALIE,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VANILLISH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute14Raids4Star[] =
{
	{
		.species = SPECIES_ABOMASNOW,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VANILLUXE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DARMANITAN_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_FIRE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MR_RIME,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute14Raids5Star[] =
{
	{
		.species = SPECIES_LAPRAS_GIGA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CLOYSTER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_EISCUE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_FIRE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DARMANITAN_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_PSYCHIC_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute14Raids6Star[] =
{
	{
		.species = SPECIES_GLASTRIER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 30 %*/ ITEM_FIGY_BERRY,
		/* 30 %*/ ITEM_STAR_PIECE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_STARDUST,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute15Raids2Star[] =
{
	{
		.species = SPECIES_PURRLOIN,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DEINO,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DRAGON_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNEASEL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNEASEL_H,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SCRAGGY,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_FIGHTING_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute15Raids3Star[] =
{
	{
		.species = SPECIES_THIEVUL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GRIMMSNARL,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_FAIRY_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WEAVILE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNEASLER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PANGORO,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_FIGHTING_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute15Raids4Star[] =
{
	{
		.species = SPECIES_ZWEILOUS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DRAGON_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MANDIBUZZ,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LIEPARD,
		.ability = RAID_ABILITY_HIDDEN,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SCRAFTY,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_FIGHTING_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute15Raids5Star[] =
{
	{
		.species = SPECIES_HYDREIGON,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DRAGON_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TYRANITAR,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LINOONE_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_OBSTAGOON,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CORVIKNIGHT_GIGA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute15Raids6Star[] =
{
	{
		.species = SPECIES_ZARUDE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_GRASS_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ZARUDE_DADA,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_TANGA_BERRY,
		/* 80 %*/ ITEM_ROSELI_BERRY,
		/* 50 %*/ ITEM_DARK_GEM,
		/* 50 %*/ ITEM_MAGO_BERRY,
		/* 30 %*/ ITEM_POMEG_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GRASS_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute19Raids2Star[] =
{
	{
		.species = SPECIES_DEWPIDER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARROKUDA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FEEBAS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MAREANIE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_POISON_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute19Raids3Star[] =
{
	{
		.species = SPECIES_WISHIWASHI,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DREDNAW,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_QWILFISH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_POISON_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_QWILFISH_H,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_POISON_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PYUKUMUKU,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute19Raids4Star[] =
{
	{
		.species = SPECIES_ARAQUANID,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WAILORD,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GYARADOS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LAPRAS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_OVERQWIL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_POISON_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute19Raids5Star[] =
{
	{
		.species = SPECIES_GASTRODON,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BARRASKEWDA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MILOTIC,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TOXAPEX,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_POISON_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PIKACHU_GIGA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_OVERQWIL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_POISON_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute19Raids6Star[] =
{
	{
		.species = SPECIES_SUICUNE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_TAPU_FINI,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FAIRY_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MANAPHY,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_KELDEO,
		.ability = RAID_ABILITY_RANDOM_ALL,//_1,
		.drops =
		{
		/*100 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_WACAN_BERRY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sViridianForestRaids1Star[] =
{
	{
		.species = SPECIES_CATERPIE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WEEDLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SPINARAK,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WURMPLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BURMY,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SEWADDLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VENIPEDE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SPEWPA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CHARJABUG,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DOTTLER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
};


static struct Raid sViridianForestRaids2Star[] =
{
	{
		.species = SPECIES_BUTTERFREE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BEEDRILL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SPINARAK,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CASCOON,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SILCOON,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BURMY,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SWADLOON,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_WHIRLIPEDE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
	.species = SPECIES_SPEWPA,
	.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
	.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
	.species = SPECIES_CHARJABUG,
	.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
	.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
	.species = SPECIES_DOTTLER,
	.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
	.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sViridianForestRaids3Star[] =
{
	{
		.species = SPECIES_VESPIQUEN,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_YANMA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_DURANT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SNOM,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SKORUPI,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MASQUERAIN,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SHUCKLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sViridianForestRaids4Star[] =
{
	{
		.species = SPECIES_YANMEGA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FORRETRESS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_NINJASK,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SHEDINJA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SCOLIPEDE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ESCAVALIER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PINSIR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SCYTHER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_HERACROSS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PARASECT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_OCCA_BERRY,
			/* 80 %*/ ITEM_CHARTI_BERRY,
			/* 80 %*/ ITEM_COBA_BERRY,
			/* 50 %*/ ITEM_BUG_GEM,
			/* 50 %*/ ITEM_PEARL,
			/* 30 %*/ ITEM_IAPAPA_BERRY,
			/* 30 %*/ ITEM_RARE_BONE,
			/* 25 %*/ ITEM_BALM_MUSHROOM,
			/* 25 %*/ ITEM_BUG_GEM,
			/*  5 %*/ ITEM_BIG_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sViridianForestRaids5Star[] =
{
	{
		.species = SPECIES_SCIZOR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BUTTERFREE_GIGA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ACCELGOR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GALVANTULA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VIKAVOLT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_VOLCARONA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_RIBOMBEE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GOLISOPOD,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
	.species = SPECIES_ORBEETLE_GIGA,
	.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
	.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
	.species = SPECIES_PARASECT,
	.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
	.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sViridianForestRaids6Star[] =
{
	{
		.species = SPECIES_GENESECT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_BUZZWOLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_PHEROMOSA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 80 %*/ ITEM_COBA_BERRY,
		/* 50 %*/ ITEM_BUG_GEM,
		/* 50 %*/ ITEM_PEARL,
		/* 30 %*/ ITEM_IAPAPA_BERRY,
		/* 30 %*/ ITEM_RARE_BONE,
		/* 25 %*/ ITEM_BALM_MUSHROOM,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_BIG_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sRoute10Raids2Star[] =
{
	{
		.species = SPECIES_DWEBBLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SUDOWOODO,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_POLIWHIRL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_FEEBAS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_GRAVELER,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_GRAVELER_A,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_ELECTRIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_SEEL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_WACAN_BERRY,
			/* 80 %*/ ITEM_RINDO_BERRY,
			/* 80 %*/ ITEM_RARE_CANDY,
			/* 50 %*/ ITEM_WATER_GEM,
			/* 50 %*/ ITEM_STAR_PIECE,
			/* 30 %*/ ITEM_QUALOT_BERRY,
			/* 30 %*/ ITEM_STARDUST,
			/* 25 %*/ ITEM_LUM_BERRY,
			/* 25 %*/ ITEM_WATER_GEM,
			/*  5 %*/ ITEM_NUGGET,
			/*  4 %*/ ITEM_NONE,
			/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};

static struct Raid sRoute10Raids3Star[] =
{
	{
		.species = SPECIES_BOLDORE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ONIX,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_DARK_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_SEAKING,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_NOSEPASS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CROCONAW,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};

static struct Raid sRoute10Raids4Star[] =
{
	{
		.species = SPECIES_BARBARACLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_CRUSTLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_QUAGSIRE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_GROUND_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_BASCULIN_RED,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_BASCULIN_BLUE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_BASCULIN_H,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_AVALUGG,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_ICE_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_AVALUGG_H,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ICE_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_LUVDISC,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};

static struct Raid sRoute10Raids5Star[] =
{
	{
		.species = SPECIES_GIGALITH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_ROCK_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_STEELIX,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_KLEAVOR,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_BUG_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_POLIWRATH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_FIGHTING_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_POLITOED,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_GYARADOS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_FLYING_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_MILOTIC,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_PROBOPASS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_PASSHO_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 50 %*/ ITEM_ROCK_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_STEEL_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_FLOATZEL,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_RINDO_BERRY,
		/* 80 %*/ ITEM_RARE_CANDY,
		/* 50 %*/ ITEM_WATER_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_WATER_GEM,
		/*  5 %*/ ITEM_NUGGET,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};

static struct Raid sRoute10Raids6Star[] =
{
	{
		.species = SPECIES_ZAPDOS_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARTICUNO_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MOLTRES_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sVictoryRoadRaids5Star[] =
{
	{
		.species = SPECIES_BLISSEY,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_CHANSEY,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_CLEFABLE,
		.ability = RAID_ABILITY_2,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_CORVIKNIGHT,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_EXCADRILL,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_FERROTHORN,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_GLISCOR,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_YACHE_BERRY,
			/* 80 %*/ ITEM_CHOPLE_BERRY,
			/* 80 %*/ ITEM_KASIB_BERRY,
			/* 50 %*/ ITEM_HABAN_BERRY,
			/* 50 %*/ ITEM_STAR_PIECE,
			/* 30 %*/ ITEM_SITRUS_BERRY,
			/* 30 %*/ ITEM_STARDUST,
			/* 25 %*/ ITEM_LUM_BERRY,
			/* 25 %*/ ITEM_SALAC_BERRY,
			/*  5 %*/ ITEM_RARE_CANDY,
			/*  4 %*/ ITEM_NUGGET,
			/*  1 %*/ ITEM_BIG_NUGGET,
			},
	},
	{
		.species = SPECIES_GRENINJA,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
			/*100 %*/ ITEM_YACHE_BERRY,
			/* 80 %*/ ITEM_CHOPLE_BERRY,
			/* 80 %*/ ITEM_KASIB_BERRY,
			/* 50 %*/ ITEM_HABAN_BERRY,
			/* 50 %*/ ITEM_STAR_PIECE,
			/* 30 %*/ ITEM_SITRUS_BERRY,
			/* 30 %*/ ITEM_STARDUST,
			/* 25 %*/ ITEM_LUM_BERRY,
			/* 25 %*/ ITEM_SALAC_BERRY,
			/*  5 %*/ ITEM_RARE_CANDY,
			/*  4 %*/ ITEM_NUGGET,
			/*  1 %*/ ITEM_BIG_NUGGET,
			},
	},
	{
		.species = SPECIES_KOMMO_O,
		.ability = RAID_ABILITY_RANDOM_1_2,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_MAGNEZONE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_PELIPPER,
		.ability = RAID_ABILITY_2,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_RILLABOOM,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_SERPERIOR,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_SLOWBRO,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_TOXAPEX,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_TYRANITAR,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_VOLCARONA,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_WEAVILE,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_ALAKAZAM,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_BLAZIKEN,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_GENGAR,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_GYARADOS,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_HAWLUCHA,
		.ability = RAID_ABILITY_2,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_HYDREIGON,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_SLOWKING_G,
		.ability = RAID_ABILITY_HIDDEN,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};

static struct Raid sVictoryRoadRaids6Star[] =
{
	{
		.species = SPECIES_MAGEARNA,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_MAGEARNA_P,
		.ability = RAID_ABILITY_1,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_KASIB_BERRY,
		/* 50 %*/ ITEM_HABAN_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_SALAC_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_ZAPDOS_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARTICUNO_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MOLTRES_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
};

static struct Raid sSeafoamIslandsRaids3Star[] =
{
	{
		.species = SPECIES_AMAURA,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_PILOSWINE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_DARUMAKA_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};


static struct Raid sSeafoamIslandsRaids4Star[] =
{
	{
		.species = SPECIES_AURORUS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_PILOSWINE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_ABOMASNOW,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};

static struct Raid sSeafoamIslandsRaids5Star[] =
{
	{
		.species = SPECIES_AURORUS,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_DARMANITAN_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_ABOMASNOW,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_GLALIE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_DEWGONG,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_CRABOMINABLE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_MAMOSWINE,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_ARCTOVISH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_AVALUGG,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_AVALUGG_H,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};
static struct Raid sSeafoamIslandsRaids6Star[] =
{
	{
		.species = SPECIES_ZAPDOS_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARTICUNO_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_MOLTRES_G,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_WACAN_BERRY,
		/* 80 %*/ ITEM_YACHE_BERRY,
		/* 80 %*/ ITEM_NORMAL_GEM,
		/* 50 %*/ ITEM_FLYING_GEM,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_QUALOT_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_LUM_BERRY,
		/* 25 %*/ ITEM_PSYCHIC_GEM,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NONE,
		/*  1 %*/ ITEM_NUGGET,
		},
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
	{
		.species = SPECIES_ARCTOVISH,
		.ability = RAID_ABILITY_RANDOM_ALL,//_RANDOM_ALL,
		.drops =
		{
		/*100 %*/ ITEM_OCCA_BERRY,
		/* 80 %*/ ITEM_CHOPLE_BERRY,
		/* 80 %*/ ITEM_CHARTI_BERRY,
		/* 50 %*/ ITEM_HONDEW_BERRY,
		/* 50 %*/ ITEM_STAR_PIECE,
		/* 30 %*/ ITEM_SITRUS_BERRY,
		/* 30 %*/ ITEM_STARDUST,
		/* 25 %*/ ITEM_SITRUS_BERRY,
		/* 25 %*/ ITEM_FIGY_BERRY,
		/*  5 %*/ ITEM_RARE_CANDY,
		/*  4 %*/ ITEM_NUGGET,
		/*  1 %*/ ITEM_BIG_NUGGET,
		},
	},
};

const struct RaidData gRaidsByMapSection[KANTO_MAPSEC_COUNT][RAID_STAR_COUNT] =
{
	[MAPSEC_ROUTE_3 -  MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute3Raids1Star, NELEMS(sRoute3Raids1Star)},
		[TWO_STAR_RAID] = {sRoute3Raids2Star, NELEMS(sRoute3Raids2Star)},
		[THREE_STAR_RAID] = {sRoute3Raids3Star, NELEMS(sRoute3Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute3Raids4Star, NELEMS(sRoute3Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute3Raids5Star, NELEMS(sRoute3Raids5Star)},
		[SIX_STAR_RAID] = {sRoute3Raids6Star, NELEMS(sRoute3Raids6Star)},
	},
	[MAPSEC_ROUTE_4 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute4Raids1Star, NELEMS(sRoute4Raids1Star)},
		[TWO_STAR_RAID] = {sRoute4Raids2Star, NELEMS(sRoute4Raids2Star)},
		[THREE_STAR_RAID] = {sRoute4Raids3Star, NELEMS(sRoute4Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute4Raids4Star, NELEMS(sRoute4Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute4Raids5Star, NELEMS(sRoute4Raids5Star)},
		[SIX_STAR_RAID] = {sRoute4Raids6Star, NELEMS(sRoute4Raids6Star)},
	},
	[MAPSEC_ROUTE_24 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute24Raids1Star, NELEMS(sRoute24Raids1Star)},
		[TWO_STAR_RAID] = {sRoute24Raids2Star, NELEMS(sRoute24Raids2Star)},
		[THREE_STAR_RAID] = {sRoute24Raids3Star, NELEMS(sRoute24Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute24Raids4Star, NELEMS(sRoute24Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute24Raids5Star, NELEMS(sRoute24Raids5Star)},
		[SIX_STAR_RAID] = {sRoute24Raids6Star, NELEMS(sRoute24Raids6Star)},
	},
	[MAPSEC_ROUTE_25 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute25Raids1Star, NELEMS(sRoute25Raids1Star)},
		[TWO_STAR_RAID] = {sRoute25Raids2Star, NELEMS(sRoute25Raids2Star)},
		[THREE_STAR_RAID] = {sRoute25Raids3Star, NELEMS(sRoute25Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute25Raids4Star, NELEMS(sRoute25Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute25Raids5Star, NELEMS(sRoute25Raids5Star)},
		[SIX_STAR_RAID] = {sRoute25Raids6Star, NELEMS(sRoute25Raids6Star)},
	},
	[MAPSEC_ROUTE_5 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute5Raids1Star, NELEMS(sRoute5Raids1Star)},
		[TWO_STAR_RAID] = {sRoute5Raids2Star, NELEMS(sRoute5Raids2Star)},
		[THREE_STAR_RAID] = {sRoute5Raids3Star, NELEMS(sRoute5Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute5Raids4Star, NELEMS(sRoute5Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute5Raids5Star, NELEMS(sRoute5Raids5Star)},
		[SIX_STAR_RAID] = {sRoute5Raids6Star, NELEMS(sRoute5Raids6Star)},
	},
	[MAPSEC_ROUTE_6 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute6Raids1Star, NELEMS(sRoute6Raids1Star)},
		[TWO_STAR_RAID] = {sRoute6Raids2Star, NELEMS(sRoute6Raids2Star)},
		[THREE_STAR_RAID] = {sRoute6Raids3Star, NELEMS(sRoute6Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute6Raids4Star, NELEMS(sRoute6Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute6Raids5Star, NELEMS(sRoute6Raids5Star)},
		[SIX_STAR_RAID] = {sRoute6Raids6Star, NELEMS(sRoute6Raids6Star)},
	},
	[MAPSEC_ROUTE_11 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute11Raids1Star, NELEMS(sRoute11Raids1Star)},
		[TWO_STAR_RAID] = {sRoute11Raids2Star, NELEMS(sRoute11Raids2Star)},
		[THREE_STAR_RAID] = {sRoute11Raids3Star, NELEMS(sRoute11Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute11Raids4Star, NELEMS(sRoute11Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute11Raids5Star, NELEMS(sRoute11Raids5Star)},
		[SIX_STAR_RAID] = {sRoute11Raids6Star, NELEMS(sRoute11Raids6Star)},
	},
	[MAPSEC_MT_MOON - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sMtMoonRaids1Star, NELEMS(sMtMoonRaids1Star)},
		[TWO_STAR_RAID] = {sMtMoonRaids2Star, NELEMS(sMtMoonRaids2Star)},
		[THREE_STAR_RAID] = {sMtMoonRaids3Star, NELEMS(sMtMoonRaids3Star)},
		[FOUR_STAR_RAID] = {sMtMoonRaids4Star, NELEMS(sMtMoonRaids4Star)},
		[FIVE_STAR_RAID] = {sMtMoonRaids5Star, NELEMS(sMtMoonRaids5Star)},
		[SIX_STAR_RAID] = {sMtMoonRaids6Star, NELEMS(sMtMoonRaids6Star)},
	},
	[MAPSEC_ROUTE_9 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute9Raids2Star, NELEMS(sRoute9Raids2Star)},
		[TWO_STAR_RAID] = {sRoute9Raids2Star, NELEMS(sRoute9Raids2Star)},
		[THREE_STAR_RAID] = {sRoute9Raids3Star, NELEMS(sRoute9Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute9Raids4Star, NELEMS(sRoute9Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute9Raids5Star, NELEMS(sRoute9Raids5Star)},
		[SIX_STAR_RAID] = {sRoute9Raids6Star, NELEMS(sRoute9Raids6Star)},
	},
	[MAPSEC_ROCK_TUNNEL - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRockTunnelRaids2Star, NELEMS(sRockTunnelRaids2Star)},
		[TWO_STAR_RAID] = {sRockTunnelRaids2Star, NELEMS(sRockTunnelRaids2Star)},
		[THREE_STAR_RAID] = {sRockTunnelRaids3Star, NELEMS(sRockTunnelRaids3Star)},
		[FOUR_STAR_RAID] = {sRockTunnelRaids4Star, NELEMS(sRockTunnelRaids4Star)},
		[FIVE_STAR_RAID] = {sRockTunnelRaids5Star, NELEMS(sRockTunnelRaids5Star)},
		[SIX_STAR_RAID] = {sRockTunnelRaids6Star, NELEMS(sRockTunnelRaids6Star)},
	},
	[MAPSEC_ROUTE_8 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute8Raids2Star, NELEMS(sRoute8Raids2Star)},
		[TWO_STAR_RAID] = {sRoute8Raids2Star, NELEMS(sRoute8Raids2Star)},
		[THREE_STAR_RAID] = {sRoute8Raids3Star, NELEMS(sRoute8Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute8Raids4Star, NELEMS(sRoute8Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute8Raids5Star, NELEMS(sRoute8Raids5Star)},
		[SIX_STAR_RAID] = {sRoute8Raids6Star, NELEMS(sRoute8Raids6Star)},
	},
	[MAPSEC_POKEMON_TOWER - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sPokemonTowerRaids2Star, NELEMS(sPokemonTowerRaids2Star)},
		[TWO_STAR_RAID] = {sPokemonTowerRaids2Star, NELEMS(sPokemonTowerRaids2Star)},
		[THREE_STAR_RAID] = {sPokemonTowerRaids3Star, NELEMS(sPokemonTowerRaids3Star)},
		[FOUR_STAR_RAID] = {sPokemonTowerRaids4Star, NELEMS(sPokemonTowerRaids4Star)},
		[FIVE_STAR_RAID] = {sPokemonTowerRaids5Star, NELEMS(sPokemonTowerRaids5Star)},
		[SIX_STAR_RAID] = {sPokemonTowerRaids6Star, NELEMS(sPokemonTowerRaids6Star)},
	},
	[MAPSEC_ROUTE_7 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute7Raids2Star, NELEMS(sRoute7Raids2Star)},
		[TWO_STAR_RAID] = {sRoute7Raids2Star, NELEMS(sRoute7Raids2Star)},
		[THREE_STAR_RAID] = {sRoute7Raids3Star, NELEMS(sRoute7Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute7Raids4Star, NELEMS(sRoute7Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute7Raids5Star, NELEMS(sRoute7Raids5Star)},
		[SIX_STAR_RAID] = {sRoute7Raids6Star, NELEMS(sRoute7Raids6Star)},
	},
	[MAPSEC_ROUTE_16 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute16Raids2Star, NELEMS(sRoute16Raids2Star)},
		[TWO_STAR_RAID] = {sRoute16Raids2Star, NELEMS(sRoute16Raids2Star)},
		[THREE_STAR_RAID] = {sRoute16Raids3Star, NELEMS(sRoute16Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute16Raids4Star, NELEMS(sRoute16Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute16Raids5Star, NELEMS(sRoute16Raids5Star)},
		[SIX_STAR_RAID] = {sRoute16Raids6Star, NELEMS(sRoute16Raids6Star)},
	},
	[MAPSEC_ROUTE_12 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute12Raids2Star, NELEMS(sRoute12Raids2Star)},
		[TWO_STAR_RAID] = {sRoute12Raids2Star, NELEMS(sRoute12Raids2Star)},
		[THREE_STAR_RAID] = {sRoute12Raids3Star, NELEMS(sRoute12Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute12Raids4Star, NELEMS(sRoute12Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute12Raids5Star, NELEMS(sRoute12Raids5Star)},
		[SIX_STAR_RAID] = {sRoute12Raids6Star, NELEMS(sRoute12Raids6Star)},
	},
	[MAPSEC_ROUTE_14 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute14Raids2Star, NELEMS(sRoute14Raids2Star)},
		[TWO_STAR_RAID] = {sRoute14Raids2Star, NELEMS(sRoute14Raids2Star)},
		[THREE_STAR_RAID] = {sRoute14Raids3Star, NELEMS(sRoute14Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute14Raids4Star, NELEMS(sRoute14Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute14Raids5Star, NELEMS(sRoute14Raids5Star)},
		[SIX_STAR_RAID] = {sRoute14Raids6Star, NELEMS(sRoute14Raids6Star)},
	},
	[MAPSEC_ROUTE_15 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute15Raids2Star, NELEMS(sRoute15Raids2Star)},
		[TWO_STAR_RAID] = {sRoute15Raids2Star, NELEMS(sRoute15Raids2Star)},
		[THREE_STAR_RAID] = {sRoute15Raids3Star, NELEMS(sRoute15Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute15Raids4Star, NELEMS(sRoute15Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute15Raids5Star, NELEMS(sRoute15Raids5Star)},
		[SIX_STAR_RAID] = {sRoute15Raids6Star, NELEMS(sRoute15Raids6Star)},
	},
	[MAPSEC_ROUTE_19 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute19Raids2Star, NELEMS(sRoute19Raids2Star)},
		[TWO_STAR_RAID] = {sRoute19Raids2Star, NELEMS(sRoute19Raids2Star)},
		[THREE_STAR_RAID] = {sRoute19Raids3Star, NELEMS(sRoute19Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute19Raids4Star, NELEMS(sRoute19Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute19Raids5Star, NELEMS(sRoute19Raids5Star)},
		[SIX_STAR_RAID] = {sRoute19Raids6Star, NELEMS(sRoute19Raids6Star)},
	},
	[MAPSEC_VIRIDIAN_FOREST - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sViridianForestRaids1Star, NELEMS(sViridianForestRaids2Star)},
		[TWO_STAR_RAID] = {sViridianForestRaids2Star, NELEMS(sViridianForestRaids2Star)},
		[THREE_STAR_RAID] = {sViridianForestRaids3Star, NELEMS(sViridianForestRaids3Star)},
		[FOUR_STAR_RAID] = {sViridianForestRaids4Star, NELEMS(sViridianForestRaids4Star)},
		[FIVE_STAR_RAID] = {sViridianForestRaids5Star, NELEMS(sViridianForestRaids5Star)},
		[SIX_STAR_RAID] = {sViridianForestRaids6Star, NELEMS(sViridianForestRaids6Star)},
	},
	[MAPSEC_ROUTE_10 - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sRoute10Raids2Star, NELEMS(sRoute10Raids2Star)},
		[TWO_STAR_RAID] = {sRoute10Raids2Star, NELEMS(sRoute10Raids2Star)},
		[THREE_STAR_RAID] = {sRoute10Raids3Star, NELEMS(sRoute10Raids3Star)},
		[FOUR_STAR_RAID] = {sRoute10Raids4Star, NELEMS(sRoute10Raids4Star)},
		[FIVE_STAR_RAID] = {sRoute10Raids5Star, NELEMS(sRoute10Raids5Star)},
		[SIX_STAR_RAID] = {sRoute10Raids6Star, NELEMS(sRoute10Raids6Star)},
	},
	[MAPSEC_KANTO_VICTORY_ROAD - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sVictoryRoadRaids5Star, NELEMS(sVictoryRoadRaids5Star)},
		[TWO_STAR_RAID] = {sVictoryRoadRaids5Star, NELEMS(sVictoryRoadRaids5Star)},
		[THREE_STAR_RAID] = {sVictoryRoadRaids5Star, NELEMS(sVictoryRoadRaids5Star)},
		[FOUR_STAR_RAID] = {sVictoryRoadRaids5Star, NELEMS(sVictoryRoadRaids5Star)},
		[FIVE_STAR_RAID] = {sVictoryRoadRaids5Star, NELEMS(sVictoryRoadRaids5Star)},
		[SIX_STAR_RAID] = {sVictoryRoadRaids6Star, NELEMS(sVictoryRoadRaids6Star)},
	},
	[MAPSEC_SEAFOAM_ISLANDS - MAPSEC_DYNAMIC] =
	{
		[ONE_STAR_RAID] = {sSeafoamIslandsRaids3Star, NELEMS(sSeafoamIslandsRaids3Star)},
		[TWO_STAR_RAID] = {sSeafoamIslandsRaids3Star, NELEMS(sSeafoamIslandsRaids3Star)},
		[THREE_STAR_RAID] = {sSeafoamIslandsRaids3Star, NELEMS(sSeafoamIslandsRaids3Star)},
		[FOUR_STAR_RAID] = {sSeafoamIslandsRaids4Star, NELEMS(sSeafoamIslandsRaids4Star)},
		[FIVE_STAR_RAID] = {sSeafoamIslandsRaids5Star, NELEMS(sSeafoamIslandsRaids5Star)},
		[SIX_STAR_RAID] = {sSeafoamIslandsRaids6Star, NELEMS(sSeafoamIslandsRaids6Star)},
	},
};
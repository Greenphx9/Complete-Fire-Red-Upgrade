#include "../../src/defines.h"
#include "../../include/constants/species.h"
#include "../../include/new/species_tables.h"

const struct SpecialSpeciesFlags gSpecialSpeciesFlags[NUM_SPECIES] =
{
#ifdef SPECIES_DIGLETT
	[SPECIES_DIGLETT] =
	{
		.telekinesisBan = TRUE,
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DUGTRIO
	[SPECIES_DUGTRIO] =
	{
		.telekinesisBan = TRUE,
	},
#endif
#ifdef SPECIES_DIGLETT_A
	[SPECIES_DIGLETT_A] =
	{
		.telekinesisBan = TRUE,
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DUGTRIO_A
	[SPECIES_DUGTRIO_A] =
	{
		.telekinesisBan = TRUE,
	},
#endif
#ifdef SPECIES_SANDYGAST
	[SPECIES_SANDYGAST] =
	{
		.telekinesisBan = TRUE,
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PALOSSAND
	[SPECIES_PALOSSAND] =
	{
		.telekinesisBan = TRUE,
	},
#endif
#ifdef SPECIES_GENGAR_MEGA
	[SPECIES_GENGAR_MEGA] =
	{
		.telekinesisBan = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MEWTWO
	[SPECIES_MEWTWO] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MEW
	[SPECIES_MEW] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonCamomonsBan = TRUE,
		.smogonRUBan = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_LUGIA
	[SPECIES_LUGIA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_HO_OH
	[SPECIES_HO_OH] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CELEBI
	[SPECIES_CELEBI] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonRUBan = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_KYOGRE
	[SPECIES_KYOGRE] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_GROUDON
	[SPECIES_GROUDON] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_RAYQUAZA
	[SPECIES_RAYQUAZA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_JIRACHI
	[SPECIES_JIRACHI] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DEOXYS
	[SPECIES_DEOXYS] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DEOXYS_ATTACK
	[SPECIES_DEOXYS_ATTACK] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DEOXYS_DEFENSE
	[SPECIES_DEOXYS_DEFENSE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DEOXYS_SPEED
	[SPECIES_DEOXYS_SPEED] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DIALGA
	[SPECIES_DIALGA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DIALGA_ORIGIN
	[SPECIES_DIALGA_ORIGIN] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PALKIA
	[SPECIES_PALKIA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_PALKIA_ORIGIN
	[SPECIES_PALKIA_ORIGIN] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GIRATINA
	[SPECIES_GIRATINA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_GIRATINA_ORIGIN
	[SPECIES_GIRATINA_ORIGIN] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PHIONE
	[SPECIES_PHIONE] =
	{
		.battleTowerStandardBan = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MANAPHY
	[SPECIES_MANAPHY] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonUUBan = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DARKRAI
	[SPECIES_DARKRAI] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_SHAYMIN
	[SPECIES_SHAYMIN] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonNUBan = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_SHAYMIN_SKY
	[SPECIES_SHAYMIN_SKY] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS
	[SPECIES_ARCEUS] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_FIGHT
	[SPECIES_ARCEUS_FIGHT] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_FLYING
	[SPECIES_ARCEUS_FLYING] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_POISON
	[SPECIES_ARCEUS_POISON] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_GROUND
	[SPECIES_ARCEUS_GROUND] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_ROCK
	[SPECIES_ARCEUS_ROCK] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_BUG
	[SPECIES_ARCEUS_BUG] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_GHOST
	[SPECIES_ARCEUS_GHOST] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_STEEL
	[SPECIES_ARCEUS_STEEL] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_FIRE
	[SPECIES_ARCEUS_FIRE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_WATER
	[SPECIES_ARCEUS_WATER] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_GRASS
	[SPECIES_ARCEUS_GRASS] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_ELECTRIC
	[SPECIES_ARCEUS_ELECTRIC] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_PSYCHIC
	[SPECIES_ARCEUS_PSYCHIC] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_ICE
	[SPECIES_ARCEUS_ICE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_DRAGON
	[SPECIES_ARCEUS_DRAGON] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_DARK
	[SPECIES_ARCEUS_DARK] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCEUS_FAIRY
	[SPECIES_ARCEUS_FAIRY] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_VICTINI
	[SPECIES_VICTINI] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_RESHIRAM
	[SPECIES_RESHIRAM] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ZEKROM
	[SPECIES_ZEKROM] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_KYUREM
	[SPECIES_KYUREM] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonRUBan = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_KYUREM_BLACK
	[SPECIES_KYUREM_BLACK] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_KYUREM_WHITE
	[SPECIES_KYUREM_WHITE] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_KELDEO
	[SPECIES_KELDEO] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_KELDEO_RESOLUTE
	[SPECIES_KELDEO_RESOLUTE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MELOETTA
	[SPECIES_MELOETTA] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MELOETTA_PIROUETTE
	[SPECIES_MELOETTA_PIROUETTE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GENESECT
	[SPECIES_GENESECT] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_GENESECT_SHOCK
	[SPECIES_GENESECT_SHOCK] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GENESECT_BURN
	[SPECIES_GENESECT_BURN] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GENESECT_CHILL
	[SPECIES_GENESECT_CHILL] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GENESECT_DOUSE
	[SPECIES_GENESECT_DOUSE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_XERNEAS
	[SPECIES_XERNEAS] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_YVELTAL
	[SPECIES_YVELTAL] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DIANCIE
	[SPECIES_DIANCIE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_HOOPA
	[SPECIES_HOOPA] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_HOOPA_UNBOUND
	[SPECIES_HOOPA_UNBOUND] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_VOLCANION
	[SPECIES_VOLCANION] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ZYGARDE
	[SPECIES_ZYGARDE] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ZYGARDE_10
	[SPECIES_ZYGARDE_10] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_COSMOG
	[SPECIES_COSMOG] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonLittleCup = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_COSMOEM
	[SPECIES_COSMOEM] =
	{
		.battleTowerStandardBan = TRUE,
		.middleCup = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_SOLGALEO
	[SPECIES_SOLGALEO] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_LUNALA
	[SPECIES_LUNALA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MAGEARNA
	[SPECIES_MAGEARNA] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MAGEARNA_P
	[SPECIES_MAGEARNA_P] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MARSHADOW
	[SPECIES_MARSHADOW] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_NECROZMA
	[SPECIES_NECROZMA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonNUBan = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_NECROZMA_DUSK_MANE
	[SPECIES_NECROZMA_DUSK_MANE] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_NECROZMA_DAWN_WINGS
	[SPECIES_NECROZMA_DAWN_WINGS] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ZERAORA
	[SPECIES_ZERAORA] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MELTAN
	[SPECIES_MELTAN] =
	{
		.battleTowerStandardBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MELMETAL
	[SPECIES_MELMETAL] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ZACIAN
	[SPECIES_ZACIAN] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ZACIAN_CROWNED
	[SPECIES_ZACIAN_CROWNED] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ZAMAZENTA
	[SPECIES_ZAMAZENTA] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ZAMAZENTA_CROWNED
	[SPECIES_ZAMAZENTA_CROWNED] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ETERNATUS
	[SPECIES_ETERNATUS] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ETERNATUS_ETERNAMAX
	[SPECIES_ETERNATUS_ETERNAMAX] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ZARUDE
	[SPECIES_ZARUDE] =
	{
		.battleTowerStandardBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_KUBFU
	[SPECIES_KUBFU] =
	{
		.battleTowerStandardBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_URSHIFU_SINGLE
	[SPECIES_URSHIFU_SINGLE] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_URSHIFU_RAPID
	[SPECIES_URSHIFU_RAPID] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CALYREX
	[SPECIES_CALYREX] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.badForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CALYREX_ICE_RIDER
	[SPECIES_CALYREX_ICE_RIDER] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_CALYREX_SHADOW_RIDER
	[SPECIES_CALYREX_SHADOW_RIDER] =
	{
		.battleTowerStandardBan = TRUE,
		.gsCupLegendaries = TRUE,
		.smogonOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SPECTRIER
	[SPECIES_SPECTRIER] =
	{
		.battleTowerStandardBan = TRUE,
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_GLASTRIER
	[SPECIES_GLASTRIER] =
	{
		.battleTowerStandardBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_AEGISLASH
	[SPECIES_AEGISLASH] =
	{
		.smogonOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
	},
#endif
#ifdef SPECIES_BLAZIKEN
	[SPECIES_BLAZIKEN] =
	{
		.smogonOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_LANDORUS
	[SPECIES_LANDORUS] =
	{
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_NAGANADEL
	[SPECIES_NAGANADEL] =
	{
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_PHEROMOSA
	[SPECIES_PHEROMOSA] =
	{
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CINDERACE
	[SPECIES_CINDERACE] =
	{
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
	},
#endif
#ifdef SPECIES_DRACOVISH
	[SPECIES_DRACOVISH] =
	{
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonMonotypeBan = TRUE,
	},
#endif
#ifdef SPECIES_URSHIFU_SINGLE_STRIKE
	[SPECIES_URSHIFU_SINGLE_STRIKE] =
	{
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
		.smogonOUDoublesBan = TRUE,
	},
#endif
#ifdef SPECIES_DARMANITAN_G
	[SPECIES_DARMANITAN_G] =
	{
		.smogonOUBan = TRUE,
		.smogonNationalDexOUBan = TRUE,
	},
#endif
#ifdef SPECIES_DRAGAPULT
	[SPECIES_DRAGAPULT] =
	{
		.smogonNationalDexOUBan = TRUE,
	},
#endif
#ifdef SPECIES_TORNADUS_THERIAN
	[SPECIES_TORNADUS_THERIAN] =
	{
		.smogonNationalDexOUBan = TRUE,
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_KARTANA
	[SPECIES_KARTANA] =
	{
		.smogonOUDoublesBan = TRUE,
		.smogonMonotypeBan = TRUE,
		.smogonCamomonsBan = TRUE,
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ABRA
	[SPECIES_ABRA] =
	{
		.smogonLittleCup = TRUE,
		.smogonScalemonsBan = TRUE,
	},
#endif
#ifdef SPECIES_AMAURA
	[SPECIES_AMAURA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ANORITH
	[SPECIES_ANORITH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ARCHEN
	[SPECIES_ARCHEN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ARON
	[SPECIES_ARON] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_AXEW
	[SPECIES_AXEW] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_AZURILL
	[SPECIES_AZURILL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BAGON
	[SPECIES_BAGON] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BALTOY
	[SPECIES_BALTOY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BARBOACH
	[SPECIES_BARBOACH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BELDUM
	[SPECIES_BELDUM] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BELLSPROUT
	[SPECIES_BELLSPROUT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BERGMITE
	[SPECIES_BERGMITE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BIDOOF
	[SPECIES_BIDOOF] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BINACLE
	[SPECIES_BINACLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BLITZLE
	[SPECIES_BLITZLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BONSLY
	[SPECIES_BONSLY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BOUNSWEET
	[SPECIES_BOUNSWEET] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BRONZOR
	[SPECIES_BRONZOR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BUDEW
	[SPECIES_BUDEW] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BUIZEL
	[SPECIES_BUIZEL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BULBASAUR
	[SPECIES_BULBASAUR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BUNEARY
	[SPECIES_BUNEARY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BUNNELBY
	[SPECIES_BUNNELBY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BURMY
	[SPECIES_BURMY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BURMY_SANDY
	[SPECIES_BURMY_SANDY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_BURMY_TRASH
	[SPECIES_BURMY_TRASH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CACNEA
	[SPECIES_CACNEA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CARVANHA
	[SPECIES_CARVANHA] =
	{
		.smogonLittleCup = TRUE,
		.smogonScalemonsBan = TRUE,
	},
#endif
#ifdef SPECIES_CATERPIE
	[SPECIES_CATERPIE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHARMANDER
	[SPECIES_CHARMANDER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHERUBI
	[SPECIES_CHERUBI] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHESPIN
	[SPECIES_CHESPIN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHIKORITA
	[SPECIES_CHIKORITA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHIMCHAR
	[SPECIES_CHIMCHAR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHINCHOU
	[SPECIES_CHINCHOU] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHINGLING
	[SPECIES_CHINGLING] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CLAMPERL
	[SPECIES_CLAMPERL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CLAUNCHER
	[SPECIES_CLAUNCHER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CLEFFA
	[SPECIES_CLEFFA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_COMBEE
	[SPECIES_COMBEE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CORPHISH
	[SPECIES_CORPHISH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_COTTONEE
	[SPECIES_COTTONEE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CRABRAWLER
	[SPECIES_CRABRAWLER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CRANIDOS
	[SPECIES_CRANIDOS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CROAGUNK
	[SPECIES_CROAGUNK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CUBCHOO
	[SPECIES_CUBCHOO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CUBONE
	[SPECIES_CUBONE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CUBONE_A
	[SPECIES_CUBONE_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_CYNDAQUIL
	[SPECIES_CYNDAQUIL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DARUMAKA
	[SPECIES_DARUMAKA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DEERLING
	[SPECIES_DEERLING] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DEERLING_SUMMER
	[SPECIES_DEERLING_SUMMER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DEERLING_AUTUMN
	[SPECIES_DEERLING_AUTUMN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DEERLING_WINTER
	[SPECIES_DEERLING_WINTER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DEINO
	[SPECIES_DEINO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DEWPIDER
	[SPECIES_DEWPIDER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DODUO
	[SPECIES_DODUO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DRATINI
	[SPECIES_DRATINI] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DRILBUR
	[SPECIES_DRILBUR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DROWZEE
	[SPECIES_DROWZEE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DUCKLETT
	[SPECIES_DUCKLETT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DUSKULL
	[SPECIES_DUSKULL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_DWEBBLE
	[SPECIES_DWEBBLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_EEVEE
	[SPECIES_EEVEE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_EKANS
	[SPECIES_EKANS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ELECTRIKE
	[SPECIES_ELECTRIKE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ELEKID
	[SPECIES_ELEKID] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ELGYEM
	[SPECIES_ELGYEM] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ESPURR
	[SPECIES_ESPURR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_EXEGGCUTE
	[SPECIES_EXEGGCUTE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_EXEGGCUTE_A
	[SPECIES_EXEGGCUTE_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FEEBAS
	[SPECIES_FEEBAS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FENNEKIN
	[SPECIES_FENNEKIN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FERROSEED
	[SPECIES_FERROSEED] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FINNEON
	[SPECIES_FINNEON] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLABEBE
	[SPECIES_FLABEBE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLABEBE_BLUE
	[SPECIES_FLABEBE_BLUE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLABEBE_ORANGE
	[SPECIES_FLABEBE_ORANGE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLABEBE_YELLOW
	[SPECIES_FLABEBE_YELLOW] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLABEBE_WHITE
	[SPECIES_FLABEBE_WHITE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLETCHLING
	[SPECIES_FLETCHLING] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FOMANTIS
	[SPECIES_FOMANTIS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FOONGUS
	[SPECIES_FOONGUS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FRILLISH
	[SPECIES_FRILLISH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_FROAKIE
	[SPECIES_FROAKIE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GASTLY
	[SPECIES_GASTLY] =
	{
		.smogonLittleCup = TRUE,
		.smogonScalemonsBan = TRUE,
	},
#endif
#ifdef SPECIES_GEODUDE
	[SPECIES_GEODUDE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GEODUDE_A
	[SPECIES_GEODUDE_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GIBLE
	[SPECIES_GIBLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GLAMEOW
	[SPECIES_GLAMEOW] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GOLDEEN
	[SPECIES_GOLDEEN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GOLETT
	[SPECIES_GOLETT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GOOMY
	[SPECIES_GOOMY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GRIMER
	[SPECIES_GRIMER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GRIMER_A
	[SPECIES_GRIMER_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GROWLITHE
	[SPECIES_GROWLITHE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GRUBBIN
	[SPECIES_GRUBBIN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_GULPIN
	[SPECIES_GULPIN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HAPPINY
	[SPECIES_HAPPINY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HELIOPTILE
	[SPECIES_HELIOPTILE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HIPPOPOTAS
	[SPECIES_HIPPOPOTAS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HONEDGE
	[SPECIES_HONEDGE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HOOTHOOT
	[SPECIES_HOOTHOOT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HOPPIP
	[SPECIES_HOPPIP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HORSEA
	[SPECIES_HORSEA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_HOUNDOUR
	[SPECIES_HOUNDOUR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_IGGLYBUFF
	[SPECIES_IGGLYBUFF] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_INKAY
	[SPECIES_INKAY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_JANGMO_O
	[SPECIES_JANGMO_O] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_JOLTIK
	[SPECIES_JOLTIK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_KABUTO
	[SPECIES_KABUTO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_KARRABLAST
	[SPECIES_KARRABLAST] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_KLINK
	[SPECIES_KLINK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_KOFFING
	[SPECIES_KOFFING] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_KRABBY
	[SPECIES_KRABBY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_KRICKETOT
	[SPECIES_KRICKETOT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LARVESTA
	[SPECIES_LARVESTA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LARVITAR
	[SPECIES_LARVITAR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LEDYBA
	[SPECIES_LEDYBA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LICKITUNG
	[SPECIES_LICKITUNG] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LILEEP
	[SPECIES_LILEEP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LILLIPUP
	[SPECIES_LILLIPUP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LITLEO
	[SPECIES_LITLEO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LITTEN
	[SPECIES_LITTEN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LITWICK
	[SPECIES_LITWICK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_LOTAD
	[SPECIES_LOTAD] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MACHOP
	[SPECIES_MACHOP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAGBY
	[SPECIES_MAGBY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAGIKARP
	[SPECIES_MAGIKARP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAGNEMITE
	[SPECIES_MAGNEMITE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAKUHITA
	[SPECIES_MAKUHITA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MANKEY
	[SPECIES_MANKEY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MANTYKE
	[SPECIES_MANTYKE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAREANIE
	[SPECIES_MAREANIE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAREEP
	[SPECIES_MAREEP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MEOWTH
	[SPECIES_MEOWTH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MEOWTH_A
	[SPECIES_MEOWTH_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MIENFOO
	[SPECIES_MIENFOO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MIME_JR
	[SPECIES_MIME_JR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MINCCINO
	[SPECIES_MINCCINO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MORELULL
	[SPECIES_MORELULL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MUDBRAY
	[SPECIES_MUDBRAY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MUDKIP
	[SPECIES_MUDKIP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MUNCHLAX
	[SPECIES_MUNCHLAX] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_MUNNA
	[SPECIES_MUNNA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_NATU
	[SPECIES_NATU] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_NIDORAN_F
	[SPECIES_NIDORAN_F] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_NIDORAN_M
	[SPECIES_NIDORAN_M] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_NINCADA
	[SPECIES_NINCADA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_NOIBAT
	[SPECIES_NOIBAT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_NOSEPASS
	[SPECIES_NOSEPASS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_NUMEL
	[SPECIES_NUMEL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ODDISH
	[SPECIES_ODDISH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_OMANYTE
	[SPECIES_OMANYTE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ONIX
	[SPECIES_ONIX] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_OSHAWOTT
	[SPECIES_OSHAWOTT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PANCHAM
	[SPECIES_PANCHAM] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PANPOUR
	[SPECIES_PANPOUR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PANSAGE
	[SPECIES_PANSAGE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PANSEAR
	[SPECIES_PANSEAR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PARAS
	[SPECIES_PARAS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PATRAT
	[SPECIES_PATRAT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PAWNIARD
	[SPECIES_PAWNIARD] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PETILIL
	[SPECIES_PETILIL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PHANPY
	[SPECIES_PHANPY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PHANTUMP
	[SPECIES_PHANTUMP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PICHU
	[SPECIES_PICHU] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIDGEY
	[SPECIES_PIDGEY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIDOVE
	[SPECIES_PIDOVE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIKIPEK
	[SPECIES_PIKIPEK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PINECO
	[SPECIES_PINECO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIPLUP
	[SPECIES_PIPLUP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_POLIWAG
	[SPECIES_POLIWAG] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PONYTA
	[SPECIES_PONYTA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_POOCHYENA
	[SPECIES_POOCHYENA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_POPPLIO
	[SPECIES_POPPLIO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PSYDUCK
	[SPECIES_PSYDUCK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PUMPKABOO
	[SPECIES_PUMPKABOO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PUMPKABOO_XL
	[SPECIES_PUMPKABOO_XL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PUMPKABOO_L
	[SPECIES_PUMPKABOO_L] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PUMPKABOO_M
	[SPECIES_PUMPKABOO_M] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_PURRLOIN
	[SPECIES_PURRLOIN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_RALTS
	[SPECIES_RALTS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_RATTATA
	[SPECIES_RATTATA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_RATTATA_A
	[SPECIES_RATTATA_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_REMORAID
	[SPECIES_REMORAID] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_RHYHORN
	[SPECIES_RHYHORN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_RIOLU
	[SPECIES_RIOLU] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ROCKRUFF
	[SPECIES_ROCKRUFF] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ROGGENROLA
	[SPECIES_ROGGENROLA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ROWLET
	[SPECIES_ROWLET] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_RUFFLET
	[SPECIES_RUFFLET] =
	{
		.smogonLittleCup = TRUE,
		.smogon350CupBan = TRUE,
	},
#endif
#ifdef SPECIES_SALANDIT
	[SPECIES_SALANDIT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SANDILE
	[SPECIES_SANDILE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SANDSHREW
	[SPECIES_SANDSHREW] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SANDSHREW_A
	[SPECIES_SANDSHREW_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SCATTERBUG
	[SPECIES_SCATTERBUG] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SCRAGGY
	[SPECIES_SCRAGGY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SEEDOT
	[SPECIES_SEEDOT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SEEL
	[SPECIES_SEEL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SENTRET
	[SPECIES_SENTRET] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SEWADDLE
	[SPECIES_SEWADDLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHELLDER
	[SPECIES_SHELLDER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHELLOS
	[SPECIES_SHELLOS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHELLOS_EAST
	[SPECIES_SHELLOS_EAST] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHELMET
	[SPECIES_SHELMET] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHIELDON
	[SPECIES_SHIELDON] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHINX
	[SPECIES_SHINX] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHROOMISH
	[SPECIES_SHROOMISH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHUPPET
	[SPECIES_SHUPPET] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SKIDDO
	[SPECIES_SKIDDO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SKITTY
	[SPECIES_SKITTY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SKORUPI
	[SPECIES_SKORUPI] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SKRELP
	[SPECIES_SKRELP] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SLAKOTH
	[SPECIES_SLAKOTH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SLOWPOKE
	[SPECIES_SLOWPOKE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SLUGMA
	[SPECIES_SLUGMA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SMOOCHUM
	[SPECIES_SMOOCHUM] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SNIVY
	[SPECIES_SNIVY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SNORUNT
	[SPECIES_SNORUNT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SNOVER
	[SPECIES_SNOVER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SNUBBULL
	[SPECIES_SNUBBULL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SOLOSIS
	[SPECIES_SOLOSIS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SPEAROW
	[SPECIES_SPEAROW] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SPHEAL
	[SPECIES_SPHEAL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SPINARAK
	[SPECIES_SPINARAK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SPOINK
	[SPECIES_SPOINK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SPRITZEE
	[SPECIES_SPRITZEE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SQUIRTLE
	[SPECIES_SQUIRTLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_STARLY
	[SPECIES_STARLY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_STARYU
	[SPECIES_STARYU] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_STUFFUL
	[SPECIES_STUFFUL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_STUNKY
	[SPECIES_STUNKY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SUNKERN
	[SPECIES_SUNKERN] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SURSKIT
	[SPECIES_SURSKIT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SWABLU
	[SPECIES_SWABLU] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_SWINUB
	[SPECIES_SWINUB] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TAILLOW
	[SPECIES_TAILLOW] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TEDDIURSA
	[SPECIES_TEDDIURSA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TENTACOOL
	[SPECIES_TENTACOOL] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TEPIG
	[SPECIES_TEPIG] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TIMBURR
	[SPECIES_TIMBURR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TIRTOUGA
	[SPECIES_TIRTOUGA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TOGEPI
	[SPECIES_TOGEPI] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TOTODILE
	[SPECIES_TOTODILE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TREECKO
	[SPECIES_TREECKO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TRUBBISH
	[SPECIES_TRUBBISH] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TURTWIG
	[SPECIES_TURTWIG] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TYMPOLE
	[SPECIES_TYMPOLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TYNAMO
	[SPECIES_TYNAMO] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TYROGUE
	[SPECIES_TYROGUE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_TYRUNT
	[SPECIES_TYRUNT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_VANILLITE
	[SPECIES_VANILLITE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_VENIPEDE
	[SPECIES_VENIPEDE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_VENONAT
	[SPECIES_VENONAT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_VOLTORB
	[SPECIES_VOLTORB] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_VULLABY
	[SPECIES_VULLABY] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_VULPIX_A
	[SPECIES_VULPIX_A] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WAILMER
	[SPECIES_WAILMER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WEEDLE
	[SPECIES_WEEDLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WHISMUR
	[SPECIES_WHISMUR] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WIMPOD
	[SPECIES_WIMPOD] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WOOBAT
	[SPECIES_WOOBAT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WOOPER
	[SPECIES_WOOPER] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WURMPLE
	[SPECIES_WURMPLE] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_WYNAUT
	[SPECIES_WYNAUT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_YAMASK
	[SPECIES_YAMASK] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_YUNGOOS
	[SPECIES_YUNGOOS] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ZIGZAGOON
	[SPECIES_ZIGZAGOON] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ZORUA
	[SPECIES_ZORUA] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_ZUBAT
	[SPECIES_ZUBAT] =
	{
		.smogonLittleCup = TRUE,
	},
#endif
#ifdef SPECIES_IVYSAUR
	[SPECIES_IVYSAUR] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHARMELEON
	[SPECIES_CHARMELEON] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_WARTORTLE
	[SPECIES_WARTORTLE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_METAPOD
	[SPECIES_METAPOD] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_KAKUNA
	[SPECIES_KAKUNA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIDGEOTTO
	[SPECIES_PIDGEOTTO] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU
	[SPECIES_PIKACHU] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_SURFING
	[SPECIES_PIKACHU_SURFING] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_FLYING
	[SPECIES_PIKACHU_FLYING] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_COSPLAY
	[SPECIES_PIKACHU_COSPLAY] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_LIBRE
	[SPECIES_PIKACHU_LIBRE] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_POP_STAR
	[SPECIES_PIKACHU_POP_STAR] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_ROCK_STAR
	[SPECIES_PIKACHU_ROCK_STAR] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_BELLE
	[SPECIES_PIKACHU_BELLE] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_PHD
	[SPECIES_PIKACHU_PHD] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_CAP_ORIGINAL
	[SPECIES_PIKACHU_CAP_ORIGINAL] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_CAP_HOENN
	[SPECIES_PIKACHU_CAP_HOENN] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_CAP_SINNOH
	[SPECIES_PIKACHU_CAP_SINNOH] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_CAP_UNOVA
	[SPECIES_PIKACHU_CAP_UNOVA] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_CAP_KALOS
	[SPECIES_PIKACHU_CAP_KALOS] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_CAP_ALOLA
	[SPECIES_PIKACHU_CAP_ALOLA] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIKACHU_CAP_PARTNER
	[SPECIES_PIKACHU_CAP_PARTNER] =
	{
		.middleCup = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_NIDORINA
	[SPECIES_NIDORINA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_NIDORINO
	[SPECIES_NIDORINO] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_CLEFAIRY
	[SPECIES_CLEFAIRY] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_JIGGLYPUFF
	[SPECIES_JIGGLYPUFF] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GOLBAT
	[SPECIES_GOLBAT] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GLOOM
	[SPECIES_GLOOM] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_POLIWHIRL
	[SPECIES_POLIWHIRL] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_MACHOKE
	[SPECIES_MACHOKE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_WEEPINBELL
	[SPECIES_WEEPINBELL] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GRAVELER
	[SPECIES_GRAVELER] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAGNETON
	[SPECIES_MAGNETON] =
	{
		.middleCup = TRUE,
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_HAUNTER
	[SPECIES_HAUNTER] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_RHYDON
	[SPECIES_RHYDON] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SEADRA
	[SPECIES_SEADRA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_ELECTABUZZ
	[SPECIES_ELECTABUZZ] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_MAGMAR
	[SPECIES_MAGMAR] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PORYGON2
	[SPECIES_PORYGON2] =
	{
		.middleCup = TRUE,
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_DRAGONAIR
	[SPECIES_DRAGONAIR] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_BAYLEEF
	[SPECIES_BAYLEEF] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_QUILAVA
	[SPECIES_QUILAVA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_CROCONAW
	[SPECIES_CROCONAW] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_TOGETIC
	[SPECIES_TOGETIC] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLAAFFY
	[SPECIES_FLAAFFY] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_MARILL
	[SPECIES_MARILL] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SKIPLOOM
	[SPECIES_SKIPLOOM] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PILOSWINE
	[SPECIES_PILOSWINE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PUPITAR
	[SPECIES_PUPITAR] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GROVYLE
	[SPECIES_GROVYLE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_MARSHTOMP
	[SPECIES_MARSHTOMP] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SILCOON
	[SPECIES_SILCOON] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_CASCOON
	[SPECIES_CASCOON] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_LOMBRE
	[SPECIES_LOMBRE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_NUZLEAF
	[SPECIES_NUZLEAF] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_KIRLIA
	[SPECIES_KIRLIA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_VIGOROTH
	[SPECIES_VIGOROTH] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_LOUDRED
	[SPECIES_LOUDRED] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_LAIRON
	[SPECIES_LAIRON] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_ROSELIA
	[SPECIES_ROSELIA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_VIBRAVA
	[SPECIES_VIBRAVA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_DUSCLOPS
	[SPECIES_DUSCLOPS] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SEALEO
	[SPECIES_SEALEO] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SHELGON
	[SPECIES_SHELGON] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_METANG
	[SPECIES_METANG] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GROTLE
	[SPECIES_GROTLE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_MONFERNO
	[SPECIES_MONFERNO] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PRINPLUP
	[SPECIES_PRINPLUP] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_STARAVIA
	[SPECIES_STARAVIA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_LUXIO
	[SPECIES_LUXIO] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GABITE
	[SPECIES_GABITE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SERVINE
	[SPECIES_SERVINE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PIGNITE
	[SPECIES_PIGNITE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_DEWOTT
	[SPECIES_DEWOTT] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_HERDIER
	[SPECIES_HERDIER] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_TRANQUILL
	[SPECIES_TRANQUILL] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_BOLDORE
	[SPECIES_BOLDORE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GURDURR
	[SPECIES_GURDURR] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_PALPITOAD
	[SPECIES_PALPITOAD] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SWADLOON
	[SPECIES_SWADLOON] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_WHIRLIPEDE
	[SPECIES_WHIRLIPEDE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_KROKOROK
	[SPECIES_KROKOROK] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GOTHORITA
	[SPECIES_GOTHORITA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_DUOSION
	[SPECIES_DUOSION] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_VANILLISH
	[SPECIES_VANILLISH] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_KLANG
	[SPECIES_KLANG] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_EELEKTRIK
	[SPECIES_EELEKTRIK] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_LAMPENT
	[SPECIES_LAMPENT] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FRAXURE
	[SPECIES_FRAXURE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_ZWEILOUS
	[SPECIES_ZWEILOUS] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_QUILLADIN
	[SPECIES_QUILLADIN] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_BRAIXEN
	[SPECIES_BRAIXEN] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FROGADIER
	[SPECIES_FROGADIER] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLETCHINDER
	[SPECIES_FLETCHINDER] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_SPEWPA
	[SPECIES_SPEWPA] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLOETTE
	[SPECIES_FLOETTE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLOETTE_BLUE
	[SPECIES_FLOETTE_BLUE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLOETTE_ORANGE
	[SPECIES_FLOETTE_ORANGE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLOETTE_YELLOW
	[SPECIES_FLOETTE_YELLOW] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_FLOETTE_WHITE
	[SPECIES_FLOETTE_WHITE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_DOUBLADE
	[SPECIES_DOUBLADE] =
	{
		.middleCup = TRUE,
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_SLIGGOO
	[SPECIES_SLIGGOO] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_DARTRIX
	[SPECIES_DARTRIX] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_TORRACAT
	[SPECIES_TORRACAT] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_BRIONNE
	[SPECIES_BRIONNE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_TRUMBEAK
	[SPECIES_TRUMBEAK] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_CHARJABUG
	[SPECIES_CHARJABUG] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_STEENEE
	[SPECIES_STEENEE] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_HAKAMO_O
	[SPECIES_HAKAMO_O] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_GRAVELER_A
	[SPECIES_GRAVELER_A] =
	{
		.middleCup = TRUE,
	},
#endif
#ifdef SPECIES_DRAGONITE
	[SPECIES_DRAGONITE] =
	{
		.smogonCamomonsBan = TRUE,
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_SHEDINJA
	[SPECIES_SHEDINJA] =
	{
		.smogonCamomonsBan = TRUE,
		.smogonScalemonsBan = TRUE,
	},
#endif
#ifdef SPECIES_SLOWKING_G
	[SPECIES_SLOWKING_G] =
	{
		.smogonCamomonsBan = TRUE,
	},
#endif
#ifdef SPECIES_SMEARGLE
	[SPECIES_SMEARGLE] =
	{
		.smogonAverageMonsBan = TRUE,
	},
#endif
#ifdef SPECIES_BLISSEY
	[SPECIES_BLISSEY] =
	{
		.smogonBenjaminButterfreeBan = TRUE,
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_AZUMARILL
	[SPECIES_AZUMARILL] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_BLACEPHALON
	[SPECIES_BLACEPHALON] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CELESTEELA
	[SPECIES_CELESTEELA] =
	{
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CHANSEY
	[SPECIES_CHANSEY] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_CLEFABLE
	[SPECIES_CLEFABLE] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_EXCADRILL
	[SPECIES_EXCADRILL] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_FERROTHORN
	[SPECIES_FERROTHORN] =
	{
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
	},
#endif
#ifdef SPECIES_GARCHOMP
	[SPECIES_GARCHOMP] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_GLISCOR
	[SPECIES_GLISCOR] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_GRENINJA
	[SPECIES_GRENINJA] =
	{
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
	},
#endif
#ifdef SPECIES_HAWLUCHA
	[SPECIES_HAWLUCHA] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_HEATRAN
	[SPECIES_HEATRAN] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_KOMMO_O
	[SPECIES_KOMMO_O] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_LANDORUS_THERIAN
	[SPECIES_LANDORUS_THERIAN] =
	{
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MAGNEZONE
	[SPECIES_MAGNEZONE] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_NINETALES_A
	[SPECIES_NINETALES_A] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_PELIPPER
	[SPECIES_PELIPPER] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_ROTOM_WASH
	[SPECIES_ROTOM_WASH] =
	{
		.smogonUUBan = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SERPERIOR
	[SPECIES_SERPERIOR] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_SKARMORY
	[SPECIES_SKARMORY] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_TANGROWTH
	[SPECIES_TANGROWTH] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_TAPU_BULU
	[SPECIES_TAPU_BULU] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_TAPU_FINI
	[SPECIES_TAPU_FINI] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_TAPU_KOKO
	[SPECIES_TAPU_KOKO] =
	{
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_TAPU_LELE
	[SPECIES_TAPU_LELE] =
	{
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_TOXAPEX
	[SPECIES_TOXAPEX] =
	{
		.smogonUUBan = TRUE,
		.goodForUbers = TRUE,
	},
#endif
#ifdef SPECIES_TYRANITAR
	[SPECIES_TYRANITAR] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_VOLCARONA
	[SPECIES_VOLCARONA] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_ZAPDOS
	[SPECIES_ZAPDOS] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ALAKAZAM
	[SPECIES_ALAKAZAM] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_BRELOOM
	[SPECIES_BRELOOM] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_BUZZWOLE
	[SPECIES_BUZZWOLE] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CONKELDURR
	[SPECIES_CONKELDURR] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_DIGGERSBY
	[SPECIES_DIGGERSBY] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_GYARADOS
	[SPECIES_GYARADOS] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_LATIOS
	[SPECIES_LATIOS] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_PORYGON_Z
	[SPECIES_PORYGON_Z] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_SALAMENCE
	[SPECIES_SALAMENCE] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_SCOLIPEDE
	[SPECIES_SCOLIPEDE] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_STARAPTOR
	[SPECIES_STARAPTOR] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_THUNDURUS
	[SPECIES_THUNDURUS] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_THUNDURUS_THERIAN
	[SPECIES_THUNDURUS_THERIAN] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_WEAVILE
	[SPECIES_WEAVILE] =
	{
		.smogonUUBan = TRUE,
	},
#endif
#ifdef SPECIES_XURKITREE
	[SPECIES_XURKITREE] =
	{
		.smogonUUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ALOMOMOLA
	[SPECIES_ALOMOMOLA] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_AMOONGUSS
	[SPECIES_AMOONGUSS] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_AZELF
	[SPECIES_AZELF] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_BISHARP
	[SPECIES_BISHARP] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_CHANDELURE
	[SPECIES_CHANDELURE] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_CHESNAUGHT
	[SPECIES_CHESNAUGHT] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_COBALION
	[SPECIES_COBALION] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_CRAWDAUNT
	[SPECIES_CRAWDAUNT] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_CROBAT
	[SPECIES_CROBAT] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_EMPOLEON
	[SPECIES_EMPOLEON] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_FERALIGATR
	[SPECIES_FERALIGATR] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_FROSLASS
	[SPECIES_FROSLASS] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_GENGAR
	[SPECIES_GENGAR] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_GLIGAR
	[SPECIES_GLIGAR] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_HAXORUS
	[SPECIES_HAXORUS] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_HIPPOWDON
	[SPECIES_HIPPOWDON] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_HYDREIGON
	[SPECIES_HYDREIGON] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_INFERNAPE
	[SPECIES_INFERNAPE] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_KLEFKI
	[SPECIES_KLEFKI] =
	{
		.smogonRUBan = TRUE,
		.goodForUbers = TRUE,
	},
#endif
#ifdef SPECIES_KROOKODILE
	[SPECIES_KROOKODILE] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_LATIAS
	[SPECIES_LATIAS] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_LUCARIO
	[SPECIES_LUCARIO] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_MAMOSWINE
	[SPECIES_MAMOSWINE] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_MIMIKYU
	[SPECIES_MIMIKYU] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_MOLTRES
	[SPECIES_MOLTRES] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_MUK_A
	[SPECIES_MUK_A] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_NIDOKING
	[SPECIES_NIDOKING] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_NIHILEGO
	[SPECIES_NIHILEGO] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_PRIMARINA
	[SPECIES_PRIMARINA] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_QUAGSIRE
	[SPECIES_QUAGSIRE] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_ROTOM_HEAT
	[SPECIES_ROTOM_HEAT] =
	{
		.smogonRUBan = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SCIZOR
	[SPECIES_SCIZOR] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_STARMIE
	[SPECIES_STARMIE] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_SUICUNE
	[SPECIES_SUICUNE] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_SWAMPERT
	[SPECIES_SWAMPERT] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_SYLVEON
	[SPECIES_SYLVEON] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_TENTACRUEL
	[SPECIES_TENTACRUEL] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_TERRAKION
	[SPECIES_TERRAKION] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_TOGEKISS
	[SPECIES_TOGEKISS] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_DARMANITAN
	[SPECIES_DARMANITAN] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_DARMANITANZEN
	[SPECIES_DARMANITANZEN] =
	{
		.smogonRUBan = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_DURANT
	[SPECIES_DURANT] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_ENTEI
	[SPECIES_ENTEI] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_HERACROSS
	[SPECIES_HERACROSS] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_LINOONE
	[SPECIES_LINOONE] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_MIENSHAO
	[SPECIES_MIENSHAO] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_REUNICLUS
	[SPECIES_REUNICLUS] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_SHARPEDO
	[SPECIES_SHARPEDO] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_STAKATAKA
	[SPECIES_STAKATAKA] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_TALONFLAME
	[SPECIES_TALONFLAME] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_TORNADUS
	[SPECIES_TORNADUS] =
	{
		.smogonRUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_VENOMOTH
	[SPECIES_VENOMOTH] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_ZOROARK
	[SPECIES_ZOROARK] =
	{
		.smogonRUBan = TRUE,
	},
#endif
#ifdef SPECIES_ARAQUANID
	[SPECIES_ARAQUANID] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_ARCANINE
	[SPECIES_ARCANINE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_BEWEAR
	[SPECIES_BEWEAR] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_BRONZONG
	[SPECIES_BRONZONG] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_CLOYSTER
	[SPECIES_CLOYSTER] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_CRESSELIA
	[SPECIES_CRESSELIA] =
	{
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_DONPHAN
	[SPECIES_DONPHAN] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_DRAGALGE
	[SPECIES_DRAGALGE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_DRAPION
	[SPECIES_DRAPION] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_ESCAVALIER
	[SPECIES_ESCAVALIER] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_ESPEON
	[SPECIES_ESPEON] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_FLORGES
	[SPECIES_FLORGES] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_FLYGON
	[SPECIES_FLYGON] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_FORRETRESS
	[SPECIES_FORRETRESS] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_GALVANTULA
	[SPECIES_GALVANTULA] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_GARDEVOIR
	[SPECIES_GARDEVOIR] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_GIGALITH
	[SPECIES_GIGALITH] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_GOLISOPOD
	[SPECIES_GOLISOPOD] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_GOODRA
	[SPECIES_GOODRA] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_HONCHKROW
	[SPECIES_HONCHKROW] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_JOLTEON
	[SPECIES_JOLTEON] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_LYCANROC_DUSK
	[SPECIES_LYCANROC_DUSK] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_MACHAMP
	[SPECIES_MACHAMP] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_MANDIBUZZ
	[SPECIES_MANDIBUZZ] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_MANTINE
	[SPECIES_MANTINE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_MAROWAK_A
	[SPECIES_MAROWAK_A] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_METAGROSS
	[SPECIES_METAGROSS] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_MILOTIC
	[SPECIES_MILOTIC] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_NIDOQUEEN
	[SPECIES_NIDOQUEEN] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_NINETALES
	[SPECIES_NINETALES] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_NOIVERN
	[SPECIES_NOIVERN] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_RAIKOU
	[SPECIES_RAIKOU] =
	{
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_REGISTEEL
	[SPECIES_REGISTEEL] =
	{
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_RHYPERIOR
	[SPECIES_RHYPERIOR] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_RIBOMBEE
	[SPECIES_RIBOMBEE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_ROSERADE
	[SPECIES_ROSERADE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_ROTOM_MOW
	[SPECIES_ROTOM_MOW] =
	{
		.smogonNUBan = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SALAZZLE
	[SPECIES_SALAZZLE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_SLOWBRO
	[SPECIES_SLOWBRO] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_SNORLAX
	[SPECIES_SNORLAX] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_SWELLOW
	[SPECIES_SWELLOW] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_TOXICROAK
	[SPECIES_TOXICROAK] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_TSAREENA
	[SPECIES_TSAREENA] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_TYRANTRUM
	[SPECIES_TYRANTRUM] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_UMBREON
	[SPECIES_UMBREON] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_UXIE
	[SPECIES_UXIE] =
	{
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_VENUSAUR
	[SPECIES_VENUSAUR] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_VIRIZION
	[SPECIES_VIRIZION] =
	{
		.smogonNUBan = TRUE,
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_YANMEGA
	[SPECIES_YANMEGA] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_BARBARACLE
	[SPECIES_BARBARACLE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_BRUXISH
	[SPECIES_BRUXISH] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_COFAGRIGUS
	[SPECIES_COFAGRIGUS] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_EMBOAR
	[SPECIES_EMBOAR] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_EXPLOUD
	[SPECIES_EXPLOUD] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_KINGDRA
	[SPECIES_KINGDRA] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_SLURPUFF
	[SPECIES_SLURPUFF] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_VANILLUXE
	[SPECIES_VANILLUXE] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_VILEPLUME
	[SPECIES_VILEPLUME] =
	{
		.smogonNUBan = TRUE,
	},
#endif
#ifdef SPECIES_DITTO
	[SPECIES_DITTO] =
	{
		.goodForUbers = TRUE,
	},
#endif
#ifdef SPECIES_WOBBUFFET
	[SPECIES_WOBBUFFET] =
	{
		.goodForUbers = TRUE,
	},
#endif
#ifdef SPECIES_ARTICUNO
	[SPECIES_ARTICUNO] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ARTICUNO_G
	[SPECIES_ARTICUNO_G] =
	{
		.setPerfectXIVs = TRUE,
	},
#endif
#ifdef SPECIES_ZAPDOS_G
	[SPECIES_ZAPDOS_G] =
	{
		.setPerfectXIVs = TRUE,
	},
#endif
#ifdef SPECIES_MOLTRES_G
	[SPECIES_MOLTRES_G] =
	{
		.setPerfectXIVs = TRUE,
	},
#endif
#ifdef SPECIES_REGIROCK
	[SPECIES_REGIROCK] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_REGICE
	[SPECIES_REGICE] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_KYOGRE_PRIMAL
	[SPECIES_KYOGRE_PRIMAL] =
	{
		.setPerfectXIVs = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GROUDON_PRIMAL
	[SPECIES_GROUDON_PRIMAL] =
	{
		.setPerfectXIVs = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_RAYQUAZA_MEGA
	[SPECIES_RAYQUAZA_MEGA] =
	{
		.setPerfectXIVs = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MESPRIT
	[SPECIES_MESPRIT] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_REGIGIGAS
	[SPECIES_REGIGIGAS] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_TYPE_NULL
	[SPECIES_TYPE_NULL] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY
	[SPECIES_SILVALLY] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_GUZZLORD
	[SPECIES_GUZZLORD] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_POIPOLE
	[SPECIES_POIPOLE] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_REGIELEKI
	[SPECIES_REGIELEKI] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_REGIDRAGO
	[SPECIES_REGIDRAGO] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ENAMORUS
	[SPECIES_ENAMORUS] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
	},
#endif
#ifdef SPECIES_ENAMORUS_THERIAN
	[SPECIES_ENAMORUS_THERIAN] =
	{
		.setPerfectXIVs = TRUE,
		.smartWild = TRUE,
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_NONE
	[SPECIES_NONE] =
	{
		.randomizerBan = TRUE,
	},
#endif
	[0xFC] =
	{
		.randomizerBan = TRUE,
	},
	[0xFD] =
	{
		.randomizerBan = TRUE,
	},
	[0xFE] =
	{
		.randomizerBan = TRUE,
	},
	[0xFF] =
	{
		.randomizerBan = TRUE,
	},
	[0x100] =
	{
		.randomizerBan = TRUE,
	},
	[0x101] =
	{
		.randomizerBan = TRUE,
	},
	[0x102] =
	{
		.randomizerBan = TRUE,
	},
	[0x103] =
	{
		.randomizerBan = TRUE,
	},
	[0x104] =
	{
		.randomizerBan = TRUE,
	},
	[0x105] =
	{
		.randomizerBan = TRUE,
	},
	[0x106] =
	{
		.randomizerBan = TRUE,
	},
	[0x107] =
	{
		.randomizerBan = TRUE,
	},
	[0x108] =
	{
		.randomizerBan = TRUE,
	},
	[0x109] =
	{
		.randomizerBan = TRUE,
	},
	[0x10A] =
	{
		.randomizerBan = TRUE,
	},
	[0x10B] =
	{
		.randomizerBan = TRUE,
	},
	[0x10C] =
	{
		.randomizerBan = TRUE,
	},
	[0x10D] =
	{
		.randomizerBan = TRUE,
	},
	[0x10E] =
	{
		.randomizerBan = TRUE,
	},
	[0x10F] =
	{
		.randomizerBan = TRUE,
	},
	[0x110] =
	{
		.randomizerBan = TRUE,
	},
	[0x111] =
	{
		.randomizerBan = TRUE,
	},
	[0x112] =
	{
		.randomizerBan = TRUE,
	},
	[0x113] =
	{
		.randomizerBan = TRUE,
	},
	[0x114] =
	{
		.randomizerBan = TRUE,
	},
#ifdef SPECIES_EGG
	[SPECIES_EGG] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_B
	[SPECIES_UNOWN_B] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_C
	[SPECIES_UNOWN_C] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_D
	[SPECIES_UNOWN_D] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_E
	[SPECIES_UNOWN_E] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_F
	[SPECIES_UNOWN_F] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_G
	[SPECIES_UNOWN_G] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_H
	[SPECIES_UNOWN_H] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_I
	[SPECIES_UNOWN_I] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_J
	[SPECIES_UNOWN_J] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_K
	[SPECIES_UNOWN_K] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_L
	[SPECIES_UNOWN_L] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_M
	[SPECIES_UNOWN_M] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_N
	[SPECIES_UNOWN_N] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_O
	[SPECIES_UNOWN_O] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_P
	[SPECIES_UNOWN_P] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_Q
	[SPECIES_UNOWN_Q] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_R
	[SPECIES_UNOWN_R] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_S
	[SPECIES_UNOWN_S] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_T
	[SPECIES_UNOWN_T] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_U
	[SPECIES_UNOWN_U] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_V
	[SPECIES_UNOWN_V] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_W
	[SPECIES_UNOWN_W] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_X
	[SPECIES_UNOWN_X] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_Y
	[SPECIES_UNOWN_Y] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_Z
	[SPECIES_UNOWN_Z] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_EXCLAMATION
	[SPECIES_UNOWN_EXCLAMATION] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNOWN_QUESTION
	[SPECIES_UNOWN_QUESTION] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_UNFEZANT_F
	[SPECIES_UNFEZANT_F] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FRILLISH_F
	[SPECIES_FRILLISH_F] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_JELLICENT_F
	[SPECIES_JELLICENT_F] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SHADOW_WARRIOR
	[SPECIES_SHADOW_WARRIOR] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ROTOM_FROST
	[SPECIES_ROTOM_FROST] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ROTOM_FAN
	[SPECIES_ROTOM_FAN] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_HIPPOPOTAS_F
	[SPECIES_HIPPOPOTAS_F] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_HIPPOWDON_F
	[SPECIES_HIPPOWDON_F] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_CHERRIM_SUN
	[SPECIES_CHERRIM_SUN] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PYROAR_FEMALE
	[SPECIES_PYROAR_FEMALE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_AEGISLASH_BLADE
	[SPECIES_AEGISLASH_BLADE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ZYGARDE_CELL
	[SPECIES_ZYGARDE_CELL] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ZYGARDE_CORE
	[SPECIES_ZYGARDE_CORE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ZYGARDE_COMPLETE
	[SPECIES_ZYGARDE_COMPLETE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ASHGRENINJA
	[SPECIES_ASHGRENINJA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_HEART
	[SPECIES_FURFROU_HEART] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_DIAMOND
	[SPECIES_FURFROU_DIAMOND] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_STAR
	[SPECIES_FURFROU_STAR] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_PHAROAH
	[SPECIES_FURFROU_PHAROAH] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_KABUKI
	[SPECIES_FURFROU_KABUKI] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_LA_REINE
	[SPECIES_FURFROU_LA_REINE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_MATRON
	[SPECIES_FURFROU_MATRON] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_DANDY
	[SPECIES_FURFROU_DANDY] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_FURFROU_DEBUTANTE
	[SPECIES_FURFROU_DEBUTANTE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_VENUSAUR_MEGA
	[SPECIES_VENUSAUR_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_CHARIZARD_MEGA_X
	[SPECIES_CHARIZARD_MEGA_X] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_CHARIZARD_MEGA_Y
	[SPECIES_CHARIZARD_MEGA_Y] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_BLASTOISE_MEGA
	[SPECIES_BLASTOISE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_BEEDRILL_MEGA
	[SPECIES_BEEDRILL_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PIDGEOT_MEGA
	[SPECIES_PIDGEOT_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ALAKAZAM_MEGA
	[SPECIES_ALAKAZAM_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SLOWBRO_MEGA
	[SPECIES_SLOWBRO_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_KANGASKHAN_MEGA
	[SPECIES_KANGASKHAN_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PINSIR_MEGA
	[SPECIES_PINSIR_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GYARADOS_MEGA
	[SPECIES_GYARADOS_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_AERODACTYL_MEGA
	[SPECIES_AERODACTYL_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MEWTWO_MEGA_X
	[SPECIES_MEWTWO_MEGA_X] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MEWTWO_MEGA_Y
	[SPECIES_MEWTWO_MEGA_Y] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_AMPHAROS_MEGA
	[SPECIES_AMPHAROS_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_STEELIX_MEGA
	[SPECIES_STEELIX_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SCIZOR_MEGA
	[SPECIES_SCIZOR_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_HERACROSS_MEGA
	[SPECIES_HERACROSS_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_HOUNDOOM_MEGA
	[SPECIES_HOUNDOOM_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_TYRANITAR_MEGA
	[SPECIES_TYRANITAR_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SCEPTILE_MEGA
	[SPECIES_SCEPTILE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_BLAZIKEN_MEGA
	[SPECIES_BLAZIKEN_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SWAMPERT_MEGA
	[SPECIES_SWAMPERT_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GARDEVOIR_MEGA
	[SPECIES_GARDEVOIR_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SABLEYE_MEGA
	[SPECIES_SABLEYE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MAWILE_MEGA
	[SPECIES_MAWILE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_AGGRON_MEGA
	[SPECIES_AGGRON_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MEDICHAM_MEGA
	[SPECIES_MEDICHAM_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MANECTRIC_MEGA
	[SPECIES_MANECTRIC_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SHARPEDO_MEGA
	[SPECIES_SHARPEDO_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_CAMERUPT_MEGA
	[SPECIES_CAMERUPT_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ALTARIA_MEGA
	[SPECIES_ALTARIA_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_BANETTE_MEGA
	[SPECIES_BANETTE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ABSOL_MEGA
	[SPECIES_ABSOL_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GLALIE_MEGA
	[SPECIES_GLALIE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SALAMENCE_MEGA
	[SPECIES_SALAMENCE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_METAGROSS_MEGA
	[SPECIES_METAGROSS_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_LATIAS_MEGA
	[SPECIES_LATIAS_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_LATIOS_MEGA
	[SPECIES_LATIOS_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_LOPUNNY_MEGA
	[SPECIES_LOPUNNY_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GARCHOMP_MEGA
	[SPECIES_GARCHOMP_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_LUCARIO_MEGA
	[SPECIES_LUCARIO_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ABOMASNOW_MEGA
	[SPECIES_ABOMASNOW_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_GALLADE_MEGA
	[SPECIES_GALLADE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_AUDINO_MEGA
	[SPECIES_AUDINO_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_DIANCIE_MEGA
	[SPECIES_DIANCIE_MEGA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_WISHIWASHI_S
	[SPECIES_WISHIWASHI_S] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_FIGHT
	[SPECIES_SILVALLY_FIGHT] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_FLYING
	[SPECIES_SILVALLY_FLYING] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_POISON
	[SPECIES_SILVALLY_POISON] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_GROUND
	[SPECIES_SILVALLY_GROUND] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_ROCK
	[SPECIES_SILVALLY_ROCK] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_BUG
	[SPECIES_SILVALLY_BUG] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_GHOST
	[SPECIES_SILVALLY_GHOST] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_STEEL
	[SPECIES_SILVALLY_STEEL] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_FIRE
	[SPECIES_SILVALLY_FIRE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_WATER
	[SPECIES_SILVALLY_WATER] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_GRASS
	[SPECIES_SILVALLY_GRASS] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_ELECTRIC
	[SPECIES_SILVALLY_ELECTRIC] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_PSYCHIC
	[SPECIES_SILVALLY_PSYCHIC] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_ICE
	[SPECIES_SILVALLY_ICE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_DRAGON
	[SPECIES_SILVALLY_DRAGON] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_DARK
	[SPECIES_SILVALLY_DARK] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_SILVALLY_FAIRY
	[SPECIES_SILVALLY_FAIRY] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MIMIKYU_BUSTED
	[SPECIES_MIMIKYU_BUSTED] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_NECROZMA_ULTRA
	[SPECIES_NECROZMA_ULTRA] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_PICHU_SPIKY
	[SPECIES_PICHU_SPIKY] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_XERNEAS_NATURAL
	[SPECIES_XERNEAS_NATURAL] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_CRAMORANT_GULPING
	[SPECIES_CRAMORANT_GULPING] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_CRAMORANT_GORGING
	[SPECIES_CRAMORANT_GORGING] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_TOXTRICITY_LOW_KEY
	[SPECIES_TOXTRICITY_LOW_KEY] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_EISCUE_NOICE
	[SPECIES_EISCUE_NOICE] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_MORPEKO_HANGRY
	[SPECIES_MORPEKO_HANGRY] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_DARMANITAN_G_ZEN
	[SPECIES_DARMANITAN_G_ZEN] =
	{
		.randomizerBan = TRUE,
	},
#endif
#ifdef SPECIES_ZARUDE_DADA
	[SPECIES_ZARUDE_DADA] =
	{
		.randomizerBan = TRUE,
	},
#endif
};

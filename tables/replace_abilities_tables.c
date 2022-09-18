#include "../../src/defines.h"
#include "../../include/constants/species.h"
#include "../../include/new/ability_util.h"

const struct SpecialReplaceAbilityFlags gSpecialReplaceAbilityFlags[NUM_SPECIES] =
{
#ifdef SPECIES_RESHIRAM
	[SPECIES_RESHIRAM] =
	{
		.hasTurboblaze = TRUE,
	},
#endif
#ifdef SPECIES_KYUREM_WHITE
	[SPECIES_KYUREM_WHITE] =
	{
		.hasTurboblaze = TRUE,
	},
#endif
#ifdef SPECIES_ZEKROM
	[SPECIES_ZEKROM] =
	{
		.hasTeravolt = TRUE,
	},
#endif
#ifdef SPECIES_KYUREM_BLACK
	[SPECIES_KYUREM_BLACK] =
	{
		.hasTeravolt = TRUE,
	},
#endif
#ifdef SPECIES_FEAROW
	[SPECIES_FEAROW] =
	{
		.hasStrongBeak = TRUE,
	},
#endif
#ifdef SPECIES_PIKIPEK
	[SPECIES_PIKIPEK] =
	{
		.hasStrongBeak = TRUE,
	},
#endif
#ifdef SPECIES_TRUMBEAK
	[SPECIES_TRUMBEAK] =
	{
		.hasStrongBeak = TRUE,
	},
#endif
#ifdef SPECIES_TOUCANNON
	[SPECIES_TOUCANNON] =
	{
		.hasStrongBeak = TRUE,
	},
#endif
#ifdef SPECIES_VIBRAVA
	[SPECIES_VIBRAVA] =
	{
		.hasTectonate = TRUE,
	},
#endif
#ifdef SPECIES_FLYGON
	[SPECIES_FLYGON] =
	{
		.hasTectonate = TRUE,
	},
#endif
};

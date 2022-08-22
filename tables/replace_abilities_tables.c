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
};

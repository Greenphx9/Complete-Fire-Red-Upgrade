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
#ifdef SPECIES_KINGAMBIT
	[SPECIES_KINGAMBIT] =
	{
		.hasSupremeOverlord = TRUE,
	},
#endif
#ifdef SPECIES_GALLADE
	[SPECIES_GALLADE] =
	{
		.hasSharpness = TRUE,
	},
#endif
#ifdef SPECIES_GALLADE_MEGA
	[SPECIES_GALLADE_MEGA] =
	{
		.hasSharpness = TRUE,
	},
#endif
#ifdef SPECIES_SAMUROTT_H
	[SPECIES_SAMUROTT_H] =
	{
		.hasSharpness = TRUE,
	},
#endif
#ifdef SPECIES_KLEAVOR
	[SPECIES_KLEAVOR] =
	{
		.hasSharpness = TRUE,
	},
#endif
#ifdef SPECIES_PONYTA_G
	[SPECIES_PONYTA_G] =
	{
		.hasPastelVeil = TRUE,
	},
#endif
#ifdef SPECIES_RAPIDASH_G
	[SPECIES_RAPIDASH_G] =
	{
		.hasPastelVeil = TRUE,
	},
#endif
#ifdef SPECIES_TOEDSCOOL
	[SPECIES_TOEDSCOOL] =
	{
		.hasMyceliumMight = TRUE,
	},
#endif
#ifdef SPECIES_TOEDSCRUEL
	[SPECIES_TOEDSCRUEL] =
	{
		.hasMyceliumMight = TRUE,
	},
#endif
};

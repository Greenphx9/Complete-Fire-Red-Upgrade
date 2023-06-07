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
#ifdef SPECIES_IRON_TREADS
	[SPECIES_IRON_TREADS] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
#ifdef SPECIES_IRON_BUNDLE
	[SPECIES_IRON_BUNDLE] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
#ifdef SPECIES_IRON_HANDS
	[SPECIES_IRON_HANDS] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
#ifdef SPECIES_IRON_JUGULIS
	[SPECIES_IRON_JUGULIS] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
#ifdef SPECIES_IRON_MOTH
	[SPECIES_IRON_MOTH] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
#ifdef SPECIES_IRON_THORNS
	[SPECIES_IRON_THORNS] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
#ifdef SPECIES_IRON_VALIANT
	[SPECIES_IRON_VALIANT] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
#ifdef SPECIES_IRON_LEAVES
	[SPECIES_IRON_LEAVES] =
	{
		.hasQuarkDrive = TRUE,
	},
#endif
};

#include "defines.h"
#include "defines_battle.h"
#include "../include/string_util.h"
#include "../include/constants/abilities.h"
#include "../include/constants/pokedex.h"
#include "../include/constants/species.h"

#include "../include/new/ability_tables.h"
#include "../include/new/ability_util.h"
#include "../include/new/battle_util.h"
#include "../include/new/build_pokemon.h"
#include "../include/new/move_tables.h"
#include "../include/new/util.h"

#include "Tables/replace_abilities.h"

extern const u8 gAbilityNames[][ABILITY_NAME_LENGTH + 1];
extern const u8* gAbilityDescriptions[];

const u8* GetAbilityNameOverride(const u8 ability, const u16 species) //Bypasses the 255 Ability limitation and implements clone Abilities
{
	for(u8 i = 0; i < ARRAY_COUNT(sReplaceAbilities); i++)
	{
		if(ability == sReplaceAbilities[i].currAbility && species == sReplaceAbilities[i].species)
		{
			return sReplaceAbilities[i].replaceAbilityString;
		}
	}
	return NULL;
}

const u8* GetAbilityName(const u8 ability, const u16 species)
{
	const u8* override = GetAbilityNameOverride(ability, species);
	if (override != NULL)
		return override;

	const u8* ptr = gAbilityNames[ability];

	if (ptr[3] == 0x8 || ptr[3] == 0x9) //Expanded Ability Names
		ptr = T1_READ_PTR(ptr);

	return ptr;
}

void CopyAbilityName(u8* dst, const u8 ability, const u16 species)
{
	StringCopy(dst, GetAbilityName(ability, species));
}

u16 GetProperAbilityPopUpSpecies(u8 bank)
{
	if (gNewBS->tookAbilityFrom[bank] != SPECIES_NONE)
		return gNewBS->tookAbilityFrom[bank];
	else
		return SPECIES(bank);
}

void SetProperAbilityPopUpSpecies(u8 bank)
{
	gAbilityPopUpSpecies = GetProperAbilityPopUpSpecies(bank);
}

void SetTookAbilityFrom(u8 taker, u8 takenFrom)
{
	if (gNewBS->tookAbilityFrom[takenFrom] != SPECIES_NONE)
		gNewBS->tookAbilityFrom[taker] = gNewBS->tookAbilityFrom[takenFrom]; //Pass along species
	else
		gNewBS->tookAbilityFrom[taker] = SPECIES(takenFrom);
}

void SwapTookAbilityFrom(u8 bank1, u8 bank2)
{
	u16 species1 = GetProperAbilityPopUpSpecies(bank1);
	u16 species2 = GetProperAbilityPopUpSpecies(bank2);

	gNewBS->tookAbilityFrom[bank1] = species2;
	gNewBS->tookAbilityFrom[bank2] = species1;
}

void ResetTookAbilityFrom(u8 bank)
{
	gNewBS->tookAbilityFrom[bank] = SPECIES_NONE;
}

const u8* GetAbilityDescriptionOverride(const u8 ability, const u16 species) //Bypasses the 255 Ability limitation and implements new Abilities
{
	for(u8 i = 0; i < ARRAY_COUNT(sReplaceAbilities); i++)
	{
		if (sReplaceAbilities[i].replaceDescString != NULL)
		{
			if(ability == sReplaceAbilities[i].currAbility && species == sReplaceAbilities[i].species)
			{
				return sReplaceAbilities[i].replaceDescString;
			}
		}
	}

	return NULL;
}

const u8* GetAbilityDescription(const u8 ability, unusedArg const u16 species)
{	
	const u8* override = GetAbilityDescriptionOverride(ability, species);
	if (override != NULL)
		return override;

	const u8* desc = gAbilityDescriptions[ability];
	return desc;
}

void CopyAbilityDescription(u8* dst, const u8 ability, const u16 species)
{
	StringCopy(dst, GetAbilityDescription(ability, species));
}

bool8 IsMoldBreakerAbility(u8 ability)
{
	return ability == ABILITY_MOLDBREAKER;
}

bool8 SpeciesHasTurboblaze(u16 species)
{
	return gSpecialReplaceAbilityFlags[species].hasTurboblaze;
}

bool8 SpeciesHasTeravolt(u16 species)
{
	return gSpecialReplaceAbilityFlags[species].hasTeravolt;
}

bool8 SpeciesHasStrongBeak(u16 species)
{
	return gSpecialReplaceAbilityFlags[species].hasStrongBeak;
}

bool8 SpeciesHasEarthilate(u16 species)
{
	return gSpecialReplaceAbilityFlags[species].hasEarthilate;
}

bool8 AbilityIncreasesWildItemChance(u8 ability)
{
	return ability == ABILITY_COMPOUNDEYES || ability == ABILITY_SUPERLUCK;
}

bool8 IsUnnerveAbility(u8 ability)
{
	return ability == ABILITY_UNNERVE
		#ifdef ABILITY_ASONE_GRIM
		|| ability == ABILITY_ASONE_GRIM
		#endif
		#ifdef ABILITY_ASONE_CHILLING
		|| ability == ABILITY_ASONE_CHILLING
		#endif
		;
}

bool8 UnnerveOnOpposingField(u8 bank)
{
	return ABILITY_ON_OPPOSING_FIELD(bank, ABILITY_UNNERVE)
		#ifdef ABILITY_ASONE_GRIM
		|| ABILITY_ON_OPPOSING_FIELD(bank, ABILITY_ASONE_GRIM)
		#endif
		#ifdef ABILITY_ASONE_CHILLING
		|| ABILITY_ON_OPPOSING_FIELD(bank, ABILITY_ASONE_CHILLING)
		#endif
		;
}
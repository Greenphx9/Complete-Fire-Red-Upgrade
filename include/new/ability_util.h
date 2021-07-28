#pragma once

#include "../global.h"
#include "../pokemon.h"

/**
 * \file anility_util.h
 * \brief Contains utility functions pertaining to Abilities.
 */

//Exported Functions
const u8* GetAbilityNameOverride(const u8 ability, const u16 species);
const u8* GetAbilityName(const u8 ability, const u16 species);
void CopyAbilityName(u8* dst, const u8 ability, const u16 species);
void CopyAbilityDescription(u8* dst, const u8 ability, const u16 species);
u16 GetProperAbilityPopUpSpecies(u8 bank);
void SetProperAbilityPopUpSpecies(u8 bank);
void SetTookAbilityFrom(u8 taker, u8 takenFrom);
void SwapTookAbilityFrom(u8 bank1, u8 bank2);
void ResetTookAbilityFrom(u8 bank);

bool8 IsMoldBreakerAbility(u8 ability);
bool8 SpeciesHasTurboblaze(u16 species);
bool8 SpeciesHasTeravolt(u16 species);
bool8 SpeciesHasStrongBeak(u16 species);
bool8 SpeciesHasEarthilate(u16 species);

bool8 AbilityIncreasesWildItemChance(u8 ability);
bool8 IsUnnerveAbility(u8 ability);
bool8 UnnerveOnOpposingField(u8 bank);

struct SpecialReplaceAbilityFlags
{
	bool8 hasTurboblaze : 1;
    bool8 hasTeravolt : 1;
    bool8 hasStrongBeak : 1;
    bool8 hasEarthilate : 1;
};

extern const struct SpecialReplaceAbilityFlags gSpecialReplaceAbilityFlags[];
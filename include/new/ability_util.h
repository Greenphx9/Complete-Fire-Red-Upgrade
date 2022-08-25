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

bool8 IsMoldBreakerAbility(u8 ability);
bool8 SpeciesHasTurboblaze(u16 species);
bool8 SpeciesHasTeravolt(u16 species);
bool8 SpeciesHasStrongBeak(u16 species);
bool8 SpeciesHasEarthilate(u16 species);

struct SpecialReplaceAbilityFlags
{
	bool8 hasTurboblaze : 1;
    bool8 hasTeravolt : 1;
    bool8 hasStrongBeak : 1;
    bool8 hasEarthilate : 1;
};

extern const struct SpecialReplaceAbilityFlags gSpecialReplaceAbilityFlags[];
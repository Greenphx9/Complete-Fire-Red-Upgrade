#pragma once

#include "../global.h"

/**
 * \file battle_strings.h
 * \brief Contains functions relating to strings displayed in battle.
 */

//Exported Functions
void PrepareStringBattle(u16 stringId, u8 bank);
void BufferStringBattle(u16 stringID);
const u8* GetAbilityName(const u8 ability, const u16 species);
const u8* GetItemName(u8 item);
void CopyAbilityName(u8* dst, const u8 ability, const u16 species);

//Functions Hooked In
void BufferMoveNameBattle(u16 move, u8* dst);
void EmitPrintString(u8 bufferId, u16 stringID);
void EmitPrintSelectionString(u8 bufferId, u16 stringID);

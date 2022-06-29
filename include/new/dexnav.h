#pragma once

#include "../global.h"

void InitDexNavHUD(u16 species, u8 environment);
bool8 IsDexNavHudActive(void);
void TryFreeDexnavState(void);
u8 GetPlayerDistance(s16 x, s16 y);
void CleanWindow(u8 windowId);

//Functions Hooked In
u8 SelectHookRestore(void);
u8 StartMenuDexNavCallback(void);


#ifndef GUARD_OPTIONS_MENU_H
#define GUARD_OPTIONS_MENU_H

#include "global.h"
#include "text.h"
#include "task.h"

void CB2_OptionMenu(void);
bool8 LoadOptionMenuPalette(void);
void LoadOptionMenuItemNames(void);

void __attribute__((long_call)) OptionMenu_InitCallbacks(void);
void __attribute__((long_call)) InitOptionMenuBg(void);
void __attribute__((long_call)) OptionMenu_ResetSpriteData(void);
void __attribute__((long_call)) PrintOptionMenuHeader(void);
void __attribute__((long_call)) DrawOptionMenuBg(void);
void __attribute__((long_call)) BufferOptionMenuString(u8 selection);
void __attribute__((long_call)) UpdateSettingSelectionDisplay(u16 selection);
void __attribute__((long_call)) OptionMenu_PickSwitchCancel(void);
void __attribute__((long_call)) SetOptionMenuTask(void);

struct TextWindowGraphics
{
    const void * tiles;
    const void * palette;
};

const struct TextWindowGraphics  __attribute__((long_call)) * GetUserFrameGraphicsInfo(u8 idx);
void __attribute__((long_call)) DrawWindowBorderWithStdpal3(u8 bgId, u16 tileStart, u8 palette);

#endif // GUARD_OPTIONS_MENU_H

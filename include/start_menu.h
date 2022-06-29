#ifndef GUARD_START_MENU_H
#define GUARD_START_MENU_H

#include "global.h"

typedef void (*MainCallback)(void);

bool8 __attribute__((long_call)) IsUpdateLinkStateCBActive(void);
void __attribute__((long_call)) ShowStartMenu(void);
void __attribute__((long_call)) DestroySafariZoneStatsWindow(void);
void __attribute__((long_call)) AppendToList(u8* list, u8* pos, u8 newEntry);

void DrawTime(void);

extern u8 gText_StartMenu_TimeBase[];
extern u8 gText_StartMenu_TimeBase_12Hr[];
extern u8 gText_StartMenu_AM[];
extern u8 gText_StartMenu_PM[];
extern u8 gText_StartMenu_RedText[];
extern u8 gText_StartMenu_NormalText[];
extern u8 gText_StartMenu_Sunday[];
extern u8 gText_StartMenu_Monday[];
extern u8 gText_StartMenu_Tuesday[];
extern u8 gText_StartMenu_Wednesday[];
extern u8 gText_StartMenu_Thursday[];
extern u8 gText_StartMenu_Friday[];
extern u8 gText_StartMenu_Saturday[];
extern u8 gText_StartMenu_Error[];

static u8* sDayNames[] =
{
    gText_StartMenu_Sunday,
    gText_StartMenu_Monday,
    gText_StartMenu_Tuesday,
    gText_StartMenu_Wednesday,
    gText_StartMenu_Thursday,
    gText_StartMenu_Friday,
    gText_StartMenu_Saturday,
};

#endif // GUARD_START_MENU_H

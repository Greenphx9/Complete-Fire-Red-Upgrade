/********\

CUSTOM FILE!
THIS IS A CUSTOM FILE THAT ISN'T NORMALLY IN THE CFRU.

Give Credits to:
- Greenphx
- TheXaman
if used.

\********/

#include "defines.h"
#include "../include/evolution_scene.h"
#include "../include/field_control_avatar.h"
#include "../include/field_player_avatar.h"
#include "../include/field_effect.h"
#include "../include/field_screen_effect.h"
#include "../include/field_weather.h"
#include "../include/fieldmap.h"
#include "../include/item_use.h"
#include "../include/item_menu.h"
#include "../include/menu.h"
#include "../include/metatile_behavior.h"
#include "../include/overworld.h"
#include "../include/party_menu.h"
#include "../include/pokemon_icon.h"
#include "../include/pokemon_storage_system.h"
#include "../include/random.h"
#include "../include/script.h"
#include "../include/sound.h"
#include "../include/start_menu.h"
#include "../include/string_util.h"
#include "../include/text.h"
#include "../include/wild_encounter.h"
#include "../include/window.h"
#include "../include/constants/abilities.h"
#include "../include/constants/hold_effects.h"
#include "../include/constants/items.h"
#include "../include/constants/item_effects.h"
#include "../include/constants/moves.h"
#include "../include/constants/region_map_sections.h"
#include "../include/constants/songs.h"
#include "../include/event_object_movement.h"
#include "../include/script.h"

#include "../include/new/battle_strings.h"
#include "../include/new/build_pokemon.h"
#include "../include/new/evolution.h"
#include "../include/new/follow_me.h"
#include "../include/new/form_change.h"
#include "../include/new/item.h"
#include "../include/new/overworld.h"
#include "../include/new/party_menu.h"
#include "../include/new/util2.h"
#include "../include/base_stats.h"
#include "../include/new/exp.h"

#define DEBUG_MAIN_MENU_WIDTH 13
#define DEBUG_MAIN_MENU_HEIGHT 7

#define DEBUG_NUMBER_DISPLAY_WIDTH 10
#define DEBUG_NUMBER_DISPLAY_HEIGHT 4
#define DEBUG_NUMBER_DISPLAY_SOUND_WIDTH 20
#define DEBUG_NUMBER_DISPLAY_SOUND_HEIGHT 6

#define DEBUG_NUMBER_DIGITS_FLAGS 4
#define DEBUG_NUMBER_DIGITS_VARIABLES 5
#define DEBUG_NUMBER_DIGITS_VARIABLE_VALUE 5
#define DEBUG_NUMBER_DIGITS_ITEMS 4
#define DEBUG_NUMBER_DIGITS_ITEM_QUANTITY 2

void EVSelector_Start(u8 taskId);
static void EVSelector_SelectEVs(u8 taskId);
void CB2_ShowEvIv(void);
void CB2_EVSelector(void);
void CB2_EVSelector2(void);
static void DestroyEVSelectorMenu(u8);
static u8 GetMaxEVs(void);
void Call_EVSelector();
const u8* GetPowerItemEVLevelString(void);

static const struct WindowTemplate sDebugNumberDisplayWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 6 + DEBUG_MAIN_MENU_WIDTH,
    .tilemapTop = 1,
    .width = DEBUG_NUMBER_DISPLAY_WIDTH,
    .height = 2 * DEBUG_NUMBER_DISPLAY_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};

void Call_EVSelector()
{
    PlaySE(244);
    //SetVBlankCallback(NULL);
    SetMainCallback2(CB2_EVSelector);
    //ScriptContext2_Enable();
}

void CB2_EVSelector(void)
{
    u8 taskId = CreateTask(EVSelector_Start, 3);
    SetMainCallback2(CB2_EVSelector2);
    gTasks[taskId].data[3] = 1;
}

void CB2_EVSelector2(void) 
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
}

extern const u8 gText_EvSelectorMain[];
extern const u8 digitInidicator_1[];
extern const u8 digitInidicator_10[];
extern const u8 digitInidicator_100[];

const u8 * const gText_DigitIndicator[] =
{
    digitInidicator_1,
    digitInidicator_10,
    digitInidicator_100,
};
static const s32 sPowersOfTen[] =
{
             1,
            10,
           100,
};

extern const u8 gText_PowerItemLevel1[];
extern const u8 gText_PowerItemLevel2[];
extern const u8 gText_PowerItemLevel3[];
extern const u8 gText_PowerItemLevel4[];
extern const u8 gText_PowerItemLevel5[];
extern const u8 gText_PowerItemLevel6[];
extern const u8 EventScript_PowerItemEVFadescreen[];
extern const u8 EventScript_PowerItemEVFadescreen2[];

void EVSelector_Start(u8 taskId)
{
    u8 windowId;
    //LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugNumberDisplayWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, 3);

    //Display initial ID
    
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 3);
    StringCopy(gStringVar1,  GetPowerItemEVLevelString());
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, gText_EvSelectorMain);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    //Set task data
    gTasks[taskId].func = EVSelector_SelectEVs;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0;            //Complex?
    gSprites[gTasks[taskId].data[6]].oam.priority = 0; //Mon Icon ID
}

extern const u8 SystemScript_ReleaseAll[];


static void EVSelector_SelectEVs(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(5);

        if(gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] >= GetMaxEVs())
                gTasks[taskId].data[3] = GetMaxEVs();
        }
        if(gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if(gTasks[taskId].data[3] > 252)
                gTasks[taskId].data[3] = 252;
            if(gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if(gMain.newKeys & DPAD_LEFT)
        {
            if(gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if(gMain.newKeys & DPAD_RIGHT)
        {
            if(gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
            if(gTasks[taskId].data[4] > 2)
                gTasks[taskId].data[4] = 2;
        }
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        //StringCopy(gStringVar1, gStringVar4); //CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        StringExpandPlaceholders(gStringVar4, gText_EvSelectorMain);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }
    if (gMain.newKeys & A_BUTTON)
    {
        VarSet(VAR_POWER_ITEM_EV_VALUE, gTasks[taskId].data[3]);
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        PlaySE(2);
        DestroyEVSelectorMenu(taskId);
        EnableBothScriptContexts();
        FadeScreen(FADE_TO_BLACK, 0);
        ScriptContext1_SetupScript(EventScript_PowerItemEVFadescreen);
        ScriptContext2_Enable();
        SetMainCallback2(CB2_ReturnToFieldFromDiploma);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(3);
        DestroyEVSelectorMenu(taskId);
        EnableBothScriptContexts();
        FadeScreen(FADE_TO_BLACK, 0);
        ScriptContext1_SetupScript(EventScript_PowerItemEVFadescreen2);
        ScriptContext2_Enable();
        SetMainCallback2(CB2_ReturnToFieldFromDiploma);
    }
}

static void DestroyEVSelectorMenu(u8 taskId)
{
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    ClearStdWindowAndFrame(gTasks[taskId].data[2], TRUE);
    RemoveWindow(gTasks[taskId].data[2]);

    DestroyTask(taskId);
    EnableBothScriptContexts();
}

static u8 GetMaxEVs(void) 
{
    u8 evs = 0;
    switch(VarGet(VAR_POWER_ITEM_LEVEL))
    {
        case 1:
            evs = 8;
            break;
        case 2:
            evs = 16;
            break;
        case 3:
            evs = 32;
            break;
        case 4:
            evs = 64;
            break;
        case 5:
            evs = 128;
            break;
        case 6:
            evs = 252;
            break;
    }
    return evs;
}

const u8* GetPowerItemEVLevelString(void)
{
    const u8* string;
    switch(VarGet(VAR_POWER_ITEM_LEVEL)) //Buffer doesn't work for some reason
    {
        case 1:
            string = gText_PowerItemLevel1;
            break;
        case 2:
            string = gText_PowerItemLevel2;
            break;
        case 3:
            string = gText_PowerItemLevel3;
            break;
        case 4:
            string = gText_PowerItemLevel4;
            break;
        case 5:
            string = gText_PowerItemLevel5;
            break;
        case 6:
            string = gText_PowerItemLevel6;
            break;
        default:
            string = gText_PowerItemLevel1;
            break;
    }
    return string;
}
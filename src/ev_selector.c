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

void EVSelector_Start(u8 taskId);
static void EVSelector_SelectEVs(u8 taskId);
void CB2_ShowEvIv(void);
void CB2_EVSelector(void);
void CB2_EVSelector2(void);
static void DestroyEVSelectorMenu(u8);

void Call_EVSelector(void)
{
    PlaySE(244);
    SetVBlankCallback(NULL);
    SetMainCallback2(CB2_EVSelector);
    ScriptContext2_Enable();
}

void CB2_EVSelector(void)
{
    CreateTask(EVSelector_Start, 0);
    SetMainCallback2(CB2_EVSelector2);
}

void CB2_EVSelector2(void) 
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

extern const u8 gText_EvSelectorMain[];
extern const u8 digitInidicator_1[];
extern const u8 digitInidicator_10[];
extern const u8 digitInidicator_100[];

#define DEBUG_MAIN_MENU_WIDTH 13
#define DEBUG_MAIN_MENU_HEIGHT 8

#define DEBUG_NUMBER_DISPLAY_WIDTH 10
#define DEBUG_NUMBER_DISPLAY_HEIGHT 4
#define DEBUG_NUMBER_DISPLAY_SOUND_WIDTH 20
#define DEBUG_NUMBER_DISPLAY_SOUND_HEIGHT 6

#define DEBUG_NUMBER_DIGITS_FLAGS 4
#define DEBUG_NUMBER_DIGITS_VARIABLES 5
#define DEBUG_NUMBER_DIGITS_VARIABLE_VALUE 5
#define DEBUG_NUMBER_DIGITS_ITEMS 4
#define DEBUG_NUMBER_DIGITS_ITEM_QUANTITY 2

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

#define gText_EmptyString2 (const u8*) 0x84161cd

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
    StringCopy(gStringVar1,  gText_EmptyString2);
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
            if(gTasks[taskId].data[3] >= 252)
                gTasks[taskId].data[3] = 252;
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
            if(gTasks[taskId].data[4] < 4-1)
                gTasks[taskId].data[4] += 1;
            if(gTasks[taskId].data[4] > 100)
                gTasks[taskId].data[4] = 100;
        }
		//ConvertIntToDecimalStringN(gStringVar4, gTasks[taskId].data[3])
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        //StringCopy(gStringVar1, gStringVar4); //CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 4);
        StringExpandPlaceholders(gStringVar4, gText_EvSelectorMain);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }
    if (gMain.newKeys & A_BUTTON)
    {
        VarSet(VAR_POWER_ITEM_EV_VALUE, gTasks[taskId].data[3]);
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        PlaySE(5);
        DestroyEVSelectorMenu(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(5);
        DestroyEVSelectorMenu(taskId);
    }
}

static void DestroyEVSelectorMenu(u8 taskId)
{
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    ClearStdWindowAndFrame(gTasks[taskId].data[2], TRUE);
    RemoveWindow(gTasks[taskId].data[2]);

    EnableBothScriptContexts();
    FreeAllWindowBuffers();
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
    DestroyTask(taskId);
}
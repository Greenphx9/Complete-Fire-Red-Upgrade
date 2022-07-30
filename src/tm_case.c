/********\

CUSTOM FILE!
THIS IS A CUSTOM FILE THAT ISN'T NORMALLY IN THE CFRU.

Give Credits to:
- Skeli
- Greenphx
if used.

\********/

#include "defines.h"
#include "../include/random.h"
#include "../include/constants/abilities.h"
#include "../include/global.h"

#include "../include/new/damage_calc.h"
#include "../include/new/evolution.h"
#include "../include/new/util2.h"
#include "../include/new/frontier.h"
#include "../include/new/mega.h"
#include "../include/new/dynamax.h"
#include "../include/constants/items.h"
#include "../include/constants/moves.h"
#include "../include/base_stats.h"
#include "../include/tm_case.h"
#include "../include/menu_helpers.h"
#include "../include/scanline_effect.h"
#include "../include/sprite.h"
#include "../include/palette.h"
#include "../include/task.h"
#include "../include/item.h"
#include "../include/list_menu.h"
#include "../include/new/item.h"
#include "../include/list_menu.h"
#include "../include/mgba.h"
#include "../include/malloc.h"
#include "../include/menu.h"
#include "../include/pokemon_icon.h"
#include "../include/window.h"
#include "../include/string_util.h"
#include "../include/new/Vanilla_functions.h"
#include "../include/text.h"
#include "../include/gba/io_reg.h"
#include "../include/pokemon.h"
#include "../include/gpu_regs.h"


/*
tm_case.c
	adds party icons to the tm case
*/

extern const u8 gMoveNames[][12 + 1];

//static void DrawPartyMonIcons(void);
//static void TintPartyMonIcons(u16 tm);

//#define spriteIdData ((u8*) 0x203E200);
//#define spriteIdData ((u8*) *((u8*)0x203E200))
//#define spriteIdPaletteTest ((u16*) 0x203E400);
//#define spriteIdPalette ((u16*) *((u16*) 0x203E400))
//extern u8    spriteIdData[PARTY_SIZE];
//extern u16   spriteIdPalette[PARTY_SIZE];

struct UnkStruct_203B10C
{
    void (* savedCallback)(void);
    u8 tmCaseMenuType;
    u8 unk_05;
    u8 unk_06;
    u16 selectedRow;
    u16 scrollOffset;
};

struct UnkStruct_203B118
{
    void (* savedCallback)(void);
    u8 tmSpriteId;
    u8 maxTMsShown;
    u8 numTMs;
    u8 contextMenuWindowId;
    u8 scrollIndicatorArrowPairId;
    u16 currItem;
    const u8 * menuActionIndices;
    u8 numMenuActions;
    s16 seqId;
    u8 filler_14[8];
};

extern struct UnkStruct_203B118 * sTMCaseDynamicResources;
extern struct UnkStruct_203B10C * sTMCaseStaticResources;


extern const struct SpritePalette gMonIconPaletteTable[6];
extern const u16 sSpriteImageSizes[3][4];

extern const u8 gText_TMCase[];
static const u8 sTextColors[][3] = {
    {0, 1, 2},
    {0, 2, 3},
    {0, 3, 6},
    {0, 14, 10}
};

void NullFunc(void) //Hooked in
{
}

void PrintStringTMCaseOnWindow3(void)
{
    u32 distance = 80 - GetStringWidth(1, gText_TMCase, 0);
    AddTextPrinterParameterized3(3, 1, distance / 2, 1, sTextColors[0], 0, gText_TMCase);
}

extern const u8 gText_TMCaseWillBePutAway[];
/*void DrawMoveInfoUIMarkers(void) {
    blit_move_info_icon(4, 19, 0, 0);
    blit_move_info_icon(4, 20, 0, 12);
    blit_move_info_icon(4, 21, 0, 24);
    blit_move_info_icon(4, 22, 0, 36);
    CopyWindowToVram(4, COPYWIN_GFX);
}

void TMCase_MoveCursor_UpdatePrintedDescription(s32 itemIndex)
{
    const u8 * str;
    u16 itemId = BagGetItemIdByPocketPosition(POCKET_TM_CASE, itemIndex);
    if (itemIndex != -2)
    {
        str = ItemId_GetDescription(itemId);
    }
    else
    {
        str = gText_TMCaseWillBePutAway;
    }
    FillWindowPixelBuffer(1, 0);
    AddTextPrinterParameterized_ColorByIndex(1, 2, str, 2, 3, 1, 0, 0, 0);

    // update icons
    TintPartyMonIcons(itemId);
}


static const struct WindowTemplate sWindowTemplates[] = {
    {0x00, 0x0e, 0x01, 0x0f, 0x0a, 0x0f, 0x0081},
    {0x00, 0x0c, 0x0c, 0x12, 0x08, 0x0a, 0x013f},
    {0x01, 0x05, 0x0f, 0x0f, 0x04, 0x0f, 0x01f9},
    {0x00, 0x00, 0x01, 0x0a, 0x02, 0x0f, 0x0235},
    {0x00, 0x01, 0x0d, 0x05, 0x06, 0x0c, 0x0249},
    {0x00, 0x07, 0x0d, 0x05, 0x06, 0x0c, 0x0267},
    {0x01, 0x02, 0x0f, 0x1a, 0x04, 0x0b, 0x0285},
    {0x01, 0x11, 0x09, 0x0c, 0x04, 0x0f, 0x02ed},
    {0x01, 0x01, 0x01, 0x08, 0x03, 0x0d, 0x031d},
    DUMMY_WIN_TEMPLATE
};

extern const u16 gTMCaseMainWindowPalette[];
extern ALIGNED(4) const u16 sPal3Override[];


void InitWindowTemplatesAndPals(void)
{
    u8 i;

    InitWindows(sWindowTemplates);
    DeactivateAllTextPrinters();
    TextWindow_SetUserSelectedFrame(0, 0x5B, 0xE0);
    TextWindow_LoadResourcesStdFrame0(0, 0x64, 0xB0);
    TextWindow_SetStdFrame0_WithPal(0, 0x78, 0xD0);
    LoadPalette(gTMCaseMainWindowPalette, 0xF0, 0x20);
    LoadPalette(gTMCaseMainWindowPalette, 0xA0, 0x20);
    LoadPalette(sPal3Override, 0xF6, 0x04);
    LoadPalette(sPal3Override, 0xD6, 0x04);
    ListMenuLoadStdPalAt(0xc0, 0x01);
    for (i = 0; i < 9; i++)
        FillWindowPixelBuffer(i, 0x00);
    PutWindowTilemap(0);
    PutWindowTilemap(1);
    PutWindowTilemap(3);
    PutWindowTilemap(4);
    PutWindowTilemap(5);
    ScheduleBgCopyTilemapToVram(0);
    DrawPartyMonIcons();
}


#define sMonIconStill data[3]
static void SpriteCb_MonIcon(struct Sprite *sprite)
{
    if (!sprite->sMonIconStill)
        UpdateMonIconFrame(sprite);
}
#undef sMonIconStill*/

/*void LoadMonIconPalettesTinted(void)
{
    u8 i;
    u8 index = IndexOfSpritePaletteTag(POKE_ICON_BASE_PAL_TAG);
    u8 finalIndex = index + 3;
	for (; index < finalIndex; ++index)
	{
		//Make a copy of each mon icon palette in the garbage slots usually loaded after the normal 3
		Memcpy(&gPlttBufferUnfaded2[(index + 3) * 16], &gPlttBufferUnfaded2[index * 16], 0x20);
		Memcpy(&gPlttBufferFaded2[(index + 3) * 16], &gPlttBufferFaded2[index * 16], 0x20);

		//Grayscale that copy
		TintPalette_GrayScale(&gPlttBufferUnfaded2[(index + 3) * 16], 16);
		TintPalette_GrayScale(&gPlttBufferFaded2[(index + 3) * 16], 16);
	}
}

#define MON_ICON_START_X  0x10
#define MON_ICON_START_Y  0x2a
#define MON_ICON_PADDING  0x20

static void DrawPartyMonIcons(void)
{
    u8 i;
    u16 species;
    u8 icon_x = 0;
    u8 icon_y = 0;

    LoadMonIconPalettes();
    LoadMonIconPalettesTinted();

    for (i = 0; i < gPlayerPartyCount; i++)
    {
        //calc icon position (centered)
        if (gPlayerPartyCount == 1)
        {
            icon_x = MON_ICON_START_X + MON_ICON_PADDING;
            icon_y = MON_ICON_START_Y + MON_ICON_PADDING*0.5;
        }
        else if (gPlayerPartyCount == 2)
        {
            if(i < 2) 
                icon_x = MON_ICON_START_X + MON_ICON_PADDING / 2 + MON_ICON_PADDING * i;
            else
                icon_x = MON_ICON_START_X + MON_ICON_PADDING / 2 + MON_ICON_PADDING * (i - 2);
            icon_y = MON_ICON_START_Y + MON_ICON_PADDING*0.5;
        }else if (gPlayerPartyCount == 3)
        {
            if(i < 3)
                icon_x = MON_ICON_START_X + MON_ICON_PADDING * i;
            else
                icon_x = MON_ICON_START_X + MON_ICON_PADDING * (i - 3);
            icon_y = MON_ICON_START_Y + MON_ICON_PADDING*0.5;
        }
        else if (gPlayerPartyCount == 4)
        {
            if(i < 2)
                icon_x = MON_ICON_START_X + MON_ICON_PADDING / 2 + MON_ICON_PADDING * i;
            else
                icon_x = MON_ICON_START_X + MON_ICON_PADDING / 2 + MON_ICON_PADDING * (i - 2);
            icon_y = i < 2 ? MON_ICON_START_Y : MON_ICON_START_Y + MON_ICON_PADDING;
        }
        else
        {
            if(i < 3) 
                icon_x = MON_ICON_START_X + MON_ICON_PADDING * i;
            else
                icon_x = MON_ICON_START_X + MON_ICON_PADDING * (i - 3);
            icon_y = i < 3 ? MON_ICON_START_Y : MON_ICON_START_Y + MON_ICON_PADDING;
        }
        //get species
        species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, 0);

        //create icon sprite
        #ifndef POKEMON_EXPANSION
            u8 spriteId = CreateMonIcon(species, SpriteCb_MonIcon, icon_x, icon_y, 1, GetMonData(&gPlayerParty[0], MON_DATA_PERSONALITY, 0), TRUE);
        #else
            u8 spriteId = CreateMonIcon(species, SpriteCb_MonIcon, icon_x, icon_y, 1, GetMonData(&gPlayerParty[0], MON_DATA_PERSONALITY, 0));
        #endif

        //Set priority, stop movement and save original palette position
        struct Sprite* sprite = &gSprites[spriteId];
        sprite->oam.priority = 0;
        StartSpriteAnim(sprite, 4); //full stop
        sprite->data[0] = i; //Mon Id
        sprite->data[1] = sprite->oam.paletteNum; //save correct palette number to array
    }
}

static void TintPartyMonIcons(u16 tm)
{
    u8 i;
    for (i = 0; i < MAX_SPRITES; ++i)
	{
		struct Sprite* sprite = &gSprites[i];
		if (sprite->oam.paletteNum < 6) //Is mon icon
        {
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL);
            SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(7, 11));
            if (!CanMonLearnTMHM(&gPlayerParty[sprite->data[0]], TMIdFromItemId(tm)))
            {
                sprite->oam.objMode = ST_OAM_OBJ_BLEND;
            }
            else
            {
                sprite->oam.objMode = ST_OAM_OBJ_NORMAL;//gMonIconPaletteIndices[species];
            }
        }
    }   
}
*/

static void CreateGrayscaleMonIconPalettes(void)
{
	u8 index = IndexOfSpritePaletteTag(POKE_ICON_BASE_PAL_TAG);
	u8 finalIndex = index + 3;

	for (; index < finalIndex; ++index)
	{
		//Make a copy of each mon icon palette in the garbage slots usually loaded after the normal 3
		Memcpy(&gPlttBufferUnfaded2[(index + 3) * 16], &gPlttBufferUnfaded2[index * 16], 0x20);
		Memcpy(&gPlttBufferFaded2[(index + 3) * 16], &gPlttBufferFaded2[index * 16], 0x20);

		//Grayscale that copy
		TintPalette_GrayScale(&gPlttBufferUnfaded2[(index + 3) * 16], 16);
		TintPalette_GrayScale(&gPlttBufferFaded2[(index + 3) * 16], 16);
	}
}

void CreateTMCaseSprite(void)
{
	u32 i, counter;
	LoadMonIconPalettes();
	CreateGrayscaleMonIconPalettes(); //For mons that haven't been caught yet

	for (i = 0, counter = 0; i < PARTY_SIZE; ++i)
	{
		struct Pokemon* mon = &gPlayerParty[i];
		u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2, NULL);
		if (species != SPECIES_NONE && species != SPECIES_EGG)
		{
			s16 x = 1 + (32 / 2) + (counter % 3) * 32;
			s16 y = 29 + (32 / 2);
			if (counter >= 3)
				y = 58 + (32 / 2);

			u8 spriteId = CreateMonIcon(species, SpriteCallbackDummy, x, y, 0, GetMonData(mon, MON_DATA_PERSONALITY, NULL), FALSE);
			if (spriteId < MAX_SPRITES)
			{
				struct Sprite* sprite = &gSprites[spriteId];
				sprite->data[0] = i; //Mon Id
				sprite->data[1] = sprite->oam.paletteNum; //Save original palette number
			}

			++counter;
		}
	}
}

void ChangeMonIconPalsInTMCase(u16 itemId)
{
	u32 i;
	for (i = 0; i < MAX_SPRITES; ++i)
	{
		struct Sprite* sprite = &gSprites[i];
		if (sprite->oam.paletteNum < 6) //Is mon icon
		{
			bool8 canLearn = CanMonLearnTMTutor(&gPlayerParty[sprite->data[0]], itemId, 0);
		    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL);
            SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(7, 11));
			if (itemId != 0 && (canLearn == 0 || canLearn == 2)) //Can learn move or already knows
			{
                sprite->oam.objMode = ST_OAM_OBJ_NORMAL;
				sprite->callback = SpriteCB_PokeIcon;
			}
			else
			{
                sprite->oam.objMode = ST_OAM_OBJ_BLEND;
                SetPartyHPBarSprite(sprite, 0); //Stop moving and reload original frame
				sprite->callback(sprite); //Update frame
				sprite->callback = SpriteCallbackDummy; //Stop animating old mon icon
			}
		}
	}
}
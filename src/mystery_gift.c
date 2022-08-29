#include "defines.h"
#include "../include/gba/defines.h"
#include "../include/decompress.h"
#include "../include/event_data.h"
#include "../include/field_weather.h"
#include "../include/mgba.h"
#include "../include/new_menu_helpers.h"
#include "../include/random.h"
#include "../include/pokemon.h"
#include "../include/script_menu.h"
#include "../include/sprite.h"
#include "../include/string_util.h"
#include "../include/task.h"

#include "../include/constants/species.h"
#include "../include/constants/items.h"
#include "../include/constants/abilities.h"
#include "../include/constants/moves.h"
#include "../include/constants/pokemon.h"
#include "../include/constants/region_map_sections.h"

#include "../include/new/build_pokemon.h"
#include "../include/new/catching.h"
#include "../include/new/ram_locs.h"
#include "../include/new/mystery_gift.h"
#include "../include/new/util.h"

bool8 CheckMysteryGiftPassword(void);
void GiveMysteryGiftMon(u8 giftId);

//Strings
extern const u8 gText_MysteryGift_EnteiPassword[];
extern const u8 gText_MysteryGift_RaikouPassword[];
extern const u8 gText_MysteryGift_SuicunePassword[];
extern const u8 gText_MysteryGift_ShinyMagikarpPassword[];
extern const u8 gText_MysteryGift_ShinySteelixPassword[];
extern const u8 gText_MysteryGift_ShinyStarmiePassword[];
extern const u8 gText_MysteryGift_ShinyRaichuAPassword[];
extern const u8 gText_MysteryGift_ShinyVenusaurPassword[];
extern const u8 gText_MysteryGift_ShinyWeezingPassword[];
extern const u8 gText_MysteryGift_ShinyAlakazamPassword[];
extern const u8 gText_MysteryGift_ShinyArcaninePassword[];
extern const u8 gText_MysteryGift_ShinyRhyperiorPassword[];
extern const u8 gText_MysteryGift_ShinyLaprasPassword[];
extern const u8 gText_MysteryGift_ShinyMachampPassword[];
extern const u8 gText_MysteryGift_ShinyGengarPassword[];
extern const u8 gText_MysteryGift_ShinyDragonitePassword[];
extern const u8 gText_MysteryGift_ShadowLugiaPassword[];

const struct NewMysteryGift gMysteryGifts[] = 
{
    {
        .species = SPECIES_ENTEI,
        .item = ITEM_CUSTAP_BERRY,
        .abilityNum = 0,
        .nature = NATURE_ADAMANT,
        .moves = 
        {
            MOVE_FLAREBLITZ,
            MOVE_HOWL,
            MOVE_EXTREMESPEED,
            MOVE_CRUSHCLAW,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            252,
            0,
            0,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_EnteiPassword,
    },
    {
        .species = SPECIES_RAIKOU,
        .item = ITEM_MICLE_BERRY,
        .abilityNum = 0,
        .nature = NATURE_RASH,
        .moves = 
        {
            MOVE_ZAPCANNON,
            MOVE_AURASPHERE,
            MOVE_EXTREMESPEED,
            MOVE_WEATHERBALL,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            0,
            0,
            252,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_RaikouPassword,
    },
    {
        .species = SPECIES_SUICUNE,
        .item = ITEM_ROWAP_BERRY,
        .abilityNum = 0,
        .nature = NATURE_RELAXED,
        .moves = 
        {
            MOVE_SHEERCOLD,
            MOVE_AIRSLASH,
            MOVE_EXTREMESPEED,
            MOVE_AQUARING,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            252,
            0,
            0,
            0,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_SuicunePassword,
    },
    {
        .species = SPECIES_MAGIKARP,
        .item = ITEM_LIFE_ORB,
        .abilityNum = 0,
        .nature = NATURE_JOLLY,
        .moves = 
        {
            MOVE_FLAIL,
            MOVE_HYDROPUMP,
            MOVE_BOUNCE,
            MOVE_SPLASH,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            252,
            0,
            0,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyMagikarpPassword,
    },
    {
        .species = SPECIES_STEELIX,
        .item = ITEM_LEFTOVERS,
        .abilityNum = 0,
        .nature = NATURE_ADAMANT,
        .moves = 
        {
            MOVE_DRAGONDANCE,
            MOVE_HEADSMASH,
            MOVE_IRONHEAD,
            MOVE_THUNDERFANG,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            252,
            128,
            128,
            0,
            4,
            0,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinySteelixPassword,
    },
    {
        .species = SPECIES_STARMIE,
        .item = ITEM_LIFE_ORB,
        .abilityNum = 1,
        .nature = NATURE_TIMID,
        .moves = 
        {
            MOVE_HYDROPUMP,
            MOVE_PSYCHIC,
            MOVE_THUNDERBOLT,
            MOVE_ICEBEAM,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            0,
            0,
            252,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyStarmiePassword,
    },
    {
        .species = SPECIES_RAICHU_A,
        .item = ITEM_CHOICE_SPECS,
        .abilityNum = 0,
        .nature = NATURE_TIMID,
        .moves = 
        {
            MOVE_THUNDERBOLT,
            MOVE_VOLTSWITCH,
            MOVE_PSYCHIC,
            MOVE_SURF,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            0,
            0,
            252,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyRaichuAPassword,
    },
    {
        .species = SPECIES_VENUSAUR,
        .item = ITEM_LEFTOVERS,
        .abilityNum = 0,
        .nature = NATURE_BOLD,
        .moves = 
        {
            MOVE_LEECHSEED,
            MOVE_TOXIC,
            MOVE_SYNTHESIS,
            MOVE_GIGADRAIN,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            252,
            0,
            128,
            0,
            128,
            0,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyVenusaurPassword,
    },
    {
        .species = SPECIES_WEEZING,
        .item = ITEM_LEFTOVERS,
        .abilityNum = 0,
        .nature = NATURE_BOLD,
        .moves = 
        {
            MOVE_PAINSPLIT,
            MOVE_WILLOWISP,
            MOVE_FLAMETHROWER,
            MOVE_SLUDGEBOMB,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            252,
            0,
            128,
            0,
            128,
            0,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyWeezingPassword,
    },
    {
        .species = SPECIES_ALAKAZAM,
        .item = ITEM_FOCUS_SASH,
        .abilityNum = 2,
        .nature = NATURE_TIMID,
        .moves = 
        {
            MOVE_NASTYPLOT,
            MOVE_PSYCHIC,
            MOVE_FOCUSBLAST,
            MOVE_SHADOWBALL,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            0,
            0,
            252,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyAlakazamPassword,
    },
    {
        .species = SPECIES_ARCANINE,
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .abilityNum = 0,
        .nature = NATURE_JOLLY,
        .moves = 
        {
            MOVE_FLAREBLITZ,
            MOVE_WILDCHARGE,
            MOVE_EXTREMESPEED,
            MOVE_MORNINGSUN,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            252,
            0,
            0,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyArcaninePassword,
    },
    {
        .species = SPECIES_RHYPERIOR,
        .item = ITEM_WEAKNESS_POLICY,
        .abilityNum = 1,
        .nature = NATURE_JOLLY,
        .moves = 
        {
            MOVE_ROCKPOLISH,
            MOVE_EARTHQUAKE,
            MOVE_STONEEDGE,
            MOVE_MEGAHORN,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            252,
            0,
            0,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyRhyperiorPassword,
    },
    {
        .species = SPECIES_LAPRAS,
        .item = ITEM_LEFTOVERS,
        .abilityNum = 0,
        .nature = NATURE_MODEST,
        .moves = 
        {
            MOVE_SURF,
            MOVE_ICEBEAM,
            MOVE_THUNDERBOLT,
            MOVE_PSYCHIC,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            252,
            0,
            4,
            252,
            0,
            0,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyLaprasPassword,
    },
    {
        .species = SPECIES_MACHAMP,
        .item = ITEM_FLAME_ORB,
        .abilityNum = 0,
        .nature = NATURE_ADAMANT,
        .moves = 
        {
            MOVE_CLOSECOMBAT,
            MOVE_BULLETPUNCH,
            MOVE_FACADE,
            MOVE_STONEEDGE,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            4,
            252,
            0,
            0,
            0,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyMachampPassword,
    },
    {
        .species = SPECIES_GENGAR,
        .item = ITEM_FOCUS_SASH,
        .abilityNum = 2,
        .nature = NATURE_TIMID,
        .moves = 
        {
            MOVE_NASTYPLOT,
            MOVE_SHADOWBALL,
            MOVE_SLUDGEWAVE,
            MOVE_FOCUSBLAST,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            0,
            0,
            252,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyGengarPassword,
    },
    {
        .species = SPECIES_DRAGONITE,
        .item = ITEM_LIFE_ORB,
        .abilityNum = 2,
        .nature = NATURE_JOLLY,
        .moves = 
        {
            MOVE_DRAGONDANCE,
            MOVE_OUTRAGE,
            MOVE_EARTHQUAKE,
            MOVE_EXTREMESPEED,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            252,
            0,
            0,
            4,
            252,
        },
        .level = 50,
        .isShiny = TRUE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShinyDragonitePassword,
    },
    {
        .species = SPECIES_LUGIA_S,
        .item = ITEM_LIFE_ORB,
        .abilityNum = 2,
        .nature = NATURE_TIMID,
        .moves = 
        {
            MOVE_PSYCHOBOOST,
            MOVE_SHADOWSTORM,
            MOVE_AEROBLAST,
            MOVE_ROOST,
        },
        .ivs =
        {
            31,
            31,
            31,
            31,
            31,
            31,
        },
        .evs = 
        {
            0,
            0,
            0,
            252,
            4,
            252,
        },
        .level = 50,
        .isShiny = FALSE,
        .ballType = BALL_TYPE_CHERISH_BALL,
        .password = gText_MysteryGift_ShadowLugiaPassword,
    },
};

u8 CheckMysteryGiftPassword(void)
{
    u8 i;
    for(i = 0; i < ARRAY_COUNT(gMysteryGifts); i++)
    {
        struct NewMysteryGift gift = gMysteryGifts[i];
        if(StringCompare(gift.password, gStringVar1) == 0)
        {
            if(FlagGet(MYSTERY_GIFT_FLAGS_START + i))
            {
                return 2; //Password was correct but player has already receieved this gift.
            }
            GiveMysteryGiftMon(i);
            return 1; //Password was correct and mon was given to player.
        }
    }
    return 0; //Password was not correct.
}

void GiveMysteryGiftMon(u8 giftId)
{
	u8 sentToPc;
	struct Pokemon mon;
    struct NewMysteryGift gift = gMysteryGifts[giftId];
    u16 species = gift.species;
    u16 item = gift.item;
    u8 abilityNum = gift.abilityNum;
    u8 nature = gift.nature;
    u8 level = gift.level;
    u8 isShiny = gift.isShiny;
    u8 ballType = gift.ballType;
    u8 i;

	CreateMon(&mon, species, level, 32, 0, 0, 0, 0);
	SetMonData(&mon, MON_DATA_HELD_ITEM, &item);

	if (nature >= NUM_NATURES)
		nature = Random() % NUM_NATURES;

    GiveMonNatureAndAbility(&mon, nature, abilityNum, isShiny, FALSE, FALSE);
	if(abilityNum == 2)
		mon.hiddenAbility = TRUE;

    mon.pokeball = ballType;
    
    for (i = 0; i < MAX_MON_MOVES; ++i)
	{
		if (gift.moves[i] < MOVES_COUNT)
			SetMonData(&mon, MON_DATA_MOVE1 + i, &gift.moves[i]);
	}
	//Done manually instead of a switch statement because of stat 3 = speed instead of spatk
    SetMonData(&mon, MON_DATA_HP_IV, &gift.ivs[0]);
    SetMonData(&mon, MON_DATA_ATK_IV, &gift.ivs[1]);
    SetMonData(&mon, MON_DATA_DEF_IV, &gift.ivs[2]);
    SetMonData(&mon, MON_DATA_SPATK_IV, &gift.ivs[3]);
    SetMonData(&mon, MON_DATA_SPDEF_IV, &gift.ivs[4]);
    SetMonData(&mon, MON_DATA_SPEED_IV, &gift.ivs[5]);
    SetMonData(&mon, MON_DATA_HP_EV, &gift.evs[0]);
    SetMonData(&mon, MON_DATA_ATK_EV, &gift.evs[1]);
    SetMonData(&mon, MON_DATA_DEF_EV, &gift.evs[2]);
    SetMonData(&mon, MON_DATA_SPATK_EV, &gift.evs[3]);
    SetMonData(&mon, MON_DATA_SPDEF_EV, &gift.evs[4]);
    SetMonData(&mon, MON_DATA_SPEED_EV, &gift.evs[5]);

	HealMon(&mon);
	CalculateMonStats(&mon);

    Var8008 = 0xFE; //Tell GiveMonToPlayer it's a mystery gift encounter
	sentToPc = GiveMonToPlayer(&mon);

	switch (sentToPc) {
	case 0:
	case 1:
		SetMonPokedexFlags(&mon);
		break;
	}
    
    FlagSet(MYSTERY_GIFT_FLAGS_START + giftId); //Set the gift flag
    Var8004 = gPlayerPartyCount; //For nicknaming
    Var8005 = species;
    Var8006 = isShiny;

}

//showpokepic without cry & with shiny check. I don't recommend copying this, since the x & y values are hardcoded and could be buggy.

#define gMonPaletteTable (*((struct CompressedSpritePalette**) 0x8000130))
#define gMonShinyPaletteTable (*((struct CompressedSpritePalette**) 0x8000134))

struct CompressedSpritePalette * GetSpritePalToUse(bool8 isShiny)
{
    if(isShiny)
        return gMonShinyPaletteTable;
    else
        return gMonPaletteTable;
}

static u8 CreateMonSprite_MysteryGift(u16 species, s16 x, s16 y)
{
	u32 personality = 0xFFFFFFFF;
	u32 otId = T1_READ_32(gSaveBlock2->playerTrainerId);
    bool8 isShiny = Var8006;
    const struct CompressedSpritePalette * spritePal = GetSpritePalToUse(isShiny);
    u16 spriteId = CreateMonPicSprite_HandleDeoxys(species, otId, personality, 1, x, y, 0, spritePal[species].tag);
    LoadCompressedSpritePalette(&spritePal[species]);
    if(spriteId != 0xFFFF)
    {
        gSprites[spriteId].oam.paletteNum = IndexOfSpritePaletteTag(spritePal[species].tag);
    }
    if (spriteId == 0xFFFF)
        return MAX_SPRITES;
    else
        return spriteId;
}

bool8 ScriptMenu_ShowMysteryPokemonPic(u16 species, u8 x, u8 y)
{
    u8 spriteId;
    u8 taskId;
    if (FindTaskIdByFunc(Task_ScriptShowMonPic) != 0xFF)
        return FALSE;
    spriteId = CreateMonSprite_MysteryGift(species, 8 * x + 40, 8 * y + 40);
    taskId = CreateTask(Task_ScriptShowMonPic, 80);
    gTasks[taskId].data[5] = CreateWindowFromRect(x, y, 8, 8);
    gTasks[taskId].data[0] = 0;
    gTasks[taskId].data[1] = species;
    gTasks[taskId].data[2] = spriteId;
    gSprites[spriteId].callback = SpriteCallbackDummy;
    gSprites[spriteId].oam.priority = 0;
    SetStandardWindowBorderStyle(gTasks[taskId].data[5], TRUE);
    ScheduleBgCopyTilemapToVram(0);
    return TRUE;
}

bool8 ShowMysteryGiftMon()
{
    u16 species = Var8005;
    u8 x = 0xA;
    u8 y = 0x3;

    ScriptMenu_ShowMysteryPokemonPic(species, x, y);
    return FALSE;
}
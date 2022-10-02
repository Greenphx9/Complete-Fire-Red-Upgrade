
#include "../include/global.h"
#include "../include/ingame_trades.h"
#include "../include/link.h"
#include "../include/pokemon.h"
#include "../include/string_util.h"
#include "../include/trade.h"
#include "config.h"

#include "../include/new/build_pokemon.h"
#include "../include/new/rom_locs.h"
#include "../include/new/Vanilla_functions_battle.h"

#include "../include/constants/region_map_sections.h"
#include "../include/constants/species.h"
#include "../include/constants/items.h"

extern struct TradeAnimationResources * sTradeData;

extern u8 gText_InGameTrade_Gyliph[];
extern u8 gText_InGameTrade_Reyley[];
extern u8 gText_InGameTrade_Zynx[];
extern u8 gText_InGameTrade_Dontae[];
extern u8 gText_InGameTrade_Blaster[];
extern u8 gText_InGameTrade_Saige[];
extern u8 gText_InGameTrade_Chding[];
extern u8 gText_InGameTrade_Elyssa[];
extern u8 gText_InGameTrade_Muscle[];
extern u8 gText_InGameTrade_Turner[];
extern u8 gText_InGameTrade_Rocky[];
extern u8 gText_InGameTrade_Haden[];
extern u8 gText_InGameTrade_Pierce[];
extern u8 gText_InGameTrade_Clifton[];
extern u8 gText_InGameTrade_Talo[];
extern u8 gText_InGameTrade_Norma[];
extern u8 gText_InGameTrade_Toxic[];
extern u8 gText_InGameTrade_Garett[];
extern u8 gText_InGameTrade_Gaspar[];
extern u8 gText_InGameTrade_Mindy[];
extern u8 gText_InGameTrade_Weave[];
extern u8 gText_InGameTrade_Damien[];

static const struct InGameTrade sInGameTrades[] = {
    [INGAME_TRADE_SIGILYPH] = 
    {
        .nickname = gText_InGameTrade_Gyliph,
        .species = SPECIES_SIGILYPH,
        .ivs = {29, 13, 30, 31, 30, 26},
        .abilityNum = 0,
        .otId = 1985,
        .conditions = {5, 5, 5, 30, 5},
        .personality = 0x00009cae,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Reyley,
        .otGender = MALE,
        .nature = NATURE_TIMID,
        .requestedSpecies = SPECIES_KADABRA
    }, 
    [INGAME_TRADE_JYNX] = 
    {
        .nickname = gText_InGameTrade_Zynx,
        .species = SPECIES_JYNX,
        .ivs = {18, 17, 18, 22, 25, 21},
        .abilityNum = 0,
        .otId = 36728,
        .conditions = {5, 30, 5, 5, 5},
        .personality = 0x498a2e1d,
        .heldItem = ITEM_FAB_MAIL,
        .mailNum = 0,
        .otName = gText_InGameTrade_Dontae,
        .otGender = MALE,
        .nature = NATURE_MILD,
        .requestedSpecies = SPECIES_POLIWHIRL
    }, 
    [INGAME_TRADE_KARRABLAST] = 
    {
        .nickname = gText_InGameTrade_Blaster,
        .species = SPECIES_KARRABLAST,
        .ivs = {15, 30, 27, 30, 12, 31},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x4c970b89,
        .heldItem = ITEM_STEEL_GEM,
        .mailNum = 255,
        .otName = gText_InGameTrade_Saige,
        .otGender = FEMALE,
        .nature = NATURE_HARDY,
        .requestedSpecies = SPECIES_SHELMET
    }, 
    [INGAME_TRADE_FARFETCHD] = 
    {
        .nickname = gText_InGameTrade_Chding,
        .species = SPECIES_FARFETCHD_G,
        .ivs = {20, 25, 21, 24, 15, 20},
        .abilityNum = 0,
        .otId = 8810,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x151943d7,
        .heldItem = ITEM_LEEK,
        .mailNum = 255,
        .otName = gText_InGameTrade_Elyssa,
        .otGender = MALE,
        .nature = NATURE_ADAMANT,
        .requestedSpecies = SPECIES_SPEAROW
    }, 
    [INGAME_TRADE_HERACROSS] = 
    {
        .nickname = gText_InGameTrade_Muscle,
        .species = SPECIES_HERACROSS,
        .ivs = {22, 29, 31, 5, 29, 30},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x00eeca15,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Turner,
        .otGender = MALE,
        .nature = NATURE_ADAMANT,
        .requestedSpecies = SPECIES_PINSIR
    }, 
    [INGAME_TRADE_BOLDORE] = 
    {
        .nickname = gText_InGameTrade_Rocky,
        .species = SPECIES_BOLDORE,
        .ivs = {30, 27, 14, 31, 14, 11},
        .abilityNum = 0,
        .otId = 1239,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x451308ab,
        .heldItem = ITEM_HARD_STONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Haden,
        .otGender = MALE,
        .nature = NATURE_IMPISH,
        .requestedSpecies = SPECIES_EMOLGA
    }, 
    [INGAME_TRADE_BISHARP] = 
    {
        .nickname = gText_InGameTrade_Pierce,
        .species = SPECIES_BISHARP,
        .ivs = {19, 31, 19, 31, 21, 23},
        .abilityNum = 1,
        .otId = 50298,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x06341016,
        .heldItem = ITEM_BLACK_GLASSES,
        .mailNum = 255,
        .otName = gText_InGameTrade_Clifton,
        .otGender = MALE,
        .nature = NATURE_TIMID,
        .requestedSpecies = SPECIES_ORANGURU
    }, 
    [INGAME_TRADE_TALONFLAME] = 
    {
        .nickname = gText_InGameTrade_Talo,
        .species = SPECIES_TALONFLAME,
        .ivs = {8, 14, 9, 31, 31, 30},
        .abilityNum = 0,
        .otId = 60042,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x5c77ecfa,
        .heldItem = ITEM_STARDUST,
        .mailNum = 255,
        .otName = gText_InGameTrade_Norma,
        .otGender = FEMALE,
        .nature = NATURE_JOLLY,
        .requestedSpecies = SPECIES_GRAVELER
    },
    [INGAME_TRADE_TOXAPEX] = 
    {
        .nickname = gText_InGameTrade_Toxic,
        .species = SPECIES_TOXAPEX,
        .ivs = {29, 17, 31, 8, 21, 19},
        .abilityNum = 0,
        .otId = 9853,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x482cac89,
        .heldItem = ITEM_BLACK_SLUDGE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Garett,
        .otGender = MALE,
        .nature = NATURE_BOLD,
        .requestedSpecies = SPECIES_RAPIDASH
    },
    [INGAME_TRADE_HAUNTER] = 
    {
        .nickname = gText_InGameTrade_Gaspar,
        .species = SPECIES_HAUNTER,
        .ivs = {24, 0, 17, 0, 0, 14},
        .abilityNum = 0,
        .otId = 19248,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x482cac89,
        .heldItem = ITEM_EVERSTONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Mindy,
        .otGender = FEMALE,
        .nature = NATURE_IMPISH,
        .requestedSpecies = SPECIES_VOLTORB
    },
    [INGAME_TRADE_WEAVILE] = 
    {
        .nickname = gText_InGameTrade_Weave,
        .species = SPECIES_WEAVILE,
        .ivs = {31, 31, 31, 31, 9, 31},
        .abilityNum = 0,
        .otId = 17244,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x482cac89,
        .heldItem = ITEM_LIFE_ORB,
        .mailNum = 255,
        .otName = gText_InGameTrade_Damien,
        .otGender = MALE,
        .nature = NATURE_JOLLY,
        .requestedSpecies = SPECIES_SNEASLER
    }
};

extern const u16 sInGameTradeMailMessages[][10];

static void GetInGameTradeMail(struct MailStructDaycare * mail, const struct InGameTrade * inGameTrade)
{
    int i;
    for (i = 0; i < MAIL_WORDS_COUNT; i++)
        mail->words[i] = sInGameTradeMailMessages[inGameTrade->mailNum][i];
    StringCopy(mail->playerName, inGameTrade->otName);
    mail->trainerId[0] = inGameTrade->otId >> 24;
    mail->trainerId[1] = inGameTrade->otId >> 16;
    mail->trainerId[2] = inGameTrade->otId >> 8;
    mail->trainerId[3] = inGameTrade->otId;
    mail->species = inGameTrade->species;
    mail->itemId = inGameTrade->heldItem;
}

void TradeBufferOTnameAndNicknames(void)
{
    u8 nickname[20];
    u8 mpId;
    const struct InGameTrade * inGameTrade;
    if (sTradeData->isLinkTrade)
    {
        mpId = GetMultiplayerId();
        StringCopy(gStringVar1, gLinkPlayers[mpId ^ 1].name);
        GetMonData(&gEnemyParty[gSelectedTradeMonPositions[1] % 6], MON_DATA_NICKNAME, nickname);
        StringCopy_Nickname(gStringVar3, nickname);
        GetMonData(&gPlayerParty[gSelectedTradeMonPositions[0]], MON_DATA_NICKNAME, nickname);
        StringCopy_Nickname(gStringVar2, nickname);
    }
    else
    {
        inGameTrade = &sInGameTrades[Var8004];
        StringCopy(gStringVar1, inGameTrade->otName);
        StringCopy_Nickname(gStringVar3, inGameTrade->nickname);
        GetMonData(&gPlayerParty[Var8005], MON_DATA_NICKNAME, nickname);
        StringCopy_Nickname(gStringVar2, nickname);
    }
}

u16 GetInGameTradeSpeciesInfo(void)
{
    // Populates gStringVar1 with the name of the requested species and
    // gStringVar2 with the name of the offered species.
    // Returns the requested species.
    const struct InGameTrade * inGameTrade = &sInGameTrades[Var8004];
    StringCopy(gStringVar1, gSpeciesNames[inGameTrade->requestedSpecies]);
    StringCopy(gStringVar2, gSpeciesNames[inGameTrade->species]);
    return inGameTrade->requestedSpecies;
}

void BufferInGameTradeMonName(void)
{
    // Populates gStringVar1 with the nickname of the sent Pokemon and
    // gStringVar2 with the name of the offered species.
    u8 nickname[30];
    const struct InGameTrade * inGameTrade = &sInGameTrades[Var8004];
    GetMonData(&gPlayerParty[Var8005], MON_DATA_NICKNAME, nickname);
    StringCopy_Nickname(gStringVar1, nickname);
    StringCopy(gStringVar2, gSpeciesNames[inGameTrade->species]);
}

void CreateInGameTradePokemonInternal(u8 playerSlot, u8 inGameTradeIdx)
{
    const struct InGameTrade * inGameTrade = &sInGameTrades[inGameTradeIdx];
    u8 level = (inGameTradeIdx == INGAME_TRADE_HAUNTER) ? 27 : GetMonData(&gPlayerParty[playerSlot], MON_DATA_LEVEL, 0);
    struct MailStructDaycare mail;
    u8 metLocation = METLOC_IN_GAME_TRADE;
    struct Pokemon * tradeMon = &gEnemyParty[0];
    u8 mailNum;
    u8 hauntHP = 67;
    CreateMon(tradeMon, inGameTrade->species, level, 32, TRUE, inGameTrade->personality, TRUE, inGameTrade->otId);
    SetMonData(tradeMon, MON_DATA_HP_IV, &inGameTrade->ivs[0]);
    SetMonData(tradeMon, MON_DATA_ATK_IV, &inGameTrade->ivs[1]);
    SetMonData(tradeMon, MON_DATA_DEF_IV, &inGameTrade->ivs[2]);
    SetMonData(tradeMon, MON_DATA_SPEED_IV, &inGameTrade->ivs[3]);
    SetMonData(tradeMon, MON_DATA_SPATK_IV, &inGameTrade->ivs[4]);
    SetMonData(tradeMon, MON_DATA_SPDEF_IV, &inGameTrade->ivs[5]);
    SetMonData(tradeMon, MON_DATA_NICKNAME, inGameTrade->nickname);
    SetMonData(tradeMon, MON_DATA_OT_NAME, inGameTrade->otName);
    SetMonData(tradeMon, MON_DATA_OT_GENDER, &inGameTrade->otGender);
    SetMonData(tradeMon, MON_DATA_BEAUTY, &inGameTrade->conditions[1]);
    SetMonData(tradeMon, MON_DATA_CUTE, &inGameTrade->conditions[2]);
    SetMonData(tradeMon, MON_DATA_COOL, &inGameTrade->conditions[0]);
    SetMonData(tradeMon, MON_DATA_SMART, &inGameTrade->conditions[3]);
    SetMonData(tradeMon, MON_DATA_TOUGH, &inGameTrade->conditions[4]);
    SetMonData(tradeMon, MON_DATA_MET_LOCATION, &metLocation);
    if(inGameTradeIdx == INGAME_TRADE_HAUNTER)
        SetMonData(tradeMon, MON_DATA_HP, &hauntHP);
    GiveMonNatureAndAbility(tradeMon, inGameTrade->nature, inGameTrade->abilityNum, IsMonShiny(tradeMon), TRUE, TRUE);
    mailNum = 0;
    if (inGameTrade->heldItem != ITEM_NONE)
    {
        if (ItemIsMail(inGameTrade->heldItem))
        {
            GetInGameTradeMail(&mail, inGameTrade);
            gLinkPartnerMail[0] = mail;
            SetMonData(tradeMon, MON_DATA_MAIL, &mailNum);
            SetMonData(tradeMon, MON_DATA_HELD_ITEM, &inGameTrade->heldItem);
        }
        else
        {
            SetMonData(tradeMon, MON_DATA_HELD_ITEM, &inGameTrade->heldItem);
        }
    }
    CalculateMonStats(&gEnemyParty[0]);
}
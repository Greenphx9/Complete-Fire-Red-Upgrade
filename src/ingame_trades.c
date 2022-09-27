
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

extern u8 gText_InGameTrade_Mimien[];
extern u8 gText_InGameTrade_Reyley[];
extern u8 gText_InGameTrade_Zynx[];
extern u8 gText_InGameTrade_Dontae[];
extern u8 gText_InGameTrade_MsNido[];
extern u8 gText_InGameTrade_Saige[];
extern u8 gText_InGameTrade_Chding[];
extern u8 gText_InGameTrade_Elyssa[];
extern u8 gText_InGameTrade_Nina[];
extern u8 gText_InGameTrade_Turner[];
extern u8 gText_InGameTrade_Marc[];
extern u8 gText_InGameTrade_Haden[];
extern u8 gText_InGameTrade_Esphere[];
extern u8 gText_InGameTrade_Clifton[];
extern u8 gText_InGameTrade_Tangeny[];
extern u8 gText_InGameTrade_Norma[];
extern u8 gText_InGameTrade_Seelor[];
extern u8 gText_InGameTrade_Garett[];

static const struct InGameTrade sInGameTrades[] = {
    [INGAME_TRADE_MR_MIME] = 
    {
        .nickname = gText_InGameTrade_Mimien,
        .species = SPECIES_MR_MIME,
        .ivs = {20, 15, 17, 24, 23, 22},
        .abilityNum = 0,
        .otId = 1985,
        .conditions = {5, 5, 5, 30, 5},
        .personality = 0x00009cae,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Reyley,
        .otGender = MALE,
        .nature = NATURE_TIMID,
        .requestedSpecies = SPECIES_ABRA
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
    [INGAME_TRADE_NIDORAN] = 
    {
        .nickname = gText_InGameTrade_MsNido,
        .species = SPECIES_NIDORAN_F,
        .ivs = {22, 18, 25, 19, 15, 22},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x4c970b89,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
        .otName = gText_InGameTrade_Saige,
        .otGender = FEMALE,
        .nature = NATURE_BOLD,
        .requestedSpecies = SPECIES_NIDORAN_M
    }, 
    [INGAME_TRADE_FARFETCHD] = 
    {
        .nickname = gText_InGameTrade_Chding,
        .species = SPECIES_FARFETCHD,
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
    [INGAME_TRADE_NIDORINOA] = 
    {
        .nickname = gText_InGameTrade_Nina,
        .species = SPECIES_NIDORINA,
        .ivs = {22, 25, 18, 19, 22, 15},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x00eeca15,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Turner,
        .otGender = MALE,
        .nature = NATURE_LONELY,
        .requestedSpecies = SPECIES_NIDORINO
    }, 
    [INGAME_TRADE_LICKITUNG] = 
    {
        .nickname = gText_InGameTrade_Marc,
        .species = SPECIES_LICKITUNG,
        .ivs = {24, 19, 21, 15, 23, 21},
        .abilityNum = 0,
        .otId = 1239,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x451308ab,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Haden,
        .otGender = MALE,
        .nature = NATURE_BOLD,
        .requestedSpecies = SPECIES_GOLDUCK
    }, 
    [INGAME_TRADE_ELECTRODE] = 
    {
        .nickname = gText_InGameTrade_Esphere,
        .species = SPECIES_ELECTRODE,
        .ivs = {19, 16, 18, 25, 25, 19},
        .abilityNum = 1,
        .otId = 50298,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x06341016,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Clifton,
        .otGender = MALE,
        .nature = NATURE_HASTY,
        .requestedSpecies = SPECIES_RAICHU
    }, 
    [INGAME_TRADE_TANGELA] = 
    {
        .nickname = gText_InGameTrade_Tangeny,
        .species = SPECIES_TANGELA,
        .ivs = {22, 17, 25, 16, 23, 20},
        .abilityNum = 0,
        .otId = 60042,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x5c77ecfa,
        .heldItem = ITEM_STARDUST,
        .mailNum = 255,
        .otName = gText_InGameTrade_Norma,
        .otGender = FEMALE,
        .nature = NATURE_HASTY,
        .requestedSpecies = SPECIES_VENONAT
    },
    [INGAME_TRADE_SEEL] = 
    {
        .nickname = gText_InGameTrade_Seelor,
        .species = SPECIES_SEEL,
        .ivs = {24, 15, 22, 16, 23, 22},
        .abilityNum = 0,
        .otId = 9853,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x482cac89,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = gText_InGameTrade_Garett,
        .otGender = MALE,
        .nature = NATURE_BOLD,
        .requestedSpecies = SPECIES_PONYTA
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
    u8 level = GetMonData(&gPlayerParty[playerSlot], MON_DATA_LEVEL, 0);
    struct MailStructDaycare mail;
    u8 metLocation = METLOC_IN_GAME_TRADE;
    struct Pokemon * tradeMon = &gEnemyParty[0];
    u8 mailNum;
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
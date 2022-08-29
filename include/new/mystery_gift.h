#pragma once

#include "../global.h"
#include "../../src/defines.h"

struct NewMysteryGift 
{
    u16 species;
    u16 item;
    u8 abilityNum;
    u8 nature;
    u16 moves[4];
    u8 ivs[6];
    u8 evs[6];
    u8 level;
    u8 isShiny : 1;
    u8 ballType;
    const u8* password;
};

bool8 CheckMysteryGiftPassword(void);
void GiveMysteryGiftMon(u8 giftId);
#pragma once

struct InGameTrade {
    /*0x00*/ u8* nickname;
    /*0x0C*/ u16 species;
    /*0x0E*/ u8 ivs[NUM_STATS];
    /*0x14*/ u16 abilityNum;
    /*0x18*/ u32 otId;
    /*0x1C*/ u8 conditions[5];
    /*0x24*/ u32 personality;
    /*0x28*/ u16 heldItem;
    /*0x2A*/ u8 mailNum;
    /*0x2B*/ u8* otName;
    /*0x36*/ u8 otGender;
    /*0x37*/ u8 nature; //was sheen
    /*0x38*/ u16 requestedSpecies;
};

struct TradeAnimationResources {
    /*0x00*/ struct Pokemon mon;
    /*0x64*/ u32 timer;
    /*0x68*/ u32 monPersonalities[2];
    /*0x70*/ u8 filler_70[2];
    /*0x72*/ u8 tradeStatus1;
    /*0x73*/ u8 tradeStatus2;
    /*0x74*/ u16 linkData[10];
    /*0x88*/ u8 linkTimeoutCheck1;
    /*0x89*/ u8 linkTimeoutCheck2;
    /*0x8A*/ u16 linkTimeoutTimer;
    /*0x8C*/ u16 unk_8C;
    /*0x8E*/ u8 pokePicSpriteIdxs[2];
    /*0x90*/ u8 tradeGlow1SpriteId;
    /*0x91*/ u8 gbaScreenSpriteId;
    /*0x92*/ u8 linkCableEndSpriteId;
    /*0x93*/ u8 scheduleLinkTransfer;
    /*0x94*/ u16 state;
    /*0x96*/ u8 filler_96[0xD2 - 0x96];
    /*0xD2*/ u8 pokeballSpriteId;
    /*0xD3*/ u8 pokeballSpriteId2;
    /*0xD4*/ u16 bg2texX;
    /*0xD6*/ u16 bg2texY;
    /*0xD8*/ u16 unk_D8;
    /*0xDA*/ u16 unk_DA;
    /*0xDC*/ u16 bg2srcX;
    /*0xDE*/ u16 bg2srcY;
    /*0xE0*/ s16 bg1vofs;
    /*0xE2*/ s16 bg1hofs;
    /*0xE4*/ s16 bg2vofs;
    /*0xE6*/ s16 bg2hofs;
    /*0xE8*/ u16 sXY;
    /*0xEA*/ u16 bg2Zoom;
    /*0xEC*/ u16 bg2alpha;
    /*0xEE*/ bool8 isLinkTrade;
    /*0xF0*/ u16 tradeSpecies[2];
    /*0xF4*/ u16 cachedMapMusic;
    /*0xF6*/ u8 unk_F6;
    /*0xF8*/ u16 monSpecies[2];
    /*0xFC*/ u8 linkPartnerName[7];
    /*0x103*/ u8 filler_103[1];
    /*0x104*/ u8 textColor[3];
    /*0x107*/ u8 filler_107[1];
    /*0x108*/ bool8 isCableTrade;
    /*0x109*/ u8 win0left;
    /*0x10A*/ u8 win0top;
    /*0x10B*/ u8 win0right;
    /*0x10C*/ u8 win0bottom;
};

#define MAIL_WORDS_COUNT 9

bool8 __attribute__((long_call)) ItemIsMail(u16 itemId);
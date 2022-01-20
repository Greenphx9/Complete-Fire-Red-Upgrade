#include "../defines.h"
#include "../../include/data2.h"
#include "../../include/sprite.h"
#include "../../include/constants/trainers.h"

/*
back_pic_tables.c
	Set up tables to switch the player's back sprite

tables to edit:
	gTrainerBackPicPaletteTable
	gTrainerBackAnimsPtrTable
	gTrainerBackPicCoords
	sTrainerBackPicTable_[backsprite]
	gSpriteTemplateTable_TrainerBackSprites
*/

#define gTrainerBackPicPalette_Red (const u8*) 0x8E76EBC
#define gTrainerBackPicPalette_Leaf (const u8*) 0x8E76EE4
//#define gTrainerPalette_Brendan (const u8*) 0x8E550A4
//#define gTrainerPalette_May (const u8*) 0x8E553CC
#define gTrainerPalette_PokeDude (const u8*) 0x8E76F0C
#define gTrainerPalette_OldMan (const u8*) 0x8E76F34

#define PAL_DEFINE(name) extern const u8 gTrainerBackPic_##name##Pal[];
#define PAL_ENTRY(NAME, name) [TRAINER_BACK_PIC_##NAME] = {gTrainerBackPic_##name##Pal, TRAINER_BACK_PIC_##NAME},

PAL_DEFINE(Brendan);
PAL_DEFINE(May);
PAL_DEFINE(Marlon);
PAL_DEFINE(PokeKid);
PAL_DEFINE(Rival);
PAL_DEFINE(Jax);
PAL_DEFINE(RedNew);
PAL_DEFINE(Catherine);
PAL_DEFINE(Ginger);
PAL_DEFINE(Abimbola);
PAL_DEFINE(Tessy);
PAL_DEFINE(Alford);
PAL_DEFINE(Tessy);
PAL_DEFINE(Young_Trainer);
PAL_DEFINE(Lyra);
PAL_DEFINE(FemaleTrainer);
PAL_DEFINE(Ash);
PAL_DEFINE(Young_TrainerFemale);
PAL_DEFINE(Juniper);
PAL_DEFINE(Hilbert);
PAL_DEFINE(Nate);
PAL_DEFINE(Cynthia);
PAL_DEFINE(Laphicet);
PAL_DEFINE(Anabel);
PAL_DEFINE(Keith);
PAL_DEFINE(Wes);
PAL_DEFINE(Steven);
PAL_DEFINE(Greenphx);
PAL_DEFINE(Gary);
PAL_DEFINE(Brock);
PAL_DEFINE(Misty);
PAL_DEFINE(Cheryl);
PAL_DEFINE(Buck);
PAL_DEFINE(Marley);
PAL_DEFINE(Riley);
PAL_DEFINE(Chili);
PAL_DEFINE(Cress);
PAL_DEFINE(Cilan);
PAL_DEFINE(Adrian);

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] =
{
	[TRAINER_BACK_PIC_RED] =		{gTrainerBackPicPalette_Red, 	TRAINER_BACK_PIC_RED},
	[TRAINER_BACK_PIC_LEAF] =		{gTrainerBackPicPalette_Leaf, 	TRAINER_BACK_PIC_LEAF},
	PAL_ENTRY(BRENDAN, Brendan)
	PAL_ENTRY(MAY, May)
	[TRAINER_BACK_PIC_POKE_DUDE] =	{gTrainerPalette_PokeDude, 		TRAINER_BACK_PIC_POKE_DUDE},
	[TRAINER_BACK_PIC_OLD_MAN] =	{gTrainerPalette_OldMan, 		TRAINER_BACK_PIC_OLD_MAN},
	PAL_ENTRY(HUGH, Young_Trainer)
	PAL_ENTRY(LYRA, Lyra)
	PAL_ENTRY(FEMALETRAINER, FemaleTrainer)
	PAL_ENTRY(ASH, Ash)
	PAL_ENTRY(MIRA, Young_TrainerFemale)
	PAL_ENTRY(JUNIPER, Juniper)
	PAL_ENTRY(HILBERT, Hilbert)
	PAL_ENTRY(NATE, Nate)
	PAL_ENTRY(CYNTHIA, Cynthia)
	PAL_ENTRY(LAPHICET, Laphicet)
	PAL_ENTRY(ANABEL, Anabel)
	PAL_ENTRY(KEITH, Keith)
	PAL_ENTRY(WES, Wes)
	PAL_ENTRY(STEVEN, Steven)
	PAL_ENTRY(GREENPHX, Greenphx)
	PAL_ENTRY(GARY, Gary)
	PAL_ENTRY(BROCK, Brock)
	PAL_ENTRY(MISTY, Misty)
	PAL_ENTRY(CHERYL, Cheryl)
	PAL_ENTRY(BUCK, Buck)
	PAL_ENTRY(MARLEY, Marley)
	PAL_ENTRY(RILEY, Riley)
	PAL_ENTRY(CHILI, Chili)
	PAL_ENTRY(CRESS, Cress)
	PAL_ENTRY(CILAN, Cilan)
	PAL_ENTRY(ADRIAN, Adrian)
};

#define gTrainerBackAnims_Red (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Leaf (const union AnimCmd* const*) 0x8239F4C
#define gTrainerBackAnims_Brendan (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_May (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_PokeDude (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_OldMan (const union AnimCmd* const*) 0x8239F5C
#define gTrainerBackAnims_PokeKid (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Rival (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Jax (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_RedNew (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_EthanLyra (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_LucasDawn (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_PlayerChampion (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Catherine (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Ginger (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Abimbola (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Mahina (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Alford (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Tessy (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Young_Trainer (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Lyra (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_FemaleTrainer (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Ash (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Young_TrainerFemale (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Juniper (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Hilbert (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Nate (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Cynthia (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Laphicet (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Anabel (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Keith (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Wes (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Steven (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Greenphx (const union AnimCmd* const*) 0x8239F54
#define gTrainerBackAnims_Gary (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Brock (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Misty (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Cheryl (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Buck (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Marley (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Riley (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Chili (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Cress (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Cilan (const union AnimCmd* const*) 0x8239F44
#define gTrainerBackAnims_Adrian (const union AnimCmd* const*) 0x8239F44

static const union AnimCmd sAnimCmd_Marlon[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_END
};

const union AnimCmd *const gTrainerBackAnims_Marlon[] =
{
	(void*) 0x82347E8, //sAnim_GeneralFrame0
	sAnimCmd_Marlon,
};

const union AnimCmd* const* const gTrainerBackAnimsPtrTable[] =
{
	[TRAINER_BACK_PIC_RED] = 			gTrainerBackAnims_Red,
	[TRAINER_BACK_PIC_LEAF] = 			gTrainerBackAnims_Leaf,
	[TRAINER_BACK_PIC_BRENDAN] = 		gTrainerBackAnims_Brendan,
	[TRAINER_BACK_PIC_MAY] = 			gTrainerBackAnims_May,
	[TRAINER_BACK_PIC_POKE_DUDE] = 		gTrainerBackAnims_PokeDude,
	[TRAINER_BACK_PIC_OLD_MAN] = 		gTrainerBackAnims_OldMan,
	[TRAINER_BACK_PIC_HUGH] = gTrainerBackAnims_Young_Trainer,
	[TRAINER_BACK_PIC_LYRA] = 			gTrainerBackAnims_Lyra,
	[TRAINER_BACK_PIC_FEMALETRAINER] =  gTrainerBackAnims_FemaleTrainer,
	[TRAINER_BACK_PIC_ASH] = 			gTrainerBackAnims_Ash,
	[TRAINER_BACK_PIC_MIRA] = 			gTrainerBackAnims_Young_TrainerFemale,
	[TRAINER_BACK_PIC_JUNIPER] = 		gTrainerBackAnims_Juniper,
	[TRAINER_BACK_PIC_HILBERT] = 		gTrainerBackAnims_Hilbert,
	[TRAINER_BACK_PIC_NATE] =			gTrainerBackAnims_Nate,
	[TRAINER_BACK_PIC_CYNTHIA] = 		gTrainerBackAnims_Cynthia,
	[TRAINER_BACK_PIC_LAPHICET] = 		gTrainerBackAnims_Laphicet,
	[TRAINER_BACK_PIC_ANABEL] = 		gTrainerBackAnims_Anabel,
	[TRAINER_BACK_PIC_KEITH] = 		    gTrainerBackAnims_Keith,
	[TRAINER_BACK_PIC_WES] = 			gTrainerBackAnims_Wes,
	[TRAINER_BACK_PIC_STEVEN] = 		gTrainerBackAnims_Steven,
	[TRAINER_BACK_PIC_GREENPHX] = 		gTrainerBackAnims_Greenphx,
	[TRAINER_BACK_PIC_GARY] = 			gTrainerBackAnims_Gary,
	[TRAINER_BACK_PIC_BROCK] = 			gTrainerBackAnims_Brock,
	[TRAINER_BACK_PIC_MISTY] = 			gTrainerBackAnims_Misty,
	[TRAINER_BACK_PIC_CHERYL] = 		gTrainerBackAnims_Cheryl,
	[TRAINER_BACK_PIC_BUCK] =			gTrainerBackAnims_Buck,
	[TRAINER_BACK_PIC_MARLEY] =			gTrainerBackAnims_Marley,
	[TRAINER_BACK_PIC_RILEY] =			gTrainerBackAnims_Riley,
	[TRAINER_BACK_PIC_CHILI] =			gTrainerBackAnims_Chili,
	[TRAINER_BACK_PIC_CRESS] =			gTrainerBackAnims_Cress,
	[TRAINER_BACK_PIC_CILAN] =			gTrainerBackAnims_Cilan,
	[TRAINER_BACK_PIC_ADRIAN] =			gTrainerBackAnims_Adrian,

#ifdef UNBOUND
	[TRAINER_BACK_PIC_MARLON] = gTrainerBackAnims_Marlon,
	[TRAINER_BACK_PIC_MARLON_ARM] = gTrainerBackAnims_Marlon,
	[TRAINER_BACK_PIC_MARLON_PLAYER_M] = gTrainerBackAnims_Marlon,
	[TRAINER_BACK_PIC_MARLON_PLAYER_F] = gTrainerBackAnims_Marlon,
	[TRAINER_BACK_PIC_POKE_KID] = gTrainerBackAnims_PokeKid,
	[TRAINER_BACK_PIC_RIVAL] = gTrainerBackAnims_Rival,
	[TRAINER_BACK_PIC_JAX] = gTrainerBackAnims_Jax,
	[TRAINER_BACK_PIC_RED_NEW] = gTrainerBackAnims_RedNew,
	[TRAINER_BACK_PIC_RED_PLAYER] = gTrainerBackAnims_RedNew,
	[TRAINER_BACK_PIC_LEAF_PLAYER] = gTrainerBackAnims_RedNew,
	[TRAINER_BACK_PIC_ETHAN_PLAYER] = gTrainerBackAnims_EthanLyra,
	[TRAINER_BACK_PIC_LYRA_PLAYER] = gTrainerBackAnims_EthanLyra,
	[TRAINER_BACK_PIC_LUCAS_PLAYER] = gTrainerBackAnims_LucasDawn,
	[TRAINER_BACK_PIC_DAWN_PLAYER] = gTrainerBackAnims_LucasDawn,
	[TRAINER_BACK_PIC_PLAYER_CHAMPION_M] = gTrainerBackAnims_PlayerChampion,
	[TRAINER_BACK_PIC_PLAYER_CHAMPION_F] = gTrainerBackAnims_PlayerChampion,
	[TRAINER_BACK_PIC_CATHERINE] = gTrainerBackAnims_Catherine,
	[TRAINER_BACK_PIC_GINGER] = gTrainerBackAnims_Ginger,
	[TRAINER_BACK_PIC_ABIMBOLA] = gTrainerBackAnims_Abimbola,
	[TRAINER_BACK_PIC_MAHINA] = gTrainerBackAnims_Mahina,
	[TRAINER_BACK_PIC_ALFORD] = gTrainerBackAnims_Alford,
	[TRAINER_BACK_PIC_TESSY] =	gTrainerBackAnims_Tessy,
#endif
};

const struct MonCoords gTrainerBackPicCoords[] =
{
	[TRAINER_BACK_PIC_RED] = 		{.coords = 8, .y_offset = 5},
	[TRAINER_BACK_PIC_LEAF] = 		{.coords = 8, .y_offset = 5},
	[TRAINER_BACK_PIC_BRENDAN] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_MAY] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_POKE_DUDE] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_OLD_MAN] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_HUGH] = {.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_LYRA] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_FEMALETRAINER] = {.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_ASH] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_MIRA] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_JUNIPER] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_HILBERT] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_NATE] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_CYNTHIA] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_LAPHICET] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_ANABEL] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_KEITH] =		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_WES] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_STEVEN] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_GREENPHX] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_GARY] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_BROCK] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_MISTY] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_CHERYL] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_BUCK] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_MARLEY] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_RILEY] =	 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_CHILI] =	 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_CRESS] =	 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_CILAN] =	 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_ADRIAN] =		{.coords = 8, .y_offset = 4},

#ifdef UNBOUND
	[TRAINER_BACK_PIC_MARLON] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_POKE_KID] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_RIVAL] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_JAX] = 		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_RED_NEW] =	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_CATHERINE] = 	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_GINGER] =		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_ABIMBOLA] =	{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_MAHINA] =		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_ALFORD] =		{.coords = 8, .y_offset = 4},
	[TRAINER_BACK_PIC_TESSY] =		{.coords = 8, .y_offset = 4},
#endif
};

#define gOamData_TrainerBacksprite (void*) 0x824F018
#define gAffineAnims_TrainerBacksprite (void*) 0x82348C8
#define gSpriteCB_TrainerBacksprite (void*) (0x80120C4 | 1)

#define gTrainerBackPicTable_Red (void*) 0x8234718
#define gTrainerBackPicTable_Leaf (void*) 0x8234740
//#define gTrainerBackPicTable_Brendan (void*) 0x82347A8
//#define gTrainerBackPicTable_May (void*) 0x82347C8
#define gTrainerBackPicTable_PokeDude (void*) 0x8234768
#define gTrainerBackPicTable_OldMan (void*) 0x8234788

#define FOUR_FRAME_TABLE(name)                                           \
	extern const u8 gTrainerBackPic_##name##Tiles[];                     \
	static const struct SpriteFrameImage sTrainerBackPicTable_##name[] = \
	{                                                                    \
		{gTrainerBackPic_##name##Tiles + 0x0000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x0800, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1800, 0x800, 0},              \
	};

#define FIVE_FRAME_TABLE(name)                                           \
	extern const u8 gTrainerBackPic_##name##Tiles[];                     \
	static const struct SpriteFrameImage sTrainerBackPicTable_##name[] = \
	{                                                                    \
		{gTrainerBackPic_##name##Tiles + 0x0000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x0800, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1000, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x1800, 0x800, 0},              \
		{gTrainerBackPic_##name##Tiles + 0x2000, 0x800, 0},              \
	};

FOUR_FRAME_TABLE(Brendan);
FOUR_FRAME_TABLE(May);
FOUR_FRAME_TABLE(Young_Trainer);
FOUR_FRAME_TABLE(Lyra);
FOUR_FRAME_TABLE(FemaleTrainer);
FOUR_FRAME_TABLE(Ash);
FOUR_FRAME_TABLE(Young_TrainerFemale);
FOUR_FRAME_TABLE(Juniper);
FIVE_FRAME_TABLE(Hilbert);
FIVE_FRAME_TABLE(Nate);
FIVE_FRAME_TABLE(Cynthia);
FOUR_FRAME_TABLE(Laphicet);
FIVE_FRAME_TABLE(Anabel);
FIVE_FRAME_TABLE(Keith);
FIVE_FRAME_TABLE(Wes);
FIVE_FRAME_TABLE(Steven);
FOUR_FRAME_TABLE(Greenphx);
FIVE_FRAME_TABLE(Gary);
FIVE_FRAME_TABLE(Brock);
FIVE_FRAME_TABLE(Misty);
FIVE_FRAME_TABLE(Cheryl);
FIVE_FRAME_TABLE(Buck);
FIVE_FRAME_TABLE(Marley);
FIVE_FRAME_TABLE(Riley);
FIVE_FRAME_TABLE(Chili);
FIVE_FRAME_TABLE(Cress);
FIVE_FRAME_TABLE(Cilan);
FIVE_FRAME_TABLE(Adrian);

#ifdef UNBOUND

static const struct SpriteFrameImage sTrainerBackPicTable_Marlon[] =
{
	{gTrainerBackPic_MarlonTiles, 			0x800, 0},
	{gTrainerBackPic_MarlonTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_MarlonTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_MarlonTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_MarlonTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_PokeKid[] =
{
	{gTrainerBackPic_PokeKidTiles, 			0x800, 0},
	{gTrainerBackPic_PokeKidTiles + 0x0800, 0x800, 0},
	{gTrainerBackPic_PokeKidTiles + 0x1000, 0x800, 0},
	{gTrainerBackPic_PokeKidTiles + 0x1800, 0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Rival[] =
{
	{gTrainerBackPic_RivalTiles, 			0x800, 0},
	{gTrainerBackPic_RivalTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_RivalTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_RivalTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_RivalTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Jax[] =
{
	{gTrainerBackPic_JaxTiles, 				0x800, 0},
	{gTrainerBackPic_JaxTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_JaxTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_JaxTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_JaxTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_RedNew[] =
{
	{gTrainerBackPic_RedNewTiles, 			0x800, 0},
	{gTrainerBackPic_RedNewTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_RedNewTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_RedNewTiles + 0x1800, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Catherine[] =
{
	{gTrainerBackPic_CatherineTiles, 			0x800, 0},
	{gTrainerBackPic_CatherineTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_CatherineTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_CatherineTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_CatherineTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Ginger[] =
{
	{gTrainerBackPic_GingerTiles, 			0x800, 0},
	{gTrainerBackPic_GingerTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_GingerTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_GingerTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_GingerTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Abimbola[] =
{
	{gTrainerBackPic_AbimbolaTiles,				0x800, 0},
	{gTrainerBackPic_AbimbolaTiles + 0x0800,	0x800, 0},
	{gTrainerBackPic_AbimbolaTiles + 0x1000,	0x800, 0},
	{gTrainerBackPic_AbimbolaTiles + 0x1800,	0x800, 0},
	{gTrainerBackPic_AbimbolaTiles + 0x2000,	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Mahina[] =
{
	{gTrainerBackPic_MahinaTiles,			0x800, 0},
	{gTrainerBackPic_MahinaTiles + 0x0800,	0x800, 0},
	{gTrainerBackPic_MahinaTiles + 0x1000,	0x800, 0},
	{gTrainerBackPic_MahinaTiles + 0x1800,	0x800, 0},
	{gTrainerBackPic_MahinaTiles + 0x2000,	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Alford[] =
{
	{gTrainerBackPic_AlfordTiles, 			0x800, 0},
	{gTrainerBackPic_AlfordTiles + 0x0800,	0x800, 0},
	{gTrainerBackPic_AlfordTiles + 0x1000,	0x800, 0},
	{gTrainerBackPic_AlfordTiles + 0x1800,	0x800, 0},
	{gTrainerBackPic_AlfordTiles + 0x2000,	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Vega[] =
{
	{gTrainerBackPic_VegaTiles, 			0x800, 0},
	{gTrainerBackPic_VegaTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_VegaTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_VegaTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_VegaTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Alice[] =
{
	{gTrainerBackPic_AliceTiles, 			0x800, 0},
	{gTrainerBackPic_AliceTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_AliceTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_AliceTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_AliceTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Mel[] =
{
	{gTrainerBackPic_MelTiles, 				0x800, 0},
	{gTrainerBackPic_MelTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_MelTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_MelTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_MelTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_Galavan[] =
{
	{gTrainerBackPic_GalavanTiles, 				0x800, 0},
	{gTrainerBackPic_GalavanTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_GalavanTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_GalavanTiles + 0x1800, 	0x800, 0},
	{gTrainerBackPic_GalavanTiles + 0x2000, 	0x800, 0},
};

static const struct SpriteFrameImage sTrainerBackPicTable_BigMo[] =
{
	{gTrainerBackPic_BigMoTiles, 			0x800, 0},
	{gTrainerBackPic_BigMoTiles ,			0x800, 0},
	{gTrainerBackPic_BigMoTiles + 0x0800, 	0x800, 0},
	{gTrainerBackPic_BigMoTiles + 0x1000, 	0x800, 0},
	{gTrainerBackPic_BigMoTiles + 0x1800, 	0x800, 0},
};

FIVE_FRAME_TABLE(Marlon)
FIVE_FRAME_TABLE(MarlonArm)
FIVE_FRAME_TABLE(MarlonPlayerM)
FIVE_FRAME_TABLE(MarlonPlayerF)
FOUR_FRAME_TABLE(PokeKid)
FIVE_FRAME_TABLE(Rival)
FIVE_FRAME_TABLE(Jax)
FOUR_FRAME_TABLE(RedNew)
FOUR_FRAME_TABLE(RedPlayer)
FOUR_FRAME_TABLE(LeafPlayer)
FIVE_FRAME_TABLE(EthanPlayer)
FIVE_FRAME_TABLE(LyraPlayer)
FIVE_FRAME_TABLE(LucasPlayer)
FIVE_FRAME_TABLE(DawnPlayer)
FIVE_FRAME_TABLE(PlayerChampionM)
FIVE_FRAME_TABLE(PlayerChampionF)
FIVE_FRAME_TABLE(Catherine)
FIVE_FRAME_TABLE(Ginger)
FIVE_FRAME_TABLE(Abimbola)
FIVE_FRAME_TABLE(Mahina)
FIVE_FRAME_TABLE(Alford)
FIVE_FRAME_TABLE(Vega)
FIVE_FRAME_TABLE(Alice)
FIVE_FRAME_TABLE(Mel)
FIVE_FRAME_TABLE(Galavan)
FIVE_FRAME_TABLE(Tessy)

#endif

#define BACK_TEMPLATE(name)                            \
	{                                                  \
		.tileTag = 0xFFFF,                             \
		.paletteTag = 0,                               \
		.oam = gOamData_TrainerBacksprite,             \
		.anims = NULL,                                 \
		.images = sTrainerBackPicTable_##name,         \
		.affineAnims = gAffineAnims_TrainerBacksprite, \
		.callback = gSpriteCB_TrainerBacksprite,       \
	},

const struct SpriteTemplate gSpriteTemplateTable_TrainerBackSprites[] =
{
	[TRAINER_BACK_PIC_RED] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_Red,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_LEAF] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_Leaf,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_BRENDAN] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Brendan,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_MAY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_May,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_POKE_DUDE] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_PokeDude,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_OLD_MAN] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = gTrainerBackPicTable_OldMan,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_HUGH] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Young_Trainer,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_LYRA] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Lyra,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_FEMALETRAINER] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_FemaleTrainer,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_ASH] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Ash,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_MIRA] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Young_TrainerFemale,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_JUNIPER] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Juniper,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_HILBERT] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Hilbert,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_NATE] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Nate,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_CYNTHIA] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Cynthia,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_LAPHICET] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Laphicet,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_ANABEL] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Anabel,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_KEITH] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Keith,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_WES] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Wes,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_STEVEN] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Steven,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_GREENPHX] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Greenphx,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_GARY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Gary,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_BROCK] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Brock,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_MISTY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Misty,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_CHERYL] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Cheryl,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_BUCK] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Buck,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_MARLEY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Marley,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_RILEY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Riley,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_CHILI] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Chili,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_CRESS] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Cress,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},

	[TRAINER_BACK_PIC_CILAN] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Cilan,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	
	[TRAINER_BACK_PIC_ADRIAN] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Adrian,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},


#ifdef UNBOUND
	[TRAINER_BACK_PIC_MARLON] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Marlon,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_POKE_KID] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_PokeKid,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_RIVAL] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Rival,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_JAX] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Jax,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_RED_NEW] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_RedNew,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_CATHERINE] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Catherine,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_GINGER] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Ginger,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_ABIMBOLA] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Abimbola,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_MAHINA] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Mahina,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_ALFORD] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Alford,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
	[TRAINER_BACK_PIC_TESSY] =
	{
		.tileTag = 0xFFFF,
		.paletteTag = 0,
		.oam = gOamData_TrainerBacksprite,
		.anims = NULL,
		.images = sTrainerBackPicTable_Tessy,
		.affineAnims = gAffineAnims_TrainerBacksprite,
		.callback = gSpriteCB_TrainerBacksprite,
	},
#endif
};

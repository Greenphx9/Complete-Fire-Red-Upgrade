#include "defines.h"
#include "../include/battle_anim.h"
#include "../include/bike.h"
#include "../include/event_object_movement.h"
#include "../include/field_effect.h"
#include "../include/field_effect_helpers.h"
#include "../include/field_player_avatar.h"
#include "../include/fieldmap.h"
#include "../include/fldeff_misc.h"
#include "../include/overworld.h"
#include "../include/random.h"
#include "../include/script.h"
#include "../include/sound.h"
#include "../include/constants/event_object_movement_constants.h"
#include "../include/constants/maps.h"
#include "../include/constants/region_map_sections.h"
#include "../include/constants/songs.h"
#include "../include/field_player_avatar.h"
#include "../include/script.h"
#include "../include/party_menu.h"
#include "../include/new/overworld_data.h"
#include "../include/new/dynamic_ow_pals.h"

#include "../include/new/dexnav.h"
#include "../include/new/follow_me.h"
#include "../include/new/overworld.h"
#include "../include/new/util2.h"

#define gFieldEffectObjectPaletteInfo0 (void*) 0x83A5340
#define gFieldEffectObjectPaletteInfo1 (void*) 0x83A5348
#define gFieldEffectObjectTemplatePointers ((const struct SpriteTemplate* const *) 0x83A0010)

#define SMOKE_TAG 0x2710
#define TAG_MINING_SCAN_RING 0x27DB //ANIM_TAG_THIN_RING
#define FLDEFF_PAL_TAG_ROCK_CLIMB 0x1012

extern const u8 gInterfaceGfx_caveSmokeTiles[];
extern const u16 gInterfaceGfx_caveSmokePal[];
extern const u8 gInterfaceGfx_SparklesTiles[];
extern const u16 gInterfaceGfx_SparklesPal[];
extern const u8 gInterfaceGfx_LavaBubblesTiles[];
extern const u16 gInterfaceGfx_LavaBubblesPal[];
extern const u8 gFieldEffectObjectPic_BigDustCloudTiles[];
extern const u16 gFieldEffectObjectPic_BigDustCloudPal[];
extern const u8 gFieldEffectObjectPic_RockClimbBlobTiles[];
extern const struct CompressedSpriteSheet gExplosionSpriteSheet;
extern const struct CompressedSpriteSheet gThinRingSpriteSheet;
extern const struct CompressedSpritePalette gExplosionSpritePalette;
extern const struct CompressedSpritePalette gThinRingSpritePalette;

//This file's functions
static void GetSpriteTemplateAndPaletteForGrassFieldEffect(const struct SpriteTemplate** spriteTemplate, const struct SpritePalette** spritePalette, u8 fieldEffectTemplateArg);
static void FldEff_TallGrass(void);
static void FldEff_ShakingTallGrass(void);
static void FldEff_JumpTallGrassLoadPalette(void);
static void FldEff_LongGrass(void);
static void FldEff_JumpLongGrassLoadPalette(void);
static void FldEff_ShakingLongGrass(void);
static void FldEff_ShortGrass(void);
static void FldEff_SandFootprints(void);
static void FldEff_BikeTireTracks(void);
static void FldEff_Dust(void);
static void FldEff_CaveDust(void);
static void FldEff_Sparkles(void);
static u32 FldEff_LavaBubbles(void);
static void FldEff_MiningScanRing(void);
static void SpriteCB_MiningScanRing(struct Sprite* sprite);
void FieldMoveCallback_CutGrass(void);

#ifdef UNBOUND //For Pokemon Unbound - Feel free to remove
#define AUTUMN_GRASS_PALETTE_TAG 0x1215
static u16 sAutumnGrassObjectPalette[] = {0x741F, 0x3E9B, 0x3E9B, 0x1993, 0x1570, 0x0167, 0x76AC, 0x62AC, 0x7B31, 0x7F92, 0x0, 0x0, 0x3A7A, 0x2E38, 0x2E38, 0x1DD6};
static const struct SpritePalette sAutumnGrassObjectPaletteInfo = {sAutumnGrassObjectPalette, 0x1005};
#endif

static void FldEff_Explosion(void);
static void SpriteCB_DestroyExplosion(struct Sprite* sprite);
static u8 CreateRockClimbBlob(void);
static u32 FldEff_RockClimbDust(void);
static void Task_UseRockClimb(u8);
static bool8 RockClimb_Init(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_FieldMovePose(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_ShowMon(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_JumpOnRockClimbBlob(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_WaitJumpOnRockClimbBlob(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_Ride(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_ContinueRideOrEnd(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_WaitStopRockClimb(struct Task* task, struct EventObject* eventObject);
static bool8 RockClimb_StopRockClimbInit(struct Task* task, struct EventObject* eventObject);

#ifdef UNBOUND //For Pokemon Unbound - Feel free to remove
extern const u16 gFieldEffectObjectPic_AutumnGrassPal[];
extern const u16 gFieldEffectObjectPic_WinterGrassPal[];
extern const u8 gFieldEffectObjectPic_SwampLongGrassTiles[];
extern const u16 gFieldEffectObjectPic_SwampLongGrassPal[];
extern const u16 gFieldEffectObjectPic_WinterFootprintPal[];
static const struct SpritePalette sAutumnGrassObjectPaletteInfo = {gFieldEffectObjectPic_AutumnGrassPal, 0x1005};
static const struct SpritePalette sWinterGrassObjectPaletteInfo = {gFieldEffectObjectPic_WinterGrassPal, 0x1005};
static const struct SpritePalette sSwampGrassObjectPaletteInfo = {gFieldEffectObjectPic_SwampLongGrassPal, 0x1005};
static const struct SpritePalette sWinterFootprintPaletteInfo = {gFieldEffectObjectPic_WinterFootprintPal, 0x1004};

static const struct SpriteFrameImage sFieldEffectObjectPicTable_SwampLongGrass[] = {
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 0),
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 1),
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 2),
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 3),
};

static const struct SpriteFrameImage sFieldEffectObjectPicTable_ShakingSwampLongGrass[] = {
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 0),
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 1),
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 2),
	overworld_frame(gFieldEffectObjectPic_SwampLongGrassTiles, 2, 2, 3),
};

static const struct SpriteTemplate sFieldEffectObjectTemplate_SwampLongGrass = {0xFFFF, 0x1005, (void*) 0x83A36F0, (void*) 0x83A5938, sFieldEffectObjectPicTable_SwampLongGrass, gDummySpriteAffineAnimTable, (void*) (0x80DB69C | 1)};
static const struct SpriteTemplate sFieldEffectObjectTemplate_ShakingSwampLongGrass = {0xFFFF, 0x1005, (void*) 0x83A36F0, (void*) 0x83A5A84, sFieldEffectObjectPicTable_ShakingSwampLongGrass, gDummySpriteAffineAnimTable, (void*) (0x80DCD1D | 1)};
#endif

static const struct OamData sMiningScanRing =
{
	.affineMode = ST_OAM_AFFINE_DOUBLE,
	.objMode = ST_OAM_OBJ_NORMAL,
	.shape = SPRITE_SHAPE(64x64),
	.size = SPRITE_SIZE(64x64),
	.priority = 0, //Above all
};

const union AnimCmd gFieldEffectObjectImageAnim_ShakingGrass[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(7, 8),
    ANIMCMD_FRAME(8, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sFieldEffectObjectImageAnim_Sparkles[] =
{
	ANIMCMD_FRAME(0, 8),
	ANIMCMD_FRAME(1, 8),
	ANIMCMD_FRAME(2, 8),
	ANIMCMD_FRAME(3, 8),
	ANIMCMD_FRAME(4, 8),
	ANIMCMD_FRAME(5, 8),
	ANIMCMD_JUMP(0),
};

static const union AnimCmd* const sFieldEffectObjectImageAnimTable_Sparkles[] =
{
	sFieldEffectObjectImageAnim_Sparkles,
};

static const union AnimCmd sFieldEffectObjectImageAnim_RockClimbBlob_FaceSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sFieldEffectObjectImageAnim_RockClimbBlob_FaceNorth[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sFieldEffectObjectImageAnim_RockClimbBlob_FaceWest[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sFieldEffectObjectImageAnim_RockClimbBlob_FaceEast[] =
{
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd* const sFieldEffectObjectImageAnimTable_RockClimbBlob[] =
{
    sFieldEffectObjectImageAnim_RockClimbBlob_FaceSouth,
    sFieldEffectObjectImageAnim_RockClimbBlob_FaceNorth,
    sFieldEffectObjectImageAnim_RockClimbBlob_FaceWest,
    sFieldEffectObjectImageAnim_RockClimbBlob_FaceEast,
};

static const union AnimCmd sFieldEffectObjectImageAnim_RockClimbDust[] =
{
	ANIMCMD_FRAME(0, 12),
	ANIMCMD_FRAME(1, 8),
	ANIMCMD_FRAME(2, 8),
	ANIMCMD_END,
};
static const union AnimCmd* const sFieldEffectObjectImageAnimTable_RockClimbDust[] =
{
	sFieldEffectObjectImageAnim_RockClimbDust,
};

static const struct SpriteFrameImage sFieldEffectObjectPicTable_DustCloud[4] =
{
	overworld_frame(gInterfaceGfx_caveSmokeTiles, 2, 2, 0),
	overworld_frame(gInterfaceGfx_caveSmokeTiles, 2, 2, 1),
	overworld_frame(gInterfaceGfx_caveSmokeTiles, 2, 2, 2),
	overworld_frame(gInterfaceGfx_caveSmokeTiles, 2, 2, 3),
};

static const struct SpriteFrameImage sFieldEffectObjectPicTable_Sparkles[] =
{
	overworld_frame(gInterfaceGfx_SparklesTiles, 2, 2, 0),
	overworld_frame(gInterfaceGfx_SparklesTiles, 2, 2, 1),
	overworld_frame(gInterfaceGfx_SparklesTiles, 2, 2, 2),
	overworld_frame(gInterfaceGfx_SparklesTiles, 2, 2, 3),
	overworld_frame(gInterfaceGfx_SparklesTiles, 2, 2, 4),
	overworld_frame(gInterfaceGfx_SparklesTiles, 2, 2, 5),
};

static const struct SpriteFrameImage sFieldEffectObjectPicTable_LavaBubbles[] =
{
	overworld_frame(gInterfaceGfx_LavaBubblesTiles, 2, 2, 0),
	overworld_frame(gInterfaceGfx_LavaBubblesTiles, 2, 2, 1),
	overworld_frame(gInterfaceGfx_LavaBubblesTiles, 2, 2, 2),
	overworld_frame(gInterfaceGfx_LavaBubblesTiles, 2, 2, 3),
};

static const struct SpriteFrameImage sFieldEffectObjectPicTable_RockClimbBlob[] =
{
	overworld_frame(gFieldEffectObjectPic_RockClimbBlobTiles, 4, 4, 0),
	overworld_frame(gFieldEffectObjectPic_RockClimbBlobTiles, 4, 4, 1),
	overworld_frame(gFieldEffectObjectPic_RockClimbBlobTiles, 4, 4, 2),
};

static const struct SpriteFrameImage sFieldEffectObjectPicTable_RockClimbDust[] =
{
	overworld_frame(gFieldEffectObjectPic_BigDustCloudTiles, 4, 4, 0),
	overworld_frame(gFieldEffectObjectPic_BigDustCloudTiles, 4, 4, 1),
	overworld_frame(gFieldEffectObjectPic_BigDustCloudTiles, 4, 4, 2),
};

static const union AffineAnimCmd sMiningScanRingAffineAnimCmds[] =
{
	AFFINEANIMCMD_FRAME(0x10, 0x10, 0, 0),
	AFFINEANIMCMD_FRAME(0xB, 0xB, 0, 45),
	AFFINEANIMCMD_END,
};

static const union AffineAnimCmd* const sMiningScanRingAffineAnimTable[] =
{
	sMiningScanRingAffineAnimCmds,
};

static const struct SpriteTemplate sSpriteTemplateDustCloud =
{
	.tileTag = 0xFFFF,
	.paletteTag = SMOKE_TAG,
	.oam = (void*) 0x83A36F0,
	.anims = (void*) 0x83A5B70,
	.images = sFieldEffectObjectPicTable_DustCloud,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = (void*) 0x80DCD1D,
};

static const struct SpriteTemplate sSpriteTemplateSparkles =
{
	.tileTag = 0xFFFF,
	.paletteTag = SMOKE_TAG,
	.oam = (void*) 0x83A36F0,
	.anims = sFieldEffectObjectImageAnimTable_Sparkles,
	.images = sFieldEffectObjectPicTable_Sparkles,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = (void*) 0x80DCD1D,
};

static const struct SpriteTemplate sSpriteTemplateLavaBubbles =
{
	.tileTag = 0xFFFF,
	.paletteTag = SMOKE_TAG,
	.oam = (void*) 0x83A36F0,
	.anims = (void*) 0x83A5B70,
	.images = sFieldEffectObjectPicTable_LavaBubbles,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = (void*) 0x80DCD1D,
};

static const struct SpriteTemplate sMiningScanRingSpriteTemplate =
{
	.tileTag = TAG_MINING_SCAN_RING, 
	.paletteTag = TAG_MINING_SCAN_RING,
	.oam = &sMiningScanRing,
	.anims = gDummySpriteAnimTable,
	.images = NULL,
	.affineAnims = sMiningScanRingAffineAnimTable,
	.callback = SpriteCB_MiningScanRing,
};

static const struct SpriteTemplate sExplosionSpriteTemplate =
{
	.tileTag = ANIM_TAG_EXPLOSION, 
	.paletteTag = ANIM_TAG_EXPLOSION,
	.oam = (void*) 0x83AC9D8, //OAM_OFF_32x32
	.anims = (void*) 0x83E3F90,
	.images = NULL,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = SpriteCB_DestroyExplosion,
};

static const struct SpriteTemplate gFieldEffectObjectTemplate_RockClimbBlob =
{
	.tileTag = 0xFFFF,
	.paletteTag = FLDEFF_PAL_TAG_ROCK_CLIMB,
	.oam = (void*) 0x83AC9D8, //OAM_OFF_32x32
	.anims = sFieldEffectObjectImageAnimTable_RockClimbBlob,
	.images = sFieldEffectObjectPicTable_RockClimbBlob,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = UpdateSurfBlobFieldEffect,
};

static const struct SpriteTemplate gFieldEffectObjectTemplate_RockClimbDust =
{
	.tileTag = 0xFFFF,
	.paletteTag = FLDEFF_PAL_TAG_ROCK_CLIMB,
	.oam = (void*) 0x83AC9D8, //OAM_OFF_32x32
	.anims = sFieldEffectObjectImageAnimTable_RockClimbDust,
	.images = sFieldEffectObjectPicTable_RockClimbDust,
	.affineAnims = gDummySpriteAffineAnimTable,
	.callback = UpdateJumpImpactEffect,
};

static const struct SpritePalette sCaveSmokeSpritePalette = {gInterfaceGfx_caveSmokePal, SMOKE_TAG};
static const struct SpritePalette sSparklesSpritePalette = {gInterfaceGfx_SparklesPal, SMOKE_TAG};
static const struct SpritePalette sLavaBubblesSpritePalette = {gInterfaceGfx_LavaBubblesPal, SMOKE_TAG};
static const struct SpritePalette sBigDustSpritePalette = {gFieldEffectObjectPic_BigDustCloudPal, FLDEFF_PAL_TAG_ROCK_CLIMB};

static void GetSpriteTemplateAndPaletteForGrassFieldEffect(const struct SpriteTemplate** spriteTemplate, const struct SpritePalette** spritePalette, u8 fieldEffectTemplateArg)
{
	switch (GetCurrentRegionMapSectionId()) {
	#ifdef UNBOUND //For Pokemon Unbound - Feel free to remove
		case MAPSEC_ROUTE_9:
		case MAPSEC_ROUTE_10:
		case MAPSEC_AUBURN_WATERWAY:
			*spriteTemplate = gFieldEffectObjectTemplatePointers[fieldEffectTemplateArg];
			*spritePalette = &sAutumnGrassObjectPaletteInfo;
			break;
		case MAPSEC_ROUTE_1:
		case MAPSEC_ROUTE_8:
		case MAPSEC_ICICLE_CAVE:
		case MAPSEC_FROZEN_FOREST:
		WINTER:
			*spriteTemplate = gFieldEffectObjectTemplatePointers[fieldEffectTemplateArg];
			*spritePalette = &sWinterGrassObjectPaletteInfo;
			break;
		case MAPSEC_VICTORY_ROAD:
			if (MAP_IS(VICTORY_ROAD_MOUNTAINSIDE))
				goto WINTER;
			goto DEFAULT;
		case MAPSEC_POLDER_TOWN:
		case MAPSEC_COOTES_BOG:
			if (fieldEffectTemplateArg == 15) //Long Grass
				*spriteTemplate = &sFieldEffectObjectTemplate_SwampLongGrass;
			else if (fieldEffectTemplateArg == 18) //Shaking Long Grass
				*spriteTemplate = &sFieldEffectObjectTemplate_ShakingSwampLongGrass;
			else
				*spriteTemplate = gFieldEffectObjectTemplatePointers[fieldEffectTemplateArg];
			*spritePalette = &sSwampGrassObjectPaletteInfo;
			break;
	#endif
		default:
			*spriteTemplate = gFieldEffectObjectTemplatePointers[fieldEffectTemplateArg];
			*spritePalette = gFieldEffectObjectPaletteInfo1;
			break;
	}
}

static void GetSpriteTemplateAndPaletteForFootprintFieldEffect(const struct SpriteTemplate** spriteTemplate, const struct SpritePalette** spritePalette, u8 fieldEffectTemplateArg)
{
	#ifdef UNBOUND //For Pokemon Unbound - Feel free to remove
	if (IsCurrentAreaWinter())
	{
		*spriteTemplate = gFieldEffectObjectTemplatePointers[fieldEffectTemplateArg];
		*spritePalette = &sWinterFootprintPaletteInfo;
	}
	else
	#endif
	{
		*spriteTemplate = gFieldEffectObjectTemplatePointers[fieldEffectTemplateArg];
		*spritePalette = gFieldEffectObjectPaletteInfo0;
	}
}

static void FldEff_TallGrass(void)
{
	s32 x, y;
	u8 spriteId;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	GetSpriteTemplateAndPaletteForGrassFieldEffect(&spriteTemplate, &spritePalette, 4);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.

	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);
	spriteId = CreateSpriteAtEnd(spriteTemplate, x, y, 0);

	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = ZCoordToPriority(gFieldEffectArguments[2]);
		sprite->data[0] = gFieldEffectArguments[2];
		sprite->data[1] = gFieldEffectArguments[0];
		sprite->data[2] = gFieldEffectArguments[1];
		sprite->data[3] = gFieldEffectArguments[4];
		sprite->data[4] = gFieldEffectArguments[5];
		sprite->data[5] = gFieldEffectArguments[6];
		if (gFieldEffectArguments[7])
		{
			SeekSpriteAnim(sprite, 4);
		}
	}

	PlayGrassFootstepNoise();
}

static void FldEff_ShakingTallGrass(void)
{
	s32 x, y;
	u8 spriteId;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	GetSpriteTemplateAndPaletteForGrassFieldEffect(&spriteTemplate, &spritePalette, 17);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.

	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);
	spriteId = CreateSpriteAtEnd(spriteTemplate, x, y, gFieldEffectArguments[2]);

	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[0] = FLDEFF_SHAKING_GRASS;
	}

	if (IsFanfareTaskInactive()) //Sound interrupts fanfare
		PlaySE(SE_LEAVES);
}

static void FldEff_JumpTallGrassLoadPalette(void)
{
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.

	GetSpriteTemplateAndPaletteForGrassFieldEffect(&spriteTemplate, &spritePalette, 4);
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);
	FldEff_JumpTallGrass();
}

static void FldEff_LongGrass(void)
{
	s32 x, y;
	u8 spriteId;
	struct Sprite *sprite;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	GetSpriteTemplateAndPaletteForGrassFieldEffect(&spriteTemplate, &spritePalette, 15);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);
	spriteId = CreateSpriteAtEnd(spriteTemplate, x, y, 0);

	if (spriteId != MAX_SPRITES)
	{
		sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = ZCoordToPriority(gFieldEffectArguments[2]);
		sprite->data[0] = gFieldEffectArguments[2];
		sprite->data[1] = gFieldEffectArguments[0];
		sprite->data[2] = gFieldEffectArguments[1];
		sprite->data[3] = gFieldEffectArguments[4];
		sprite->data[4] = gFieldEffectArguments[5];
		sprite->data[5] = gFieldEffectArguments[6];
		if (gFieldEffectArguments[7])
		{
			SeekSpriteAnim(sprite, 6);
		}
	}

	PlayGrassFootstepNoise();
}

static void FldEff_JumpLongGrassLoadPalette(void)
{
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.

	GetSpriteTemplateAndPaletteForGrassFieldEffect(&spriteTemplate, &spritePalette, 15);
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);
	FldEff_JumpLongGrass();
}

static void FldEff_ShakingLongGrass(void)
{
	s32 x, y;
	u8 spriteId;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	GetSpriteTemplateAndPaletteForGrassFieldEffect(&spriteTemplate, &spritePalette, 18);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);
	spriteId = CreateSpriteAtEnd(spriteTemplate, x, y, gFieldEffectArguments[2]);

	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[0] = FLDEFF_SHAKING_LONG_GRASS;
	}

	PlaySE(SE_LEAVES);
}

static void FldEff_ShortGrass(void)
{
	u8 spriteId, eventObjectId;
	struct Sprite *sprite;
	struct EventObject* eventObject;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;

	GetSpriteTemplateAndPaletteForGrassFieldEffect(&spriteTemplate, &spritePalette, 30);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);

    eventObjectId = GetEventObjectIdByLocalIdAndMap(gFieldEffectArguments[0], gFieldEffectArguments[1], gFieldEffectArguments[2]);
    eventObject = &gEventObjects[eventObjectId];
	spriteId = CreateSpriteAtEnd(spriteTemplate, gFieldEffectArguments[0], gFieldEffectArguments[1], 0);
	if (spriteId != MAX_SPRITES)
	{
		sprite = &gSprites[spriteId];
        sprite->coordOffsetEnabled = TRUE;
        sprite->oam.priority = gSprites[eventObject->spriteId].oam.priority;
        sprite->data[0] = gFieldEffectArguments[0];
        sprite->data[1] = gFieldEffectArguments[1];
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = gSprites[eventObject->spriteId].pos1.x;
        sprite->data[4] = gSprites[eventObject->spriteId].pos1.y;
	}
}

static void FldEff_SandFootprints(void)
{
	s32 x, y;
	u8 spriteId;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	GetSpriteTemplateAndPaletteForFootprintFieldEffect(&spriteTemplate, &spritePalette, 11);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);

	spriteId = CreateSpriteAtEnd(spriteTemplate, x, y, gFieldEffectArguments[2]);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[7] = FLDEFF_SAND_FOOTPRINTS;
		StartSpriteAnim(sprite, gFieldEffectArguments[4]);
	}

	if (IsFanfareTaskInactive()) //Sound interrupts fanfare
		PlaySE(SE_SAND_FOOTSTEP);
}

static void FldEff_BikeTireTracks(void)
{
	s32 x, y;
	u8 spriteId;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	GetSpriteTemplateAndPaletteForFootprintFieldEffect(&spriteTemplate, &spritePalette, 27);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);

	spriteId = CreateSpriteAtEnd(spriteTemplate, x, y, gFieldEffectArguments[2]);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[7] = FLDEFF_BIKE_TIRE_TRACKS;
		StartSpriteAnim(sprite, gFieldEffectArguments[4]);
	}

	if (IsFanfareTaskInactive()) //Sound interrupts fanfare
		PlaySE(SE_MUD_SLAP); //Different sound on bike
}

static void FldEff_Dust(void)
{
	s32 x, y;
	u8 spriteId;
	const struct SpriteTemplate* spriteTemplate;
	const struct SpritePalette* spritePalette; const struct SpritePalette** palettePointer; const struct SpritePalette*** palette2Pointer;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 12);

	GetSpriteTemplateAndPaletteForFootprintFieldEffect(&spriteTemplate, &spritePalette, 9);
	palettePointer = &spritePalette;
	palette2Pointer = &palettePointer; //This way we fool the function into thinking it's a script.
	FieldEffectScript_LoadFadedPalette((u8**) palette2Pointer);

	spriteId = CreateSpriteAtEnd(spriteTemplate, x, y, gFieldEffectArguments[2]);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[0] = gFieldEffectArguments[2];
		sprite->data[1] = 10;
	}
}

static void FldEff_CaveDust(void)
{
	s32 x, y;
	u8 spriteId;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	spriteId = CreateSpriteAtEnd(&sSpriteTemplateDustCloud, x, y, gFieldEffectArguments[2]);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[0] = FLDEFF_CAVE_DUST;
	}
}

static void FldEff_Sparkles(void)
{
	s32 x, y;
	u8 spriteId;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	spriteId = CreateSpriteAtEnd(&sSpriteTemplateSparkles, x, y, gFieldEffectArguments[2]);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[0] = FLDEFF_REPEATING_SPARKLES;
	}
}

static u32 FldEff_LavaBubbles(void)
{
	s32 x, y;
	u8 spriteId;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	spriteId = CreateSpriteAtEnd(&sSpriteTemplateLavaBubbles, x, y, gFieldEffectArguments[2]);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[0] = FLDEFF_LAVA_BUBBLES;
	}
	
	return 0;
}

static void SpriteCB_MiningScanRing(struct Sprite* sprite)
{
	if (sprite->affineAnimEnded)
	{
		FreeSpriteOamMatrix(sprite);
		FieldEffectFreeGraphicsResources(sprite);
		FieldEffectActiveListRemove(FLDEFF_THIN_RING);
	}
}

#ifdef MB_UNDERGROUND_MINING
static u8 GetNumMiningSpots(void)
{
	u16 width, height, divisor;
	width = gMapHeader.mapLayout->width;
	height = gMapHeader.mapLayout->height;

	if (gMapHeader.mapType == MAP_TYPE_UNDERWATER)
		divisor = 500; //Harder to find spots underwater so increase chance
	#ifdef MAPSEC_CRYSTAL_PEAK
	else if (GetCurrentRegionMapSectionId() == MAPSEC_CRYSTAL_PEAK)
		divisor = 600; //Smaller room so ensure at least two spots
	#endif
	else
		divisor = 1000;

	return MathMax(1, MathMin((width * height) / divisor, 8)); //One possible tile per every 500sq or 1000sq blocks - max 8
}

void TryLoadMiningSpots(void)
{
	if (gMiningSpots[0].x == 0 && gMiningSpots[0].y == 0) //Data wasn't set yet
	{
		u16 counter, total, width, height;
		width = gMapHeader.mapLayout->width;
		height = gMapHeader.mapLayout->height;
		total = GetNumMiningSpots();
		counter = 0;

		do
		{
			//Choose random spot
			s16 x = Random() % width + 7;
			s16 y = Random() % height + 7;
			u8 metatileBehavior = MapGridGetMetatileBehaviorAt(x, y);
			
			//Make sure correct type of spot
			if (metatileBehavior == MB_UNDERGROUND_MINING)
			{
				//Check access in any direction
				for (u8 dir = DIR_SOUTH; dir <= DIR_EAST; ++dir)
				{
					s16 xCopy = x;
					s16 yCopy = y;
					MoveCoords(dir, &xCopy, &yCopy);
					
					if (!MapGridIsImpassableAt(xCopy, yCopy))
					{
						//Good spot
						gMiningSpots[counter].x = x;
						gMiningSpots[counter++].y = y;
						break;
					}
				}
			}

		} while (counter < total);
	}
}

void ChooseMiningSpotToShow(void)
{
	u32 i, total, bestId, lowestDist;
	total = GetNumMiningSpots();

	for (i = 0, bestId = 0, lowestDist = 0xFFFFFFFF; i < total; ++i)
	{
		u32 distance = GetPlayerDistance(gMiningSpots[i].x, gMiningSpots[i].y);
		if (distance < lowestDist) //Closer spot
		{
			bestId = i;
			lowestDist = distance;
		}
	}

	//Set up sparkle field effect
	Var8004 = gMiningSpots[bestId].x - 7;
	Var8005 = gMiningSpots[bestId].y - 7;
	Var8006 = 2; //Priority
}

bool8 IsValidMiningSpot(s16 x, s16 y)
{
	u32 i;
	u32 total = GetNumMiningSpots();

	for (i = 0; i < total; ++i)
	{
		if (gMiningSpots[i].x == x && gMiningSpots[i].y == y)
			return TRUE;
	}
	
	return FALSE;
}
#endif

void ResetMiningSpots(void)
{
	Memset(gMiningSpots, 0, sizeof(gMiningSpots));
}

void IsBestMiningSpotOutOfView(void)
{
	#ifdef MB_UNDERGROUND_MINING
	s16 left =   gSaveBlock1->pos.x - 2;
	s16 right =  gSaveBlock1->pos.x + 17;
	s16 top =    gSaveBlock1->pos.y;
	s16 bottom = gSaveBlock1->pos.y + 16;
	s16 x = Var8004 + 7;
	s16 y = Var8005 + 7;

	gSpecialVar_LastResult = FALSE;
	if (x >= left && x <= right && y >= top && y <= bottom)
		return; //In view

	gSpecialVar_LastResult = TRUE;
	#endif
}

static void FldEff_MiningScanRing(void)
{
	s32 x, y;
	u8 spriteId;
	x = gFieldEffectArguments[0] + 7;
	y = gFieldEffectArguments[1] + 7;
	LogCoordsCameraRelative(&x, &y, 8, 8);

	LoadCompressedSpriteSheetUsingHeap(&gThinRingSpriteSheet);
	LoadCompressedSpritePaletteUsingHeap(&gThinRingSpritePalette);
	spriteId = CreateSpriteAtEnd(&sMiningScanRingSpriteTemplate, x, y, 0);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->data[0] = FLDEFF_THIN_RING;

		//Blend the palette a light blue
		if (gFieldEffectArguments[2])
		{
			u16 paletteOffset = IndexOfSpritePaletteTag(TAG_MINING_SCAN_RING) * 16 + 16 * 16;
			BlendPalette(paletteOffset, 16, 0x10, 0x5F72); //Light greenish
			CpuCopy32(gPlttBufferFaded + paletteOffset, gPlttBufferUnfaded + paletteOffset, 32);
		}
	}
}

static void FldEff_Explosion(void)
{
	s32 x, y;
	u8 spriteId;
	x = gFieldEffectArguments[0] + 7;
	y = gFieldEffectArguments[1] + 7;
	LogCoordsCameraRelative(&x, &y, 8, 8);

	LoadCompressedSpriteSheetUsingHeap(&gExplosionSpriteSheet);
	LoadCompressedSpritePaletteUsingHeap(&gExplosionSpritePalette);
	spriteId = CreateSpriteAtEnd(&sExplosionSpriteTemplate, x, y, 1);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->oam.priority = 1; //Above NPCs
		sprite->coordOffsetEnabled = TRUE;
		sprite->data[0] = FLDEFF_EXPLOSION;
		PlaySE(SE_EXPLOSION);
	}
}

static void SpriteCB_DestroyExplosion(struct Sprite* sprite)
{
	if (sprite->animEnded)
	{
		FreeSpriteOamMatrix(sprite);
		FieldEffectFreeGraphicsResources(sprite);
		FieldEffectActiveListRemove(FLDEFF_EXPLOSION);
	}
}

//Rock Climb//

enum RockClimbState
{
	STATE_ROCK_CLIMB_INIT,
	STATE_ROCK_CLIMB_POSE,
	STATE_ROCK_CLIMB_SHOW_MON,
	STATE_ROCK_CLIMB_JUMP_ON,
	STATE_ROCK_CLIMB_WAIT_JUMP,
	STATE_ROCK_CLIMB_RIDE,
	STATE_ROCK_CLIMB_CONTINUE_RIDE,
	STATE_ROCK_CLIMB_STOP_INIT,
	STATE_ROCK_CLIMB_WAIT_STOP
};

struct RockClimbRide
{
	u8 action;
	s8 dx;
	s8 dy;
	u8 jumpDir;
};
static const struct RockClimbRide sRockClimbMovement[] = 
{
	[DIR_NONE] = {MOVEMENT_ACTION_WALK_FAST_DOWN, 0, 0, DIR_NONE},
	[DIR_SOUTH] = {MOVEMENT_ACTION_WALK_FAST_DOWN, 0, -1, DIR_SOUTH},
	[DIR_NORTH] = {MOVEMENT_ACTION_WALK_FAST_UP, 0, 0, DIR_NORTH}, //Same spot as player
	[DIR_WEST] = {MOVEMENT_ACTION_WALK_FAST_LEFT, 0, 0, DIR_WEST},
	[DIR_EAST] = {MOVEMENT_ACTION_WALK_FAST_RIGHT, 0, 0, DIR_EAST},
	[DIR_SOUTHWEST] = {MOVEMENT_ACTION_WALK_FAST_LEFT_DOWN_FACE_LEFT, 0, 0, DIR_WEST},
	[DIR_SOUTHEAST] = {MOVEMENT_ACTION_WALK_FAST_RIGHT_DOWN_FACE_RIGHT, 0, 0, DIR_EAST},
	[DIR_NORTHWEST] = {MOVEMENT_ACTION_WALK_FAST_LEFT_UP_FACE_LEFT, 0, 0, DIR_WEST},
	[DIR_NORTHEAST] = {MOVEMENT_ACTION_WALK_FAST_RIGHT_UP_FACE_RIGHT, 0, 0, DIR_EAST},
};

#define tState       data[0]
#define tDestX       data[1]
#define tDestY       data[2]
#define tMovementDir data[3]
#define tOnBike      data[14]
#define tMonId       data[15]

static u8 CreateRockClimbBlob(void)
{
	s32 x, y;
	u8 spriteId;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 8);

	spriteId = CreateSpriteAtEnd(&gFieldEffectObjectTemplate_RockClimbBlob, x, y, 0x96);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->data[2] = gFieldEffectArguments[2];
		sprite->data[3] = -1;
		sprite->data[6] = -1;
		sprite->data[7] = -1;
	}

	return spriteId;
}

static u32 FldEff_RockClimbDust(void)
{
	s32 x, y;
	u8 spriteId;
	x = gFieldEffectArguments[0];
	y = gFieldEffectArguments[1];
	LogCoordsCameraRelative(&x, &y, 8, 12);

	spriteId = CreateSpriteAtEnd(&gFieldEffectObjectTemplate_RockClimbDust, x, y, 0);
	if (spriteId != MAX_SPRITES)
	{
		struct Sprite* sprite = &gSprites[spriteId];
		sprite->coordOffsetEnabled = TRUE;
		sprite->oam.priority = gFieldEffectArguments[3];
		sprite->data[0] = gFieldEffectArguments[2];
		sprite->data[1] = FLDEFF_ROCK_CLIMB_DUST;
	}

	return 0;
}

bool8 (*const sRockClimbFieldEffectFuncs[])(struct Task*, struct EventObject*) =
{
	[STATE_ROCK_CLIMB_INIT]          = RockClimb_Init,
	[STATE_ROCK_CLIMB_POSE]          = RockClimb_FieldMovePose,
	[STATE_ROCK_CLIMB_SHOW_MON]      = RockClimb_ShowMon,
	[STATE_ROCK_CLIMB_JUMP_ON]       = RockClimb_JumpOnRockClimbBlob,
	[STATE_ROCK_CLIMB_WAIT_JUMP]     = RockClimb_WaitJumpOnRockClimbBlob,
	[STATE_ROCK_CLIMB_RIDE]          = RockClimb_Ride,
	[STATE_ROCK_CLIMB_CONTINUE_RIDE] = RockClimb_ContinueRideOrEnd,
	[STATE_ROCK_CLIMB_STOP_INIT]     = RockClimb_StopRockClimbInit,
	[STATE_ROCK_CLIMB_WAIT_STOP]     = RockClimb_WaitStopRockClimb
};

bool8 FldEff_UseRockClimb(void)
{
	u8 taskId = CreateTask(Task_UseRockClimb, 0xFF);
	if (taskId != 0xFF)
	{
		gTasks[taskId].tMonId = gFieldEffectArguments[0];
		Task_UseRockClimb(taskId);
	}

	return FALSE;
}

static void Task_UseRockClimb(u8 taskId)
{
	while (sRockClimbFieldEffectFuncs[gTasks[taskId].tState](&gTasks[taskId], &gEventObjects[gPlayerAvatar->eventObjectId]));
}

extern void sp09A_StopSounds(void);
static bool8 RockClimb_Init(struct Task *task, struct EventObject* eventObject)
{
	ScriptContext2_Enable();
	FreezeEventObjects();
	gPlayerAvatar->preventStep = TRUE;
	PlayerGetDestCoords(&task->tDestX, &task->tDestY);
	MoveCoords(eventObject->movementDirection, &task->tDestX, &task->tDestY);

	if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_BIKE))
		task->tOnBike = TRUE;

	#ifdef FLAG_BOUGHT_ADM
	if (FlagGet(FLAG_BOUGHT_ADM))
	{
		task->tState = STATE_ROCK_CLIMB_JUMP_ON;
		sp09A_StopSounds();
	}
	else
	#endif
	#ifdef FLAG_SANDBOX_MODE
	if (FlagGet(FLAG_SANDBOX_MODE))
	{
		task->tState = STATE_ROCK_CLIMB_JUMP_ON;
		sp09A_StopSounds();
	}
	else
	#endif
		task->tState++;

	return FALSE;
}

static bool8 RockClimb_FieldMovePose(struct Task *task, struct EventObject *eventObject)
{
	if (!EventObjectIsMovementOverridden(eventObject) || EventObjectClearHeldMovementIfFinished(eventObject))
	{
		SetPlayerAvatarFieldMove();
		EventObjectSetHeldMovement(eventObject, MOVEMENT_ACTION_START_ANIM_IN_DIRECTION);
		task->tState++;
	}

	return FALSE;
}

static bool8 RockClimb_ShowMon(struct Task *task, struct EventObject *eventObject)
{
	if (EventObjectCheckHeldMovementStatus(eventObject))
	{
		gFieldEffectArguments[0] = task->tMonId | 0x80000000;
		FieldEffectStart(FLDEFF_FIELD_MOVE_SHOW_MON_INIT);
		task->tState++;
		return TRUE;
	}
	return FALSE;
}

static bool8 RockClimb_JumpOnRockClimbBlob(struct Task *task, struct EventObject *eventObject)
{
	if (!FieldEffectActiveListContains(FLDEFF_FIELD_MOVE_SHOW_MON))
	{
		PlaySE(SE_HOP);
		EventObjectSetGraphicsId(eventObject, GetPlayerAvatarGraphicsIdByStateId(PLAYER_AVATAR_STATE_SURFING));
		EventObjectClearHeldMovementIfFinished(eventObject);
		EventObjectSetHeldMovement(eventObject, GetJumpSpecialMovementAction(eventObject->movementDirection));
		gFieldEffectArguments[0] = task->tDestX;
		gFieldEffectArguments[1] = task->tDestY;
		gFieldEffectArguments[2] = gPlayerAvatar->eventObjectId;
		eventObject->fieldEffectSpriteId = CreateRockClimbBlob();
		task->tState++;
	}

	return FALSE;
}

static bool8 RockClimb_WaitJumpOnRockClimbBlob(struct Task *task, struct EventObject *eventObject)
{
	if (EventObjectClearHeldMovementIfFinished(eventObject))
	{
		SetSurfBobState(eventObject->fieldEffectSpriteId, 1);
		switch (eventObject->facingDirection)
		{
			case DIR_EAST:
				#ifdef UNBOUND
				//Check southeast, northeast, and then plain east
				if (MetatileBehavior_IsRockClimbableWall(MapGridGetMetatileBehaviorAt(task->tDestX + 1, task->tDestY + 1)))
					task->tMovementDir = DIR_SOUTHEAST;
				else if (MetatileBehavior_IsRockClimbableWall(MapGridGetMetatileBehaviorAt(task->tDestX + 1, task->tDestY - 1)))
					task->tMovementDir = DIR_NORTHEAST;
				else
					task->tMovementDir = DIR_EAST;
				#endif
				break;
			case DIR_WEST:
				#ifdef UNBOUND
				//Check northwest then southwest
				if (MetatileBehavior_IsRockClimbableWall(MapGridGetMetatileBehaviorAt(task->tDestX - 1, task->tDestY - 1)))
					task->tMovementDir = DIR_NORTHWEST;
				else if (MetatileBehavior_IsRockClimbableWall(MapGridGetMetatileBehaviorAt(task->tDestX - 1, task->tDestY + 1)))
					task->tMovementDir = DIR_SOUTHWEST;
				else
					task->tMovementDir = DIR_WEST;
				#endif
				break;
			default:
				task->tMovementDir = eventObject->facingDirection;
		}

		task->tState = STATE_ROCK_CLIMB_CONTINUE_RIDE;
	}

	return FALSE;
}

static void RockClimbDust(struct EventObject *eventObject, u8 direction)
{
	s8 dx = sRockClimbMovement[direction].dx;
	s8 dy = sRockClimbMovement[direction].dy;

	gFieldEffectArguments[0] = eventObject->currentCoords.x + dx;
	gFieldEffectArguments[1] = eventObject->currentCoords.y + dy;
	gFieldEffectArguments[2] = eventObject->elevation;
	gFieldEffectArguments[3] = gSprites[eventObject->spriteId].oam.priority;
	FieldEffectStart(FLDEFF_ROCK_CLIMB_DUST);
}

static bool8 RockClimb_Ride(struct Task *task, struct EventObject *eventObject)
{    
	EventObjectSetHeldMovement(eventObject, sRockClimbMovement[task->tMovementDir].action);
	PlaySE(SE_ROCK_SMASH);
	RockClimbDust(eventObject, task->tMovementDir);
	task->tState++;
	return FALSE;
}

static bool8 RockClimb_ContinueRideOrEnd(struct Task *task, struct EventObject *eventObject)
{
	if (!EventObjectClearHeldMovementIfFinished(eventObject))
		return FALSE;

	TryAttachFollowerToPlayer();
	PlayerGetDestCoords(&task->tDestX, &task->tDestY);
	MoveCoords(task->tMovementDir, &task->tDestX, &task->tDestY);
	if (MetatileBehavior_IsRockClimbableWall(MapGridGetMetatileBehaviorAt(task->tDestX, task->tDestY)))
	{
		task->tState = STATE_ROCK_CLIMB_RIDE;
		return TRUE;
	}

	ScriptContext2_Enable();
	gPlayerAvatar->flags &= ~PLAYER_AVATAR_FLAG_SURFING;
	gPlayerAvatar->flags |= PLAYER_AVATAR_FLAG_ON_FOOT;
	task->tState++;
	return FALSE;
}

static bool8 RockClimb_StopRockClimbInit(struct Task *task, struct EventObject *eventObject)
{
	if (EventObjectIsMovementOverridden(eventObject))
	{
		if (!EventObjectClearHeldMovementIfFinished(eventObject))
			return FALSE;
	}

	PlaySE(SE_ROCK_SMASH);
	RockClimbDust(eventObject, task->tMovementDir); //Dust on final spot
	EventObjectSetHeldMovement(eventObject, GetJumpSpecialMovementAction(sRockClimbMovement[eventObject->movementDirection].jumpDir));
	SetSurfBobState(eventObject->fieldEffectSpriteId, 0);
	task->tState++;
	return TRUE;
}

static bool8 RockClimb_WaitStopRockClimb(unusedArg struct Task *task, struct EventObject *eventObject)
{
	if (EventObjectClearHeldMovementIfFinished(eventObject))
	{
		u8 avatarState = (task->tOnBike) ? PLAYER_AVATAR_STATE_BIKE : PLAYER_AVATAR_STATE_NORMAL;

		EventObjectSetGraphicsId(eventObject, GetPlayerAvatarGraphicsIdByStateId(avatarState));
		EventObjectSetHeldMovement(eventObject, GetFaceDirectionMovementAction(eventObject->facingDirection));
		gPlayerAvatar->preventStep = FALSE;
		ScriptContext2_Disable();
		DestroySprite(&gSprites[eventObject->fieldEffectSpriteId]);
		FieldEffectActiveListRemove(FLDEFF_USE_ROCK_CLIMB);
		eventObject->triggerGroundEffectsOnMove = TRUE;
		DoGroundEffects_OnBeginStep(eventObject, &gSprites[eventObject->spriteId]); //In case you land in tall grass
		DestroyTask(FindTaskIdByFunc(Task_UseRockClimb));
	}

	return FALSE;
}

bool8 IsRockClimbActive(void)
{
	if (FieldEffectActiveListContains(FLDEFF_USE_ROCK_CLIMB))
		return TRUE;
	else
		return FALSE;
}

#undef tState
#undef tDestX
#undef tDestY
#undef tMonId

//Scripts

const struct FieldEffectScript FieldEffectScript_TallGrass =
{
	FLDEFF_CALLASM, FldEff_TallGrass,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_JumpTallGrass =
{
	FLDEFF_CALLASM, FldEff_JumpTallGrassLoadPalette,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_ShakingTallGrass =
{
	FLDEFF_CALLASM, FldEff_ShakingTallGrass,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_LongGrass =
{
	FLDEFF_CALLASM, FldEff_LongGrass,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_JumpLongGrass =
{
	FLDEFF_CALLASM, FldEff_JumpLongGrassLoadPalette,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_ShakingLongGrass =
{
	FLDEFF_CALLASM, FldEff_ShakingLongGrass,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_ShortGrass =
{
	FLDEFF_CALLASM, FldEff_ShortGrass,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_SandFootprints =
{
	FLDEFF_CALLASM, FldEff_SandFootprints,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_BikeTireTracks =
{
	FLDEFF_CALLASM, FldEff_BikeTireTracks,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_Dust =
{
	FLDEFF_CALLASM, FldEff_Dust,
	FLDEFF_END,
};

const struct FieldEffectScript2 FieldEffectScript_CaveDust =
{
	FLDEFF_LOAD_FADED_PAL_CALLASM, &sCaveSmokeSpritePalette, FldEff_CaveDust,
	FLDEFF_END,
};

const struct FieldEffectScript2 FieldEffectScript_Sparkles =
{
	FLDEFF_LOAD_FADED_PAL_CALLASM, &sSparklesSpritePalette, FldEff_Sparkles,
	FLDEFF_END,
};

const struct FieldEffectScript2 FieldEffectScript_LavaBubbles =
{
	FLDEFF_LOAD_FADED_PAL_CALLASM, &sLavaBubblesSpritePalette, (void*) FldEff_LavaBubbles,
	FLDEFF_END,
};

const struct FieldEffectScript FieldEffectScript_MiningScanRing =
{
	FLDEFF_CALLASM, FldEff_MiningScanRing,
	FLDEFF_END,
};



bool8 IsInRockTunnel() 
{
	u8 currRegionMapSecId = GetCurrentRegionMapSectionId();
	if(currRegionMapSecId == MAPSEC_ROCK_TUNNEL)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	return FALSE;
}

extern bool8 sScheduleOpenDottedHole;
extern const struct MapPosition gPlayerFacingPosition;

bool8 SetUpFieldMove_Cut(void)
{
    s16 x, y;
    u8 i, j;
    sScheduleOpenDottedHole = FALSE;
    if (CutMoveRuinValleyCheck() == TRUE)
    {
        sScheduleOpenDottedHole = TRUE;
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_CutGrass;
        return TRUE;
    }

	if (IsInRockTunnel() == TRUE) 
	{
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_CutGrass;
		return TRUE;
	}

    if (CheckObjectGraphicsInFrontOfPlayer(95) == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_CutTree;
        return TRUE;
    }
    
    else
    {
        PlayerGetDestCoords(&gPlayerFacingPosition.x, &gPlayerFacingPosition.y);
    
        for (i = 0; i < 3; i++)
        {
            y = gPlayerFacingPosition.y - 1 + i;
            for (j = 0; j < 3; j++)
            {
                x = gPlayerFacingPosition.x - 1 + j;
                if (MapGridGetZCoordAt(x, y) == gPlayerFacingPosition.height)
                {
                    if (MetatileAtCoordsIsGrassTile(x, y) == TRUE)
                    {
                        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
                        gPostMenuFieldCallback = FieldCallback_CutGrass;
                        return TRUE;
                    }
                }
            }
        }
        return FALSE;
    }
}

extern const u8 EventScript_OpenRegirockDoor[];

void FieldMoveCallback_CutGrass(void)
{
    FieldEffectActiveListRemove(FLDEFF_USE_CUT_ON_GRASS);
    if (sScheduleOpenDottedHole == TRUE)
        CutMoveOpenDottedHoleDoor();
    else if (IsInRockTunnel() == TRUE && !FlagGet(FLAG_REGIROCK_DOOR))
	{
		ScriptContext1_SetupScript(EventScript_OpenRegirockDoor);
		ScriptContext2_Disable();
		return;
	}
	else
        FieldEffectStart(FLDEFF_CUT_GRASS);
}

bool8 IsInPowerPlant() 
{
	u8 currRegionMapSecId = GetCurrentRegionMapSectionId();
	if(currRegionMapSecId == MAPSEC_POWER_PLANT)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	return FALSE;
}

extern const u8 EventScript_OpenRegielekiDoor[];

void OpenRegielekiDoor(void) 
{
	PlaySE(200);
	ScriptContext1_SetupScript(EventScript_OpenRegielekiDoor);
	ScriptContext2_Disable();
}

void FieldCallback_OpenRegielekiDoor(void)
{
	u8 taskId = CreateFieldEffectShowMon();
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
	gTasks[taskId].data[8] = ((uintptr_t)OpenRegielekiDoor) >> 16;
    gTasks[taskId].data[9] = ((uintptr_t)OpenRegielekiDoor);
}

bool8 SetUpFieldMove_Flash(void)
{
    if (IsInPowerPlant() == TRUE && !FlagGet(FLAG_REGIELEKI_DOOR)) 
	{
		gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
		gPostMenuFieldCallback = FieldCallback_OpenRegielekiDoor;
		return TRUE;
	}

    if (gMapHeader.cave != TRUE)
        return FALSE;

    if (FlagGet(FLAG_SYS_FLASH_ACTIVE))
        return FALSE;

    gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
    gPostMenuFieldCallback = FieldCallback_Flash;
    return TRUE;
}

const struct FieldEffectScript FieldEffectScript_Explosion =
{
	FLDEFF_CALLASM, FldEff_Explosion,
	FLDEFF_END,
};


const struct FieldEffectScript2 FieldEffectScript_UseRockClimb =
{
	FLDEFF_LOAD_FADED_PAL_CALLASM, &sBigDustSpritePalette, (void*) FldEff_UseRockClimb,
	FLDEFF_END,
};

const struct FieldEffectScript2 FieldEffectScript_RockClimbDust =
{
	FLDEFF_LOAD_FADED_PAL_CALLASM, &sBigDustSpritePalette, (void*) FldEff_RockClimbDust,
	FLDEFF_END,
};

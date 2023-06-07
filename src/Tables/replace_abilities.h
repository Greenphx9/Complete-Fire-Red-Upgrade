#include "../config.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"
#include "../../include/constants/moves.h"

//Ability names
extern const u8 NAME_IRON_BARBS[];
extern const u8 NAME_PURE_POWER[];
extern const u8 NAME_LIBERO[];
extern const u8 NAME_WIMP_OUT[];
extern const u8 NAME_PROPELLER_TAIL[];
extern const u8 NAME_CHILLING_NEIGH[];
extern const u8 NAME_TANGLING_HAIR[];
extern const u8 NAME_BATTLE_ARMOR[];
extern const u8 NAME_SHADOW_SHIELD[];
extern const u8 NAME_POWER_OF_ALCHEMY[];
extern const u8 NAME_DAZZLING[];
extern const u8 NAME_CRABBY_TACTICS[];
extern const u8 NAME_FULL_METAL_BODY[];
extern const u8 NAME_WHITE_SMOKE[];
extern const u8 NAME_BRAIN_BOND[];
extern const u8 NAME_HUNDRED_LEGS[];
extern const u8 NAME_SOLID_STEEL[];
extern const u8 NAME_TURBOBLAZE[];
extern const u8 NAME_TERAVOLT[];
extern const u8 NAME_STRONG_BEAK[];
extern const u8 NAME_TECTONATE[];
extern const u8 NAME_SUPREME_OVERLORD[];
extern const u8 NAME_ARMOR_TAIL[];
extern const u8 NAME_SHARPNESS[];
extern const u8 NAME_PASTEL_VEIL[];
extern const u8 NAME_MYCELIUM_MIGHT[];
extern const u8 NAME_QUARK_DRIVE[];

//Ability descs
extern const u8 DESC_STRONG_BEAK[];
extern const u8 DESC_TECTONATE[];
extern const u8 DESC_SUPREME_OVERLORD[];
extern const u8 DESC_SHARPNESS[];
extern const u8 DESC_PASTEL_VEIL[];
extern const u8 DESC_MYCELIUM_MIGHT[];
extern const u8 DESC_QUARK_DRIVE[];

static struct ReplaceAbility sReplaceAbilities[] =
{
    {
        .species = SPECIES_FERROSEED,
        .currAbility = ABILITY_ROUGHSKIN,
        .replaceAbilityString = NAME_IRON_BARBS,
    },
    {
        .species = SPECIES_FERROTHORN,
        .currAbility = ABILITY_ROUGHSKIN,
        .replaceAbilityString = NAME_IRON_BARBS,
    },
    {
        .species = SPECIES_TOGEDEMARU,
        .currAbility = ABILITY_ROUGHSKIN,
        .replaceAbilityString = NAME_IRON_BARBS,
    },
 {
        .species = SPECIES_MEDITITE,
        .currAbility = ABILITY_HUGEPOWER, 
        .replaceAbilityString = NAME_PURE_POWER,
    },
    {
        .species = SPECIES_MEDICHAM,
        .currAbility = ABILITY_HUGEPOWER,
        .replaceAbilityString = NAME_PURE_POWER,
    },
    {
        .species = SPECIES_MEDICHAM_MEGA,
        .currAbility = ABILITY_HUGEPOWER,
        .replaceAbilityString = NAME_PURE_POWER,
    },
    {
        .species = SPECIES_SCORBUNNY,
        .currAbility = ABILITY_PROTEAN,
        .replaceAbilityString = NAME_LIBERO,
    },
    {
        .species = SPECIES_RABOOT,
        .currAbility = ABILITY_PROTEAN,
        .replaceAbilityString = NAME_LIBERO,
    },
    {
        .species = SPECIES_CINDERACE,
        .currAbility = ABILITY_PROTEAN,
        .replaceAbilityString = NAME_LIBERO,
    },
    {
        .species = SPECIES_CINDERACE_GIGA,
        .currAbility = ABILITY_PROTEAN,
        .replaceAbilityString = NAME_LIBERO,
    },
    {
        .species = SPECIES_WIMPOD,
        .currAbility = ABILITY_EMERGENCYEXIT,
        .replaceAbilityString = NAME_WIMP_OUT,
    },
    {
        .species = SPECIES_ARROKUDA,
        .currAbility = ABILITY_STALWART,
        .replaceAbilityString = NAME_PROPELLER_TAIL,
    },
    {
        .species = SPECIES_BARRASKEWDA,
        .currAbility = ABILITY_STALWART,
        .replaceAbilityString = NAME_PROPELLER_TAIL,
    },
    {
        .species = SPECIES_GLASTRIER,
        .currAbility = ABILITY_MOXIE,
        .replaceAbilityString = NAME_CHILLING_NEIGH,
    },
    {
        .species = SPECIES_DIGLETT_A,
        .currAbility = ABILITY_GOOEY,
        .replaceAbilityString = NAME_TANGLING_HAIR,
    },
    {
        .species = SPECIES_DUGTRIO_A,
        .currAbility = ABILITY_GOOEY,
        .replaceAbilityString = NAME_TANGLING_HAIR,
    },
    {
        .species = SPECIES_CUBONE,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_MAROWAK,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_KABUTO,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_KABUTOPS,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_ANORITH,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_ARMALDO,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_SKORUPI,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_DRAPION,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_TYPE_NULL,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_PERRSERKER,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_FALINKS,
        .currAbility = ABILITY_SHELLARMOR,
        .replaceAbilityString = NAME_BATTLE_ARMOR,
    },
    {
        .species = SPECIES_LUNALA,
        .currAbility = ABILITY_MULTISCALE,
        .replaceAbilityString = NAME_SHADOW_SHIELD,
    },
    {
        .species = SPECIES_GRIMER_A,
        .currAbility = ABILITY_RECEIVER,
        .replaceAbilityString = NAME_POWER_OF_ALCHEMY,
    },
    {
        .species = SPECIES_MUK_A,
        .currAbility = ABILITY_RECEIVER,
        .replaceAbilityString = NAME_POWER_OF_ALCHEMY,
    },
    {
        .species = SPECIES_BRUXISH,
        .currAbility = ABILITY_QUEENLYMAJESTY,
        .replaceAbilityString = NAME_DAZZLING,
    },
    {
        .species = SPECIES_LUMINEON,
        .currAbility = ABILITY_QUEENLYMAJESTY,
        .replaceAbilityString = NAME_DAZZLING,
    },
    {
        .species = SPECIES_KINGLER,
        .currAbility = ABILITY_GORILLATACTICS,
        .replaceAbilityString = NAME_CRABBY_TACTICS,
    },
    {
        .species = SPECIES_CRABOMINABLE,
        .currAbility = ABILITY_GORILLATACTICS,
        .replaceAbilityString = NAME_CRABBY_TACTICS,
    },
    {
        .species = SPECIES_SOLGALEO,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_FULL_METAL_BODY,
    },
    {
        .species = SPECIES_MELMETAL_GIGA,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_FULL_METAL_BODY,
    },
    {
        .species = SPECIES_TORKOAL,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_HEATMOR,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_SIZZLIPEDE,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_CENTISKORCH,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_GIRAFARIG,
        .currAbility = ABILITY_PARENTALBOND,
        .replaceAbilityString = NAME_BRAIN_BOND,
    },
    {
        .species = SPECIES_FARIGIRAF,
        .currAbility = ABILITY_PARENTALBOND,
        .replaceAbilityString = NAME_BRAIN_BOND,
    },
    {
        .species = SPECIES_FARIGIRAF,
        .currAbility = ABILITY_QUEENLYMAJESTY,
        .replaceAbilityString = NAME_ARMOR_TAIL,
    },
    {
        .species = SPECIES_SIZZLIPEDE,
        .currAbility = ABILITY_PARENTALBOND,
        .replaceAbilityString = NAME_HUNDRED_LEGS,
    },
    {
        .species = SPECIES_CENTISKORCH,
        .currAbility = ABILITY_PARENTALBOND,
        .replaceAbilityString = NAME_HUNDRED_LEGS,
    },
    {
        .species = SPECIES_CENTISKORCH_GIGA,
        .currAbility = ABILITY_PARENTALBOND,
        .replaceAbilityString = NAME_HUNDRED_LEGS,
    },
    {
        .species = SPECIES_DURALUDON_GIGA,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_SOLID_STEEL,
    },
    {
        .species = SPECIES_RESHIRAM,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TURBOBLAZE,
    },
    {
        .species = SPECIES_KYUREM_WHITE,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TURBOBLAZE,
    },
    {
        .species = SPECIES_ZEKROM,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TERAVOLT,
    },
    {
        .species = SPECIES_KYUREM_BLACK,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TERAVOLT,
    },
    {
        .species = SPECIES_FEAROW,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_STRONG_BEAK,
        .replaceDescString = DESC_STRONG_BEAK,
    },
    {
        .species = SPECIES_PIKIPEK,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_STRONG_BEAK,
        .replaceDescString = DESC_STRONG_BEAK,
    },
    {
        .species = SPECIES_TRUMBEAK,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_STRONG_BEAK,
        .replaceDescString = DESC_STRONG_BEAK,
    },
    {
        .species = SPECIES_TOUCANNON,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_STRONG_BEAK,
        .replaceDescString = DESC_STRONG_BEAK,
    },
    {
        .species = SPECIES_VIBRAVA,
        .currAbility = ABILITY_TRANSISTOR,
        .replaceAbilityString = NAME_TECTONATE,
        .replaceDescString = DESC_TECTONATE,
    },
    {
        .species = SPECIES_FLYGON,
        .currAbility = ABILITY_TRANSISTOR,
        .replaceAbilityString = NAME_TECTONATE,
        .replaceDescString = DESC_TECTONATE,
    },
    {
        .species = SPECIES_KINGAMBIT,
        .currAbility = ABILITY_HUGEPOWER,
        .replaceAbilityString = NAME_SUPREME_OVERLORD,
        .replaceDescString = DESC_SUPREME_OVERLORD,
    },
    {
        .species = SPECIES_GALLADE,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_SHARPNESS,
        .replaceDescString = DESC_SHARPNESS,
    },
    {
        .species = SPECIES_GALLADE_MEGA,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_SHARPNESS,
        .replaceDescString = DESC_SHARPNESS,
    },
    {
        .species = SPECIES_SAMUROTT_H,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_SHARPNESS,
        .replaceDescString = DESC_SHARPNESS,
    },
    {
        .species = SPECIES_KLEAVOR,
        .currAbility = ABILITY_IRONKICK,
        .replaceAbilityString = NAME_SHARPNESS,
        .replaceDescString = DESC_SHARPNESS,
    },
    {
        .species = SPECIES_PONYTA_G,
        .currAbility = ABILITY_SWEETVEIL,
        .replaceAbilityString = NAME_PASTEL_VEIL,
        .replaceDescString = DESC_PASTEL_VEIL,
    },
    {
        .species = SPECIES_RAPIDASH_G,
        .currAbility = ABILITY_SWEETVEIL,
        .replaceAbilityString = NAME_PASTEL_VEIL,
        .replaceDescString = DESC_PASTEL_VEIL,
    },
    {
        .species = SPECIES_TOEDSCOOL,
        .currAbility = ABILITY_STALL,
        .replaceAbilityString = NAME_MYCELIUM_MIGHT,
        .replaceDescString = DESC_MYCELIUM_MIGHT,
    },
    {
        .species = SPECIES_TOEDSCRUEL,
        .currAbility = ABILITY_STALL,
        .replaceAbilityString = NAME_MYCELIUM_MIGHT,
        .replaceDescString = DESC_MYCELIUM_MIGHT,
    },
    {
        .species = SPECIES_IRON_TREADS,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
    {
        .species = SPECIES_IRON_BUNDLE,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
    {
        .species = SPECIES_IRON_HANDS,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
    {
        .species = SPECIES_IRON_JUGULIS,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
    {
        .species = SPECIES_IRON_MOTH,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
    {
        .species = SPECIES_IRON_THORNS,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
    {
        .species = SPECIES_IRON_VALIANT,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
    {
        .species = SPECIES_IRON_LEAVES,
        .currAbility = ABILITY_PROTOSYNTHESIS,
        .replaceAbilityString = NAME_QUARK_DRIVE,
        .replaceDescString = DESC_QUARK_DRIVE,
    },
};
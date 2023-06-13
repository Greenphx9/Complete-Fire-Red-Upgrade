#include "../config.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"
#include "../../include/constants/moves.h"

#define MOVE_UNAVAILABLE 0xFFFF
//Credits to AsparagusEduardo & rh-hideout team.

static const u16 sToedscoolTeachableLearnset[] = {
    MOVE_ACIDSPRAY,
    MOVE_ACUPRESSURE,
    MOVE_BULLETSEED,
    MOVE_CONFUSERAY,
    MOVE_DAZZLINGGLEAM,
    MOVE_EARTHPOWER,
    MOVE_ENDURE,
    MOVE_ENERGYBALL,
    MOVE_FLASHCANNON,
    MOVE_FOULPLAY,
    MOVE_GIGADRAIN,
    MOVE_GRASSKNOT,
    MOVE_GRASSYTERRAIN,
    MOVE_HEX,
    MOVE_KNOCKOFF,
    MOVE_LEAFSTORM,
    MOVE_LEECHSEED,
    MOVE_LIGHTSCREEN,
    MOVE_MAGICALLEAF,
    MOVE_MIRRORCOAT,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_PROTECT,
    MOVE_RAGEPOWDER,
    MOVE_RAINDANCE,
    MOVE_RAPIDSPIN,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_SCARYFACE,
    MOVE_SEEDBOMB,
    MOVE_SLEEPTALK,
    MOVE_SLUDGEBOMB,
    MOVE_SOLARBEAM,
    MOVE_SPIKES,
    MOVE_SUBSTITUTE,
    MOVE_SWIFT,
    MOVE_TAUNT,
    MOVE_TICKLE,
    MOVE_TOXIC,
    MOVE_TOXICSPIKES,
    MOVE_TRICKROOM,
    MOVE_VENOSHOCK,
    MOVE_ATTRACT,
    MOVE_CAPTIVATE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sToedscruelTeachableLearnset[] = {
    MOVE_ACIDSPRAY,
    MOVE_ACUPRESSURE,
    MOVE_BULLETSEED,
    MOVE_CONFUSERAY,
    MOVE_DAZZLINGGLEAM,
    MOVE_EARTHPOWER,
    MOVE_ENDURE,
    MOVE_ENERGYBALL,
    MOVE_FLASHCANNON,
    MOVE_FOULPLAY,
    MOVE_GIGADRAIN,
    MOVE_GIGAIMPACT,
    MOVE_GRASSKNOT,
    MOVE_GRASSYTERRAIN,
    MOVE_HEX,
    MOVE_HYPERBEAM,
    MOVE_KNOCKOFF,
    MOVE_LEAFSTORM,
    MOVE_LEECHSEED,
    MOVE_LIGHTSCREEN,
    MOVE_MAGICALLEAF,
    MOVE_MIRRORCOAT,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_PROTECT,
    MOVE_RAGEPOWDER,
    MOVE_RAINDANCE,
    MOVE_RAPIDSPIN,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_SCARYFACE,
    MOVE_SEEDBOMB,
    MOVE_SLEEPTALK,
    MOVE_SLUDGEBOMB,
    MOVE_SOLARBEAM,
    MOVE_SPIKES,
    MOVE_SUBSTITUTE,
    MOVE_SWIFT,
    MOVE_TAUNT,
    MOVE_TICKLE,
    MOVE_TOXIC,
    MOVE_TOXICSPIKES,
    MOVE_TRICKROOM,
    MOVE_VENOSHOCK,
    MOVE_ATTRACT,
    MOVE_CAPTIVATE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE
};

static const u16 sWiglettTeachableLearnset[] = {
    MOVE_AGILITY,
    MOVE_BLIZZARD,
    MOVE_BULLDOZE,
    MOVE_CHILLINGWATER,
    MOVE_DIG,
    MOVE_EARTHPOWER,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FINALGAMBIT,
    MOVE_FOULPLAY,
    MOVE_HELPINGHAND,
    MOVE_HYDROPUMP,
    MOVE_ICEBEAM,
    MOVE_LIQUIDATION,
    MOVE_MEMENTO,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_SANDSTORM,
    MOVE_SLEEPTALK,
    MOVE_STOMPINGTANTRUM,
    MOVE_SUBSTITUTE,
    MOVE_SURF,
    MOVE_SWIFT,
    MOVE_TAKEDOWN,
    MOVE_WATERPULSE,
    MOVE_ATTRACT,
    MOVE_CAPTIVATE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sWugtrioTeachableLearnset[] = {
    MOVE_AGILITY,
    MOVE_BLIZZARD,
    MOVE_BULLDOZE,
    MOVE_CHILLINGWATER,
    MOVE_DIG,
    MOVE_EARTHPOWER,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FINALGAMBIT,
    MOVE_FOULPLAY,
    MOVE_GIGAIMPACT,
    MOVE_HELPINGHAND,
    MOVE_HYDROPUMP,
    MOVE_HYPERBEAM,
    MOVE_ICEBEAM,
    MOVE_LIQUIDATION,
    MOVE_MEMENTO,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_SANDSTORM,
    MOVE_SLEEPTALK,
    MOVE_STOMPINGTANTRUM,
    MOVE_SUBSTITUTE,
    MOVE_SURF,
    MOVE_SWIFT,
    MOVE_TAKEDOWN,
    MOVE_WATERPULSE,
    MOVE_ATTRACT,
    MOVE_CAPTIVATE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sPaldeanWooperTeachableLearnset[] = {
    MOVE_ACIDSPRAY,
    MOVE_AFTERYOU,
    MOVE_AMNESIA,
    MOVE_ANCIENTPOWER,
    MOVE_AVALANCHE,
    MOVE_BLIZZARD,
    MOVE_BODYSLAM,
    MOVE_BULLDOZE,
    MOVE_CHILLINGWATER,
    MOVE_COUNTER,
    MOVE_CURSE,
    MOVE_DIG,
    MOVE_DOUBLEKICK,
    MOVE_EARTHPOWER,
    MOVE_EARTHQUAKE,
    MOVE_ENCORE,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_HAIL,
    MOVE_HELPINGHAND,
    MOVE_HYDROPUMP,
    MOVE_ICEBEAM,
    MOVE_ICYWIND,
    MOVE_LIQUIDATION,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_RECOVER,
    MOVE_REST,
    MOVE_ROCKSLIDE,
    MOVE_ROCKTOMB,
    MOVE_SANDSTORM,
    MOVE_SLEEPTALK,
    MOVE_SLUDGEBOMB,
    MOVE_SPIKES,
    MOVE_SPITUP,
    MOVE_STEALTHROCK,
    MOVE_STOCKPILE,
    MOVE_STOMPINGTANTRUM,
    MOVE_STONEEDGE,
    MOVE_SUBSTITUTE,
    MOVE_SURF,
    MOVE_SWALLOW,
    MOVE_TAKEDOWN,
    MOVE_TRAILBLAZE,
    MOVE_TOXIC,
    MOVE_WATERFALL,
    MOVE_WATERPULSE,
    MOVE_ATTRACT,
    MOVE_CAPTIVATE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sClodsireTeachableLearnset[] = {
    MOVE_ACIDSPRAY,
    MOVE_AFTERYOU,
    MOVE_AMNESIA,
    MOVE_ANCIENTPOWER,
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BULLDOZE,
    MOVE_CHILLINGWATER,
    MOVE_COUNTER,
    MOVE_CURSE,
    MOVE_DIG,
    MOVE_DOUBLEKICK,
    MOVE_EARTHPOWER,
    MOVE_EARTHQUAKE,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_GIGAIMPACT,
    MOVE_GUNKSHOT,
    MOVE_HAZE,
    MOVE_HEAVYSLAM,
    MOVE_HELPINGHAND,
    MOVE_HYDROPUMP,
    MOVE_HYPERBEAM,
    MOVE_IRONHEAD,
    MOVE_LIQUIDATION,
    MOVE_LOWKICK,
    MOVE_MIST,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_POISONJAB,
    MOVE_POISONTAIL,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_RECOVER,
    MOVE_REST,
    MOVE_ROCKSLIDE,
    MOVE_ROCKTOMB,
    MOVE_SANDSTORM,
    MOVE_SLEEPTALK,
    MOVE_SLUDGEBOMB,
    MOVE_SPIKES,
    MOVE_SPITUP,
    MOVE_STEALTHROCK,
    MOVE_STOCKPILE,
    MOVE_STOMPINGTANTRUM,
    MOVE_STONEEDGE,
    MOVE_SUBSTITUTE,
    MOVE_SURF,
    MOVE_SWALLOW,
    MOVE_TAKEDOWN,
    MOVE_TOXICSPIKES,
    MOVE_TRAILBLAZE,
    MOVE_TOXIC,
    MOVE_VENOSHOCK,
    MOVE_WATERFALL,
    MOVE_WATERPULSE,
    MOVE_ZENHEADBUTT,
    MOVE_ATTRACT,
    MOVE_CAPTIVATE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sGreatTuskTeachableLearnset[] = {
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BRICKBREAK,
    MOVE_BULKUP,
    MOVE_BULLDOZE,
    MOVE_CLOSECOMBAT,
    MOVE_DIG,
    MOVE_EARTHPOWER,
    MOVE_EARTHQUAKE,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FIREFANG,
    MOVE_FLASHCANNON,
    MOVE_GIGAIMPACT,
    MOVE_HEAVYSLAM,
    MOVE_HYPERBEAM,
    MOVE_ICEFANG,
    MOVE_ICESPINNER,
    MOVE_IRONHEAD,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_PLAYROUGH,
    MOVE_PROTECT,
    MOVE_PSYSHOCK,
    MOVE_REST,
    MOVE_REVERSAL,
    MOVE_ROCKSLIDE,
    MOVE_ROCKTOMB,
    MOVE_SANDSTORM,
    MOVE_SCARYFACE,
    MOVE_SLEEPTALK,
    MOVE_SMARTSTRIKE,
    MOVE_STEALTHROCK,
    MOVE_STOMPINGTANTRUM,
    MOVE_STONEEDGE,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_TAKEDOWN,
    MOVE_TAUNT,
    MOVE_THUNDERFANG,
    MOVE_ZENHEADBUTT,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sScreamTailTeachableLearnset[] = {
    MOVE_AMNESIA,
    MOVE_BATONPASS,
    MOVE_BLIZZARD,
    MOVE_BODYSLAM,
    MOVE_BULKUP,
    MOVE_CALMMIND,
    MOVE_CRUNCH,
    MOVE_DAZZLINGGLEAM,
    MOVE_DIG,
    MOVE_DRAINPUNCH,
    MOVE_ENCORE,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FAKETEARS,
    MOVE_FIREBLAST,
    MOVE_FIREFANG,
    MOVE_FIREPUNCH,
    MOVE_FLAMETHROWER,
    MOVE_FLING,
    MOVE_FOCUSBLAST,
    MOVE_GIGAIMPACT,
    MOVE_GRASSKNOT,
    MOVE_HAIL,
    MOVE_HELPINGHAND,
    MOVE_HYPERBEAM,
    MOVE_HYPERVOICE,
    MOVE_ICEBEAM,
    MOVE_ICEFANG,
    MOVE_ICEPUNCH,
    MOVE_IMPRISON,
    MOVE_LIGHTSCREEN,
    MOVE_METRONOME,
    MOVE_MISTYTERRAIN,
    MOVE_PLAYROUGH,
    MOVE_PROTECT,
    MOVE_PSYBEAM,
    MOVE_PSYCHIC,
    MOVE_PSYCHICFANGS,
    MOVE_PSYCHICTERRAIN,
    MOVE_PSYSHOCK,
    MOVE_RAINDANCE,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_ROCKTOMB,
    MOVE_SANDSTORM,
    MOVE_SCARYFACE,
    MOVE_SLEEPTALK,
    MOVE_STEALTHROCK,
    MOVE_STOMPINGTANTRUM,
    MOVE_STOREDPOWER,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_TAKEDOWN,
    //MOVE_TERABLAST,
    MOVE_THUNDER,
    MOVE_THUNDERBOLT,
    MOVE_THUNDERFANG,
    MOVE_THUNDERPUNCH,
    MOVE_THUNDERWAVE,
    MOVE_TRICK,
    MOVE_TRICKROOM,
    MOVE_WATERPULSE,
    MOVE_ZENHEADBUTT,
    MOVE_REST,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sBruteBonnetTeachableLearnset[] = {
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BULLETSEED,
    MOVE_CLOSECOMBAT,
    MOVE_CONFUSERAY,
    MOVE_CRUNCH,
    MOVE_DARKPULSE,
    MOVE_EARTHPOWER,
    MOVE_ENDURE,
    MOVE_ENERGYBALL,
    MOVE_FACADE,
    MOVE_GIGADRAIN,
    MOVE_GIGAIMPACT,
    MOVE_GRASSKNOT,
    MOVE_GRASSYTERRAIN,
    MOVE_HEX,
    MOVE_HYPERBEAM,
    MOVE_LEAFSTORM,
    MOVE_MAGICALLEAF,
    MOVE_OUTRAGE,
    MOVE_POLLENPUFF,
    MOVE_PROTECT,
    MOVE_REST,
    MOVE_SCARYFACE,
    MOVE_SEEDBOMB,
    MOVE_SLEEPTALK,
    MOVE_SOLARBEAM,
    MOVE_STOMPINGTANTRUM,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_TAUNT,
    MOVE_THIEF,
    MOVE_TRAILBLAZE,
    MOVE_VENOSHOCK,
    MOVE_ZENHEADBUTT,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sFlutterManeTeachableLearnset[] = {
    MOVE_CALMMIND,
    MOVE_CHARGEBEAM,
    MOVE_CHARM,
    MOVE_CONFUSERAY,
    MOVE_DARKPULSE,
    MOVE_DAZZLINGGLEAM,
    MOVE_DISARMINGVOICE,
    MOVE_DRAININGKISS,
    MOVE_ENDURE,
    MOVE_ENERGYBALL,
    MOVE_FAKETEARS,
    MOVE_GIGAIMPACT,
    MOVE_HELPINGHAND,
    MOVE_HEX,
    MOVE_HYPERBEAM,
    MOVE_HYPERVOICE,
    MOVE_ICYWIND,
    MOVE_IMPRISON,
    MOVE_MAGICALLEAF,
    MOVE_MISTYTERRAIN,
    MOVE_NIGHTSHADE,
    MOVE_PHANTOMFORCE,
    MOVE_POWERGEM,
    MOVE_PROTECT,
    MOVE_PSYBEAM,
    MOVE_PSYSHOCK,
    MOVE_REST,
    MOVE_SHADOWBALL,
    MOVE_SLEEPTALK,
    MOVE_STOREDPOWER,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_SWIFT,
    MOVE_TAUNT,
    MOVE_THUNDER,
    MOVE_THUNDERBOLT,
    MOVE_THUNDERWAVE,
    MOVE_TRICKROOM,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sSlitherWingTeachableLearnset[] = {
    MOVE_ACROBATICS,
    MOVE_AERIALACE,
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BRICKBREAK,
    MOVE_BUGBUZZ,
    MOVE_BULKUP,
    MOVE_CLOSECOMBAT,
    MOVE_EARTHQUAKE,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FLAMECHARGE,
    MOVE_FLAREBLITZ,
    MOVE_GIGADRAIN,
    MOVE_GIGAIMPACT,
    MOVE_HEATWAVE,
    MOVE_HEAVYSLAM,
    MOVE_HURRICANE,
    MOVE_HYPERBEAM,
    MOVE_LEECHLIFE,
    MOVE_LOWKICK,
    MOVE_LOWSWEEP,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_REVERSAL,
    MOVE_SANDSTORM,
    MOVE_SLEEPTALK,
    MOVE_STOMPINGTANTRUM,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_TAKEDOWN,
    MOVE_TRAILBLAZE,
    MOVE_UTURN,
    MOVE_WILDCHARGE,
    MOVE_WILLOWISP,
    MOVE_ZENHEADBUTT,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sSandyShocksTeachableLearnset[] = {
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BULLDOZE,
    MOVE_CHARGEBEAM,
    MOVE_EARTHPOWER,
    MOVE_EARTHQUAKE,
    MOVE_EERIEIMPULSE,
    MOVE_ELECTRICTERRAIN,
    MOVE_ELECTROBALL,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FLASHCANNON,
    MOVE_GIGAIMPACT,
    MOVE_HEAVYSLAM,
    MOVE_HYPERBEAM,
    MOVE_IRONDEFENSE,
    MOVE_LIGHTSCREEN,
    MOVE_MUDSHOT,
    MOVE_POWERGEM,
    MOVE_PROTECT,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_SANDSTORM,
    MOVE_SLEEPTALK,
    MOVE_SPIKES,
    MOVE_STEALTHROCK,
    MOVE_STOMPINGTANTRUM,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_SWIFT,
    MOVE_TAKEDOWN,
    MOVE_THUNDER,
    MOVE_THUNDERBOLT,
    MOVE_THUNDERWAVE,
    MOVE_VOLTSWITCH,
    MOVE_WILDCHARGE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sRoaringMoonTeachableLearnset[] = {
    MOVE_ACROBATICS,
    MOVE_AERIALACE,
    MOVE_AIRSLASH,
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BRICKBREAK,
    MOVE_CRUNCH,
    MOVE_DARKPULSE,
    MOVE_DIG,
    MOVE_DRACOMETEOR,
    MOVE_DRAGONCLAW,
    MOVE_DRAGONDANCE,
    MOVE_DRAGONPULSE,
    MOVE_DRAGONTAIL,
    MOVE_EARTHQUAKE,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FIREBLAST,
    MOVE_FIREFANG,
    MOVE_FIRESPIN,
    MOVE_FLAMETHROWER,
    MOVE_FLY,
    MOVE_GIGAIMPACT,
    MOVE_HEATWAVE,
    MOVE_HURRICANE,
    MOVE_HYDROPUMP,
    MOVE_HYPERBEAM,
    MOVE_HYPERVOICE,
    MOVE_IRONHEAD,
    MOVE_METALCLAW,
    MOVE_OUTRAGE,
    MOVE_PROTECT,
    MOVE_REST,
    MOVE_ROCKSLIDE,
    MOVE_SCARYFACE,
    MOVE_SHADOWCLAW,
    MOVE_SLEEPTALK,
    MOVE_SNARL,
    MOVE_STOMPINGTANTRUM,
    MOVE_STONEEDGE,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_TAILWIND,
    MOVE_TAKEDOWN,
    MOVE_TAUNT,
    MOVE_THUNDERFANG,
    MOVE_UTURN,
    MOVE_XSCISSOR,
    MOVE_ZENHEADBUTT,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sWalkingWakeTeachableLearnset[] = {
    MOVE_AGILITY,
    MOVE_BODYSLAM,
    MOVE_CHILLINGWATER,
    MOVE_DRACOMETEOR,
    MOVE_DRAGONCLAW,
    MOVE_DRAGONDANCE,
    MOVE_DRAGONTAIL,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FIREFANG,
    MOVE_FLAMETHROWER,
    MOVE_GIGAIMPACT,
    MOVE_HURRICANE,
    MOVE_HYDROPUMP,
    MOVE_HYPERBEAM,
    MOVE_LOWKICK,
    MOVE_MUDSHOT,
    MOVE_OUTRAGE,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_SCARYFACE,
    MOVE_SLEEPTALK,
    MOVE_SNARL,
    MOVE_SUNNYDAY,
    MOVE_SURF,
    MOVE_SWIFT,
    MOVE_TAKEDOWN,
    MOVE_WATERFALL,
    MOVE_WATERPULSE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronTreadsTeachableLearnset[] = {
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BULLDOZE,
    MOVE_EARTHPOWER,
    MOVE_EARTHQUAKE,
    MOVE_ELECTRICTERRAIN,
    MOVE_ELECTROBALL,
    MOVE_FACADE,
    MOVE_FLASHCANNON,
    MOVE_GIGAIMPACT,
    MOVE_HEAVYSLAM,
    MOVE_HYPERBEAM,
    MOVE_ICEFANG,
    MOVE_ICESPINNER,
    MOVE_IRONDEFENSE,
    MOVE_IRONHEAD,
    MOVE_MUDSHOT,
    MOVE_MUDSLAP,
    MOVE_PROTECT,
    MOVE_REST,
    MOVE_ROCKSLIDE,
    MOVE_ROCKTOMB,
    MOVE_SANDSTORM,
    MOVE_SCARYFACE,
    MOVE_SMARTSTRIKE,
    MOVE_STEALTHROCK,
    MOVE_STEELBEAM,
    MOVE_STOMPINGTANTRUM,
    MOVE_STONEEDGE,
    MOVE_SUBSTITUTE,
    MOVE_TAKEDOWN,
    MOVE_THUNDER,
    MOVE_THUNDERFANG,
    MOVE_VOLTSWITCH,
    MOVE_WILDCHARGE,
    MOVE_ZENHEADBUTT,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronBundleTeachableLearnset[] = {
    MOVE_ACROBATICS,
    MOVE_AGILITY,
    MOVE_AIRCUTTER,
    MOVE_AVALANCHE,
    MOVE_BLIZZARD,
    MOVE_BODYSLAM,
    MOVE_CHILLINGWATER,
    MOVE_ELECTRICTERRAIN,
    MOVE_ENCORE,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FLING,
    MOVE_GIGAIMPACT,
    MOVE_HAIL,
    MOVE_HELPINGHAND,
    MOVE_HYDROPUMP,
    MOVE_HYPERBEAM,
    MOVE_ICEBEAM,
    MOVE_ICEPUNCH,
    MOVE_ICESPINNER,
    MOVE_ICYWIND,
    MOVE_PLAYROUGH,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_SLEEPTALK,
    MOVE_SUBSTITUTE,
    MOVE_SWIFT,
    MOVE_TAKEDOWN,
    MOVE_TAUNT,
    MOVE_THIEF,
    MOVE_UTURN,
    MOVE_WATERPULSE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronHandsTeachableLearnset[] = {
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BRICKBREAK,
    MOVE_BULLDOZE,
    MOVE_CLOSECOMBAT,
    MOVE_DRAINPUNCH,
    MOVE_EARTHQUAKE,
    MOVE_ELECTRICTERRAIN,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FIREPUNCH,
    MOVE_FLING,
    MOVE_FOCUSBLAST,
    MOVE_GIGAIMPACT,
    MOVE_HEAVYSLAM,
    MOVE_HYPERBEAM,
    MOVE_ICEPUNCH,
    MOVE_IRONDEFENSE,
    MOVE_IRONHEAD,
    MOVE_LOWKICK,
    MOVE_LOWSWEEP,
    MOVE_METRONOME,
    MOVE_PLAYROUGH,
    MOVE_PROTECT,
    MOVE_REST,
    MOVE_REVERSAL,
    MOVE_ROCKSLIDE,
    MOVE_ROCKTOMB,
    MOVE_SCARYFACE,
    MOVE_SLEEPTALK,
    MOVE_STOMPINGTANTRUM,
    MOVE_SUBSTITUTE,
    MOVE_SWORDSDANCE,
    MOVE_TAKEDOWN,
    MOVE_THUNDER,
    MOVE_THUNDERBOLT,
    MOVE_THUNDERPUNCH,
    MOVE_VOLTSWITCH,
    MOVE_WILDCHARGE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronJugulisTeachableLearnset[] = {
    MOVE_ACROBATICS,
    MOVE_AIRCUTTER,
    MOVE_AIRSLASH,
    MOVE_BODYSLAM,
    MOVE_CHARGEBEAM,
    MOVE_CRUNCH,
    MOVE_DARKPULSE,
    MOVE_DRAGONPULSE,
    MOVE_DRAGONTAIL,
    MOVE_EARTHPOWER,
    MOVE_ELECTRICTERRAIN,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FIREBLAST,
    MOVE_FIREFANG,
    MOVE_FLAMETHROWER,
    MOVE_FLASHCANNON,
    MOVE_FLY,
    MOVE_FOCUSBLAST,
    MOVE_GIGAIMPACT,
    MOVE_HEATWAVE,
    MOVE_HURRICANE,
    MOVE_HYDROPUMP,
    MOVE_HYPERBEAM,
    MOVE_HYPERVOICE,
    MOVE_IRONHEAD,
    MOVE_OUTRAGE,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_ROCKTOMB,
    MOVE_SCARYFACE,
    MOVE_SLEEPTALK,
    MOVE_SNARL,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_TAILWIND,
    MOVE_TAKEDOWN,
    MOVE_TAUNT,
    MOVE_UTURN,
    MOVE_ZENHEADBUTT,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronMothTeachableLearnset[] = {
    MOVE_ACIDSPRAY,
    MOVE_ACROBATICS,
    MOVE_AGILITY,
    MOVE_AIRSLASH,
    MOVE_BUGBUZZ,
    MOVE_CHARGEBEAM,
    MOVE_CONFUSERAY,
    MOVE_DAZZLINGGLEAM,
    MOVE_ELECTRICTERRAIN,
    MOVE_ENDURE,
    MOVE_ENERGYBALL,
    MOVE_FACADE,
    MOVE_FIREBLAST,
    MOVE_FIRESPIN,
    MOVE_FLAMECHARGE,
    MOVE_FLAMETHROWER,
    MOVE_FLAREBLITZ,
    MOVE_FLASHCANNON,
    MOVE_GIGAIMPACT,
    MOVE_HEATWAVE,
    MOVE_HELPINGHAND,
    MOVE_HURRICANE,
    MOVE_HYPERBEAM,
    MOVE_LIGHTSCREEN,
    MOVE_OVERHEAT,
    //MOVE_POUNCE,
    MOVE_PROTECT,
    MOVE_PSYCHIC,
    MOVE_REST,
    MOVE_SLEEPTALK,
    MOVE_SOLARBEAM,
    MOVE_STRUGGLEBUG,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_SWIFT,
    MOVE_TAKEDOWN,
    MOVE_TOXICSPIKES,
    MOVE_UTURN,
    MOVE_VENOSHOCK,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronThornsTeachableLearnset[] = {
    MOVE_BLIZZARD,
    MOVE_BODYPRESS,
    MOVE_BODYSLAM,
    MOVE_BRICKBREAK,
    MOVE_BULLDOZE,
    MOVE_CHARGEBEAM,
    MOVE_CRUNCH,
    MOVE_DIG,
    MOVE_DRAGONCLAW,
    MOVE_DRAGONDANCE,
    MOVE_DRAGONTAIL,
    MOVE_EARTHPOWER,
    MOVE_EARTHQUAKE,
    MOVE_EERIEIMPULSE,
    MOVE_ELECTRICTERRAIN,
    MOVE_ELECTROBALL,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FIREBLAST,
    MOVE_FIREFANG,
    MOVE_FIREPUNCH,
    MOVE_FLAMETHROWER,
    MOVE_FLING,
    MOVE_FOCUSBLAST,
    MOVE_GIGAIMPACT,
    MOVE_HEAVYSLAM,
    MOVE_HYPERBEAM,
    MOVE_ICEBEAM,
    MOVE_ICEFANG,
    MOVE_ICEPUNCH,
    MOVE_IRONDEFENSE,
    MOVE_IRONHEAD,
    MOVE_LOWKICK,
    MOVE_METALCLAW,
    MOVE_POWERGEM,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_ROCKBLAST,
    MOVE_ROCKSLIDE,
    MOVE_ROCKTOMB,
    MOVE_SANDSTORM,
    MOVE_SCARYFACE,
    MOVE_SNARL,
    MOVE_SPIKES,
    MOVE_STEALTHROCK,
    MOVE_STOMPINGTANTRUM,
    MOVE_STONEEDGE,
    MOVE_SUBSTITUTE,
    MOVE_SUNNYDAY,
    MOVE_SWORDSDANCE,
    MOVE_TAKEDOWN,
    MOVE_TAUNT,
    MOVE_THUNDER,
    MOVE_THUNDERBOLT,
    MOVE_THUNDERFANG,
    MOVE_THUNDERPUNCH,
    MOVE_THUNDERWAVE,
    MOVE_VOLTSWITCH,
    MOVE_WILDCHARGE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronValiantTeachableLearnset[] = {
    MOVE_AERIALACE,
    MOVE_AGILITY,
    MOVE_AURASPHERE,
    MOVE_BRICKBREAK,
    MOVE_CALMMIND,
    MOVE_CHARGEBEAM,
    MOVE_CLOSECOMBAT,
    MOVE_CONFUSERAY,
    MOVE_DAZZLINGGLEAM,
    MOVE_DRAINPUNCH,
    MOVE_ELECTRICTERRAIN,
    MOVE_ENCORE,
    MOVE_ENDURE,
    MOVE_ENERGYBALL,
    MOVE_FALSESWIPE,
    MOVE_FIREPUNCH,
    MOVE_FLING,
    MOVE_FOCUSBLAST,
    MOVE_GIGAIMPACT,
    MOVE_GRASSKNOT,
    MOVE_HELPINGHAND,
    MOVE_HEX,
    MOVE_HYPERBEAM,
    MOVE_HYPERVOICE,
    MOVE_ICEPUNCH,
    MOVE_ICYWIND,
    MOVE_IMPRISON,
    MOVE_LIGHTSCREEN,
    MOVE_LIQUIDATION,
    MOVE_LOWKICK,
    MOVE_MAGICALLEAF,
    MOVE_METRONOME,
    MOVE_MISTYTERRAIN,
    MOVE_POISONJAB,
    MOVE_PROTECT,
    MOVE_PSYBEAM,
    MOVE_PSYCHIC,
    MOVE_PSYCHICTERRAIN,
    MOVE_PSYSHOCK,
    MOVE_REFLECT,
    MOVE_REST,
    MOVE_REVERSAL,
    MOVE_SHADOWBALL,
    MOVE_SHADOWCLAW,
    MOVE_SKILLSWAP,
    MOVE_SLEEPTALK,
    MOVE_STOREDPOWER,
    MOVE_SUBSTITUTE,
    MOVE_SWIFT,
    MOVE_SWORDSDANCE,
    MOVE_TAUNT,
    MOVE_THUNDERBOLT,
    MOVE_THUNDERPUNCH,
    MOVE_THUNDERWAVE,
    MOVE_TRICK,
    MOVE_TRICKROOM,
    MOVE_XSCISSOR,
    MOVE_ZENHEADBUTT,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16 sIronLeavesTeachableLearnset[] = {
    MOVE_AGILITY,
    MOVE_BODYSLAM,
    MOVE_CHILLINGWATER,
    MOVE_DRACOMETEOR,
    MOVE_DRAGONCLAW,
    MOVE_DRAGONDANCE,
    MOVE_DRAGONTAIL,
    MOVE_ENDURE,
    MOVE_FACADE,
    MOVE_FIREFANG,
    MOVE_FLAMETHROWER,
    MOVE_GIGAIMPACT,
    MOVE_HURRICANE,
    MOVE_HYDROPUMP,
    MOVE_HYPERBEAM,
    MOVE_LOWKICK,
    MOVE_MUDSHOT,
    MOVE_OUTRAGE,
    MOVE_PROTECT,
    MOVE_RAINDANCE,
    MOVE_REST,
    MOVE_SCARYFACE,
    MOVE_SLEEPTALK,
    MOVE_SNARL,
    MOVE_SUNNYDAY,
    MOVE_SURF,
    MOVE_SWIFT,
    MOVE_TAKEDOWN,
    MOVE_WATERFALL,
    MOVE_WATERPULSE,
    MOVE_DOUBLETEAM,
    MOVE_RETURN,
    MOVE_FRUSTRATION,
    MOVE_FACADE,
    MOVE_ROUND,
    MOVE_HIDDENPOWER,
    MOVE_UNAVAILABLE,
};

static const u16* const gTMTutorTableNew[] =
{
    [SPECIES_TOEDSCOOL] = sToedscoolTeachableLearnset,
    [SPECIES_TOEDSCRUEL] = sToedscruelTeachableLearnset,
    [SPECIES_WIGLETT] = sWiglettTeachableLearnset,
    [SPECIES_WUGTRIO] = sWugtrioTeachableLearnset,
    [SPECIES_WOOPER_P] = sPaldeanWooperTeachableLearnset,
    [SPECIES_CLODSIRE] = sClodsireTeachableLearnset,
    [SPECIES_GREAT_TUSK] = sGreatTuskTeachableLearnset,
    [SPECIES_SCREAM_TAIL] = sScreamTailTeachableLearnset,
    [SPECIES_BRUTE_BONNET] = sBruteBonnetTeachableLearnset,
    [SPECIES_FLUTTER_MANE] = sFlutterManeTeachableLearnset,
    [SPECIES_SLITHER_WING] = sSlitherWingTeachableLearnset,
    [SPECIES_SANDY_SHOCKS] = sSandyShocksTeachableLearnset,
    [SPECIES_ROARING_MOON] = sRoaringMoonTeachableLearnset,
    [SPECIES_WALKING_WAKE] = sWalkingWakeTeachableLearnset,
    [SPECIES_IRON_TREADS] = sIronTreadsTeachableLearnset,
    [SPECIES_IRON_BUNDLE] = sIronBundleTeachableLearnset,
    [SPECIES_IRON_HANDS] = sIronHandsTeachableLearnset,
    [SPECIES_IRON_JUGULIS] = sIronJugulisTeachableLearnset,
    [SPECIES_IRON_MOTH] = sIronMothTeachableLearnset,
    [SPECIES_IRON_THORNS] = sIronThornsTeachableLearnset,
    [SPECIES_IRON_VALIANT] = sIronValiantTeachableLearnset,
    [SPECIES_IRON_LEAVES] = sIronLeavesTeachableLearnset,
};
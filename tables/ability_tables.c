#include "../../src/defines.h"
#include "../../include/constants/abilities.h"
#include "../../include/new/ability_tables.h"

const struct SpecialAbilityFlags gSpecialAbilityFlags[ABILITIES_COUNT] =
{
#ifdef ABILITY_CLEARBODY
	[ABILITY_CLEARBODY] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_DAMP
	[ABILITY_DAMP] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_DRYSKIN
	[ABILITY_DRYSKIN] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FILTER
	[ABILITY_FILTER] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FLASHFIRE
	[ABILITY_FLASHFIRE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FLOWERGIFT
	[ABILITY_FLOWERGIFT] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_HEATPROOF
	[ABILITY_HEATPROOF] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_HYPERCUTTER
	[ABILITY_HYPERCUTTER] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_IMMUNITY
	[ABILITY_IMMUNITY] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_INNERFOCUS
	[ABILITY_INNERFOCUS] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_INSOMNIA
	[ABILITY_INSOMNIA] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_KEENEYE
	[ABILITY_KEENEYE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_LEAFGUARD
	[ABILITY_LEAFGUARD] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_LEVITATE
	[ABILITY_LEVITATE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_LIGHTNINGROD
	[ABILITY_LIGHTNINGROD] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_LIMBER
	[ABILITY_LIMBER] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_MAGMAARMOR
	[ABILITY_MAGMAARMOR] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_MARVELSCALE
	[ABILITY_MARVELSCALE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_MOTORDRIVE
	[ABILITY_MOTORDRIVE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_OBLIVIOUS
	[ABILITY_OBLIVIOUS] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_OWNTEMPO
	[ABILITY_OWNTEMPO] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SANDVEIL
	[ABILITY_SANDVEIL] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SHELLARMOR
	[ABILITY_SHELLARMOR] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SHIELDDUST
	[ABILITY_SHIELDDUST] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SIMPLE
	[ABILITY_SIMPLE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SNOWCLOAK
	[ABILITY_SNOWCLOAK] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SOLIDROCK
	[ABILITY_SOLIDROCK] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SOUNDPROOF
	[ABILITY_SOUNDPROOF] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_STICKYHOLD
	[ABILITY_STICKYHOLD] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_STORMDRAIN
	[ABILITY_STORMDRAIN] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_STURDY
	[ABILITY_STURDY] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SUCTIONCUPS
	[ABILITY_SUCTIONCUPS] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_TANGLEDFEET
	[ABILITY_TANGLEDFEET] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_THICKFAT
	[ABILITY_THICKFAT] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_UNAWARE
	[ABILITY_UNAWARE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_VITALSPIRIT
	[ABILITY_VITALSPIRIT] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_VOLTABSORB
	[ABILITY_VOLTABSORB] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_WATERABSORB
	[ABILITY_WATERABSORB] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_WATERVEIL
	[ABILITY_WATERVEIL] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_WONDERGUARD
	[ABILITY_WONDERGUARD] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_BIGPECKS
	[ABILITY_BIGPECKS] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_CONTRARY
	[ABILITY_CONTRARY] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FRIENDGUARD
	[ABILITY_FRIENDGUARD] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_HEAVYMETAL
	[ABILITY_HEAVYMETAL] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_LIGHTMETAL
	[ABILITY_LIGHTMETAL] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_MAGICBOUNCE
	[ABILITY_MAGICBOUNCE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_MULTISCALE
	[ABILITY_MULTISCALE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SAPSIPPER
	[ABILITY_SAPSIPPER] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_TELEPATHY
	[ABILITY_TELEPATHY] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_WONDERSKIN
	[ABILITY_WONDERSKIN] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_AROMAVEIL
	[ABILITY_AROMAVEIL] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_BULLETPROOF
	[ABILITY_BULLETPROOF] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FLOWERVEIL
	[ABILITY_FLOWERVEIL] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FURCOAT
	[ABILITY_FURCOAT] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_OVERCOAT
	[ABILITY_OVERCOAT] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SWEETVEIL
	[ABILITY_SWEETVEIL] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_DISGUISE
	[ABILITY_DISGUISE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
		.gRandomizerBannedOriginalAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FLUFFY
	[ABILITY_FLUFFY] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_QUEENLYMAJESTY
	[ABILITY_QUEENLYMAJESTY] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_WATERBUBBLE
	[ABILITY_WATERBUBBLE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_MIRRORARMOR
	[ABILITY_MIRRORARMOR] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_PUNKROCK
	[ABILITY_PUNKROCK] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_ICESCALES
	[ABILITY_ICESCALES] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
	},
#endif
#ifdef ABILITY_ICEFACE
	[ABILITY_ICEFACE] =
	{
		.gMoldBreakerIgnoredAbilities = TRUE,
		.gRandomizerBannedOriginalAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_NONE
	[ABILITY_NONE] =
	{
		.gRandomizerBannedOriginalAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
	},
#endif
#ifdef ABILITY_STANCECHANGE
	[ABILITY_STANCECHANGE] =
	{
		.gRandomizerBannedOriginalAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SCHOOLING
	[ABILITY_SCHOOLING] =
	{
		.gRandomizerBannedOriginalAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_SHIELDSDOWN
	[ABILITY_SHIELDSDOWN] =
	{
		.gRandomizerBannedOriginalAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_HUNGERSWITCH
	[ABILITY_HUNGERSWITCH] =
	{
		.gRandomizerBannedOriginalAbilities = TRUE,
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_FORECAST
	[ABILITY_FORECAST] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_MULTITYPE
	[ABILITY_MULTITYPE] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_ZENMODE
	[ABILITY_ZENMODE] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_RKS_SYSTEM
	[ABILITY_RKS_SYSTEM] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_BATTLEBOND
	[ABILITY_BATTLEBOND] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_POWERCONSTRUCT
	[ABILITY_POWERCONSTRUCT] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_GULPMISSILE
	[ABILITY_GULPMISSILE] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_UNUSED
	[ABILITY_UNUSED] =
	{
		.gRandomizerBannedNewAbilities = TRUE,
	},
#endif
#ifdef ABILITY_TRACE
	[ABILITY_TRACE] =
	{
		.gRolePlayBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_ILLUSION
	[ABILITY_ILLUSION] =
	{
		.gRolePlayBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_IMPOSTER
	[ABILITY_IMPOSTER] =
	{
		.gRolePlayBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_RECEIVER
	[ABILITY_RECEIVER] =
	{
		.gRolePlayBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_COMATOSE
	[ABILITY_COMATOSE] =
	{
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gWorrySeedBannedAbilities = TRUE,
		.gGastroAcidBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_UNOWNPOWER
	[ABILITY_UNOWNPOWER] =
	{
		.gRolePlayBannedAbilities = TRUE,
		.gRolePlayAttackerBannedAbilities = TRUE,
		.gSkillSwapBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_NEUTRALIZINGGAS
	[ABILITY_NEUTRALIZINGGAS] =
	{
		.gSkillSwapBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesAttacker = TRUE,
		.gReceiverBannedAbilities = TRUE,
		.gTraceBannedAbilities = TRUE,
		.gNeutralizingGasBannedAbilities = TRUE,
	},
#endif
#ifdef ABILITY_TRUANT
	[ABILITY_TRUANT] =
	{
		.gWorrySeedBannedAbilities = TRUE,
		.gEntrainmentBannedAbilitiesTarget = TRUE,
		.gSimpleBeamBannedAbilities = TRUE,
	},
#endif
};

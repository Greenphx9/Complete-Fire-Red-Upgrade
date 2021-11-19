#pragma once

enum MoveTutors
{
	TUTOR00_FIRE_PUNCH, //done
	TUTOR01_ICE_PUNCH, //done
	TUTOR02_THUNDER_PUNCH, //done
	TUTOR03_SNORE, //done
	TUTOR04_HEAL_BELL,
	TUTOR05_ELECTROWEB, //done
	TUTOR06_LOW_KICK, //done
	TUTOR07_UPROAR,
	TUTOR08_BIND,
	TUTOR09_HELPING_HAND, //done
	TUTOR10_BLOCK,
	TUTOR11_WORRY_SEED, //done
	TUTOR12_COVET, //done
	TUTOR13_BUG_BITE, //done
	TUTOR14_SNATCH,
	TUTOR15_SPITE,
	TUTOR16_AFTER_YOU,
	TUTOR17_SYNTHESIS, //done
	TUTOR18_SIGNAL_BEAM, //done
	TUTOR19_GRAVITY, //done
	TUTOR20_IRON_DEFENSE, //done
	TUTOR21_TELEKINESIS,
	TUTOR22_MAGNET_RISE,
	TUTOR23_BOUNCE, //done
	TUTOR24_ROLE_PLAY,
	TUTOR25_IRON_HEAD, //done
	TUTOR26_AQUA_TAIL, //done
	TUTOR27_PAIN_SPLIT, //done
	TUTOR28_TAILWIND, //done
	TUTOR29_ENDEAVOR,
	TUTOR30_ICY_WIND, //done
	TUTOR31_ZEN_HEADBUTT, //done
	TUTOR32_SEED_BOMB, //done
	TUTOR33_LASER_FOCUS,
	TUTOR34_TRICK, //done
	TUTOR35_DRILL_RUN, //done
	TUTOR36_MAGIC_COAT,
	TUTOR37_MAGIC_ROOM, //done
	TUTOR38_WONDER_ROOM, //done
	TUTOR39_LIQUIDATION,
	TUTOR40_GASTRO_ACID,
	TUTOR41_FOUL_PLAY, //done
	TUTOR42_SUPER_FANG, //done
	TUTOR43_OUTRAGE,
	TUTOR44_SKY_ATTACK,
	TUTOR45_THROAT_CHOP,
	TUTOR46_STOMPING_TANTRUM, //done
	TUTOR47_EARTH_POWER,
	TUTOR48_GUNK_SHOT, //done
	TUTOR49_DUAL_CHOP, //done
	TUTOR50_HEAT_WAVE, //done
	TUTOR51_HYPER_VOICE, //done
	TUTOR52_SUPERPOWER, //done
	TUTOR53_KNOCK_OFF, //done
	TUTOR54_PSYCH_UP,
	TUTOR55_VACUUM_WAVE, //done
	TUTOR56_LAST_RESORT, //done
	TUTOR57_CONFIDE,
	TUTOR58_GRASS_PLEDGE, //done
	TUTOR59_FIRE_PLEDGE, //done
	TUTOR60_WATER_PLEDGE, //done
	TUTOR61_FRENZY_PLANT, //done
	TUTOR62_BLAST_BURN, //done
	TUTOR63_HYDRO_CANNON, //done
	TUTOR64_FOCUS_ENERGY,
	TUTOR65_COSMIC_POWER, //done
	TUTOR66_BATON_PASS,
	TUTOR67_ENCORE,
	TUTOR68_SCREECH,
	TUTOR69_FAKE_TEARS,
	TUTOR70_SCARY_FACE,
	TUTOR71_VENOM_DRENCH,
	TUTOR72_SPIKES, //done
	TUTOR73_TOXIC_SPIKES, //done
	TUTOR74_DRAGON_DANCE, //done
	TUTOR75_AGILITY, //done
	TUTOR76_NASTY_PLOT, //done
	TUTOR77_GRASSY_TERRAIN, //done
	TUTOR78_MISTY_TERRAIN, //done
	TUTOR79_ELECTRIC_TERRAIN, //done
	TUTOR80_PSYCHIC_TERRAIN, //done
	TUTOR81_WHIRLPOOL, //done
	TUTOR82_FIRE_SPIN, //done
	TUTOR83_SAND_TOMB, //done
	TUTOR84_PIN_MISSILE,
	TUTOR85_ICICLE_SPEAR,
	TUTOR86_TAIL_SLAP,
	TUTOR87_ROCK_BLAST,
	TUTOR88_THUNDER_FANG, //done
	TUTOR89_ICE_FANG, //done
	TUTOR90_FIRE_FANG, //done
	TUTOR91_BODY_SLAM,
	TUTOR92_BODY_PRESS, //done
	TUTOR93_HEAT_CRASH,
	TUTOR94_HEAVY_SLAM,
	TUTOR95_REVERSAL,
	TUTOR96_ELECTRO_BALL,
	TUTOR97_STORED_POWER, //done
	TUTOR98_BREAKING_SWIPE, //done
	TUTOR99_RAZOR_SHELL, //done
	TUTOR100_HEX, //done
	TUTOR101_WEATHER_BALL,
	TUTOR102_AIR_SLASH, //done
	TUTOR103_AURA_SPHERE, //done
	TUTOR104_BLAZE_KICK, //done
	TUTOR105_BUG_BUZZ, //done
	TUTOR106_CROSS_POISON, //done
	TUTOR107_CRUNCH, //done
	TUTOR108_DARKEST_LARIAT, //done
	TUTOR109_HIGH_HORSEPOWER, //done
	TUTOR110_LEAF_BLADE, //done
	TUTOR111_MUDDY_WATER, //done
	TUTOR112_MYSTICAL_FIRE, //done
	TUTOR113_PHANTOM_FORCE,
	TUTOR114_PLAY_ROUGH, //done
	TUTOR115_POLLEN_PUFF, //done
	TUTOR116_POWER_GEM, //done
	TUTOR117_PSYCHIC_FANGS, //done
	TUTOR118_PSYCHO_CUT, //done
	TUTOR119_BRAVE_BIRD, //done
	TUTOR120_CLOSE_COMBAT, //done
	TUTOR121_FLARE_BLITZ, //done
	TUTOR122_HURRICANE, //done
	TUTOR123_HYDRO_PUMP, //done
	TUTOR124_LEAF_STORM, //done
	TUTOR125_MEGAHORN, //done
	TUTOR126_POWER_WHIP, //done
	TUTOR127_SOLAR_BLADE, //done
	TUTOR128_EXPANDING_FORCE, //ALL IOA MOVES DONE
	TUTOR129_STEEL_ROLLER,
	TUTOR130_SCALE_SHOT,
	TUTOR131_METEOR_BEAM,
	TUTOR132_MISTY_EXPLOSION,
	TUTOR133_GRASSY_GLIDE,
	TUTOR134_RISING_VOLTAGE,
	TUTOR135_TERRAIN_PULSE,
	TUTOR136_SKITTER_SMACK,
	TUTOR137_BURNING_JEALOUSY,
	TUTOR138_LASH_OUT,
	TUTOR139_POLTERGEIST,
	TUTOR140_CORROSIVE_GAS,
	TUTOR141_COACHING,
	TUTOR142_FLIP_TURN,
	TUTOR143_TRIPLE_AXEL,
	TUTOR144_DUAL_WINGBEAT,
	TUTOR145_SCORCHING_SANDS,
	TUTOR146_SOFTBOILED,
	TUTOR147_MOONBLAST,
};

//Special Move Tutors - Not in Table
//Numbers in comments are ideal numbers (if NUM_MOVE_TUTORS is 146)
enum SpecialMoveTutors
{
	TUTOR_SPECIAL_DRACO_METEOR = NUM_MOVE_TUTORS,	//148 - Dragon Pokemon
	TUTOR_SPECIAL_SECRET_SWORD,						//149 - Keldeo only
	TUTOR_SPECIAL_RELIC_SONG,						//150 - Meloetta only
	TUTOR_SPECIAL_VOLT_TACKLE,						//151 - Pikachu only
	TUTOR_SPECIAL_DRAGON_ASCENT,					//152 - Rayquaza only
	TUTOR_SPECIAL_THOUSAND_ARROWS,					//153 - Zygarde only
	TUTOR_SPECIAL_THOUSAND_WAVES,					//154 - Zygarde only
	TUTOR_SPECIAL_CORE_ENFORCER,					//155 - Zygarde only
	TUTOR_SPECIAL_STEEL_BEAM,						//156 - Steel Pokemon
};

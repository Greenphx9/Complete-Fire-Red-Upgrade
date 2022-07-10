.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ FLAG_SHOW_SC_BASEMENT, 0x1021
.equ FLAG_REGIDRAGO_DOOR, 0x1023
.equ FLAG_REGIELEKI_DOOR, 0x1025
.equ FLAG_REGIROCK_DOOR, 0x1026
.equ FLAG_REGIGIGAS, 0x1027

.global EventScript_OpenRegirockDoor
EventScript_OpenRegirockDoor:
	lock
	call EventScript_RegirockDoorSetMapTile
	special 0x8E
	playse 20
	waitse
	msgbox gText_RockDoorOpened MSG_KEEPOPEN
	closeonkeypress
	setflag FLAG_REGIROCK_DOOR
	release
	end

EventScript_RegirockDoorSetMapTile:
	setmaptile 0x3 0x1B 0x309 0x0
	setmaptile 0x2 0x1B 0x309 0x0
	setmaptile 0x3 0x1C 0x281 0x0
	setmaptile 0x3 0x1E 0x281 0x0
	setmaptile 0x3 0x1D 0x281 0x0
	setmaptile 0x3 0x1F 0x281 0x0
	setmaptile 0x2 0x1C 0x281 0x0
	setmaptile 0x2 0x1E 0x281 0x0
	setmaptile 0x2 0x1D 0x281 0x0
	setmaptile 0x2 0x1F 0x281 0x0
	return

RockTunnel_B1F_MapScripts:
	mapscript MAP_SCRIPT_ON_LOAD RockTunnel_B1F_OnLoad
	.byte MAP_SCRIPT_TERMIN

RockTunnel_B1F_OnLoad:
	call_if_set FLAG_REGIROCK_DOOR EventScript_RegirockDoorSetMapTile
	end

.global EventScript_RegirockSign
EventScript_RegirockSign:
	lockall
	braillemsgbox gText_RegirockBraille
	releaseall
	end

.global EventScript_RegiceSign
EventScript_RegiceSign:
	lockall
	braillemsgbox gText_RegiceBraille
	releaseall
	end

.global EventScript_RegielekiSign
EventScript_RegielekiSign:
	lockall
	braillemsgbox gText_RegielekiBraille
	releaseall
	end

.global EventScript_OpenRegielekiDoor
EventScript_OpenRegielekiDoor:
	lock
	call EventScript_RegielekiSetMapTile
	special 0x8E
	playse 20
	waitse
	msgbox gText_RockDoorOpened MSG_KEEPOPEN
	closeonkeypress
	setflag FLAG_REGIELEKI_DOOR
	release
	end

EventScript_RegielekiSetMapTile:
	setmaptile 0x22 0x29 0x299 0x0
	setmaptile 0x22 0x28 0x291 0x0
	setmaptile 0x22 0x27 0x2A1 0x0
	setmaptile 0x21 0x2A 0x29B 0x0
	setmaptile 0x21 0x29 0x29B 0x0
	setmaptile 0x21 0x28 0x29B 0x0
	setmaptile 0x21 0x27 0x29B 0x0
	return

PowerPlant_MapScripts:
	mapscript MAP_SCRIPT_ON_RESUME 0x816376F
	mapscript MAP_SCRIPT_ON_TRANSITION 0x816378D
	mapscript MAP_SCRIPT_ON_LOAD PowerPlant_OnLoad
	.byte MAP_SCRIPT_TERMIN

PowerPlant_OnLoad:
	call_if_set FLAG_REGIELEKI_DOOR EventScript_RegielekiSetMapTile
	end


.global EventScript_RegisteelSign
EventScript_RegisteelSign:
	lockall
	checkflag FLAG_SHOW_SC_BASEMENT
	if SET _goto EventScript_End
	braillemsgbox 0x876B2E8
	setvar 0x8003 0x0 
	setvar 0x8004 0x0
	special2 LASTRESULT 0x18
	compare LASTRESULT SPECIES_STEELIX
	if 0x1 _goto EventScript_OpenRegisteelStairs
	releaseall
	end

EventScript_End:
	releaseall
	end

EventScript_OpenRegisteelStairs:
	lock
	setmaptile 0x0 0x14 0x35A 0x0
	setmaptile 0x0 0x13 0x352 0x0
	setmaptile 0x1 0x14 0x35B 0x0
	setmaptile 0x1 0x13 0x353 0x0
	setmaptile 0x2 0x13 0x3FA 0x0
	special 0x8E
	playse 20
	waitse
	setflag FLAG_SHOW_SC_BASEMENT
	msgbox gText_StairOpened MSG_KEEPOPEN
	closeonkeypress
	release
	end

.global EventScript_RegidragoSign
EventScript_RegidragoSign:
	lockall
	braillemsgbox gText_RegidragoPuzzle
	goto_if_set FLAG_REGIDRAGO_DOOR EventScript_End
	callasm ShouldOpenRegidragoDoor
	compare LASTRESULT 0x1
	goto_if_eq EventScript_OpenRegidragoDoor
	releaseall
	end
	
EventScript_OpenRegidragoDoor:
	call EventScript_RegidragoSetMapTiles
	special 0x8E
	playse 20
	waitse
	msgbox gText_RockDoorOpened MSG_KEEPOPEN
	closeonkeypress
	setflag FLAG_REGIDRAGO_DOOR
	releaseall
	end

EventScript_RegidragoSetMapTiles:
	setmaptile 0xC 0x19 0x304 0x1
	setmaptile 0xC 0x18 0x2FC 0x1
	setmaptile 0xC 0x17 0x2F4 0x1
	setmaptile 0xC 0x16 0x2EE 0x1
	setmaptile 0xC 0x1A 0x287 0x0
	setmaptile 0xC 0x1B 0x286 0x0
	setmaptile 0xC 0x1C 0x286 0x0
	setmaptile 0xC 0x1D 0x286 0x0
	setmaptile 0xC 0x1E 0x286 0x0
	setmaptile 0xC 0x1F 0x29F 0x0
	return

PokemonMansion_B1F_MapScripts:
	mapscript MAP_SCRIPT_ON_LOAD PokemonMansion_B1F_OnLoad
	.byte MAP_SCRIPT_TERMIN

PokemonMansion_B1F_OnLoad:
	call_if_set 0x26C PokemonMansion_EventScript_PressSwitch_B1F
	call_if_set FLAG_REGIDRAGO_DOOR EventScript_RegidragoSetMapTiles
	end

PokemonMansion_EventScript_PressSwitch_B1F:
	setmaptile 0x21 0x14 0x2F8 0x1
	setmaptile 0x22 0x14 0x2F9 0x1
	setmaptile 0x23 0x14 0x2FA 0x1
	setmaptile 0x21 0x15 0x354 0x1
	setmaptile 0x22 0x15 0x355 0x1
	setmaptile 0x23 0x15 0x356 0x1
	setmaptile 0x10 0x1A 0x350 0x1
	setmaptile 0x10 0x1B 0x358 0x1
	setmaptile 0x10 0x1C 0x362 0x1
	setmaptile 0x10 0x1D 0x36A 0x1
	setmaptile 0x10 0x1E 0x372 0x1
	setmaptile 0xC 0x8 0x2A5 0x1
	setmaptile 0xC 0x9 0x2AD 0x1
	setmaptile 0xC 0xA 0x287 0x0
	setmaptile 0xC 0xB 0x286 0x0
	setmaptile 0xC 0xC 0x2B0 0x0
	setmaptile 0x14 0x16 0x287 0x0
	setmaptile 0x15 0x16 0x286 0x0
	setmaptile 0x16 0x16 0x286 0x0
	setmaptile 0x14 0x17 0x287 0x0
	setmaptile 0x15 0x17 0x286 0x0
	setmaptile 0x16 0x17 0x286 0x0
	setmaptile 0x18 0x1C 0x34F 0x0
	setmaptile 0x1B 0x4 0x34F 0x0
	return

.global EventScript_Regigigas
EventScript_Regigigas:
	lock
	msgbox gText_RegigigasPuzzle MSG_KEEPOPEN
	closeonkeypress
	callasm HasAllFiveRegisInParty
	compare LASTRESULT 0x1
	goto_if_eq EventScript_RegigiasBattle
	release
	end

EventScript_RegigiasBattle:
	pause DELAY_1SECOND
	cry SPECIES_REGIGIGAS 0x0
	msgbox gText_Regigigas MSG_KEEPOPEN
	waitcry
	closeonkeypress
	wildbattle SPECIES_REGIGIGAS 75 0x0
	setflag FLAG_REGIGIGAS
	hidesprite 1
	call SeafoamIslands_B5F_SetMapTile
	special 0x8E
	release
	end

SeafoamIslands_B5F_MapScripts:
	mapscript MAP_SCRIPT_ON_LOAD SeafoamIslands_B5F_OnLoad
	.byte MAP_SCRIPT_TERMIN

SeafoamIslands_B5F_OnLoad:
	call_if_set FLAG_REGIGIGAS SeafoamIslands_B5F_SetMapTile
	end

SeafoamIslands_B5F_SetMapTile:
	setmaptile 0xA 0xC 0x37C 0x0
	setmaptile 0xC 0xC 0x37D 0x0
	return
.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ FLAG_SHOW_SC_BASEMENT, 0x1021


.global EventScript_OpenRegirockDoor
EventScript_OpenRegirockDoor:
	lock
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
	special 0x8E
	playse 20
	waitse
	msgbox gText_RockDoorOpened MSG_KEEPOPEN
	closeonkeypress
	release
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
	braillemsgbox 0x876B1E0
	releaseall
	end

.global EventScript_OpenRegielekiDoor
EventScript_OpenRegielekiDoor:
	lock
	setmaptile 0x22 0x29 0x299 0x0
	setmaptile 0x22 0x28 0x291 0x0
	setmaptile 0x22 0x27 0x2A1 0x0
	setmaptile 0x21 0x2A 0x29B 0x0
	setmaptile 0x21 0x29 0x29B 0x0
	setmaptile 0x21 0x28 0x29B 0x0
	setmaptile 0x21 0x27 0x29B 0x0
	special 0x8E
	playse 20
	waitse
	msgbox gText_RockDoorOpened MSG_KEEPOPEN
	closeonkeypress
	release
	end

.global EventScript_RegisteelSign
EventScript_RegisteelSign:
	lockall
	checkflag FLAG_SHOW_SC_BASEMENT
	if SET _goto EventScript_End
	setvar 0x8003 0x0 
	setvar 0x8004 0x0
	special2 LASTRESULT 0x18
	compare LASTRESULT SPECIES_STEELIX
	if 0x1 _goto EventScript_OpenRegisteelStairs
	braillemsgbox 0x876B2E8
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
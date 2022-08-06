.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ FLAG_CYNTHIA_SPRITE, 0x1044
.equ FLAG_CYNTHIA_BEAT, 0x1045
.equ FLAG_SYS_GAME_CLEAR, 0x82C
.equ VAR_CYNTHIA_BEAT, 0x5114

.global EventScript_CynthiaHouseMapScript
EventScript_CynthiaHouseMapScript:
    mapscript MAP_SCRIPT_ON_LOAD EventScript_HideCynthia
    mapscript MAP_SCRIPT_ON_FRAME_TABLE EventScript_CheckCynthiaFlag
	.byte MAP_SCRIPT_TERMIN

EventScript_HideCynthia:
	checkflag FLAG_SYS_GAME_CLEAR
	if NOT_SET _goto EventScript_HideCynthia2
	checkflag FLAG_CYNTHIA_BEAT
	if SET _goto EventScript_HideCynthia2
	showsprite 1
	clearflag FLAG_CYNTHIA_SPRITE
	end

EventScript_HideCynthia2:
	hidesprite 1
	setflag FLAG_CYNTHIA_SPRITE
	end

EventScript_CheckCynthiaFlag:
    levelscript VAR_CYNTHIA_BEAT, 0, EventScript_DoCynthiaStuff
    .2byte 0

.global EventScript_DoCynthiaStuff
EventScript_DoCynthiaStuff:
    lockall
    playbgm 360 0
    applymovement 1 EventScript_CynthiaMovement1
    sound 0x15
    waitmovement 0x0
    pause 0x20
    applymovement 1 EventScript_CynthiaMovement2
    waitmovement 0x0
    msgbox gText_CynthiaIntro MSG_KEEPOPEN
    closeonkeypress
    applymovement 1 EventScript_CynthiaMovement3
    waitmovement 0x0
    msgbox gText_CynthiaIntro2 MSG_KEEPOPEN
    closeonkeypress
    applymovement 1 EventScript_CynthiaMovement4
    waitmovement 0x0
    msgbox gText_CynthiaIntro3 MSG_KEEPOPEN
    closeonkeypress
    @@trainerbattle3 0x3 39 0x0 gText_CynthiaLose
    setvar 0x8000 0
    setvar 0x8001 2
    setvar 0x8002 0
    special2 0x5028 0x52
    trainerbattle9 0x9 0x399 0x0 0x0 0x0
    setvar VAR_CYNTHIA_BEAT 0x1
    releaseall
    end

EventScript_CynthiaMovement1:
    .byte 0x62
    .byte 0xFE

EventScript_CynthiaMovement2:
    .byte walk_down
    .byte 0xFE

EventScript_CynthiaMovement3:
    .byte look_right
    .byte 0xFE

EventScript_CynthiaMovement4:
    .byte look_down
    .byte 0xFE
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
	if SET _goto EventScript_HideCynthia_AlreadyBeat
	showsprite 1
	clearflag FLAG_CYNTHIA_SPRITE
    setvar VAR_CYNTHIA_BEAT 2
	end

EventScript_HideCynthia2:
	hidesprite 1
	setflag FLAG_CYNTHIA_SPRITE
    setvar VAR_CYNTHIA_BEAT 0
	end
    
EventScript_HideCynthia_AlreadyBeat:
	hidesprite 1
	setflag FLAG_CYNTHIA_SPRITE
    setvar VAR_CYNTHIA_BEAT 1
	end

EventScript_CheckCynthiaFlag:
    levelscript VAR_CYNTHIA_BEAT, 2, EventScript_DoCynthiaStuff
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
    random 3
    switch LASTRESULT
    callcase 0, CynthiaBattle1
    callcase 1, CynthiaBattle2
    callcase 2, CynthiaBattle3
    callcase 3, CynthiaBattle3
    playbgm 360 0
    msgbox gText_CynthiaAfterBattle MSG_KEEPOPEN
    closeonkeypress
    givepokemoncustom SPECIES_GIBLE 1 ITEM_NONE MOVE_OUTRAGE MOVE_SANDTOMB MOVE_BODYSLAM MOVE_IRONHEAD NATURE_JOLLY 1 31 31 31 31 31 31 21
    fanfare 0x101
    msgbox gText_PlayerReceievedShinyGible MSG_NORMAL
    waitfanfare
    closeonkeypress
    msgbox gText_CynthiaAfterBattle2 MSG_KEEPOPEN
    closeonkeypress
    applymovement 1 EventScript_CynthiaMovement5
    waitmovement 0x0
    applymovement 0xFF EventScript_PlayerCynthiaMovement
    waitmovement 0x0
    pause 0x15
    applymovement 1 EventScript_CynthiaMovement6
    waitmovement 0x0
    sound 241
    setvar VAR_CYNTHIA_BEAT 0x1
    hidesprite 1
    setflag FLAG_CYNTHIA_BEAT
    fadedefaultbgm
    releaseall
    end

CynthiaBattle1:
    trainerbattle3 0x3 39 0x0 gText_CynthiaLose
    return
CynthiaBattle2:
    trainerbattle3 0x3 40 0x0 gText_CynthiaLose
    return
CynthiaBattle3:
    trainerbattle3 0x3 41 0x0 gText_CynthiaLose
    return

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

EventScript_CynthiaMovement5:
    .byte walk_down
    .byte 0xFE

EventScript_PlayerCynthiaMovement:
    .byte walk_right
    .byte look_left
    .byte 0xFE

EventScript_CynthiaMovement6:
    .byte walk_down
    .byte 0xFE
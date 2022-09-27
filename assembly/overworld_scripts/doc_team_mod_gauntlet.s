.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ FLAG_KEITH_BEAT, 0x1049
.equ FLAG_NOTEKEEPER_BEAT, 0x104A
.equ FLAG_LAPHICET_BEAT, 0x104B

EventScript_KeithBattle:
    msgbox gText_Keith_BeforeBattle MSG_KEEPOPEN
    closeonkeypress
    trainerbattle3 0x1 42 0x0 gText_Keith_Lose
    fadescreen FADEOUT_BLACK
    setvar 0x8005 SPECIES_FERROSEED
    setvar 0x8006 0
    callasm GiveCustomEgg
    pause 0x15
    hidesprite 1
    setflag FLAG_KEITH_BEAT
    fadescreen FADEIN_BLACK
    fanfare 0x101
    callasm ShowEggPicNoCry
    msgbox gText_RecievedMysteriousEgg MSG_KEEPOPEN
    waitfanfare
    hidepokepic
    closemessage
    release
    end

EventScript_NotekeeperBattle:
    msgbox gText_Notekeeper_BeforeBattle MSG_KEEPOPEN
    closeonkeypress
    trainerbattle3 0x1 43 0x0 gText_Notekeeper_Lose
    fadescreen FADEOUT_BLACK
    setvar 0x8005 SPECIES_BASCULIN_H
    setvar 0x8006 1
    callasm GiveCustomEgg
    pause 0x15
    hidesprite 2
    setflag FLAG_NOTEKEEPER_BEAT
    fadescreen FADEIN_BLACK
    fanfare 0x101
    callasm ShowEggPicNoCry
    msgbox gText_RecievedMysteriousEgg MSG_KEEPOPEN
    waitfanfare
    hidepokepic
    closemessage
    release
    end

EventScript_LaphicetBattle:
    checkgender
    compare LASTRESULT 0x0
    call_if_eq EventScript_BufferRed
    compare LASTRESULT 0x1
    call_if_eq EventScript_BufferGreen
    msgbox gText_Laphicet_BeforeBattle MSG_KEEPOPEN
    closeonkeypress
    trainerbattle3 0x1 44 0x0 gText_Laphicet_Lose
    fadescreen FADEOUT_BLACK
    setvar 0x8005 SPECIES_LITWICK
    setvar 0x8006 2
    callasm GiveCustomEgg
    pause 0x15
    hidesprite 3
    setflag FLAG_LAPHICET_BEAT
    fadescreen FADEIN_BLACK
    fanfare 0x101
    callasm ShowEggPicNoCry
    msgbox gText_RecievedMysteriousEgg MSG_KEEPOPEN
    waitfanfare
    hidepokepic
    closemessage
    release
    end

EventScript_BufferRed:
    bufferstring 0 gText_PlayerRed
    return

EventScript_BufferGreen:
    bufferstring 0 gText_PlayerGreen
    return

.global EventScript_ChanseyDTMG
EventScript_ChanseyDTMG:
	lock
	msgbox gText_ChanseyE4 MSG_FACE
	fadescreen 0x1
	special 0x0
    playse 1
    waitse
	fadescreen 0x0
	msgbox gText_ChanseyE4 MSG_FACE
	release
	end
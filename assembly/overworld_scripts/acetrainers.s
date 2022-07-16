.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"


.global EventScript_GreenphxBattle1
EventScript_GreenphxBattle1:
	lock
	faceplayer
	checktrainerflag 35
	if 0x1 _goto EventScript_GreenphxBattle_CheckRematchBattle
	msgbox gText_GreenphxHello MSG_YESNO
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_GreenphxBattle_Start
	msgbox gText_GreenphxNo MSG_FACE
	release
	end

EventScript_GreenphxBattle_CheckRematchBattle:
	checktrainerflag 36
	goto_if_eq EventScript_GreenphxBattle_After2 
	goto_if_set 0x82C EventScript_StartRematchBattle
	goto EventScript_GreenphxBattle_After
	release
	end

EventScript_StartRematchBattle:
	msgbox gText_StartGreenphxRematch MSG_FACE
	trainerbattle3 0x1 36 0x0 gText_GreenphxLose2
	goto EventScript_GreenphxBattle_After2

EventScript_GreenphxBattle_Start:
	trainerbattle3 0x1 35 0x0 gText_GreenphxLose
	goto EventScript_GreenphxBattle_After

EventScript_GreenphxBattle_After:
	msgbox gText_GreenphxAfter MSG_FACE
	release
	end

EventScript_GreenphxBattle_After2:
	msgbox gText_GreenphxAfter2 MSG_FACE
	release
	end

.global EventScript_DanielAceBattle
 EventScript_DanielAceBattle:
	lock
	faceplayer
	checktrainerflag 0xB
	if 0x1 _goto EventScript_DanielAlreadyBattled
	msgbox gText_DanielHello MSG_YESNO
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_DanielBattle
	msgbox gText_DanielNo MSG_FACE
	release
	end

EventScript_DanielBattle:
	msgbox gText_DanielBefore MSG_FACE
	trainerbattle3 0x1 0xB 0x0 gText_DanielLose
	msgbox gText_DanielAfter MSG_FACE
	giveitem ITEM_HOUNDOOMINITE 0x1 MSG_OBTAIN
	giveitem ITEM_FIRE_STONE 0x3 MSG_OBTAIN
	giveitem ITEM_SUN_STONE 0x2 MSG_OBTAIN
	giveitem ITEM_HEAT_ROCK 0x2 MSG_OBTAIN
	goto EventScript_DanielAlreadyBattled 
	release
	end

EventScript_DanielAlreadyBattled:
	msgbox gText_DanielAlreadyBattled MSG_FACE
	release
	end

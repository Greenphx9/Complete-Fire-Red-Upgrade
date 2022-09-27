.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ VAR_BATTLE_POINTS, 0x5156

.global EventScript_IndigoPlateauMapScript
EventScript_IndigoPlateauMapScript:
	.byte MAP_SCRIPT_TERMIN

.global EventScript_GirlBlockingDoor
EventScript_GirlBlockingDoor: 
	lock
	checkflag 0x1008
	if SET _goto EventScript_DescribeReins
	msgbox gText_IfHaveSteeds MSG_FACE
	fanfare 0x101
	additem ITEM_REINS_OF_UNITY 0x1
	setvar 0x8004 ITEM_REINS_OF_UNITY
	setvar 0x8006 0x0
	special 0xE4
	msgbox gText_PlayerRecievedReins MSG_KEEPOPEN
	waitfanfare
	closeonkeypress
	special 0xE5
	setflag 0x1008
	msgbox gText_HeresRustySwordShield MSG_KEEPOPEN
	giveitem ITEM_RUSTED_SWORD 0x1 MSG_OBTAIN
	giveitem ITEM_RUSTED_SHIELD 0x1 MSG_OBTAIN
	closeonkeypress
	goto EventScript_DescribeReins
	release
	end

EventScript_DescribeReins:
	msgbox gText_HowUseReins MSG_FACE
	@@setflag 0x90F
	@@Debug team used for testing
	release
	end

.global EventScript_MegaSeller
EventScript_MegaSeller:
	lock
	msgbox gText_SellMegaStones MSG_FACE
	pokemart EventScript_MegaMart
	release
	end

.global EventScript_Chansey
EventScript_Chansey:
	lock
	msgbox gText_ChanseyE4 MSG_FACE
	fadescreen 0x1
	special 0x0
	fadescreen 0x0
	msgbox gText_ChanseyE4 MSG_FACE
	release
	end


.global IndigoPlateau_Exterior_MapScripts
IndigoPlateau_Exterior_MapScripts:
	mapscript MAP_SCRIPT_ON_TRANSITION 0x8167246
	mapscript MAP_SCRIPT_ON_FRAME_TABLE IndigoPlateau_Exterior_OnFrame
	mapscript MAP_SCRIPT_ON_LOAD IndigoPlateau_Exterior_EventScript_TryHidePortal
	.byte MAP_SCRIPT_TERMIN

IndigoPlateau_Exterior_OnFrame:
	levelscript 0x4085, 1, IndigoPlateau_Exterior_EventScript_Credits
	.2byte LEVEL_SCRIPT_TERMIN

IndigoPlateau_Exterior_EventScript_TryHidePortal:
	call_if_unset 0x82C IndigoPlateau_Exterior_EventScript_HidePortal 
	call_if_set 0x82C IndigoPlateau_Exterior_EventScript_ShowPortal
	return

IndigoPlateau_Exterior_EventScript_HidePortal:
	hidesprite 3
	setflag 0x1048
	return

IndigoPlateau_Exterior_EventScript_ShowPortal:
	clearflag 0x1048
	showsprite 3
	return

IndigoPlateau_Exterior_EventScript_Credits:
	lockall
	hidesprite 0x3
	setflag 0x1048
	pause 0x69
	setdooropen 0xB 0x6
	waitdooranim
	special 0x113
	showsprite 0x1
	applymovement 0x1 0x8167346
	applymovement 0xFF 0x8167337
	waitmovement 0x0
	setdoorclosed 0xB 0x6
	waitdooranim
	applymovement 0xFF 0x816731B
	applymovement 0x1 0x816733E
	waitmovement 0x0
	pause 0x64
	setdooropen 0xB 0x6
	waitdooranim
	showsprite 0x2
	applymovement 0x2 0x816735D
	waitmovement 0x0
	setdoorclosed 0xB 0x6
	waitdooranim
	pause 0xA0
	applymovement 0xFF 0x816731F
	applymovement 0x2 0x8167348
	waitmovement 0x0
	pause 0x64
	applymovement 0xFF 0x816732E
	waitmovement 0x0
	pause 0x9B
	applymovement 0xFF 0x816733C
	waitmovement 0x0
	pause 0x5A
	applymovement 0xFF 0x8167335
	waitmovement 0x0
	applymovement 0xFF 0x8167311
	waitmovement 0x0
	special 0x114
	setvar 0x4085 0x0
	hidesprite 0x1
	hidesprite 0x2
	special 0x1A5
	waitstate
	call IndigoPlateau_Exterior_EventScript_ShowPortal
	releaseall
	end

IndigoPlateau_Exterior_EventScript_Set4085To2:
	setvar 0x4085 2
	return

IndigoPlateau_Exterior_EventScript_Wormhole:
	lock
	msgbox gText_GauntletWormhole1 MSG_YESNO
	compare LASTRESULT 0x1
	goto_if_eq IndigoPlateau_Exterior_EventScript_WormholeTeleport
	release
	end

IndigoPlateau_Exterior_EventScript_WormholeTeleport:
	warpmuted 43 25 0xFF 0xC 0x44
	release
	end

EventScript_BlockPWTDoor:
	lock
	msgbox gText_NotFinishedPWT MSG_FACE
	release
	end


EventScript_TradingShelmetNPC:
	lock
	bufferpokemon 0 SPECIES_SHELMET
	bufferpokemon 1 SPECIES_KARRABLAST
	msgbox gText_ImTradingBuffer MSG_FACE
	applymovement 7 MovementScript_FaceRight
	waitmovement 0x0
	release
	end

MovementScript_FaceRight:
	.byte look_right
	.byte 0xFE

EventScript_TradingKarrablastNPC:
	lock
	bufferpokemon 0 SPECIES_KARRABLAST
	bufferpokemon 1 SPECIES_SHELMET
	msgbox gText_ImTradingBuffer MSG_FACE
	applymovement 6 MovementScript_FaceLeft 
	waitmovement 0x0
	release
	end

MovementScript_FaceLeft:
	.byte look_left
	.byte 0xFE

EventScript_RandomPokemonSeller:
	lock
	buffernumber 0 VAR_BATTLE_POINTS
	faceplayer
	msgbox gText_SellingRandomMon MSG_YESNO
	compare LASTRESULT 1
	goto_if_eq EventScript_CheckBPRandomMon
	addvar VAR_BATTLE_POINTS 39
	release
	end

EventScript_CheckBPRandomMon:
	compare VAR_BATTLE_POINTS 30
	goto_if_ge EventScript_BuyRandomMon
	msgbox gText_NotEnoughBPRandomMon MSG_FACE
	release
	end

EventScript_BuyRandomMon:
	getpartysize
    compare LASTRESULT 6
	goto_if_eq EventScript_NoSpaceForMon
	msgbox gText_GiveMeASecond MSG_FACE
	msgbox gText_HereYouGoAmber MSG_KEEPOPEN
	closemessage
	subvar VAR_BATTLE_POINTS 30
	callasm GetRandomBuyableMon
	copyvar 0x4001 0x8005
	bufferpokemon 0 0x4001
	givepokemon 0x4001 80 0x0
	showpokepic 0x4001
	fanfare 0x101
	msgbox gText_PlayerRecievedBuffer1Copy MSG_KEEPOPEN
	waitfanfare
	closemessage
	hidepokepic
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox 0x81A56A7 MSG_YESNO
    textcolor NPC_TEXT_COLOR_MALE
    compare LASTRESULT 0x0
	goto_if_eq EventScript_ComeBackLaterForAnother
	call 0x81A8C27
	call 0x81A74EB
EventScript_ComeBackLaterForAnother:
	msgbox gText_CBLaterRandom MSG_FACE
	release
	end

EventScript_NoSpaceForMon:
	msgbox gText_NotEnoughSpace MSG_FACE
	release
	end

EventScript_BattlesBroadcasted:
	msgbox gText_BroadcastedAroundTheWorld MSG_FACE
	end

EventScript_PWTTV:
	lock
	callasm BufferTwoOpponentsPWT
	callstd MSG_KEEPOPEN
	closemessage
	release
	end


.global EventScript_EVIVMenu
EventScript_EVIVMenu:
	goto_if_unset 0x828 EventScript_CantUseStatChecker
	call_if_set 0x1203 EventScript_SandboxScanner
	callasm Call_EvIv
	end

EventScript_SandboxScanner:
	call_if_unset 0x1204 EventScript_SandboxScannerMessage
	return

EventScript_SandboxScannerMessage:
	msgbox gText_HaventUsedScannerTutorial MSG_YESNO
	compare LASTRESULT 0x1
	call_if_eq EventScript_SandboxScannerShowMessage
	setflag 0x1204
	return

EventScript_SandboxScannerShowMessage:
	msgbox gText_ScannerTutorial MSG_YESNO
	compare LASTRESULT 0x1
	call_if_eq EventScript_SandboxScannerShowMessage
	setflag 0x1204
	return

.global EventScript_CantUseStatChecker
EventScript_CantUseStatChecker:
	lock
	msgbox gText_CantUseStatChecker MSG_KEEPOPEN
	closeonkeypress
	release
	end








.align 2
EventScript_MegaMart:
	.hword ITEM_BEEDRILLITE
	.hword ITEM_PIDGEOTITE
	.hword ITEM_ALAKAZITE
	.hword ITEM_SLOWBRONITE
	.hword ITEM_GENGARITE
	.hword ITEM_KANGASKHANITE
	.hword ITEM_PINSIRITE
	.hword ITEM_GYARADOSITE
	.hword ITEM_AERODACTYLITE
	.hword 0x0

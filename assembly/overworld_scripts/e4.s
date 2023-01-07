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
	warp 43 6 0xFF 11 24
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
	
.equ INGAME_TRADE_WEAVILE, 10
.equ FLAG_DID_WEAVILE_TRADE, 0x104D
EventScript_WeavileTrade:
	lock
	faceplayer
	setvar 0x8008 INGAME_TRADE_WEAVILE
	call 0x81A8CAD
	checkflag FLAG_DID_WEAVILE_TRADE
	if 0x1 _goto 0x816E473
	msgbox 0x81A597B MSG_YESNO
	compare LASTRESULT 0x0
	if 0x1 _goto 0x816E45B
	call 0x81A8CBD
	compare 0x8004 0x6
	if 0x4 _goto 0x816E45B
	call 0x81A8CC9
	comparevars LASTRESULT 0x8009
	if 0x5 _goto 0x816E465
	call 0x81A8CD9
	msgbox 0x81A59DA MSG_KEEPOPEN
	setflag FLAG_DID_WEAVILE_TRADE
	release
	end

EventScript_ExchangeServiceCorner:
	lock
	msgbox gText_WelcomeToExchangeService MSG_YESNO
	compare LASTRESULT 0
	goto_if_eq EventScript_SaveSomeBP
EventScript_ShowBPShop1:
	buffernumber 0 VAR_BATTLE_POINTS
	preparemsg gText_WhichPrize
	waitmsg
	setvar 0x8004 0x0
	setvar 0x8000 0x1A
	setvar 0x0001 0x6
	special 0x158
	waitstate 
	compare LASTRESULT 20
	goto_if_ge EventScript_SaveSomeBP
	copyvar 0x8005 LASTRESULT
	callasm GetBPShopPrice1
	copyvar 0x4001 0x8007
	buffernumber 0 0x4001
	copyvar 0x4002 VAR_BATTLE_POINTS
	buffernumber 1 0x4002
	comparevars VAR_BATTLE_POINTS 0x8007
	goto_if_ge EventScript_BuyItemAndRemoveBP
	msgbox gText_NotEnoughBP MSG_FACE
	goto EventScript_ShowBPShop1
	release
	end

EventScript_BuyItemAndRemoveBP:
	callasm GetBPShopItem1
	copyvar 0x4001 0x8004
	copyvar 0x4002 0x8007
	bufferitem 0 0x4001
	giveitem_msg gText_Recieved1Buffer 0x4001
	subvar VAR_BATTLE_POINTS 0x4002
	goto EventScript_ShowBPShop1
	release
	end

EventScript_SaveSomeBP:
	msgbox gText_SaveSomeBP MSG_FACE
	release
	end

.equ FLAG_DONE_TOUR, 0x104E
.equ TOUR_GUIDE_ID, 12
.equ VAR_DONE_PWT_TOUR, 0x5158
.equ VAR_SHOULD_PLAYER_JOY_MOVE, 0x5159
.global EventScript_PWTMapScript
EventScript_PWTMapScript:
	mapscript MAP_SCRIPT_ON_FRAME_TABLE EventScript_PWTTour_OnFrame
	mapscript MAP_SCRIPT_ON_TRANSITION EventScript_PWTTour_OnTransition
	.byte MAP_SCRIPT_TERMIN

EventScript_PWTTour_OnTransition:
	goto_if_set FLAG_DONE_TOUR EventScript_MoveTourNurse
	end

EventScript_MoveTourNurse:
	setobjectxyperm TOUR_GUIDE_ID 0xB 0x2
	end

EventScript_PWTTour_OnFrame:
	levelscript VAR_DONE_PWT_TOUR, 0, EventScript_DoPWTTour
	levelscript VAR_SHOULD_PLAYER_JOY_MOVE, 1, EventScript_DoAfterPWTStuff
	.2byte LEVEL_SCRIPT_TERMIN

EventScript_DoPWTTour:
	lockall
	pause 0x20
	applymovement TOUR_GUIDE_ID MovementScript_ExclamationMark
	sound 0x15
	waitmovement 0x0
	applymovement TOUR_GUIDE_ID MovementScript_WalkDown
	waitmovement 0x0
	msgbox gText_GivePWTTour MSG_KEEPOPEN
	closeonkeypress
	playbgm 272 0
	applymovement 0xFF MovementScript_TourPre_Player
	waitmovement 0x0
	applymovement TOUR_GUIDE_ID MovementScript_TourPart1_Joy
	applymovement 0xFF MovementScript_TourPart1_Player
	waitmovement 0x0
	msgbox gText_TheLounge MSG_KEEPOPEN
	closeonkeypress
	applymovement 0xFF MovementScript_TourPart1Point5_Player
	waitmovement 0x0
	applymovement TOUR_GUIDE_ID MovementScript_TourPart2_Joy
	applymovement 0xFF MovementScript_TourPart2_Player
	waitmovement 0x0
	msgbox gText_TheShops MSG_KEEPOPEN
	closeonkeypress
	applymovement TOUR_GUIDE_ID MovementScript_TourPart3_Joy
	applymovement 0xFF MovementScript_TourPart3_Player
	waitmovement 0x0
	msgbox gText_ExtentedLounge MSG_KEEPOPEN
	closeonkeypress
	applymovement TOUR_GUIDE_ID MovementScript_TourPart4_Joy
	applymovement 0xFF MovementScript_TourPart4_Player
	waitmovement 0x0
	msgbox gText_Battlegrounds MSG_KEEPOPEN
	closeonkeypress
	fadedefaultbgm
	setflag FLAG_DONE_TOUR
	setvar VAR_DONE_PWT_TOUR 1
	setobjectxyperm TOUR_GUIDE_ID 0xB 0x2
	releaseall
	end

MovementScript_ExclamationMark:
	.byte exclaim
	.byte end_m

MovementScript_WalkDown:
	.byte walk_down
	.byte end_m

MovementScript_TourPre_Player:
	.byte walk_up
	.byte end_m

MovementScript_TourPart1_Joy:
	.byte walk_up
	.byte walk_up
	.byte walk_right
	.byte end_m

MovementScript_TourPart1_Player:
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte look_right
	.byte end_m

MovementScript_TourPart1Point5_Player:
	.byte walk_down
	.byte look_up
	.byte end_m

MovementScript_TourPart2_Joy:
	.byte walk_left
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_left
	.byte walk_left
	.byte walk_left
	.byte end_m

MovementScript_TourPart2_Player:
	.byte pause_long
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_left
	.byte walk_left
	.byte end_m

MovementScript_TourPart3_Joy:
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_right
	.byte walk_right
	.byte walk_right
	.byte walk_right
	.byte end_m

MovementScript_TourPart3_Player:
	.byte walk_left
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_right
	.byte walk_right
	.byte walk_right
	.byte end_m

MovementScript_TourPart4_Joy:
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_left
	.byte walk_left
	.byte walk_up
	.byte pause_short
	.byte look_down
	.byte end_m

MovementScript_TourPart4_Player:
	.byte walk_right
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_left
	.byte walk_left
	.byte pause_short
	.byte look_up
	.byte end_m

EventScript_DoAfterPWTStuff:
	applymovement 0xFF MovementScript_LookUp
	waitmovement 0x0
	setvar VAR_SHOULD_PLAYER_JOY_MOVE 0
	release
	end



.equ FLAG_TEMP_NURSE_JOY, 0x104F
EventScript_NursePWT:
	lock
	msgbox gText_GoodBufferStartPWT MSG_YESNO
	compare LASTRESULT 1
	goto_if_eq EventScript_FollowMePWT
	release
	end

EventScript_FollowMePWT:
    setvar 0x5015 6
    setvar 0x5016 100
    setvar 0x5017 0
    setvar 0x5018 0
	special 0x27
	special 0x28
	call 0x81A4EAF
	compare LASTRESULT 0
	goto_if_eq EventScript_End
	setvar 0x8002 1
	special 0x73
	msgbox gText_PleaseFollowMe MSG_KEEPOPEN
	closeonkeypress
	applymovement TOUR_GUIDE_ID EventScript_NurseMovementIntoBR
	waitmovement 0x0
	sound 9
	hidesprite TOUR_GUIDE_ID
	setflag FLAG_TEMP_NURSE_JOY
	compare PLAYERFACING LEFT
	call_if_eq EventScript_MovePlayerLeft
	compare PLAYERFACING RIGHT
	call_if_eq EventScript_MovePlayerRight
	compare PLAYERFACING UP
	call_if_eq EventScript_MovePlayerUp
	sound 9
	setvar VAR_SHOULD_PLAYER_JOY_MOVE 2
	warpmuted 43 27 0xFF 0x9 0x12
	clearflag FLAG_TEMP_NURSE_JOY
	release
	end

EventScript_End:
	release
	end

EventScript_MovePlayerLeft:
	applymovement 0xFF EventScript_PlayerBRLeft
	waitmovement 0x0
	return

EventScript_MovePlayerRight:
	applymovement 0xFF EventScript_PlayerBRRight
	waitmovement 0x0
	return

EventScript_MovePlayerUp:
	applymovement 0xFF EventScript_PlayerBRUp
	waitmovement 0x0
	return

EventScript_NurseMovementIntoBR:
	.byte walk_up
	.byte end_m

EventScript_PlayerBRUp:
	.byte walk_up
	.byte walk_up
	.byte end_m

EventScript_PlayerBRLeft:
	.byte walk_right
	.byte walk_up
	.byte end_m

EventScript_PlayerBRRight:
	.byte walk_left
	.byte walk_up
	.byte end_m

MovementScript_LookUp:
	.byte look_up
	.byte end_m

MovementScript_JoyWalkUp:
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_left
	.byte walk_left
	.byte walk_left
	.byte walk_left
	.byte look_right
	.byte end_m

MovementScript_PlayerWalkUp:
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte walk_up
	.byte pause_long
	.byte pause_long
	.byte pause_long
	.byte pause_long
	.byte end_m

.global EventScript_PWTBR_MapScripts
EventScript_PWTBR_MapScripts:
	mapscript MAP_SCRIPT_ON_FRAME_TABLE EventScript_PWTBR_OnFrame
	.byte MAP_SCRIPT_TERMIN

EventScript_PWTBR_OnFrame:
	levelscript VAR_SHOULD_PLAYER_JOY_MOVE, 2, EventScript_MovePlayerJoyPWTBR
	.2byte LEVEL_SCRIPT_TERMIN

EventScript_MovePlayerJoyPWTBR:
	lockall
	setflag 0x930
	setvar 0x8000 0
	setvar 0x8001 1
	special2 0x5028 + 1 0x52
	applymovement 5 MovementScript_JoyWalkUp
	applymovement 0xFF MovementScript_PlayerWalkUp
	waitmovement 0x0
	setvar 0x8000 0
	setvar 0x8001 1
	special 0x53
	callstd MSG_NORMAL
	setvar 0x8000 0xFEFE
	trainerbattle9 0x9 0x398 0x0 0x0 0x0
	setvar 0x8000 0x0
	switch LASTRESULT
	case 0, EventScript_BattleAgainPWT
	case 1, EventScript_TeleportBackAndLoseStreak
	releaseall
	end

EventScript_BattleAgainPWT:
	callasm SetPWTTrainerBeaten
	callasm HasBeatenAllPwtTrainers
	compare LASTRESULT TRUE
	goto_if_eq EventScript_BeatAllPWTTrainers
	fadescreen FADEOUT_BLACK
	hidesprite 6
	special 0x0
	fadescreen FADEIN_BLACK
	fanfare 0x101
	buffernumber 0 4
	addvar VAR_BATTLE_POINTS 4
	msgbox gText_PlayerGainedBP MSG_KEEPOPEN
	waitfanfare
	closemessage
	msgbox gText_PokemonRestored MSG_YESNO
	compare LASTRESULT 0
	goto_if_eq EventScript_TeleportBackAndLoseStreak
	goto EventScript_DoBattleAgainPWT
	release
	end

EventScript_BeatAllPWTTrainers:
	fadescreen FADEOUT_BLACK
	hidesprite 6
	fadescreen FADEIN_BLACK
	fanfare 0x101
	buffernumber 0 30
	addvar VAR_BATTLE_POINTS 30
	msgbox gText_PlayerGainedBP MSG_KEEPOPEN
	waitfanfare
	closemessage
	fadescreen FADEOUT_BLACK
	setobjectxyperm 5 0x9 0xA 
	movesprite 5 0x9 0xA
	applymovement 5 MovementScript_FaceDown
	waitmovement 0x0
	fadescreen FADEIN_BLACK
	msgbox gText_BeatAllTrainers MSG_FACE
	fanfare 260
	msgbox gText_WonTheTournament MSG_KEEPOPEN
	waitfanfare
	closemessage
	goto EventScript_TeleportBackAndLoseStreak
	release
	end

MovementScript_FaceDown:
	.byte look_down
	.byte end_m

EventScript_DoBattleAgainPWT:
	fadescreen FADEOUT_BLACK
	setflag 0x930
    setvar 0x5015 6
    setvar 0x5016 100
    setvar 0x5017 0
    setvar 0x5018 0
	setvar 0x8000 0
	setvar 0x8001 1
	special2 0x5028 + 1 0x52
	hidesprite 6
	showsprite 6
	fadescreen FADEIN_BLACK
	setvar 0x8000 0
	setvar 0x8001 1
	special 0x53
	callstd MSG_NORMAL
	setvar 0x8000 0xFEFE
	trainerbattle9 0x9 0x398 0x0 0x0 0x0
	setvar 0x8000 0x0
	switch LASTRESULT
	case 0, EventScript_BattleAgainPWT
	case 1, EventScript_TeleportBackAndLoseStreak
	release
	end

EventScript_TeleportBackAndLoseStreak:
	clearflag 0x930
	setvar 0x5028 + 1 0
	callasm ResetPWTTrainerStatus
	special 0x28
	setvar VAR_SHOULD_PLAYER_JOY_MOVE 1
	warpmuted 43 26 0xFF 0xB 0x3
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

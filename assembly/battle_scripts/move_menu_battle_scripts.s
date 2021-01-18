.text
.thumb
.align 2
/*
move_menu_battle_scripts.s
	handles messages when trying to select a move
*/

.include "../asm_defines.s"
.include "../battle_script_macros.s"

.global BattleScript_MustSelectEncoredMove
.global BattleScript_SelectingNotAllowedMoveChoiceAbility
.global BattleScript_SelectingNotAllowedMoveAssaultVest
.global BattleScript_SelectingNotAllowedSkyBattle
.global BattleScript_SelectingNotAllowedGravity
.global BattleScript_SelectingNotAllowedThroatChop
.global BattleScript_SelectingNotAllowedHealBlock
.global BattleScript_SelectingNotAllowedMinimize

BattleScript_MustSelectEncoredMove:
	setword BATTLE_STRING_LOADER EncoreMoveMenuString
	printselectionstring 0x184
	endselectionscript
	
BattleScript_SelectingNotAllowedMoveChoiceAbility:
	setword BATTLE_STRING_LOADER gText_GorillaTacticsMoveMenuBlockage
	printselectionstring 0x184
	endselectionscript	

BattleScript_SelectingNotAllowedMoveAssaultVest:
	setword BATTLE_STRING_LOADER AssualtVestMoveMenuString
	printselectionstring 0x184
	endselectionscript

BattleScript_SelectingNotAllowedSkyBattle:
	setword BATTLE_STRING_LOADER SkyBattleMoveMenuString
	printselectionstring 0x184
	endselectionscript

BattleScript_SelectingNotAllowedGravity:
	setword BATTLE_STRING_LOADER GravityMoveMenuString
	printselectionstring 0x184
	endselectionscript

BattleScript_SelectingNotAllowedThroatChop:
	setword BATTLE_STRING_LOADER ThroatChopMoveMenuString
	printselectionstring 0x184
	endselectionscript

BattleScript_SelectingNotAllowedHealBlock:
	setword BATTLE_STRING_LOADER HealBlockMoveMenuString
	printselectionstring 0x184
	endselectionscript

BattleScript_SelectingNotAllowedMinimize:
	setword BATTLE_STRING_LOADER gText_NoMinimizeOnInsane
	printselectionstring 0x184
	endselectionscript

.align 2
EncoreMoveMenuString: .byte 0xFD, 0x14, 0x00, 0xE1, 0xE9, 0xE7, 0xE8, 0x00, 0xD6, 0xD9, 0x00, 0xE7, 0xD9, 0xE0, 0xD9, 0xD7, 0xE8, 0xD9, 0xD8, 0xFE, 0xD5, 0xDA, 0xE8, 0xD9, 0xE6, 0x00, 0xE8, 0xDC, 0xD9, 0x00, 0xBF, 0xE2, 0xD7, 0xE3, 0xE6, 0xD9, 0xAB, 0xFB, 0xFF
AssualtVestMoveMenuString: .byte 0xCE, 0xDC, 0xD9, 0x00, 0xFD, 0x16, 0x00, 0xE4, 0xE6, 0xD9, 0xEA, 0xD9, 0xE2, 0xE8, 0xE7, 0x00, 0xE8, 0xDC, 0xD9, 0xFE, 0xE9, 0xE7, 0xD9, 0x00, 0xE3, 0xDA, 0x00, 0xCD, 0xE8, 0xD5, 0xE8, 0xE9, 0xE7, 0x00, 0xC7, 0xE3, 0xEA, 0xD9, 0xE7, 0xAB, 0xFB, 0xFF
SkyBattleMoveMenuString: .byte 0xFD, 0x14, 0x00, 0xD7, 0xD5, 0xE2, 0xB4, 0xE8, 0x00, 0xD6, 0xD9, 0x00, 0xE9, 0xE7, 0xD9, 0xD8, 0xFE, 0xDD, 0xE2, 0x00, 0xD5, 0x00, 0xCD, 0xDF, 0xED, 0x00, 0xBC, 0xD5, 0xE8, 0xE8, 0xE0, 0xD9, 0xAB, 0xFB, 0xFF
GravityMoveMenuString: .byte 0xFD, 0x14, 0x00, 0xD7, 0xD5, 0xE2, 0xB4, 0xE8, 0x00, 0xD6, 0xD9, 0x00, 0xE9, 0xE7, 0xD9, 0xD8, 0xFE, 0xEB, 0xDC, 0xDD, 0xE0, 0xD9, 0x00, 0xC1, 0xE6, 0xD5, 0xEA, 0xDD, 0xE8, 0xED, 0x00, 0xDD, 0xE7, 0x00, 0xDD, 0xE2, 0x00, 0xD9, 0xDA, 0xDA, 0xD9, 0xD7, 0xE8, 0xAB, 0xFB, 0xFF
ThroatChopMoveMenuString: .byte 0xFD, 0x13, 0x00, 0xD7, 0xD5, 0xE2, 0xB4, 0xE8, 0x00, 0xE9, 0xE7, 0xD9, 0x00, 0xCD, 0xE3, 0xE9, 0xE2, 0xD8, 0x00, 0xE1, 0xE3, 0xEA, 0xD9, 0xE7, 0xFE, 0xD5, 0xDA, 0xE8, 0xD9, 0xE6, 0x00, 0xE8, 0xDC, 0xD9, 0x00, 0xCE, 0xDC, 0xE6, 0xE3, 0xD5, 0xE8, 0x00, 0xBD, 0xDC, 0xE3, 0xE4, 0xAB, 0xFB, 0xFF
HealBlockMoveMenuString: .byte 0xFD, 0x13, 0x00, 0xD7, 0xD5, 0xE2, 0xB4, 0xE8, 0x00, 0xE9, 0xE7, 0xD9, 0x00, 0xFD, 0x14, 0xFE, 0xD5, 0xDA, 0xE8, 0xD9, 0xE6, 0x00, 0xE8, 0xDC, 0xD9, 0x00, 0xC2, 0xD9, 0xD5, 0xE0, 0x00, 0xBC, 0xE0, 0xE3, 0xD7, 0xDF, 0xAB, 0xFB, 0xFF

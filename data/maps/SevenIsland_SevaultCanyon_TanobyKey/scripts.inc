SevenIsland_SevaultCanyon_TanobyKey_MapScripts::
# 4 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_SevaultCanyon_TanobyKey_OnTransition
	.byte 0


SevenIsland_SevaultCanyon_TanobyKey_OnTransition::
# 8 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
# 9 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call_if_set FLAG_SYS_UNLOCKED_TANOBY_RUINS, SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos
# 10 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_2, 0
# 12 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_3, 0
# 13 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_4, 0
# 14 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_5, 0
# 15 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_6, 0
# 16 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_7, 0
# 17 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_8, 0
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos::
# 22 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER1, 7, 2
# 23 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER2, 4, 4
# 24 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER3, 10, 4
# 25 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER4, 5, 6
# 26 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER5, 9, 6
# 27 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER6, 5, 8
# 28 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER7, 9, 8
	return


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1::
# 33 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 34 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_1, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 35 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 36 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_1, 100
# 37 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_8, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 38 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2::
# 43 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 44 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_2, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 45 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 46 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_2, 100
# 47 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_8, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 48 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3::
# 53 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 54 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_3, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 55 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 56 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_3, 100
# 57 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_8, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 58 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4::
# 63 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 64 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_4, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 65 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 66 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_4, 100
# 67 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_8, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 68 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5::
# 73 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 74 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_5, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 75 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 76 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_5, 100
# 77 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_8, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 78 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6::
# 83 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 84 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_6, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 85 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 86 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_6, 100
# 87 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_8, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 88 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7::
# 93 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 94 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_7, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 95 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 96 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_7, 100
# 97 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_8, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 98 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed::
# 103 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	addvar VAR_TEMP_8, 1
# 104 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playse SE_TRUCK_MOVE
# 105 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 1
# 106 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 1
# 107 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 8
# 108 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 3
# 109 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 110 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
	return


SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen::
# 115 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 2
# 116 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 2
# 117 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 10
# 118 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 3
# 119 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 120 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 121 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 3
# 122 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 3
# 123 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 12
# 124 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 2
# 125 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 126 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 127 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 128 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitse
	return


SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed::
# 133 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved::
# 138 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen
# 139 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway
# 140 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_TANOBY_RUINS
# 141 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
	end


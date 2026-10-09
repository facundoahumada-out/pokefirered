NavelRock_Summit_MapScripts::
# 2 "data/maps/NavelRock_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Summit_OnTransition
# 3 "data/maps/NavelRock_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Summit_OnResume
	.byte 0


NavelRock_Summit_OnTransition::
# 7 "data/maps/NavelRock_Summit/scripts.pory"
	call_if_set FLAG_FOUGHT_HO_OH, NavelRock_Summit_EventScript_HideHoOh
# 8 "data/maps/NavelRock_Summit/scripts.pory"
	call_if_unset FLAG_FOUGHT_HO_OH, NavelRock_Summit_EventScript_TryShowHoOh
	end


NavelRock_Summit_EventScript_HideHoOh::
# 13 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data/maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_HIDE_HO_OH
	return


NavelRock_Summit_EventScript_TryShowHoOh::
# 19 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/NavelRock_Summit/scripts.pory"
	goto_if_set FLAG_HO_OH_FLEW_AWAY, EventScript_Return
# 21 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 0
# 22 "data/maps/NavelRock_Summit/scripts.pory"
	clearflag FLAG_HIDE_HO_OH
	return


NavelRock_Summit_OnResume::
# 27 "data/maps/NavelRock_Summit/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, NavelRock_Summit_EventScript_TryRemoveHoOh
	end


NavelRock_Summit_EventScript_TryRemoveHoOh::
# 32 "data/maps/NavelRock_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/NavelRock_Summit/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 34 "data/maps/NavelRock_Summit/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_HO_OH
	return


NavelRock_Summit_EventScript_HoOh::
# 39 "data/maps/NavelRock_Summit/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 40 "data/maps/NavelRock_Summit/scripts.pory"
	special QuestLog_CutRecording
# 41 "data/maps/NavelRock_Summit/scripts.pory"
	lockall
# 42 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/NavelRock_Summit/scripts.pory"
	special SpawnCameraObject
# 44 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, 3
# 45 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8005, 35
# 46 "data/maps/NavelRock_Summit/scripts.pory"
	special LoopWingFlapSound
# 47 "data/maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, Movement_HoOhAppear
# 48 "data/maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_CAMERA, Movement_CameraPanUp
# 49 "data/maps/NavelRock_Summit/scripts.pory"
	waitmovement 0
# 50 "data/maps/NavelRock_Summit/scripts.pory"
	delay 50
# 51 "data/maps/NavelRock_Summit/scripts.pory"
	setweather 0
# 52 "data/maps/NavelRock_Summit/scripts.pory"
	doweather
# 53 "data/maps/NavelRock_Summit/scripts.pory"
	waitse
# 54 "data/maps/NavelRock_Summit/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 55 "data/maps/NavelRock_Summit/scripts.pory"
	delay 30
# 56 "data/maps/NavelRock_Summit/scripts.pory"
	waitmoncry
# 57 "data/maps/NavelRock_Summit/scripts.pory"
	delay 60
# 58 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, 3
# 59 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8005, 35
# 60 "data/maps/NavelRock_Summit/scripts.pory"
	special LoopWingFlapSound
# 61 "data/maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_CAMERA, Movement_CameraPanDown
# 62 "data/maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, Movement_HoOhApproach
# 63 "data/maps/NavelRock_Summit/scripts.pory"
	waitmovement 0
# 64 "data/maps/NavelRock_Summit/scripts.pory"
	special RemoveCameraObject
# 65 "data/maps/NavelRock_Summit/scripts.pory"
	seteventmon SPECIES_HO_OH, 70
# 66 "data/maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 67 "data/maps/NavelRock_Summit/scripts.pory"
	special StartLegendaryBattle
# 68 "data/maps/NavelRock_Summit/scripts.pory"
	waitstate
# 69 "data/maps/NavelRock_Summit/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 70 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_NAVEL_ROCK_HO_OH
# 71 "data/maps/NavelRock_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 72 "data/maps/NavelRock_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Summit_EventScript_DefeatedHoOh
# 73 "data/maps/NavelRock_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Summit_EventScript_RanFromHoOh
# 74 "data/maps/NavelRock_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Summit_EventScript_RanFromHoOh
# 75 "data/maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_FOUGHT_HO_OH
# 76 "data/maps/NavelRock_Summit/scripts.pory"
	releaseall
	end


NavelRock_Summit_EventScript_DefeatedHoOh::
# 81 "data/maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_HO_OH_FLEW_AWAY
# 82 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 83 "data/maps/NavelRock_Summit/scripts.pory"
	goto EventScript_MonFlewAway
	end


NavelRock_Summit_EventScript_RanFromHoOh::
# 88 "data/maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 89 "data/maps/NavelRock_Summit/scripts.pory"
	goto EventScript_MonFlewAway
	end


# 93 "data/maps/NavelRock_Summit/scripts.pory"
Movement_CameraPanUp:
# 94 "data/maps/NavelRock_Summit/scripts.pory"
	walk_up
# 95 "data/maps/NavelRock_Summit/scripts.pory"
	walk_up
# 96 "data/maps/NavelRock_Summit/scripts.pory"
	walk_up
# 97 "data/maps/NavelRock_Summit/scripts.pory"
	step_end

# 100 "data/maps/NavelRock_Summit/scripts.pory"
Movement_CameraPanDown:
# 101 "data/maps/NavelRock_Summit/scripts.pory"
	delay_16
# 102 "data/maps/NavelRock_Summit/scripts.pory"
	delay_16
# 103 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 104 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 105 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 106 "data/maps/NavelRock_Summit/scripts.pory"
	step_end

# 109 "data/maps/NavelRock_Summit/scripts.pory"
Movement_HoOhApproach:
# 110 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 111 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 112 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 113 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 114 "data/maps/NavelRock_Summit/scripts.pory"
	walk_down
# 115 "data/maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 116 "data/maps/NavelRock_Summit/scripts.pory"
	delay_16
# 117 "data/maps/NavelRock_Summit/scripts.pory"
	delay_16
# 118 "data/maps/NavelRock_Summit/scripts.pory"
	step_end

# 121 "data/maps/NavelRock_Summit/scripts.pory"
Movement_HoOhAppear:
# 122 "data/maps/NavelRock_Summit/scripts.pory"
	delay_16
# 123 "data/maps/NavelRock_Summit/scripts.pory"
	delay_16
# 124 "data/maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 125 "data/maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 126 "data/maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 127 "data/maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 128 "data/maps/NavelRock_Summit/scripts.pory"
	step_end

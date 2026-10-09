SeafoamIslands_B3F_MapScripts::
# 4 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B3F_OnTransition
# 5 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SeafoamIslands_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B3F_EventScript_EnterByFalling
	.2byte 0


SeafoamIslands_B3F_OnTransition::
# 11 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_CheckStoppedCurrent
# 12 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_set FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_SetNoCurrentLayout
	end


SeafoamIslands_B3F_EventScript_CheckStoppedCurrent::
# 17 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 18 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 19 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 20 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, SeafoamIslands_B3F_EventScript_StoppedCurrent
	return


SeafoamIslands_B3F_EventScript_StoppedCurrent::
# 25 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B3F_CURRENT
	return


SeafoamIslands_B3F_EventScript_SetNoCurrentLayout::
# 30 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B3F_CURRENT_STOPPED
	return


SeafoamIslands_B3F_EventScript_EnterByFalling::
# 35 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lockall
# 36 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 37 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 38 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 39 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, SeafoamIslands_B3F_EventScript_CurrentBlocked
# 40 "data/maps/SeafoamIslands_B3F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 41 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_lt VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentFar
# 42 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_ge VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentClose
# 43 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1
# 44 "data/maps/SeafoamIslands_B3F/scripts.pory"
	warp MAP_SEAFOAM_ISLANDS_B4F, 27, 21
# 45 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitstate
# 46 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
	end


SeafoamIslands_B3F_EventScript_AddBoulderPresent::
# 51 "data/maps/SeafoamIslands_B3F/scripts.pory"
	addvar VAR_TEMP_2, 1
	return


SeafoamIslands_B3F_EventScript_RideCurrentFar::
# 56 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentFar
# 57 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
	return


SeafoamIslands_B3F_EventScript_RideCurrentClose::
# 62 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentClose
# 63 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
	return


SeafoamIslands_B3F_EventScript_CurrentBlocked::
# 68 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 69 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
	end


# 73 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentFar::
# 74 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 75 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 76 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 77 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 78 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 79 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 80 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 81 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 82 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 83 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 84 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 85 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 86 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 87 "data/maps/SeafoamIslands_B3F/scripts.pory"
	step_end

# 90 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentClose::
# 91 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 92 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 93 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 94 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 95 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 96 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 97 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 98 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 99 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 100 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 101 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 102 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 103 "data/maps/SeafoamIslands_B3F/scripts.pory"
	step_end

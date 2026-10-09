SeafoamIslands_B4F_MapScripts::
# 4 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B4F_OnTransition
# 5 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafoamIslands_B4F_OnResume
# 6 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafoamIslands_B4F_OnLoad
# 7 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SeafoamIslands_B4F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 10 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SeafoamIslands_B4F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_WarpInOnCurrent
	.2byte 0

SeafoamIslands_B4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_EnterOnCurrent
# 12 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B4F_EventScript_EnterByFalling
	.2byte 0


SeafoamIslands_B4F_OnResume::
# 17 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, SeafoamIslands_B4F_EventScript_TryRemoveArticuno
	end


SeafoamIslands_B4F_EventScript_TryRemoveArticuno::
# 22 "data/maps/SeafoamIslands_B4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 24 "data/maps/SeafoamIslands_B4F/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


SeafoamIslands_B4F_OnTransition::
# 29 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_FOUGHT_ARTICUNO, SeafoamIslands_B4F_EventScript_ShowArticuno
# 30 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_EventScript_CheckStoppedCurrent
# 31 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_set FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_EventScript_SetNoCurrentLayout
	end


SeafoamIslands_B4F_EventScript_CheckStoppedCurrent::
# 36 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 37 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 38 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 39 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, SeafoamIslands_B4F_EventScript_StoppedCurrent
	return


SeafoamIslands_B4F_EventScript_StoppedCurrent::
# 44 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B4F_CURRENT
	return


SeafoamIslands_B4F_EventScript_SetNoCurrentLayout::
# 49 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B4F_CURRENT_STOPPED
	return


SeafoamIslands_B4F_EventScript_ShowArticuno::
# 54 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
	return


SeafoamIslands_B4F_OnLoad::
# 59 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 60 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 61 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 62 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs
	end


SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs::
# 67 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmetatile 12, 14, METATILE_General_CalmWater, 0
# 68 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmetatile 13, 14, METATILE_General_CalmWater, 0
	end


SeafoamIslands_B4F_EventScript_WarpInOnCurrent::
# 73 "data/maps/SeafoamIslands_B4F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 74 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special ForcePlayerToStartSurfing
	end


SeafoamIslands_B4F_EventScript_EnterOnCurrent::
# 80 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 81 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_EnterOnCurrent
# 82 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 83 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0
# 84 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
	end


# 88 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_EnterOnCurrent::
# 89 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 90 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 91 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 92 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end

SeafoamIslands_B4F_EventScript_EnterByFalling::
# 97 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 98 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 99 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 100 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 101 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, SeafoamIslands_B4F_EventScript_CurrentBlocked
# 102 "data/maps/SeafoamIslands_B4F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 103 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_lt VAR_0x8008, 9, SeafoamIslands_B4F_EventScript_RideCurrentFar
# 104 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_ge VAR_0x8008, 9, SeafoamIslands_B4F_EventScript_RideCurrentClose
# 105 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special SeafoamIslandsB4F_CurrentDumpsPlayerOnLand
# 106 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 107 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
	end


SeafoamIslands_B4F_EventScript_AddBoulderPresent::
# 112 "data/maps/SeafoamIslands_B4F/scripts.pory"
	addvar VAR_TEMP_2, 1
	return


SeafoamIslands_B4F_EventScript_RideCurrentFar::
# 117 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentFar
# 118 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
	return


SeafoamIslands_B4F_EventScript_RideCurrentClose::
# 123 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentClose
# 124 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
	return


SeafoamIslands_B4F_EventScript_CurrentBlocked::
# 129 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 130 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
	end


# 134 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentFar::
# 135 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 136 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 137 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 138 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 139 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 140 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 141 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 142 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 143 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end

# 146 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentClose::
# 147 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 148 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 149 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 150 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 151 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 152 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 153 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 154 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end

SeafoamIslands_B4F_EventScript_UpwardCurrent::
# 159 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 160 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_WalkUp
# 161 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 162 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
	end


# 166 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_WalkUp::
# 167 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 168 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end

SeafoamIslands_B4F_EventScript_Articuno::
# 172 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 173 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special QuestLog_CutRecording
# 174 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lock
# 175 "data/maps/SeafoamIslands_B4F/scripts.pory"
	faceplayer
# 176 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 50
# 177 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitse
# 178 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 179 "data/maps/SeafoamIslands_B4F/scripts.pory"
	message Text_Gyaoo
# 180 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmessage
# 181 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmoncry
# 182 "data/maps/SeafoamIslands_B4F/scripts.pory"
	delay 10
# 183 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 184 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitbuttonpress
# 185 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 186 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special StartLegendaryBattle
# 187 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitstate
# 188 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 189 "data/maps/SeafoamIslands_B4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 190 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SeafoamIslands_B4F_EventScript_DefeatedArticuno
# 191 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B4F_EventScript_RanFromArticuno
# 192 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B4F_EventScript_RanFromArticuno
# 193 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 194 "data/maps/SeafoamIslands_B4F/scripts.pory"
	release
	end


SeafoamIslands_B4F_EventScript_DefeatedArticuno::
# 199 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 200 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


SeafoamIslands_B4F_EventScript_RanFromArticuno::
# 205 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 206 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_MonFlewAway
	end


SeafoamIslands_B4F_EventScript_BoulderHintSign::
# 211 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow, MSGBOX_SIGN
	end


SeafoamIslands_B4F_EventScript_FastCurrentSign::
# 216 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_DangerFastCurrent, MSGBOX_SIGN
	end


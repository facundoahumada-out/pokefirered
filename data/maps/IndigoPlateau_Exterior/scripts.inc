IndigoPlateau_Exterior_MapScripts::
# 2 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Exterior_OnTransition
# 3 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IndigoPlateau_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script_2 VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_Credits
	.2byte 0


IndigoPlateau_Exterior_OnTransition::
# 9 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 10 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	call_if_eq VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_PlayCreditsMusic
	end


IndigoPlateau_Exterior_EventScript_PlayCreditsMusic::
# 15 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	playbgm MUS_CREDITS, 0
	return


IndigoPlateau_Exterior_EventScript_Credits::
# 24 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lockall
# 25 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 105
# 28 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 11, 6
# 29 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 30 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_RIVAL
# 32 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalExitBuilding
# 33 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay
# 34 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 35 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 11, 6
# 36 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 39 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave
# 40 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalLeave
# 41 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 42 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 45 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 11, 6
# 46 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 47 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_PROF_OAK
# 48 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakExitBuilding
# 49 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 50 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 11, 6
# 51 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 52 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 160
# 55 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave
# 56 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakLeave
# 57 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 58 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 61 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerBeginLeave
# 62 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 63 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 155
# 64 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerFaceLeague
# 65 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 66 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 90
# 69 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerTurnAround
# 70 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 71 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerLeave
# 72 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 75 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special RemoveCameraObject
# 76 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 77 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_RIVAL
# 78 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_PROF_OAK
# 79 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special DoCredits
# 80 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitstate
# 81 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	releaseall
	end


# 85 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerLeave::
# 86 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 87 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 88 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 89 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 90 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 91 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 92 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 96 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerExitBuilding::
# 97 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 99 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 102 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave::
# 103 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 104 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_4
# 105 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 106 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 109 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave::
# 110 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_8
# 111 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_right
# 112 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 113 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 114 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 115 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 116 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 117 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 118 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 119 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 120 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 121 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 122 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 123 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 124 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 127 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerBeginLeave::
# 128 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_right
# 129 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 130 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 131 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 132 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 133 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 134 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 137 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerTurnAround::
# 138 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 139 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 142 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay::
# 143 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_right
# 144 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lock_facing_direction
# 145 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_left
# 146 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	unlock_facing_direction
# 147 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 150 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerFaceLeague::
# 151 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_up
# 152 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 155 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalLeave::
# 156 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 157 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 158 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 159 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 160 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 161 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 162 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 163 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 166 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalExitBuilding::
# 167 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 168 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 171 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave::
# 172 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_left
# 173 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 174 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 175 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 176 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 177 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 178 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 179 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 180 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 181 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 182 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 183 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 184 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 185 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 186 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 187 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 188 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 189 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 190 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 191 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 192 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 195 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakExitBuilding::
# 196 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 197 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

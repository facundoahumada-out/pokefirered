FourIsland_IcefallCave_Back_MapScripts::
# 2 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
	.byte 0


FourIsland_IcefallCave_Back_OnTransition::
# 6 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1, FourIsland_IcefallCave_Back_EventScript_HideLorelei
	end


FourIsland_IcefallCave_Back_EventScript_HideLorelei::
# 11 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
	return


FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
# 16 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lockall
# 17 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 18 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
# 19 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 20 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 21 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 22 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
# 23 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 24 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playse SE_PIN
# 25 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_ExclamationMark
# 26 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 27 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 28 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 29 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_Delay48
# 30 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 31 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 32 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
# 33 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 34 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterRight
# 35 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 36 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 18
# 37 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 38 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 39 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 35
# 40 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei
# 41 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiToRockets
# 42 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerToRockets
# 43 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 44 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 45 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 46 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 47 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 48 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
# 49 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ICEFALL_ROCKET3
# 50 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
# 51 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp
# 52 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 53 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 54 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
# 55 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 56 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
# 57 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 58 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
# 59 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmessage
# 60 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitse
# 61 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
# 62 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitbuttonpress
# 63 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmoncry
# 64 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat
# 65 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 66 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
# 68 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 69 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit
# 70 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit
# 71 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1Exit
# 72 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_Rocket2Exit
# 73 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3Exit
# 74 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 75 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET1
# 76 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET2
# 77 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET3
# 78 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 50
# 79 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer
# 80 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 81 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 83 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 84 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
# 85 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
# 86 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 87 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 88 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	releaseall
	end


# 92 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerToRockets::
# 93 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 94 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 95 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 96 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 97 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 100 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit::
# 101 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 102 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_left
# 103 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 104 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 105 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 106 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 109 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown::
# 110 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_down
# 111 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 114 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
# 115 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock_facing_direction
# 116 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 117 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	unlock_facing_direction
# 118 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 121 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
# 122 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_fast_down
# 123 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 126 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1Exit::
# 127 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 128 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 129 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 130 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 131 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 132 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 133 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 134 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 135 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 136 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 139 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket2Exit::
# 140 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 141 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 142 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 143 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 144 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 145 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 146 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 147 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 148 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 149 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 150 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 153 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3Exit::
# 154 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 155 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 156 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 157 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 158 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 159 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 160 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 161 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 162 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 163 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 164 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 165 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 168 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei::
# 169 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 170 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 171 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 175 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft::
# 176 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 177 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 178 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 181 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiToRockets::
# 182 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 183 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 184 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 187 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp::
# 188 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_up
# 189 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 192 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit::
# 193 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 194 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 195 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 196 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 197 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

# 201 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer::
# 202 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 203 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end

FourIsland_IcefallCave_Back_EventScript_Lorelei::
# 207 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
	end


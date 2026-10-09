SSAnne_2F_Corridor_MapScripts::
	.byte 0


SSAnne_2F_Corridor_EventScript_RivalTriggerLeft::
# 4 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 5 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTriggerMid::
# 11 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 12 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTriggerRight::
# 18 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 19 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 2
# 20 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTrigger::
# 25 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 26 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	playse SE_EXIT
# 27 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 5
# 28 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 29 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	addobject LOCALID_SS_ANNE_RIVAL
# 30 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 10
# 31 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 32 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 33 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 20
# 34 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SSAnne_2F_Corridor_EventScript_RivalApproachLeft
# 35 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SSAnne_2F_Corridor_EventScript_RivalApproachMid
# 36 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, SSAnne_2F_Corridor_EventScript_RivalApproachRight
# 37 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalIntro
# 38 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SS_ANNE_RIVAL
# 39 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, SSAnne_2F_Corridor_EventScript_RivalSquirtle
# 40 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, SSAnne_2F_Corridor_EventScript_RivalBulbasaur
# 41 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, SSAnne_2F_Corridor_EventScript_RivalCharmander
# 42 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalPostBattle
# 43 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	closemessage
# 44 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 10
# 45 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 46 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SSAnne_2F_Corridor_EventScript_RivalExitLeft
# 47 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SSAnne_2F_Corridor_EventScript_RivalExitMid
# 48 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, SSAnne_2F_Corridor_EventScript_RivalExitRight
# 49 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	fadedefaultbgm
# 50 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	removeobject LOCALID_SS_ANNE_RIVAL
# 51 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 52 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	releaseall
	end


SSAnne_2F_Corridor_EventScript_RivalApproachLeft::
# 57 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachLeft
# 58 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalApproachMid::
# 63 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachMid
# 64 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid
# 65 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalApproachRight::
# 70 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight
# 71 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachRight
# 72 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalSquirtle::
# 77 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_SQUIRTLE, SSAnne_2F_Corridor_Text_RivalDefeat
	return


SSAnne_2F_Corridor_EventScript_RivalBulbasaur::
# 82 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_BULBASAUR, SSAnne_2F_Corridor_Text_RivalDefeat
	return


SSAnne_2F_Corridor_EventScript_RivalCharmander::
# 87 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_CHARMANDER, SSAnne_2F_Corridor_Text_RivalDefeat
	return


SSAnne_2F_Corridor_EventScript_RivalExitLeft::
# 92 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitLeft
# 93 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalExitMid::
# 98 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitMid
# 99 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
	return


SSAnne_2F_Corridor_EventScript_RivalExitRight::
# 104 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitRight
# 105 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
	return


# 109 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight::
# 110 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 111 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 112 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 113 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 114 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_left
# 115 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

# 118 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid::
# 119 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 120 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 121 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 122 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 123 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_left
# 124 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

# 127 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachLeft::
# 128 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 129 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 130 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 131 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

# 134 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachMid::
# 135 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 136 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 137 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 138 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 139 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_right
# 140 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

# 143 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachRight::
# 144 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 145 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 146 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 147 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 148 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_right
# 149 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_4
# 150 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

# 153 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitLeft::
# 154 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_right
# 155 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 156 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 157 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 158 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 159 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 160 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 161 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 162 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

# 165 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitMid::
# 166 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 167 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 168 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 169 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 170 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 171 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 172 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 173 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

# 176 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitRight::
# 177 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 178 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 179 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 180 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 181 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 182 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 183 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 184 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end

SSAnne_2F_Corridor_EventScript_Sailor::
# 188 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner, MSGBOX_NPC
	end


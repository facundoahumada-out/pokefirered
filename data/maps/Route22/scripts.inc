Route22_MapScripts::
	.byte 0


Route22_EventScript_EarlyRivalTriggerTop::
# 4 "data/maps/Route22/scripts.pory"
	lockall
# 5 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerMid::
# 11 "data/maps/Route22/scripts.pory"
	lockall
# 12 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 14 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerBottom::
# 19 "data/maps/Route22/scripts.pory"
	lockall
# 20 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 21 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 22 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRival::
# 27 "data/maps/Route22/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 28 "data/maps/Route22/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 29 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 30 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalApproach
# 31 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalApproach
# 32 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalApproachBottom
# 33 "data/maps/Route22/scripts.pory"
	delay 6
# 34 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 35 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_EarlyRivalSquirtle
# 36 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_EarlyRivalBulbasaur
# 37 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_EarlyRivalCharmander
# 38 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 39 "data/maps/Route22/scripts.pory"
	closemessage
# 40 "data/maps/Route22/scripts.pory"
	delay 10
# 41 "data/maps/Route22/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 42 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalExit
# 43 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalExit
# 44 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalExitBottom
# 45 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 46 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 47 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 48 "data/maps/Route22/scripts.pory"
	releaseall
	end


Route22_EventScript_EarlyRivalApproach::
# 53 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 54 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalApproachBottom::
# 59 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 60 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 61 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalSquirtle::
# 66 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return


Route22_EventScript_EarlyRivalBulbasaur::
# 71 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return


Route22_EventScript_EarlyRivalCharmander::
# 76 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return


Route22_EventScript_EarlyRivalExit::
# 81 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExit
# 82 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalExitBottom::
# 87 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExitBottom
# 88 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


# 92 "data/maps/Route22/scripts.pory"
Route22_Movement_UnusedRivalExit::
# 93 "data/maps/Route22/scripts.pory"
	walk_right
# 94 "data/maps/Route22/scripts.pory"
	walk_right
# 95 "data/maps/Route22/scripts.pory"
	walk_right
# 96 "data/maps/Route22/scripts.pory"
	walk_right
# 97 "data/maps/Route22/scripts.pory"
	walk_right
# 98 "data/maps/Route22/scripts.pory"
	walk_right
# 99 "data/maps/Route22/scripts.pory"
	walk_right
# 100 "data/maps/Route22/scripts.pory"
	step_end

# 103 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExit::
# 104 "data/maps/Route22/scripts.pory"
	walk_down
# 105 "data/maps/Route22/scripts.pory"
	walk_right
# 106 "data/maps/Route22/scripts.pory"
	walk_right
# 107 "data/maps/Route22/scripts.pory"
	walk_right
# 108 "data/maps/Route22/scripts.pory"
	walk_right
# 109 "data/maps/Route22/scripts.pory"
	walk_right
# 110 "data/maps/Route22/scripts.pory"
	walk_down
# 111 "data/maps/Route22/scripts.pory"
	walk_down
# 112 "data/maps/Route22/scripts.pory"
	walk_down
# 113 "data/maps/Route22/scripts.pory"
	walk_down
# 114 "data/maps/Route22/scripts.pory"
	walk_down
# 115 "data/maps/Route22/scripts.pory"
	walk_down
# 116 "data/maps/Route22/scripts.pory"
	step_end

# 119 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExitBottom::
# 120 "data/maps/Route22/scripts.pory"
	walk_right
# 121 "data/maps/Route22/scripts.pory"
	walk_right
# 122 "data/maps/Route22/scripts.pory"
	walk_right
# 123 "data/maps/Route22/scripts.pory"
	walk_right
# 124 "data/maps/Route22/scripts.pory"
	walk_down
# 125 "data/maps/Route22/scripts.pory"
	walk_down
# 126 "data/maps/Route22/scripts.pory"
	walk_down
# 127 "data/maps/Route22/scripts.pory"
	walk_down
# 128 "data/maps/Route22/scripts.pory"
	walk_down
# 129 "data/maps/Route22/scripts.pory"
	walk_down
# 130 "data/maps/Route22/scripts.pory"
	walk_down
# 131 "data/maps/Route22/scripts.pory"
	step_end

# 134 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproach::
# 135 "data/maps/Route22/scripts.pory"
	walk_right
# 136 "data/maps/Route22/scripts.pory"
	walk_right
# 137 "data/maps/Route22/scripts.pory"
	walk_right
# 138 "data/maps/Route22/scripts.pory"
	walk_right
# 139 "data/maps/Route22/scripts.pory"
	walk_right
# 140 "data/maps/Route22/scripts.pory"
	walk_right
# 141 "data/maps/Route22/scripts.pory"
	walk_right
# 142 "data/maps/Route22/scripts.pory"
	step_end

# 145 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproachBottom::
# 146 "data/maps/Route22/scripts.pory"
	walk_right
# 147 "data/maps/Route22/scripts.pory"
	walk_right
# 148 "data/maps/Route22/scripts.pory"
	walk_right
# 149 "data/maps/Route22/scripts.pory"
	walk_right
# 150 "data/maps/Route22/scripts.pory"
	walk_right
# 151 "data/maps/Route22/scripts.pory"
	walk_right
# 152 "data/maps/Route22/scripts.pory"
	walk_right
# 153 "data/maps/Route22/scripts.pory"
	walk_right
# 154 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_down
# 155 "data/maps/Route22/scripts.pory"
	step_end

# 158 "data/maps/Route22/scripts.pory"
Route22_Movement_PlayerFaceRival::
# 159 "data/maps/Route22/scripts.pory"
	delay_16
# 160 "data/maps/Route22/scripts.pory"
	delay_16
# 161 "data/maps/Route22/scripts.pory"
	delay_16
# 162 "data/maps/Route22/scripts.pory"
	delay_16
# 163 "data/maps/Route22/scripts.pory"
	delay_16
# 164 "data/maps/Route22/scripts.pory"
	delay_16
# 165 "data/maps/Route22/scripts.pory"
	delay_16
# 166 "data/maps/Route22/scripts.pory"
	delay_8
# 167 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_up
# 168 "data/maps/Route22/scripts.pory"
	step_end

Route22_EventScript_LateRivalTriggerTop::
# 172 "data/maps/Route22/scripts.pory"
	lockall
# 173 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 174 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerMid::
# 179 "data/maps/Route22/scripts.pory"
	lockall
# 180 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 181 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 182 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerBottom::
# 187 "data/maps/Route22/scripts.pory"
	lockall
# 188 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 189 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 190 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRival::
# 195 "data/maps/Route22/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 196 "data/maps/Route22/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 197 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 198 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_LateRivalApproach
# 199 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_LateRivalApproach
# 200 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_LateRivalApproachBottom
# 201 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 202 "data/maps/Route22/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
# 203 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_LateRivalSquirtle
# 204 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_LateRivalBulbasaur
# 205 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_LateRivalCharmander
# 206 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 207 "data/maps/Route22/scripts.pory"
	closemessage
# 208 "data/maps/Route22/scripts.pory"
	delay 10
# 209 "data/maps/Route22/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 210 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_LateRivalExit
# 211 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 213 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 214 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 215 "data/maps/Route22/scripts.pory"
	releaseall
	end


Route22_EventScript_LateRivalApproach::
# 220 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 221 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalApproachBottom::
# 226 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 227 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 228 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalSquirtle::
# 233 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalBulbasaur::
# 238 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalCharmander::
# 243 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
	return


# 247 "data/maps/Route22/scripts.pory"
Route22_Movement_LateRivalExit::
# 248 "data/maps/Route22/scripts.pory"
	walk_left
# 249 "data/maps/Route22/scripts.pory"
	walk_left
# 250 "data/maps/Route22/scripts.pory"
	walk_left
# 251 "data/maps/Route22/scripts.pory"
	walk_left
# 252 "data/maps/Route22/scripts.pory"
	walk_left
# 253 "data/maps/Route22/scripts.pory"
	walk_left
# 254 "data/maps/Route22/scripts.pory"
	walk_left
# 255 "data/maps/Route22/scripts.pory"
	step_end

Route22_EventScript_LeagueGateSign::
# 259 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
	end


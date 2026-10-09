CeruleanCity_MapScripts::
# 2 "data/maps/CeruleanCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
	.byte 0


CeruleanCity_OnTransition::
# 6 "data/maps/CeruleanCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
# 7 "data/maps/CeruleanCity/scripts.pory"
	call_if_unset FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_BlockExits
	end


CeruleanCity_EventScript_BlockExits::
# 12 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
# 13 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
# 14 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
	return


CeruleanCity_EventScript_RivalTriggerLeft::
# 19 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 20 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
	end


CeruleanCity_EventScript_RivalTriggerMid::
# 26 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 27 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 28 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
# 29 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
	end


CeruleanCity_EventScript_RivalTriggerRight::
# 34 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 35 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 36 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
# 37 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
	end


CeruleanCity_EventScript_Rival::
# 42 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 43 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 44 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 45 "data/maps/CeruleanCity/scripts.pory"
	addobject LOCALID_CERULEAN_RIVAL
# 46 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalEnter
# 47 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 49 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
# 50 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
# 51 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
# 52 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
# 53 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 54 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 55 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 56 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 57 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
# 58 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
# 59 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
# 60 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 61 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 62 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 63 "data/maps/CeruleanCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 64 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 65 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 66 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalExit
# 67 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/CeruleanCity/scripts.pory"
	fadedefaultbgm
# 69 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_RIVAL
# 70 "data/maps/CeruleanCity/scripts.pory"
	releaseall
	end


CeruleanCity_EventScript_RivalSquirtle::
# 75 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
	return


CeruleanCity_EventScript_RivalBulbasaur::
# 80 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
	return


CeruleanCity_EventScript_RivalCharmander::
# 85 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
	return


CeruleanCity_EventScript_RivalStartExit::
# 90 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
# 91 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExit
# 92 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
	return


CeruleanCity_EventScript_RivalStartExitRight::
# 97 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
# 98 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExitRight
# 99 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
	return


# 103 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExit::
# 104 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 105 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 106 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_right
# 107 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 108 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 109 "data/maps/CeruleanCity/scripts.pory"
	step_end

# 112 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExitRight::
# 113 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 114 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 115 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_left
# 116 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 117 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/CeruleanCity/scripts.pory"
	step_end

# 121 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalEnter::
# 122 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 123 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 124 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 125 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 126 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 127 "data/maps/CeruleanCity/scripts.pory"
	step_end

# 130 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExit::
# 131 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 132 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 133 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 134 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 135 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 136 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 137 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 138 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 139 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 140 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 141 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 142 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 143 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 144 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 145 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 146 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 147 "data/maps/CeruleanCity/scripts.pory"
	step_end

# 150 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExitRight::
# 151 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 152 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 153 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 154 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 155 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 156 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 157 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 158 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 159 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 160 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 161 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 162 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 163 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 164 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 165 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 166 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 167 "data/maps/CeruleanCity/scripts.pory"
	step_end

# 170 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalExit::
# 171 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 172 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 173 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 174 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 175 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 176 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 177 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 178 "data/maps/CeruleanCity/scripts.pory"
	step_end

CeruleanCity_EventScript_Grunt::
# 182 "data/maps/CeruleanCity/scripts.pory"
	lock
# 183 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 184 "data/maps/CeruleanCity/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
# 185 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 186 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 187 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 188 "data/maps/CeruleanCity/scripts.pory"
	waitbuttonpress
# 189 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 190 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 191 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
	end


CeruleanCity_EventScript_GruntDefeated::
# 196 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 197 "data/maps/CeruleanCity/scripts.pory"
	checkitemspace ITEM_TM28
# 198 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
# 199 "data/maps/CeruleanCity/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 200 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 201 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 202 "data/maps/CeruleanCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 203 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_GRUNT
# 204 "data/maps/CeruleanCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 205 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
# 206 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_NoRoomForTM28::
# 211 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 212 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
# 213 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_GruntTriggerTop::
# 218 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 219 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 220 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 221 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 223 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
	end


CeruleanCity_EventScript_GruntTriggerBottom::
# 229 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 230 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 231 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 232 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 234 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 235 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
	end


CeruleanCity_EventScript_GruntTrigger::
# 240 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 241 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 242 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
# 243 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 244 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 245 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
	end


CeruleanCity_EventScript_Policeman::
# 250 "data/maps/CeruleanCity/scripts.pory"
	lock
# 251 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 252 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 253 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 254 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_POLICEMAN, Common_Movement_FaceOriginalDirection
# 255 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_LittleBoy::
# 261 "data/maps/CeruleanCity/scripts.pory"
	lock
# 262 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 263 "data/maps/CeruleanCity/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
# 264 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
# 265 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_LittleBoySlowbroMoved::
# 270 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
# 271 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_BaldingMan::
# 276 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
	end


CeruleanCity_EventScript_Youngster::
# 281 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
	end


CeruleanCity_EventScript_CeruleanCaveGuard::
# 286 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
	end


CeruleanCity_EventScript_Woman::
# 291 "data/maps/CeruleanCity/scripts.pory"
	lock
# 292 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 293 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 294 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 295 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_WOMAN, Common_Movement_FaceOriginalDirection
# 296 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_Lass::
# 302 "data/maps/CeruleanCity/scripts.pory"
	lock
# 303 "data/maps/CeruleanCity/scripts.pory"
	random 3
# 304 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 305 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
# 306 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
# 307 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
# 308 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 309 "data/maps/CeruleanCity/scripts.pory"
	delay 40
# 310 "data/maps/CeruleanCity/scripts.pory"
	playse SE_PIN
# 311 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
# 312 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/CeruleanCity/scripts.pory"
	delay 30
# 314 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
# 315 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
# 316 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
# 317 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_SlowbroCommand1::
# 322 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
	return


CeruleanCity_EventScript_SlowbroCommand2::
# 327 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
	return


CeruleanCity_EventScript_SlowbroCommand3::
# 332 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
	return


CeruleanCity_EventScript_SlowbroFailed1::
# 337 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
	return


CeruleanCity_EventScript_SlowbroFailed2::
# 342 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
	return


CeruleanCity_EventScript_SlowbroFailed3::
# 347 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
	return


CeruleanCity_EventScript_Slowbro::
# 352 "data/maps/CeruleanCity/scripts.pory"
	lock
# 353 "data/maps/CeruleanCity/scripts.pory"
	random 4
# 354 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 355 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
# 356 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
# 357 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
# 358 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
# 359 "data/maps/CeruleanCity/scripts.pory"
	release
	end


CeruleanCity_EventScript_SlowbroText1::
# 364 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
	return


CeruleanCity_EventScript_SlowbroText2::
# 369 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
	return


CeruleanCity_EventScript_SlowbroText3::
# 374 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
	return


CeruleanCity_EventScript_SlowbroText4::
# 379 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
	return


CeruleanCity_EventScript_CitySign::
# 384 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
	end


CeruleanCity_EventScript_TrainerTips::
# 389 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
	end


CeruleanCity_EventScript_BikeShopSign::
# 394 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
	end


CeruleanCity_EventScript_GymSign::
# 399 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 400 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 401 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 402 "data/maps/CeruleanCity/scripts.pory"
	releaseall
	end


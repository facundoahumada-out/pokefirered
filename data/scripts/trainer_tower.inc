# 8 "data/scripts/trainer_tower.pory"

# 9 "data/scripts/trainer_tower.pory"
.equ DISABLE_SINGLES_TRIGGER,  VAR_TEMP_E
# 10 "data/scripts/trainer_tower.pory"
.equ DISABLE_DOUBLES_TRIGGER,  VAR_TEMP_F

TrainerTower_OnResume::
# 15 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_2, 0
# 16 "data/scripts/trainer_tower.pory"
	ttower_resumetimer
	end


TrainerTower_OnTransition::
# 21 "data/scripts/trainer_tower.pory"
	ttower_initfloor
# 22 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 23 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_SetObjectsSingles
# 24 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_SetObjectsDoubles
# 25 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_SetObjectsKnockout
# 26 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_2
# 27 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_3
# 28 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_4
# 29 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_5
# 30 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_E, TRUE
# 31 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_F, TRUE
	end


TrainerTower_EventScript_SetObjectsSingles::
# 36 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_2
# 37 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_4
# 38 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_5
# 39 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_F, TRUE
# 40 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_SINGLES, 15, 13
# 41 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_SINGLES, MOVEMENT_TYPE_FACE_LEFT
# 42 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_HideOwner
	return


TrainerTower_EventScript_SetObjectsDoubles::
# 46 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_3
# 47 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_4
# 48 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_E, TRUE
# 49 "data/scripts/trainer_tower.pory"
	ttower_isfloorcleared
# 50 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_EventScript_SetObjectsDoublesAlreadyBeaten
# 51 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_DOUBLES1, 10, 12
# 52 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES1, MOVEMENT_TYPE_FACE_LEFT
# 53 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_DOUBLES2, 10, 13
# 54 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES2, MOVEMENT_TYPE_FACE_LEFT
# 55 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_HideOwner
	return


TrainerTower_EventScript_SetObjectsDoublesAlreadyBeaten::
# 59 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_DOUBLES1, 10, 12
# 60 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES1, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_DOUBLES2, 11, 12
# 62 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES2, MOVEMENT_TYPE_FACE_DOWN
# 63 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_HideOwner
	return


TrainerTower_EventScript_SetObjectsKnockout::
# 68 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_5
# 69 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_F, TRUE
# 70 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_DOUBLES1, 10, 10
# 71 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES1, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_SINGLES, 14, 13
# 73 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_SINGLES, MOVEMENT_TYPE_FACE_LEFT
# 74 "data/scripts/trainer_tower.pory"
	setobjectxyperm LOCALID_TOWER_TRAINER_KNOCKOUT, 10, 16
# 75 "data/scripts/trainer_tower.pory"
	setobjectmovementtype LOCALID_TOWER_TRAINER_KNOCKOUT, MOVEMENT_TYPE_FACE_UP
# 76 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_HideOwner:
# 77 "data/scripts/trainer_tower.pory"
	setflag FLAG_TEMP_6
	end


# 81 "data/scripts/trainer_tower.pory"

# 82 "data/scripts/trainer_tower.pory"

# 83 "data/scripts/trainer_tower.pory"
TrainerTower_OnFrame::
# 84 "data/scripts/trainer_tower.pory"
	map_script_2 VAR_TEMP_2, 0, TrainerTower_EventScript_EnterFloor
# 85 "data/scripts/trainer_tower.pory"
	.2byte 0
# 86 "data/scripts/trainer_tower.pory"

# 87 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_EnterFloor::
# 88 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_2, 1
# 89 "data/scripts/trainer_tower.pory"
	ttower_isfloorcleared
# 90 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_EventScript_EndEnterFloor
# 91 "data/scripts/trainer_tower.pory"
	setvar DISABLE_SINGLES_TRIGGER, TRUE
# 92 "data/scripts/trainer_tower.pory"
	setvar DISABLE_DOUBLES_TRIGGER, TRUE
# 93 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_EndEnterFloor:
# 94 "data/scripts/trainer_tower.pory"
	ttower_shouldexit
# 95 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_EventScript_WarpToLobby
# 96 "data/scripts/trainer_tower.pory"
	end

TrainerTower_EventScript_WarpToLobby::
# 101 "data/scripts/trainer_tower.pory"
	warp MAP_TRAINER_TOWER_LOBBY, 9, 7
# 102 "data/scripts/trainer_tower.pory"
	waitstate
# 104 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_TriggerBattle::
# 105 "data/scripts/trainer_tower.pory"
	ttower_getchallengetype
# 106 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 107 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_DoSingleBattle
# 108 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_DoDoubleBattle
# 109 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_DoKnockoutBattle
# 110 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoSingleBattle:
# 111 "data/scripts/trainer_tower.pory"
	ttower_encountermusic
# 112 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_ExclamationMark
# 113 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 114 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_Delay48
# 115 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 116 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_E, TRUE
# 117 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_SINGLES, TrainerTower_Movement_SingleTrainerApproach
# 118 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 119 "data/scripts/trainer_tower.pory"
	ttower_getspeech TRAINER_TOWER_TEXT_INTRO, 0
# 120 "data/scripts/trainer_tower.pory"
	msgbox gStringVar4
# 121 "data/scripts/trainer_tower.pory"
	closemessage
# 122 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoBattle
	return


TrainerTower_EventScript_DoDoubleBattle::
# 126 "data/scripts/trainer_tower.pory"
	ttower_getspeech TRAINER_TOWER_TEXT_INTRO, VAR_TEMP_3
# 127 "data/scripts/trainer_tower.pory"
	msgbox gStringVar4
# 128 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8004, TRAINER_TOWER_FUNC_GET_SPEECH
# 129 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8005, TRAINER_TOWER_TEXT_INTRO
# 130 "data/scripts/trainer_tower.pory"
	addvar VAR_TEMP_3, 1
# 131 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_TEMP_3, 1, TrainerTower_EventScript_DoSecondTrainerIntro
# 132 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_3, 0
# 133 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoSecondTrainerIntro:
# 134 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8006, VAR_TEMP_3
# 135 "data/scripts/trainer_tower.pory"
	special CallTrainerTowerFunc
# 136 "data/scripts/trainer_tower.pory"
	msgbox gStringVar4
# 137 "data/scripts/trainer_tower.pory"
	closemessage
# 138 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoBattle
	return


TrainerTower_EventScript_DoKnockoutBattle::
# 142 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 143 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_EventScript_DoKnockoutBattle1
# 144 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_EventScript_DoKnockoutBattle2
# 145 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_EventScript_DoKnockoutBattle3
# 146 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoKnockoutBattle1:
# 147 "data/scripts/trainer_tower.pory"
	ttower_encountermusic
# 148 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_KNOCKOUT, Common_Movement_ExclamationMark
# 149 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 150 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_KNOCKOUT, Common_Movement_Delay48
# 151 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 152 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_KNOCKOUT, TrainerTower_Movement_BottomKnockoutTrainerApproach
# 153 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 154 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoKnockoutBattleIntro
	return


TrainerTower_EventScript_DoKnockoutBattle2::
# 158 "data/scripts/trainer_tower.pory"
	ttower_encountermusic
# 159 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_ExclamationMark
# 160 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 161 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_Delay48
# 162 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 163 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, TrainerTower_Movement_TopKnockoutTrainerApproach
# 164 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 165 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoKnockoutBattleIntro
	return


TrainerTower_EventScript_DoKnockoutBattle3::
# 169 "data/scripts/trainer_tower.pory"
	ttower_encountermusic
# 170 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_ExclamationMark
# 171 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 172 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_Delay48
# 173 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 174 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_SINGLES, TrainerTower_Movement_RightKnockoutTrainerApproach
# 175 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 176 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoKnockoutBattleIntro:
# 177 "data/scripts/trainer_tower.pory"
	ttower_getspeech TRAINER_TOWER_TEXT_INTRO, VAR_TEMP_1
# 178 "data/scripts/trainer_tower.pory"
	msgbox gStringVar4
# 179 "data/scripts/trainer_tower.pory"
	closemessage
# 180 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoBattle:
# 181 "data/scripts/trainer_tower.pory"
	ttower_dobattle
# 182 "data/scripts/trainer_tower.pory"
	waitstate
# 183 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 184 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, B_OUTCOME_WON, TrainerTower_EventScript_WonBattle
# 185 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, B_OUTCOME_LOST, TrainerTower_EventScript_WarpToLobbyLost
# 186 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, B_OUTCOME_DREW, TrainerTower_EventScript_WarpToLobbyLost
# 187 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_WonBattle:
# 188 "data/scripts/trainer_tower.pory"
	ttower_getchallengetype
# 189 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 190 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_SetFloorCleared
# 191 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_MoveDoublesTrainers
# 192 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_CheckNextKnockoutBattle
# 193 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_CheckNextKnockoutBattle:
# 194 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 195 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_EventScript_DoSecondKnockoutBattle
# 196 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_EventScript_DoThirdKnockoutBattle
# 197 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_EventScript_MoveLastKnockoutTrainer
# 198 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoSecondKnockoutBattle:
# 199 "data/scripts/trainer_tower.pory"
	addvar VAR_TEMP_1, 1
# 200 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoKnockoutBattle
	return


TrainerTower_EventScript_DoThirdKnockoutBattle::
# 204 "data/scripts/trainer_tower.pory"
	addvar VAR_TEMP_1, 1
# 205 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoKnockoutBattle
	return


TrainerTower_EventScript_MoveDoublesTrainers::
# 209 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES2, TrainerTower_Movement_DoublesTrainer2OutOfWay
# 210 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 211 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, TrainerTower_Movement_DoublesTrainer1FaceDown
# 212 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_SetFloorCleared
	return


TrainerTower_EventScript_MoveLastKnockoutTrainer::
# 216 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_SINGLES, TrainerTower_Movement_LastKnockoutTrainerOutOfWay
# 217 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_SetFloorCleared:
# 218 "data/scripts/trainer_tower.pory"
	ttower_clearedfloor
	end


TrainerTower_EventScript_WarpToLobbyLost::
# 223 "data/scripts/trainer_tower.pory"
	special HealPlayerParty
# 224 "data/scripts/trainer_tower.pory"
	ttower_setlost
# 225 "data/scripts/trainer_tower.pory"
	warp MAP_TRAINER_TOWER_LOBBY, 9, 7
# 226 "data/scripts/trainer_tower.pory"
	waitstate
# 228 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_SpeakToDoublesTrainer1::
# 229 "data/scripts/trainer_tower.pory"
	ttower_getchallengetype
# 230 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 231 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_DoublesTrainer1PostBattle
# 232 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_DoublesTrainer1PostBattle
# 233 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_KnockoutTrainer2PostBattle
# 234 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoublesTrainer1PostBattle:
# 235 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8006, 0
# 236 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoPostBattleText
	return


TrainerTower_EventScript_KnockoutTrainer2PostBattle::
# 240 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8006, 1
# 241 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoPostBattleText
	return


TrainerTower_EventScript_SpeakToSinglesTrainer::
# 245 "data/scripts/trainer_tower.pory"
	ttower_getchallengetype
# 246 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 247 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_SinglesTrainerPostBattle
# 248 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_SinglesTrainerPostBattle
# 249 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_KnockoutTrainer3PostBattle
# 250 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_SinglesTrainerPostBattle:
# 251 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8006, 0
# 252 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoPostBattleText
	return


TrainerTower_EventScript_KnockoutTrainer3PostBattle::
# 256 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8006, 2
# 257 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoPostBattleText
	return


TrainerTower_EventScript_SpeakToKnockoutTrainer::
# 261 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8006, 0
# 262 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_DoPostBattleText
	return


TrainerTower_EventScript_SpeakToDoublesTrainer2::
# 266 "data/scripts/trainer_tower.pory"
	setvar VAR_0x8006, 1
# 267 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_DoPostBattleText:
# 268 "data/scripts/trainer_tower.pory"
	ttower_getspeech TRAINER_TOWER_TEXT_AFTER
# 269 "data/scripts/trainer_tower.pory"
	lock
# 270 "data/scripts/trainer_tower.pory"
	faceplayer
# 271 "data/scripts/trainer_tower.pory"
	msgbox gStringVar4
# 272 "data/scripts/trainer_tower.pory"
	release
	return


TrainerTower_EventScript_SpeakToOwner::
# 278 "data/scripts/trainer_tower.pory"
	lock
# 279 "data/scripts/trainer_tower.pory"
	faceplayer
# 280 "data/scripts/trainer_tower.pory"
	ttower_getownerstate
# 281 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 282 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_Roof_EventScript_Arrived
# 283 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_Roof_EventScript_GivePrize
# 284 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_Roof_EventScript_OwnerEnd
# 285 "data/scripts/trainer_tower.pory"
TrainerTower_Roof_EventScript_Arrived:
# 286 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Roof_Text_ImOwnerBattledPerfectly
# 287 "data/scripts/trainer_tower.pory"
TrainerTower_Roof_EventScript_GivePrize:
# 288 "data/scripts/trainer_tower.pory"
	ttower_giveprize
# 289 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 290 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_Roof_EventScript_ReceivePrize
# 291 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_Roof_EventScript_NoRoomForPrize
# 292 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_Roof_EventScript_CheckFinalTime
# 293 "data/scripts/trainer_tower.pory"
TrainerTower_Roof_EventScript_ReceivePrize:
# 294 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Roof_Text_ThisIsForYou
# 295 "data/scripts/trainer_tower.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 296 "data/scripts/trainer_tower.pory"
	playfanfare MUS_LEVEL_UP
# 297 "data/scripts/trainer_tower.pory"
	message Text_ObtainedTheX
# 298 "data/scripts/trainer_tower.pory"
	waitfanfare
# 299 "data/scripts/trainer_tower.pory"
	waitmessage
# 300 "data/scripts/trainer_tower.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS_POCKET
# 301 "data/scripts/trainer_tower.pory"
	msgbox Text_PutItemAway
# 302 "data/scripts/trainer_tower.pory"
	call EventScript_RestorePrevTextColor
# 303 "data/scripts/trainer_tower.pory"
	goto TrainerTower_Roof_EventScript_CheckFinalTime
	return


TrainerTower_Roof_EventScript_NoRoomForPrize::
# 307 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Roof_Text_ThisIsForYou
# 308 "data/scripts/trainer_tower.pory"
	msgbox Text_BagIsFull
# 309 "data/scripts/trainer_tower.pory"
	goto TrainerTower_Roof_EventScript_CheckFinalTime
	return


TrainerTower_Roof_EventScript_CheckFinalTime::
# 313 "data/scripts/trainer_tower.pory"
	ttower_checkfinaltime
# 314 "data/scripts/trainer_tower.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 315 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_Roof_EventScript_NewRecord
# 316 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_Roof_EventScript_NoNewRecord
# 317 "data/scripts/trainer_tower.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_Roof_EventScript_OwnerEnd
# 318 "data/scripts/trainer_tower.pory"
TrainerTower_Roof_EventScript_NewRecord:
# 319 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Roof_Text_DoneItInRecordTime
# 320 "data/scripts/trainer_tower.pory"
	goto TrainerTower_Roof_EventScript_OwnerEnd
	return


TrainerTower_Roof_EventScript_NoNewRecord::
# 324 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Roof_Text_TookSweetTimeGettingHere
# 325 "data/scripts/trainer_tower.pory"
TrainerTower_Roof_EventScript_OwnerEnd:
# 326 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Roof_Text_IdLikeToSeeBetterTime
# 327 "data/scripts/trainer_tower.pory"
	release
	return


TrainerTower_EventScript_ShowTime::
# 332 "data/scripts/trainer_tower.pory"
	lockall
# 333 "data/scripts/trainer_tower.pory"
	ttower_gettime
# 334 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Text_XMinYZSec
# 335 "data/scripts/trainer_tower.pory"
	releaseall
	end


TrainerTower_EventScript_SingleBattleTrigger::
# 341 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_TriggerBattle
	return


TrainerTower_EventScript_DoubleBattleTriggerTop::
# 345 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_3, 0
# 346 "data/scripts/trainer_tower.pory"
	ttower_checkdoubles
# 347 "data/scripts/trainer_tower.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, TrainerTower_EventScript_IneligibleForDoubleBattle
# 348 "data/scripts/trainer_tower.pory"
	ttower_encountermusic
# 349 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_ExclamationMark
# 350 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 351 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_Delay48
# 352 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_TriggerDoubleBattle
	return


TrainerTower_EventScript_DoubleBattleTriggerBottom::
# 356 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_3, 1
# 357 "data/scripts/trainer_tower.pory"
	ttower_checkdoubles
# 358 "data/scripts/trainer_tower.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, TrainerTower_EventScript_IneligibleForDoubleBattle
# 359 "data/scripts/trainer_tower.pory"
	ttower_encountermusic
# 360 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES2, Common_Movement_ExclamationMark
# 361 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 362 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_TOWER_TRAINER_DOUBLES2, Common_Movement_Delay48
# 363 "data/scripts/trainer_tower.pory"
TrainerTower_EventScript_TriggerDoubleBattle:
# 364 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 365 "data/scripts/trainer_tower.pory"
	setvar VAR_TEMP_F, TRUE
# 366 "data/scripts/trainer_tower.pory"
	goto TrainerTower_EventScript_TriggerBattle
	return


TrainerTower_EventScript_IneligibleForDoubleBattle::
# 370 "data/scripts/trainer_tower.pory"
	lockall
# 371 "data/scripts/trainer_tower.pory"
	playse SE_DING_DONG
# 372 "data/scripts/trainer_tower.pory"
	msgbox TrainerTower_Lobby_Text_NeedTwoMonsForDouble
# 373 "data/scripts/trainer_tower.pory"
	closemessage
# 374 "data/scripts/trainer_tower.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Movement_PushPlayerBack
# 375 "data/scripts/trainer_tower.pory"
	waitmovement 0
# 376 "data/scripts/trainer_tower.pory"
	releaseall
	end


# 380 "data/scripts/trainer_tower.pory"

# 381 "data/scripts/trainer_tower.pory"

# 382 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_SingleTrainerApproach:
# 383 "data/scripts/trainer_tower.pory"
	walk_left
# 384 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_RightKnockoutTrainerApproach::
# 385 "data/scripts/trainer_tower.pory"
	walk_left
# 386 "data/scripts/trainer_tower.pory"
	walk_left
# 387 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_PushPlayerBack:
# 388 "data/scripts/trainer_tower.pory"
	walk_left
# 389 "data/scripts/trainer_tower.pory"
	step_end

# 392 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_BottomKnockoutTrainerApproach::
# 393 "data/scripts/trainer_tower.pory"
	walk_up
# 394 "data/scripts/trainer_tower.pory"
	walk_up
# 395 "data/scripts/trainer_tower.pory"
	step_end

# 398 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_TopKnockoutTrainerApproach::
# 399 "data/scripts/trainer_tower.pory"
	walk_down
# 400 "data/scripts/trainer_tower.pory"
	walk_down
# 401 "data/scripts/trainer_tower.pory"
	step_end

# 404 "data/scripts/trainer_tower.pory"

# 405 "data/scripts/trainer_tower.pory"

# 406 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_DoublesTrainer2OutOfWay::
# 407 "data/scripts/trainer_tower.pory"
	walk_right
# 408 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_LastKnockoutTrainerOutOfWay:
# 409 "data/scripts/trainer_tower.pory"
	walk_up
# 410 "data/scripts/trainer_tower.pory"
	face_down
# 411 "data/scripts/trainer_tower.pory"
	step_end

# 414 "data/scripts/trainer_tower.pory"
TrainerTower_Movement_DoublesTrainer1FaceDown::
# 415 "data/scripts/trainer_tower.pory"
	face_down
# 416 "data/scripts/trainer_tower.pory"
	step_end

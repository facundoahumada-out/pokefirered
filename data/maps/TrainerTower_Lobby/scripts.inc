TrainerTower_Lobby_MapScripts::
# 2 "data/maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_Lobby_OnResume
# 3 "data/maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerTower_Lobby_OnReturnToField
# 4 "data/maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_Lobby_OnTransition
# 5 "data/maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerTower_Lobby_OnLoad
# 6 "data/maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerTower_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/TrainerTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerTower_Lobby_EventScript_Enter
# 8 "data/maps/TrainerTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerTower_Lobby_EventScript_ExitElevator
	.2byte 0


TrainerTower_Lobby_OnResume::
# 13 "data/maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_2, 0
# 14 "data/maps/TrainerTower_Lobby/scripts.pory"
	ttower_resumetimer
# 15 "data/maps/TrainerTower_Lobby/scripts.pory"
	ttower_shouldexit
# 16 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_OnResumeEnd
# 18 "data/maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 19 "data/maps/TrainerTower_Lobby/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 7
# 20 "data/maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 21 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OnResumeEnd::
	end


TrainerTower_Lobby_OnReturnToField::
# 26 "data/maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_NURSE
# 27 "data/maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_MART_CLERK
# 28 "data/maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_RECEPTIONIST
# 29 "data/maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_COOLTRAINER_F
# 30 "data/maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_BALDING_MAN
	end


TrainerTower_Lobby_OnLoad::
# 35 "data/maps/TrainerTower_Lobby/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerTower_Lobby_OpenCounterBarrier
	end


TrainerTower_Lobby_OpenCounterBarrier::
# 40 "data/maps/TrainerTower_Lobby/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_Floor_ShadeBottomLeft, 0
	return


TrainerTower_Lobby_OnTransition::
# 45 "data/maps/TrainerTower_Lobby/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
# 46 "data/maps/TrainerTower_Lobby/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end


TrainerTower_Lobby_EventScript_ExitElevator::
# 51 "data/maps/TrainerTower_Lobby/scripts.pory"
	lockall
# 52 "data/maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_ExitElevator
# 53 "data/maps/TrainerTower_Lobby/scripts.pory"
	waitmovement 0
# 54 "data/maps/TrainerTower_Lobby/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_CounterBarrier, 1
# 55 "data/maps/TrainerTower_Lobby/scripts.pory"
	special DrawWholeMapView
# 56 "data/maps/TrainerTower_Lobby/scripts.pory"
	playse SE_CLICK
# 57 "data/maps/TrainerTower_Lobby/scripts.pory"
	waitse
# 58 "data/maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_D, 0
# 59 "data/maps/TrainerTower_Lobby/scripts.pory"
	releaseall
	end


# 63 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Movement_ExitElevator::
# 64 "data/maps/TrainerTower_Lobby/scripts.pory"
	walk_down
# 65 "data/maps/TrainerTower_Lobby/scripts.pory"
	walk_down
# 66 "data/maps/TrainerTower_Lobby/scripts.pory"
	step_end

TrainerTower_Lobby_EventScript_Enter::
# 70 "data/maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 1
# 71 "data/maps/TrainerTower_Lobby/scripts.pory"
	ttower_getchallengestatus
# 72 "data/maps/TrainerTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 73 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_STATUS_LOST, TrainerTower_Lobby_EventScript_LostChallenge
# 74 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_STATUS_UNK, TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist
# 75 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, CHALLENGE_STATUS_NORMAL, TrainerTower_Lobby_EventScript_EnterEnd
# 76 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_LostChallenge::
# 77 "data/maps/TrainerTower_Lobby/scripts.pory"
	lock
# 78 "data/maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 79 "data/maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 80 "data/maps/TrainerTower_Lobby/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 81 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TooBadComeBackTryAgain
# 82 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ExitChallenge
	return


TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist::
# 87 "data/maps/TrainerTower_Lobby/scripts.pory"
	lock
# 88 "data/maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 89 "data/maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 90 "data/maps/TrainerTower_Lobby/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 91 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch
# 92 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ExitChallenge::
# 93 "data/maps/TrainerTower_Lobby/scripts.pory"
	closemessage
# 94 "data/maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 95 "data/maps/TrainerTower_Lobby/scripts.pory"
	waitmovement 0
# 96 "data/maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
# 97 "data/maps/TrainerTower_Lobby/scripts.pory"
	release
# 98 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_EnterEnd::
	end


TrainerTower_Lobby_EventScript_Nurse::
# 103 "data/maps/TrainerTower_Lobby/scripts.pory"
	lock
# 104 "data/maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 105 "data/maps/TrainerTower_Lobby/scripts.pory"
	call EventScript_PkmnCenterNurse
# 106 "data/maps/TrainerTower_Lobby/scripts.pory"
	release
	end


TrainerTower_Lobby_EventScript_Receptionist::
# 111 "data/maps/TrainerTower_Lobby/scripts.pory"
	lock
# 112 "data/maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 113 "data/maps/TrainerTower_Lobby/scripts.pory"
	ttower_getbeatchallenge
# 114 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_Lobby_EventScript_ThanksForCompeting
# 115 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_GiveItYourBest
# 116 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ReceptionistEnd
	return


TrainerTower_Lobby_EventScript_ThanksForCompeting::
# 120 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ThanksForCompeting
# 121 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ReceptionistEnd::
# 122 "data/maps/TrainerTower_Lobby/scripts.pory"
	release
	end


TrainerTower_Lobby_EventScript_MartClerk::
# 127 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 128 "data/maps/TrainerTower_Lobby/scripts.pory"
	lock
# 129 "data/maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 130 "data/maps/TrainerTower_Lobby/scripts.pory"
	message Text_MayIHelpYou
# 131 "data/maps/TrainerTower_Lobby/scripts.pory"
	waitmessage
# 132 "data/maps/TrainerTower_Lobby/scripts.pory"
	pokemart TrainerTower_Lobby_Mart_Items
# 133 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox Text_PleaseComeAgain
# 134 "data/maps/TrainerTower_Lobby/scripts.pory"
	release
	end


	.align 2
# 138 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Mart_Items::
# 139 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 140 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 141 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 142 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_MAX_POTION
# 143 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 144 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_REVIVE
# 145 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 146 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 147 "data/maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

TrainerTower_Lobby_EventScript_EntryTrigger::
# 152 "data/maps/TrainerTower_Lobby/scripts.pory"
	lockall
# 153 "data/maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 154 "data/maps/TrainerTower_Lobby/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 155 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WelcomeToTrainerTower
# 156 "data/maps/TrainerTower_Lobby/scripts.pory"
	ttower_getnumfloors
# 157 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_EventScript_AllFloorsUsed
# 158 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpToFloorNum
# 159 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
	return


TrainerTower_Lobby_EventScript_AllFloorsUsed::
# 163 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpEighthFloor
# 164 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge::
# 165 "data/maps/TrainerTower_Lobby/scripts.pory"
	message TrainerTower_Lobby_Text_LikeToChallengeTrainers
# 166 "data/maps/TrainerTower_Lobby/scripts.pory"
	waitmessage
# 167 "data/maps/TrainerTower_Lobby/scripts.pory"
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO, FALSE
# 168 "data/maps/TrainerTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 169 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_Lobby_EventScript_ChooseChallenge
# 170 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_Lobby_EventScript_DeclineChallenge
# 171 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_Lobby_EventScript_ChallengeInfo
# 172 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, TrainerTower_Lobby_EventScript_DeclineChallenge
	end


TrainerTower_Lobby_EventScript_ChallengeInfo::
# 177 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ExplainTrainerTower
# 178 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
	end


TrainerTower_Lobby_EventScript_ChooseChallenge::
# 183 "data/maps/TrainerTower_Lobby/scripts.pory"
	multichoice 13, 3, MULTICHOICE_TRAINER_TOWER_MODE, FALSE
# 184 "data/maps/TrainerTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 185 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_Lobby_EventScript_BeginChallenge
# 186 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_Lobby_EventScript_BeginChallenge
# 187 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_Lobby_EventScript_BeginChallenge
# 188 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 3, TrainerTower_Lobby_EventScript_BeginChallenge
# 189 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, 4, TrainerTower_Lobby_EventScript_DeclineChallenge
# 190 "data/maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, TrainerTower_Lobby_EventScript_DeclineChallenge
	end


TrainerTower_Lobby_EventScript_BeginChallenge::
# 195 "data/maps/TrainerTower_Lobby/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 196 "data/maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 1
# 197 "data/maps/TrainerTower_Lobby/scripts.pory"
	special HealPlayerParty
# 198 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StartClockGetSetGo
# 199 "data/maps/TrainerTower_Lobby/scripts.pory"
	ttower_startchallenge
# 200 "data/maps/TrainerTower_Lobby/scripts.pory"
	releaseall
	end


TrainerTower_Lobby_EventScript_DeclineChallenge::
# 205 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_PleaseVisitUsAgain
# 206 "data/maps/TrainerTower_Lobby/scripts.pory"
	closemessage
# 207 "data/maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 208 "data/maps/TrainerTower_Lobby/scripts.pory"
	waitmovement 0
# 209 "data/maps/TrainerTower_Lobby/scripts.pory"
	releaseall
	end


# 213 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Movement_FaceReceptionist::
# 214 "data/maps/TrainerTower_Lobby/scripts.pory"
	face_right
# 215 "data/maps/TrainerTower_Lobby/scripts.pory"
	step_end

# 218 "data/maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Movement_WalkDown::
# 219 "data/maps/TrainerTower_Lobby/scripts.pory"
	walk_down
# 220 "data/maps/TrainerTower_Lobby/scripts.pory"
	step_end

TrainerTower_Lobby_EventScript_ShowRecords::
# 224 "data/maps/TrainerTower_Lobby/scripts.pory"
	lockall
# 225 "data/maps/TrainerTower_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 226 "data/maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 1
# 227 "data/maps/TrainerTower_Lobby/scripts.pory"
	special ShowBattleRecords
# 228 "data/maps/TrainerTower_Lobby/scripts.pory"
	waitstate
# 229 "data/maps/TrainerTower_Lobby/scripts.pory"
	releaseall
	end


TrainerTower_Lobby_EventScript_CooltrainerF::
# 234 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers, MSGBOX_NPC
	end


TrainerTower_Lobby_EventScript_BaldingMan::
# 239 "data/maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StairsTougherThanAnyBattle, MSGBOX_NPC
	end


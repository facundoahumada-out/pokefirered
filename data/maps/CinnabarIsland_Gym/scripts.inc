CinnabarIsland_Gym_MapScripts::
# 2 "data/maps/CinnabarIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
	.byte 0


CinnabarIsland_Gym_OnLoad::
# 6 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoadOpenAllDoors
# 7 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoadOpenDoor1
# 8 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoadOpenDoor2
# 9 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoadOpenDoor3
# 10 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoadOpenDoor4
# 11 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoadOpenDoor5
# 12 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoadOpenDoor6
	end


CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 17 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 18 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 19 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 20 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 21 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 22 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	end


CinnabarIsland_Gym_OnLoadOpenDoor1::
# 27 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
	return


CinnabarIsland_Gym_OnLoadOpenDoor2::
# 32 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
	return


CinnabarIsland_Gym_OnLoadOpenDoor3::
# 37 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
	return


CinnabarIsland_Gym_OnLoadOpenDoor4::
# 42 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
	return


CinnabarIsland_Gym_OnLoadOpenDoor5::
# 47 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
	return


CinnabarIsland_Gym_OnLoadOpenDoor6::
# 52 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	return


CinnabarIsland_Gym_EventScript_Blaine::
# 57 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 58 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 59 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_GiveTM38
# 60 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 61 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 66 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 67 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 68 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 69 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 70 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 71 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 72 "data/maps/CinnabarIsland_Gym/scripts.pory"
	set_gym_trainers 7
# 73 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
	end


CinnabarIsland_Gym_EventScript_GiveTM38::
# 78 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 79 "data/maps/CinnabarIsland_Gym/scripts.pory"
	checkitemspace ITEM_TM38
# 80 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 81 "data/maps/CinnabarIsland_Gym/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 82 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 83 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 84 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 89 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 90 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Erik::
# 95 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 96 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_Avery::
# 101 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 102 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 107 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 108 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 113 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
	return


CinnabarIsland_Gym_EventScript_Derek::
# 118 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 119 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 120 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 125 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 126 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 131 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
	return


CinnabarIsland_Gym_EventScript_Zac::
# 136 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 137 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedZac::
# 142 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 143 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 148 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
	return


CinnabarIsland_Gym_EventScript_Quinn::
# 153 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 154 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 159 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 160 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 165 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
	return


CinnabarIsland_Gym_EventScript_Ramon::
# 170 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 171 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 176 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 177 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 182 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
	return


CinnabarIsland_Gym_EventScript_Dusty::
# 187 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 188 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 193 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 194 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 199 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
	return


CinnabarIsland_Gym_EventScript_GymGuy::
# 204 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 205 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 206 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 207 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 208 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 213 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 214 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_GymStatue::
# 219 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 220 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 221 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 222 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 227 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 228 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz1Left::
# 233 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 234 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 235 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
	end


CinnabarIsland_Gym_EventScript_Quiz1Right::
# 240 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 241 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 242 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
	end


CinnabarIsland_Gym_EventScript_Quiz1::
# 247 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 248 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 249 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 250 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
	end


CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 255 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 256 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 257 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
	return


CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 262 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 263 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 264 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 265 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 266 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
	return


CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 271 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 272 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 273 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 274 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 279 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 280 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 281 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 282 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 283 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
	return


CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 288 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 293 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 294 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 295 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleQuinn::
# 300 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 301 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 302 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 303 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 304 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 305 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 306 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 307 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 312 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 313 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 314 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 319 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 320 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 321 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


# 325 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 326 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 327 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 328 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

# 331 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 332 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 333 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz2Left::
# 337 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 338 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 339 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
	end


CinnabarIsland_Gym_EventScript_Quiz2Right::
# 344 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 345 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 346 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
	end


CinnabarIsland_Gym_EventScript_Quiz2::
# 351 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 352 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 353 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 354 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
	end


CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 359 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 360 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 361 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 362 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 367 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 368 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 369 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 370 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 371 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
	return


CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 376 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 377 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 378 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleAvery::
# 383 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 384 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 385 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 386 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 387 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 388 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 389 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 390 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 395 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 396 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 397 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 402 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 403 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 404 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


# 408 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 409 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 410 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 411 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 412 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

# 415 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 416 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 417 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 418 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 419 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

# 422 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 423 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 424 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 425 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 426 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz3Left::
# 430 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 431 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 432 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
	end


CinnabarIsland_Gym_EventScript_Quiz3Right::
# 437 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 438 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 439 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
	end


CinnabarIsland_Gym_EventScript_Quiz3::
# 444 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 445 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 446 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 447 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
	end


CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 452 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 453 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 454 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 455 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 460 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 461 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 462 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 463 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 464 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
	return


CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 469 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 470 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 471 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleRamon::
# 476 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 477 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 478 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 479 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 480 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 481 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 482 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 483 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 488 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 489 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 490 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 495 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 496 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 497 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


# 501 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 502 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 503 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 504 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

# 507 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 508 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 509 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz4Left::
# 513 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 514 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 515 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
	end


CinnabarIsland_Gym_EventScript_Quiz4Right::
# 520 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 521 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 522 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
	end


CinnabarIsland_Gym_EventScript_Quiz4::
# 527 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 528 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 529 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 530 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
	end


CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 535 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 536 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 537 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 538 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 543 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 544 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 545 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 546 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 547 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
	return


CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 552 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 553 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 554 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleDerek::
# 559 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 560 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 561 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 562 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 563 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 564 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 565 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 566 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 571 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 572 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 573 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 578 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 579 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 580 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


# 584 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 585 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 586 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 587 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

# 590 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 591 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 592 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz5Left::
# 596 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 597 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 598 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
	end


CinnabarIsland_Gym_EventScript_Quiz5Right::
# 603 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 604 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 605 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
	end


CinnabarIsland_Gym_EventScript_Quiz5::
# 610 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 611 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 612 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 613 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
	end


CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 618 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 619 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 620 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 621 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 626 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 627 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 628 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 629 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 630 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
	return


CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 635 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 636 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 637 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleDusty::
# 642 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 643 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 644 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 645 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 646 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 647 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 648 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 649 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 654 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 655 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 656 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 661 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 662 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 663 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


# 667 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 668 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 669 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 670 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

# 673 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 674 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 675 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz6Left::
# 679 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 680 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 681 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
	end


CinnabarIsland_Gym_EventScript_Quiz6Right::
# 686 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 687 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 688 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
	end


CinnabarIsland_Gym_EventScript_Quiz6::
# 693 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 694 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 695 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 696 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
	end


CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 701 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 702 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 703 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 704 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 709 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 710 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 711 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 712 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 713 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
	return


CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 718 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleZac::
# 725 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 726 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 727 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 739 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 744 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 745 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 746 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
	return


# 750 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 751 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 752 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 753 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

# 756 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 757 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 758 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_OpenDoor1::
# 762 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 763 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 764 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 765 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 766 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 767 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 768 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor2::
# 773 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 774 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 775 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 776 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 777 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 778 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 779 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor3::
# 784 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 785 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 786 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 787 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 788 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 789 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 790 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor4::
# 795 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 796 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 797 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor5::
# 802 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 803 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 804 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 805 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 806 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 807 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 6, 18, METATILE_CinnabarGym_Floor, 0
# 808 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor6::
# 813 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 5, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 814 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 815 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 816 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 817 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 818 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_CinnabarGym_Floor, 0
# 819 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


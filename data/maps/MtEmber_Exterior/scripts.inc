MtEmber_Exterior_MapScripts::
# 2 "data/maps/MtEmber_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
# 3 "data/maps/MtEmber_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
	.byte 0


MtEmber_Exterior_OnTransition::
# 7 "data/maps/MtEmber_Exterior/scripts.pory"
	special UpdateDailyLeaderVisibility
# 8 "data/maps/MtEmber_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
# 9 "data/maps/MtEmber_Exterior/scripts.pory"
	call_if_eq VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2, MtEmber_Exterior_EventScript_RocketsFaceDown
	end


MtEmber_Exterior_EventScript_RocketsFaceDown::
# 14 "data/maps/MtEmber_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/MtEmber_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
	return


MtEmber_Exterior_OnLoad::
# 20 "data/maps/MtEmber_Exterior/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_OpenCave
	end


MtEmber_Exterior_EventScript_OpenCave::
# 25 "data/maps/MtEmber_Exterior/scripts.pory"
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
	return


MtEmber_Exterior_EventScript_Grunt1::
# 30 "data/maps/MtEmber_Exterior/scripts.pory"
	lock
# 31 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
# 32 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt1
# 33 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
# 34 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_Grunt1Defeated::
# 39 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 40 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_BattleGrunt1::
# 45 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
# 46 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 47 "data/maps/MtEmber_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 48 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1Intro
# 49 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
# 50 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 51 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 52 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_DefeatedBothGrunts::
# 57 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
# 58 "data/maps/MtEmber_Exterior/scripts.pory"
	closemessage
# 59 "data/maps/MtEmber_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/MtEmber_Exterior/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT1
# 61 "data/maps/MtEmber_Exterior/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT2
# 62 "data/maps/MtEmber_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 63 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_Grunt2::
# 68 "data/maps/MtEmber_Exterior/scripts.pory"
	lock
# 69 "data/maps/MtEmber_Exterior/scripts.pory"
	faceplayer
# 70 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
# 71 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt2
# 72 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
# 73 "data/maps/MtEmber_Exterior/scripts.pory"
	closemessage
# 74 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
# 75 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 76 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_DefeatedGrunt2::
# 81 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 82 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_BattleGrunt2::
# 87 "data/maps/MtEmber_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 88 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2Intro
# 89 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
# 90 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 91 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 92 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_RocketPasswordScene::
# 97 "data/maps/MtEmber_Exterior/scripts.pory"
	lockall
# 98 "data/maps/MtEmber_Exterior/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 99 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
# 100 "data/maps/MtEmber_Exterior/scripts.pory"
	message MtEmber_Exterior_Text_WhatsPasswordAgain
# 101 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmessage
# 102 "data/maps/MtEmber_Exterior/scripts.pory"
	playse SE_PIN
# 103 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
# 104 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 105 "data/maps/MtEmber_Exterior/scripts.pory"
	waitbuttonpress
# 106 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
# 107 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 109 "data/maps/MtEmber_Exterior/scripts.pory"
	playse SE_PIN
# 110 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
# 111 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 112 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
# 113 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 114 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 116 "data/maps/MtEmber_Exterior/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 117 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
# 118 "data/maps/MtEmber_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 119 "data/maps/MtEmber_Exterior/scripts.pory"
	releaseall
	end


MtEmber_Exterior_EventScript_Logan::
# 124 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 125 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Beth::
# 130 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 131 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Jocelyn::
# 136 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 137 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_DailyBlaine::
# 143 "data/maps/MtEmber_Exterior/scripts.pory"
	lock
# 144 "data/maps/MtEmber_Exterior/scripts.pory"
	faceplayer
# 145 "data/maps/MtEmber_Exterior/scripts.pory"
	specialvar VAR_RESULT, IsDailyLeaderBeatenToday
# 146 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_DailyLeaderAlreadyBeaten
# 147 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_DailyBlaineIntro, MSGBOX_YESNO
# 148 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtEmber_Exterior_EventScript_DailyBlaineDeclined
# 149 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_DailyBlaineAccept
# 150 "data/maps/MtEmber_Exterior/scripts.pory"
	cleartrainerflag TRAINER_DAILY_BLAINE
# 151 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_DAILY_BLAINE, Text_DailyLeaderDefeat
# 152 "data/maps/MtEmber_Exterior/scripts.pory"
	goto EventScript_DailyLeaderReward
	end


MtEmber_Exterior_EventScript_DailyBlaineDeclined::
# 157 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_DailyBlaineDeclined
# 158 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


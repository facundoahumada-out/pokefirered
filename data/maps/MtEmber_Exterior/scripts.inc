MtEmber_Exterior_MapScripts::
# 2 "data/maps/MtEmber_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
# 3 "data/maps/MtEmber_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
	.byte 0


MtEmber_Exterior_OnTransition::
# 7 "data/maps/MtEmber_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
# 8 "data/maps/MtEmber_Exterior/scripts.pory"
	call_if_eq VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2, MtEmber_Exterior_EventScript_RocketsFaceDown
	end


MtEmber_Exterior_EventScript_RocketsFaceDown::
# 13 "data/maps/MtEmber_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/MtEmber_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
	return


MtEmber_Exterior_OnLoad::
# 19 "data/maps/MtEmber_Exterior/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_OpenCave
	end


MtEmber_Exterior_EventScript_OpenCave::
# 24 "data/maps/MtEmber_Exterior/scripts.pory"
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
	return


MtEmber_Exterior_EventScript_Grunt1::
# 29 "data/maps/MtEmber_Exterior/scripts.pory"
	lock
# 30 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
# 31 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt1
# 32 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
# 33 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_Grunt1Defeated::
# 38 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 39 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_BattleGrunt1::
# 44 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
# 45 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtEmber_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 47 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1Intro
# 48 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
# 49 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 50 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 51 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_DefeatedBothGrunts::
# 56 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
# 57 "data/maps/MtEmber_Exterior/scripts.pory"
	closemessage
# 58 "data/maps/MtEmber_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/MtEmber_Exterior/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT1
# 60 "data/maps/MtEmber_Exterior/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT2
# 61 "data/maps/MtEmber_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_Grunt2::
# 67 "data/maps/MtEmber_Exterior/scripts.pory"
	lock
# 68 "data/maps/MtEmber_Exterior/scripts.pory"
	faceplayer
# 69 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
# 70 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt2
# 71 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
# 72 "data/maps/MtEmber_Exterior/scripts.pory"
	closemessage
# 73 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
# 74 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 75 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_DefeatedGrunt2::
# 80 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 81 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_BattleGrunt2::
# 86 "data/maps/MtEmber_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 87 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2Intro
# 88 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
# 89 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 90 "data/maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 91 "data/maps/MtEmber_Exterior/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_RocketPasswordScene::
# 96 "data/maps/MtEmber_Exterior/scripts.pory"
	lockall
# 97 "data/maps/MtEmber_Exterior/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 98 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
# 99 "data/maps/MtEmber_Exterior/scripts.pory"
	message MtEmber_Exterior_Text_WhatsPasswordAgain
# 100 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmessage
# 101 "data/maps/MtEmber_Exterior/scripts.pory"
	playse SE_PIN
# 102 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
# 103 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 104 "data/maps/MtEmber_Exterior/scripts.pory"
	waitbuttonpress
# 105 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
# 106 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
# 107 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 108 "data/maps/MtEmber_Exterior/scripts.pory"
	playse SE_PIN
# 109 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
# 110 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 111 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
# 112 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 113 "data/maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
# 114 "data/maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 115 "data/maps/MtEmber_Exterior/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 116 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
# 117 "data/maps/MtEmber_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 118 "data/maps/MtEmber_Exterior/scripts.pory"
	releaseall
	end


MtEmber_Exterior_EventScript_Logan::
# 123 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 124 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Beth::
# 129 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 130 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Jocelyn::
# 135 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 136 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end


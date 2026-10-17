ThreeIsland_BerryForest_MapScripts::
# 2 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_OnTransition
	.byte 0


ThreeIsland_BerryForest_OnTransition::
# 6 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special UpdateDailyLeaderVisibility
# 7 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
# 8 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
	end


ThreeIsland_BerryForest_EventScript_Lostelle::
# 13 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 14 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 15 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
# 16 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playse SE_PIN
# 17 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_ExclamationMark
# 18 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 19 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
# 20 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 21 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
# 22 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 23 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 24 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 25 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 26 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattle SPECIES_HYPNO, 30
# 27 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	dowildbattle
# 28 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special QuestLog_CutRecording
# 29 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_FacePlayer
# 30 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 31 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
# 32 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 33 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, ThreeIsland_BerryForest_EventScript_NoRoomForBerry
# 34 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 35 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
# 36 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	closemessage
# 37 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_RESCUED_LOSTELLE
# 38 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
# 39 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 40 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 41 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
# 42 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitstate
# 43 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
	end


ThreeIsland_BerryForest_EventScript_NoRoomForBerry::
# 48 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
	return


# 52 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Movement_LostelleLookAround::
# 53 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 54 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_16
# 55 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_right
# 56 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_8
# 57 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 58 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	step_end

ThreeIsland_BerryForest_EventScript_WelcomeSign::
# 62 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
	end


ThreeIsland_BerryForest_EventScript_BewareSign::
# 67 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
	end


ThreeIsland_BerryForest_EventScript_DailyKoga::
# 73 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 74 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 75 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, IsDailyLeaderBeatenToday
# 76 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_DailyLeaderAlreadyBeaten
# 77 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_DailyKogaIntro, MSGBOX_YESNO
# 78 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_DailyKogaDeclined
# 79 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_DailyKogaAccept
# 80 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	cleartrainerflag TRAINER_DAILY_KOGA
# 81 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_no_intro TRAINER_DAILY_KOGA, Text_DailyLeaderDefeat
# 82 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto EventScript_DailyLeaderReward
	end


ThreeIsland_BerryForest_EventScript_DailyKogaDeclined::
# 87 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_DailyKogaDeclined
# 88 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
	end


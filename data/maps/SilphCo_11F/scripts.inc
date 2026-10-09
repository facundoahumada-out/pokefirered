SilphCo_11F_MapScripts::
# 2 "data/maps/SilphCo_11F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
	.byte 0


SilphCo_11F_OnLoad::
# 6 "data/maps/SilphCo_11F/scripts.pory"
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
	end


SilphCo_11F_EventScript_President::
# 11 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 12 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
# 14 "data/maps/SilphCo_11F/scripts.pory"
	checkplayergender
# 15 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
# 16 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
# 17 "data/maps/SilphCo_11F/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 18 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
# 19 "data/maps/SilphCo_11F/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_OBTAIN_KEY_ITEM
# 20 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 21 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 22 "data/maps/SilphCo_11F/scripts.pory"
	release
	end


SilphCo_11F_EventScript_PresidentThanksMale::
# 27 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
	return


SilphCo_11F_EventScript_PresidentThanksFemale::
# 32 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
	return


SilphCo_11F_EventScript_NoRoomForMasterBall::
# 37 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 38 "data/maps/SilphCo_11F/scripts.pory"
	release
	end


SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 43 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 44 "data/maps/SilphCo_11F/scripts.pory"
	release
	end


SilphCo_11F_EventScript_Secretary::
# 49 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
	end


SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 54 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 55 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 56 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
	end


SilphCo_11F_EventScript_GiovanniTriggerRight::
# 61 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 62 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 63 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
	end


SilphCo_11F_EventScript_BattleGiovanni::
# 68 "data/maps/SilphCo_11F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 69 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 71 "data/maps/SilphCo_11F/scripts.pory"
	delay 25
# 72 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 73 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 74 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
# 75 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
# 76 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_GIOVANNI
# 77 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 78 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 79 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 80 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_SILPH_CO_GIOVANNI
# 82 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT1
# 83 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT2
# 84 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 86 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 87 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 88 "data/maps/SilphCo_11F/scripts.pory"
	releaseall
	end


SilphCo_11F_EventScript_GiovanniApproachLeft::
# 93 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 94 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 95 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
	return


SilphCo_11F_EventScript_GiovanniApproachRight::
# 100 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 101 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
	return


# 105 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft::
# 106 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 107 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 108 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 109 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 110 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_left
# 111 "data/maps/SilphCo_11F/scripts.pory"
	step_end

# 114 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight::
# 115 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 116 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 117 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 118 "data/maps/SilphCo_11F/scripts.pory"
	step_end

# 121 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni::
# 122 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 123 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 124 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 125 "data/maps/SilphCo_11F/scripts.pory"
	delay_8
# 126 "data/maps/SilphCo_11F/scripts.pory"
	delay_4
# 127 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_right
# 128 "data/maps/SilphCo_11F/scripts.pory"
	step_end

SilphCo_11F_EventScript_Monitor::
# 133 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
	end


SilphCo_11F_EventScript_FloorSign::
# 138 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_11F_EventScript_Grunt1::
# 143 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 144 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_11F_EventScript_Grunt2::
# 149 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 150 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


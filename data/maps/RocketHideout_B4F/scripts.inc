RocketHideout_B4F_MapScripts::
# 4 "data/maps/RocketHideout_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B4F_OnLoad
	.byte 0


RocketHideout_B4F_OnLoad::
# 8 "data/maps/RocketHideout_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 9 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 10 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 11 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_ne VAR_TEMP_1, 2, RocketHideout_B4F_EventScript_SetBarrier
	end


RocketHideout_B4F_EventScript_CountGruntDefeated::
# 16 "data/maps/RocketHideout_B4F/scripts.pory"
	addvar VAR_TEMP_1, 1
	return


RocketHideout_B4F_EventScript_Giovanni::
# 21 "data/maps/RocketHideout_B4F/scripts.pory"
	lock
# 22 "data/maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 23 "data/maps/RocketHideout_B4F/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 0
# 24 "data/maps/RocketHideout_B4F/scripts.pory"
	message RocketHideout_B4F_Text_GiovanniIntro
# 25 "data/maps/RocketHideout_B4F/scripts.pory"
	waitmessage
# 26 "data/maps/RocketHideout_B4F/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 27 "data/maps/RocketHideout_B4F/scripts.pory"
	waitbuttonpress
# 28 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI, RocketHideout_B4F_Text_GiovanniDefeat
# 29 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_GiovanniPostBattle
# 30 "data/maps/RocketHideout_B4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/RocketHideout_B4F/scripts.pory"
	closemessage
# 32 "data/maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_HIDEOUT_GIOVANNI
# 33 "data/maps/RocketHideout_B4F/scripts.pory"
	addobject LOCALID_SILPH_SCOPE
# 34 "data/maps/RocketHideout_B4F/scripts.pory"
	clearflag FLAG_HIDE_SILPH_SCOPE
# 35 "data/maps/RocketHideout_B4F/scripts.pory"
	setflag FLAG_HIDE_CELADON_ROCKETS
# 36 "data/maps/RocketHideout_B4F/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 37 "data/maps/RocketHideout_B4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 38 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end


RocketHideout_B4F_EventScript_SilphScope::
# 43 "data/maps/RocketHideout_B4F/scripts.pory"
	lock
# 44 "data/maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 45 "data/maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_SILPH_SCOPE
# 46 "data/maps/RocketHideout_B4F/scripts.pory"
	giveitem ITEM_SILPH_SCOPE
# 47 "data/maps/RocketHideout_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 48 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end


RocketHideout_B4F_EventScript_Grunt1::
# 53 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_18, RocketHideout_B4F_Text_Grunt1Intro, RocketHideout_B4F_Text_Grunt1Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt1
# 54 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 55 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end


RocketHideout_B4F_EventScript_DefeatedGrunt1::
# 60 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 61 "data/maps/RocketHideout_B4F/scripts.pory"
	addobject LOCALID_LIFT_KEY
# 62 "data/maps/RocketHideout_B4F/scripts.pory"
	clearflag FLAG_HIDE_LIFT_KEY
# 63 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end


RocketHideout_B4F_EventScript_LiftKey::
# 68 "data/maps/RocketHideout_B4F/scripts.pory"
	lock
# 69 "data/maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 70 "data/maps/RocketHideout_B4F/scripts.pory"
	setflag FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT
# 71 "data/maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_LIFT_KEY
# 72 "data/maps/RocketHideout_B4F/scripts.pory"
	giveitem ITEM_LIFT_KEY
# 73 "data/maps/RocketHideout_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 74 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end


RocketHideout_B4F_EventScript_Grunt2::
# 79 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_Text_Grunt2Intro, RocketHideout_B4F_Text_Grunt2Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt2
# 80 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B4F_EventScript_DefeatedGrunt2::
# 85 "data/maps/RocketHideout_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 86 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 87 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 88 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RocketHideout_B4F_EventScript_RemoveBarrier
# 89 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 90 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end


RocketHideout_B4F_EventScript_Grunt3::
# 95 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_Text_Grunt3Intro, RocketHideout_B4F_Text_Grunt3Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt3
# 96 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B4F_EventScript_DefeatedGrunt3::
# 101 "data/maps/RocketHideout_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 102 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 103 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 104 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RocketHideout_B4F_EventScript_RemoveBarrier
# 105 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 106 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end


RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval::
# 111 "data/maps/RocketHideout_B4F/scripts.pory"
	playse SE_UNLOCK
# 112 "data/maps/RocketHideout_B4F/scripts.pory"
	special DrawWholeMapView
# 113 "data/maps/RocketHideout_B4F/scripts.pory"
	waitse
	return


RocketHideout_B4F_EventScript_SetBarrier::
# 118 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 119 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 120 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 121 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 122 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 123 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	return


RocketHideout_B4F_EventScript_RemoveBarrier::
# 128 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 129 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutFloor, 0
# 130 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 131 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutFloor, 0
# 132 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 133 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor, 0
	return


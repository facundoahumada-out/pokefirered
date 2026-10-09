MtMoon_B2F_MapScripts::
# 2 "data/maps/MtMoon_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_B2F_OnTransition
	.byte 0


MtMoon_B2F_OnTransition::
# 6 "data/maps/MtMoon_B2F/scripts.pory"
	call_if_unset FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_ShowFossils
	end


MtMoon_B2F_EventScript_ShowFossils::
# 11 "data/maps/MtMoon_B2F/scripts.pory"
	clearflag FLAG_HIDE_DOME_FOSSIL
# 12 "data/maps/MtMoon_B2F/scripts.pory"
	clearflag FLAG_HIDE_HELIX_FOSSIL
	return


MtMoon_B2F_EventScript_MiguelTrigger::
# 17 "data/maps/MtMoon_B2F/scripts.pory"
	lockall
# 18 "data/maps/MtMoon_B2F/scripts.pory"
	applymovement LOCALID_MIGUEL, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/MtMoon_B2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/MtMoon_B2F/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 21 "data/maps/MtMoon_B2F/scripts.pory"
	releaseall
	end


MtMoon_B2F_EventScript_Miguel::
# 26 "data/maps/MtMoon_B2F/scripts.pory"
	lock
# 27 "data/maps/MtMoon_B2F/scripts.pory"
	faceplayer
# 28 "data/maps/MtMoon_B2F/scripts.pory"
	goto_if_set FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_MiguelFossilPicked
# 29 "data/maps/MtMoon_B2F/scripts.pory"
	goto_if_defeated TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_EventScript_MiguelGoPickFossil
# 30 "data/maps/MtMoon_B2F/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 31 "data/maps/MtMoon_B2F/scripts.pory"
	release
	end


MtMoon_B2F_EventScript_BattleMiguel::
# 36 "data/maps/MtMoon_B2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 37 "data/maps/MtMoon_B2F/scripts.pory"
	message MtMoon_B2F_Text_MiguelIntro
# 38 "data/maps/MtMoon_B2F/scripts.pory"
	waitmessage
# 39 "data/maps/MtMoon_B2F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 40 "data/maps/MtMoon_B2F/scripts.pory"
	waitbuttonpress
# 41 "data/maps/MtMoon_B2F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MIGUEL
# 42 "data/maps/MtMoon_B2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_Text_MiguelDefeat
# 43 "data/maps/MtMoon_B2F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_MOON_B2F, 1
# 44 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
	return


MtMoon_B2F_EventScript_MiguelFossilPicked::
# 49 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils
# 50 "data/maps/MtMoon_B2F/scripts.pory"
	release
	end


MtMoon_B2F_EventScript_MiguelGoPickFossil::
# 55 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
# 56 "data/maps/MtMoon_B2F/scripts.pory"
	release
	end


MtMoon_B2F_EventScript_DomeFossil::
# 61 "data/maps/MtMoon_B2F/scripts.pory"
	lock
# 62 "data/maps/MtMoon_B2F/scripts.pory"
	faceplayer
# 63 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantDomeFossil, MSGBOX_YESNO
# 64 "data/maps/MtMoon_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
# 65 "data/maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 66 "data/maps/MtMoon_B2F/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
# 67 "data/maps/MtMoon_B2F/scripts.pory"
	closemessage
# 68 "data/maps/MtMoon_B2F/scripts.pory"
	special QuestLog_CutRecording
# 69 "data/maps/MtMoon_B2F/scripts.pory"
	delay 10
# 70 "data/maps/MtMoon_B2F/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToHelixFossil
# 71 "data/maps/MtMoon_B2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtMoon_B2F/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 73 "data/maps/MtMoon_B2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 74 "data/maps/MtMoon_B2F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 75 "data/maps/MtMoon_B2F/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 76 "data/maps/MtMoon_B2F/scripts.pory"
	waitmessage
# 77 "data/maps/MtMoon_B2F/scripts.pory"
	waitfanfare
# 78 "data/maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 79 "data/maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_DOME_FOSSIL
# 80 "data/maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 81 "data/maps/MtMoon_B2F/scripts.pory"
	release
	end


# 85 "data/maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_Movement_MiguelToHelixFossil::
# 86 "data/maps/MtMoon_B2F/scripts.pory"
	walk_right
# 87 "data/maps/MtMoon_B2F/scripts.pory"
	walk_up
# 88 "data/maps/MtMoon_B2F/scripts.pory"
	walk_up
# 89 "data/maps/MtMoon_B2F/scripts.pory"
	walk_up
# 90 "data/maps/MtMoon_B2F/scripts.pory"
	step_end

MtMoon_B2F_EventScript_HelixFossil::
# 94 "data/maps/MtMoon_B2F/scripts.pory"
	lock
# 95 "data/maps/MtMoon_B2F/scripts.pory"
	faceplayer
# 96 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantHelixFossil, MSGBOX_YESNO
# 97 "data/maps/MtMoon_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
# 98 "data/maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 99 "data/maps/MtMoon_B2F/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
# 100 "data/maps/MtMoon_B2F/scripts.pory"
	closemessage
# 101 "data/maps/MtMoon_B2F/scripts.pory"
	special QuestLog_CutRecording
# 102 "data/maps/MtMoon_B2F/scripts.pory"
	delay 10
# 103 "data/maps/MtMoon_B2F/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToDomeFossil
# 104 "data/maps/MtMoon_B2F/scripts.pory"
	waitmovement 0
# 105 "data/maps/MtMoon_B2F/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 106 "data/maps/MtMoon_B2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 107 "data/maps/MtMoon_B2F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 108 "data/maps/MtMoon_B2F/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 109 "data/maps/MtMoon_B2F/scripts.pory"
	waitmessage
# 110 "data/maps/MtMoon_B2F/scripts.pory"
	waitfanfare
# 111 "data/maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 112 "data/maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_HELIX_FOSSIL
# 113 "data/maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 114 "data/maps/MtMoon_B2F/scripts.pory"
	release
	end


MtMoon_B2F_EventScript_DontTakeFossil::
# 119 "data/maps/MtMoon_B2F/scripts.pory"
	release
	end


# 123 "data/maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_Movement_MiguelToDomeFossil::
# 124 "data/maps/MtMoon_B2F/scripts.pory"
	walk_up
# 125 "data/maps/MtMoon_B2F/scripts.pory"
	walk_up
# 126 "data/maps/MtMoon_B2F/scripts.pory"
	walk_up
# 127 "data/maps/MtMoon_B2F/scripts.pory"
	step_end

MtMoon_B2F_EventScript_Grunt1::
# 131 "data/maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT, MtMoon_B2F_Text_Grunt1Intro, MtMoon_B2F_Text_Grunt1Defeat
# 132 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_B2F_EventScript_Grunt2::
# 137 "data/maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_2, MtMoon_B2F_Text_Grunt2Intro, MtMoon_B2F_Text_Grunt2Defeat
# 138 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_B2F_EventScript_Grunt3::
# 143 "data/maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_3, MtMoon_B2F_Text_Grunt3Intro, MtMoon_B2F_Text_Grunt3Defeat
# 144 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_B2F_EventScript_Grunt4::
# 149 "data/maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_4, MtMoon_B2F_Text_Grunt4Intro, MtMoon_B2F_Text_Grunt4Defeat
# 150 "data/maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


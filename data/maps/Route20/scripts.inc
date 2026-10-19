Route20_MapScripts::
# 2 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	.byte 0


Route20_OnTransition::
# 6 "data/maps/Route20/scripts.pory"
	special UpdateDailyLeaderVisibility
# 7 "data/maps/Route20/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
# 8 "data/maps/Route20/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
	end


Route20_EventScript_ResetSeafoamBouldersForB3F::
# 13 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
# 14 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
# 15 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
# 16 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
# 17 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
# 18 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
# 19 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
# 20 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
	return


Route20_EventScript_ResetSeafoamBouldersForB4F::
# 25 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
# 26 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
# 27 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
# 28 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
# 29 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
# 30 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	return


Route20_EventScript_SeafoamIslandsSign::
# 35 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
	end


Route20_EventScript_DailyMisty::
# 41 "data/maps/Route20/scripts.pory"
	lock
# 42 "data/maps/Route20/scripts.pory"
	faceplayer
# 43 "data/maps/Route20/scripts.pory"
	specialvar VAR_RESULT, IsDailyLeaderBeatenToday
# 44 "data/maps/Route20/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_DailyMistyPostBattle
# 45 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_DailyMistyIntro, MSGBOX_YESNO
# 46 "data/maps/Route20/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route20_EventScript_DailyMistyDeclined
# 47 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_DailyMistyAccept
# 48 "data/maps/Route20/scripts.pory"
	cleartrainerflag TRAINER_DAILY_MISTY
# 49 "data/maps/Route20/scripts.pory"
	trainerbattle_no_intro TRAINER_DAILY_MISTY, Text_DailyLeaderDefeat
# 50 "data/maps/Route20/scripts.pory"
	setvar VAR_0x8008, ITEM_TM55_SCALD
# 51 "data/maps/Route20/scripts.pory"
	call EventScript_DailyLeaderReward
# 52 "data/maps/Route20/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 53 "data/maps/Route20/scripts.pory"
	goto Route20_EventScript_DailyMistyPostBattle
	end


Route20_EventScript_DailyMistyPostBattle::
# 58 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_DailyMistyPostBattle
# 59 "data/maps/Route20/scripts.pory"
	release
	end


Route20_EventScript_DailyMistyDeclined::
# 64 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_DailyMistyDeclined
# 65 "data/maps/Route20/scripts.pory"
	release
	end


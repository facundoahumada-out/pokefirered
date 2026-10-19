Route10_MapScripts::
# 2 "data/maps/Route10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0


Route10_OnTransition::
# 6 "data/maps/Route10/scripts.pory"
	special UpdateDailyLeaderVisibility
	end


Route10_EventScript_Unused::
	end


Route10_EventScript_NorthRockTunnelSign::
# 15 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnelDetourToLavender, MSGBOX_SIGN
	end


Route10_EventScript_SouthRockTunnelSign::
# 20 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnel, MSGBOX_SIGN
	end


Route10_EventScript_PowerPlantSign::
# 25 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
	end


Route10_EventScript_DailyLtSurge::
# 31 "data/maps/Route10/scripts.pory"
	lock
# 32 "data/maps/Route10/scripts.pory"
	faceplayer
# 33 "data/maps/Route10/scripts.pory"
	specialvar VAR_RESULT, IsDailyLeaderBeatenToday
# 34 "data/maps/Route10/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route10_EventScript_DailyLtSurgePostBattle
# 35 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_DailyLtSurgeIntro, MSGBOX_YESNO
# 36 "data/maps/Route10/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_EventScript_DailyLtSurgeDeclined
# 37 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_DailyLtSurgeAccept
# 38 "data/maps/Route10/scripts.pory"
	cleartrainerflag TRAINER_DAILY_LT_SURGE
# 39 "data/maps/Route10/scripts.pory"
	trainerbattle_no_intro TRAINER_DAILY_LT_SURGE, Text_DailyLeaderDefeat
# 40 "data/maps/Route10/scripts.pory"
	setvar VAR_0x8008, ITEM_TM92_WILD_CHARGE
# 41 "data/maps/Route10/scripts.pory"
	call EventScript_DailyLeaderReward
# 42 "data/maps/Route10/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 43 "data/maps/Route10/scripts.pory"
	goto Route10_EventScript_DailyLtSurgePostBattle
	end


Route10_EventScript_DailyLtSurgePostBattle::
# 48 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_DailyLtSurgePostBattle
# 49 "data/maps/Route10/scripts.pory"
	release
	end


Route10_EventScript_DailyLtSurgeDeclined::
# 54 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_DailyLtSurgeDeclined
# 55 "data/maps/Route10/scripts.pory"
	release
	end


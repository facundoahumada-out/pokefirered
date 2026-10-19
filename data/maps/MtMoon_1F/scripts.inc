MtMoon_1F_MapScripts::
# 2 "data/maps/MtMoon_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
	.byte 0


MtMoon_1F_OnTransition::
# 6 "data/maps/MtMoon_1F/scripts.pory"
	special UpdateDailyLeaderVisibility
# 7 "data/maps/MtMoon_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
	end


MtMoon_1F_EventScript_ZubatSign::
# 12 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
	end


MtMoon_1F_EventScript_Marcos::
# 17 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
# 18 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Josh::
# 23 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
# 24 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Miriam::
# 29 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
# 30 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Iris::
# 35 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
# 36 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Jovan::
# 41 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
# 42 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Kent::
# 47 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
# 48 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Robby::
# 53 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
# 54 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_DailyBrock::
# 60 "data/maps/MtMoon_1F/scripts.pory"
	lock
# 61 "data/maps/MtMoon_1F/scripts.pory"
	faceplayer
# 62 "data/maps/MtMoon_1F/scripts.pory"
	specialvar VAR_RESULT, IsDailyLeaderBeatenToday
# 63 "data/maps/MtMoon_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtMoon_1F_EventScript_DailyBrockPostBattle
# 64 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_DailyBrockIntro, MSGBOX_YESNO
# 65 "data/maps/MtMoon_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoon_1F_EventScript_DailyBrockDeclined
# 66 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_DailyBrockAccept
# 67 "data/maps/MtMoon_1F/scripts.pory"
	cleartrainerflag TRAINER_DAILY_BROCK
# 68 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_DAILY_BROCK, Text_DailyLeaderDefeat
# 69 "data/maps/MtMoon_1F/scripts.pory"
	setvar VAR_0x8008, ITEM_TM70_STONE_EDGE
# 70 "data/maps/MtMoon_1F/scripts.pory"
	call EventScript_DailyLeaderReward
# 71 "data/maps/MtMoon_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 72 "data/maps/MtMoon_1F/scripts.pory"
	goto MtMoon_1F_EventScript_DailyBrockPostBattle
	end


MtMoon_1F_EventScript_DailyBrockPostBattle::
# 77 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_DailyBrockPostBattle
# 78 "data/maps/MtMoon_1F/scripts.pory"
	release
	end


MtMoon_1F_EventScript_DailyBrockDeclined::
# 83 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_DailyBrockDeclined
# 84 "data/maps/MtMoon_1F/scripts.pory"
	release
	end


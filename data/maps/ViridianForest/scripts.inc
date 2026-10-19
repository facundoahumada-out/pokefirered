ViridianForest_MapScripts::
# 2 "data/maps/ViridianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
	.byte 0


ViridianForest_OnTransition::
# 6 "data/maps/ViridianForest/scripts.pory"
	special UpdateDailyLeaderVisibility
# 7 "data/maps/ViridianForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
	end


ViridianForest_EventScript_Youngster::
# 12 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
	end


ViridianForest_EventScript_Boy::
# 17 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
	end


ViridianForest_EventScript_TrainerTips1::
# 22 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips2::
# 27 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips3::
# 32 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips4::
# 37 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips5::
# 42 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
	end


ViridianForest_EventScript_ExitSign::
# 47 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
	end


ViridianForest_EventScript_Rick::
# 52 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
# 53 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Doug::
# 58 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
# 59 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Sammy::
# 64 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
# 65 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Anthony::
# 70 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
# 71 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Charlie::
# 76 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
# 77 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_DailyErika::
# 83 "data/maps/ViridianForest/scripts.pory"
	lock
# 84 "data/maps/ViridianForest/scripts.pory"
	faceplayer
# 85 "data/maps/ViridianForest/scripts.pory"
	specialvar VAR_RESULT, IsDailyLeaderBeatenToday
# 86 "data/maps/ViridianForest/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ViridianForest_EventScript_DailyErikaPostBattle
# 87 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DailyErikaIntro, MSGBOX_YESNO
# 88 "data/maps/ViridianForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianForest_EventScript_DailyErikaDeclined
# 89 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DailyErikaAccept
# 90 "data/maps/ViridianForest/scripts.pory"
	cleartrainerflag TRAINER_DAILY_ERIKA
# 91 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_no_intro TRAINER_DAILY_ERIKA, Text_DailyLeaderDefeat
# 92 "data/maps/ViridianForest/scripts.pory"
	setvar VAR_0x8008, ITEM_TM53_ENERGY_BALL
# 93 "data/maps/ViridianForest/scripts.pory"
	call EventScript_DailyLeaderReward
# 94 "data/maps/ViridianForest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 95 "data/maps/ViridianForest/scripts.pory"
	goto ViridianForest_EventScript_DailyErikaPostBattle
	end


ViridianForest_EventScript_DailyErikaPostBattle::
# 100 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DailyErikaPostBattle
# 101 "data/maps/ViridianForest/scripts.pory"
	release
	end


ViridianForest_EventScript_DailyErikaDeclined::
# 106 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DailyErikaDeclined
# 107 "data/maps/ViridianForest/scripts.pory"
	release
	end


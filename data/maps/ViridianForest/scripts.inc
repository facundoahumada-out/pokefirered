ViridianForest_MapScripts::
# 2 "data/maps/ViridianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
	.byte 0


ViridianForest_OnTransition::
# 6 "data/maps/ViridianForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
	end


ViridianForest_EventScript_Youngster::
# 11 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
	end


ViridianForest_EventScript_Boy::
# 16 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
	end


ViridianForest_EventScript_TrainerTips1::
# 21 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips2::
# 26 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips3::
# 31 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips4::
# 36 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips5::
# 41 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
	end


ViridianForest_EventScript_ExitSign::
# 46 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
	end


ViridianForest_EventScript_Rick::
# 51 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
# 52 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Doug::
# 57 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
# 58 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Sammy::
# 63 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
# 64 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Anthony::
# 69 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
# 70 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Charlie::
# 75 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
# 76 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


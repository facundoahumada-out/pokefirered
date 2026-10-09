MtMoon_1F_MapScripts::
# 2 "data/maps/MtMoon_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
	.byte 0


MtMoon_1F_OnTransition::
# 6 "data/maps/MtMoon_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
	end


MtMoon_1F_EventScript_ZubatSign::
# 11 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
	end


MtMoon_1F_EventScript_Marcos::
# 16 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
# 17 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Josh::
# 22 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
# 23 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Miriam::
# 28 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
# 29 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Iris::
# 34 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
# 35 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Jovan::
# 40 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
# 41 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Kent::
# 46 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
# 47 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Robby::
# 52 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
# 53 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
	end


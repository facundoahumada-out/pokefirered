SixIsland_PatternBush_MapScripts::
# 2 "data/maps/SixIsland_PatternBush/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
	.byte 0


SixIsland_PatternBush_OnTransition::
# 6 "data/maps/SixIsland_PatternBush/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
# 7 "data/maps/SixIsland_PatternBush/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 8 "data/maps/SixIsland_PatternBush/scripts.pory"
	call_if_ge VAR_TEMP_1, 50, SixIsland_PatternBush_EventScript_SetEscapeRightExit
# 9 "data/maps/SixIsland_PatternBush/scripts.pory"
	call_if_le VAR_TEMP_1, 49, SixIsland_PatternBush_EventScript_SetEscapeLeftExit
	end


SixIsland_PatternBush_EventScript_SetEscapeRightExit::
# 14 "data/maps/SixIsland_PatternBush/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
	return


SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
# 19 "data/maps/SixIsland_PatternBush/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
	return


SixIsland_PatternBush_EventScript_Bethany::
# 24 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
# 25 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Allison::
# 30 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
# 31 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Garret::
# 36 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
# 37 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Jonah::
# 42 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
# 43 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Vance::
# 48 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
# 49 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Nash::
# 54 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
# 55 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Cordell::
# 60 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
# 61 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Dalia::
# 66 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
# 67 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Joana::
# 72 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
# 73 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Riley::
# 78 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
# 79 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Marcy::
# 84 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
# 85 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Layton::
# 90 "data/maps/SixIsland_PatternBush/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
# 91 "data/maps/SixIsland_PatternBush/scripts.pory"
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
	end


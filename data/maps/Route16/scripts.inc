Route16_MapScripts::
# 2 "data/maps/Route16/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route16_OnResume
# 3 "data/maps/Route16/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_OnTransition
# 4 "data/maps/Route16/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route16_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route16_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/Route16/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route16_OnWarpCyclingRoad
	.2byte 0


Route16_OnResume::
# 10 "data/maps/Route16/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, Route16_EventScript_RemoveSnorlax
	end


Route16_EventScript_RemoveSnorlax::
# 15 "data/maps/Route16/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


Route16_OnTransition::
# 20 "data/maps/Route16/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route16_OnTransitionCyclingRoad
	end


Route16_OnTransitionCyclingRoad::
# 25 "data/maps/Route16/scripts.pory"
	setflag FLAG_SYS_ON_CYCLING_ROAD
	return


Route16_OnWarpCyclingRoad::
# 30 "data/maps/Route16/scripts.pory"
	special ForcePlayerOntoBike
	end


Route16_EventScript_Snorlax::
# 35 "data/maps/Route16/scripts.pory"
	lock
# 36 "data/maps/Route16/scripts.pory"
	faceplayer
# 37 "data/maps/Route16/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route16_EventScript_SnorlaxNoPokeFlute
# 38 "data/maps/Route16/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 39 "data/maps/Route16/scripts.pory"
	special QuestLog_CutRecording
# 40 "data/maps/Route16/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 41 "data/maps/Route16/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route16_EventScript_DontUsePokeFlute
# 42 "data/maps/Route16/scripts.pory"
	call EventScript_AwakenSnorlax
# 43 "data/maps/Route16/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 44 "data/maps/Route16/scripts.pory"
	waitse
# 45 "data/maps/Route16/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 46 "data/maps/Route16/scripts.pory"
	delay 40
# 47 "data/maps/Route16/scripts.pory"
	waitmoncry
# 48 "data/maps/Route16/scripts.pory"
	setflag FLAG_HIDE_ROUTE_16_SNORLAX
# 49 "data/maps/Route16/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 50 "data/maps/Route16/scripts.pory"
	dowildbattle
# 51 "data/maps/Route16/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 52 "data/maps/Route16/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/Route16/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route16_EventScript_FoughtSnorlax
# 54 "data/maps/Route16/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route16_EventScript_FoughtSnorlax
# 55 "data/maps/Route16/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route16_EventScript_FoughtSnorlax
# 56 "data/maps/Route16/scripts.pory"
	release
	end


Route16_EventScript_DontUsePokeFlute::
# 61 "data/maps/Route16/scripts.pory"
	release
	end


Route16_EventScript_FoughtSnorlax::
# 66 "data/maps/Route16/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
# 67 "data/maps/Route16/scripts.pory"
	release
	end


Route16_EventScript_SnorlaxNoPokeFlute::
# 72 "data/maps/Route16/scripts.pory"
	msgbox Route16_Text_MonSprawledOutInSlumber
# 73 "data/maps/Route16/scripts.pory"
	release
	end


Route16_EventScript_CyclingRoadSign::
# 78 "data/maps/Route16/scripts.pory"
	msgbox Route16_Text_CyclingRoadSign, MSGBOX_SIGN
	end


Route16_EventScript_RouteSign::
# 83 "data/maps/Route16/scripts.pory"
	msgbox Route16_Text_RouteSign, MSGBOX_SIGN
	end


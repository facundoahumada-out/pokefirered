Route12_MapScripts::
# 2 "data/maps/Route12/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route12_OnResume
	.byte 0


Route12_OnResume::
# 6 "data/maps/Route12/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, Route12_EventScript_TryRemoveSnorlax
	end


Route12_EventScript_TryRemoveSnorlax::
# 11 "data/maps/Route12/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


Route12_EventScript_Snorlax::
# 16 "data/maps/Route12/scripts.pory"
	lock
# 17 "data/maps/Route12/scripts.pory"
	faceplayer
# 18 "data/maps/Route12/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route12_EventScript_SnorlaxNoPokeFlute
# 19 "data/maps/Route12/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/maps/Route12/scripts.pory"
	special QuestLog_CutRecording
# 21 "data/maps/Route12/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 22 "data/maps/Route12/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route12_EventScript_DontUsePokeFlute
# 23 "data/maps/Route12/scripts.pory"
	call EventScript_AwakenSnorlax
# 24 "data/maps/Route12/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 25 "data/maps/Route12/scripts.pory"
	waitse
# 26 "data/maps/Route12/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 27 "data/maps/Route12/scripts.pory"
	delay 40
# 28 "data/maps/Route12/scripts.pory"
	waitmoncry
# 29 "data/maps/Route12/scripts.pory"
	setflag FLAG_HIDE_ROUTE_12_SNORLAX
# 30 "data/maps/Route12/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 31 "data/maps/Route12/scripts.pory"
	setflag FLAG_WOKE_UP_ROUTE_12_SNORLAX
# 32 "data/maps/Route12/scripts.pory"
	dowildbattle
# 33 "data/maps/Route12/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 34 "data/maps/Route12/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/Route12/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route12_EventScript_FoughtSnorlax
# 36 "data/maps/Route12/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route12_EventScript_FoughtSnorlax
# 37 "data/maps/Route12/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route12_EventScript_FoughtSnorlax
# 38 "data/maps/Route12/scripts.pory"
	release
	end


Route12_EventScript_DontUsePokeFlute::
# 43 "data/maps/Route12/scripts.pory"
	release
	end


Route12_EventScript_FoughtSnorlax::
# 48 "data/maps/Route12/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
# 49 "data/maps/Route12/scripts.pory"
	release
	end


Route12_EventScript_SnorlaxNoPokeFlute::
# 54 "data/maps/Route12/scripts.pory"
	msgbox Route12_Text_MonSprawledOutInSlumber
# 55 "data/maps/Route12/scripts.pory"
	release
	end


Route12_EventScript_RouteSign::
# 60 "data/maps/Route12/scripts.pory"
	msgbox Route12_Text_RouteSign, MSGBOX_SIGN
	end


Route12_EventScript_FishingSign::
# 65 "data/maps/Route12/scripts.pory"
	msgbox Route12_Text_SportfishingArea, MSGBOX_SIGN
	end


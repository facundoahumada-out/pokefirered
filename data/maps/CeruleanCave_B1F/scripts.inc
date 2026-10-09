CeruleanCave_B1F_MapScripts::
# 2 "data/maps/CeruleanCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CeruleanCave_B1F_OnResume
# 3 "data/maps/CeruleanCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCave_B1F_OnTransition
	.byte 0


CeruleanCave_B1F_OnResume::
# 7 "data/maps/CeruleanCave_B1F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, CeruleanCave_B1F_EventScript_TryRemoveMewtwo
	end


CeruleanCave_B1F_EventScript_TryRemoveMewtwo::
# 12 "data/maps/CeruleanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/CeruleanCave_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 14 "data/maps/CeruleanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


CeruleanCave_B1F_OnTransition::
# 19 "data/maps/CeruleanCave_B1F/scripts.pory"
	call_if_unset FLAG_FOUGHT_MEWTWO, CeruleanCave_B1F_EventScript_ShowMewtwo
	end


CeruleanCave_B1F_EventScript_ShowMewtwo::
# 24 "data/maps/CeruleanCave_B1F/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
	return


CeruleanCave_B1F_EventScript_Mewtwo::
# 29 "data/maps/CeruleanCave_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 30 "data/maps/CeruleanCave_B1F/scripts.pory"
	special QuestLog_CutRecording
# 31 "data/maps/CeruleanCave_B1F/scripts.pory"
	lock
# 32 "data/maps/CeruleanCave_B1F/scripts.pory"
	faceplayer
# 33 "data/maps/CeruleanCave_B1F/scripts.pory"
	waitse
# 34 "data/maps/CeruleanCave_B1F/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 35 "data/maps/CeruleanCave_B1F/scripts.pory"
	message CeruleanCave_B1F_Text_Mew
# 36 "data/maps/CeruleanCave_B1F/scripts.pory"
	waitmessage
# 37 "data/maps/CeruleanCave_B1F/scripts.pory"
	waitmoncry
# 38 "data/maps/CeruleanCave_B1F/scripts.pory"
	delay 20
# 39 "data/maps/CeruleanCave_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 40 "data/maps/CeruleanCave_B1F/scripts.pory"
	waitbuttonpress
# 41 "data/maps/CeruleanCave_B1F/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 70
# 42 "data/maps/CeruleanCave_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 43 "data/maps/CeruleanCave_B1F/scripts.pory"
	special StartLegendaryBattle
# 44 "data/maps/CeruleanCave_B1F/scripts.pory"
	waitstate
# 45 "data/maps/CeruleanCave_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 46 "data/maps/CeruleanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/CeruleanCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CeruleanCave_B1F_EventScript_DefeatedMewtwo
# 48 "data/maps/CeruleanCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CeruleanCave_B1F_EventScript_RanFromMewtwo
# 49 "data/maps/CeruleanCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CeruleanCave_B1F_EventScript_RanFromMewtwo
# 50 "data/maps/CeruleanCave_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 51 "data/maps/CeruleanCave_B1F/scripts.pory"
	release
	end


CeruleanCave_B1F_EventScript_DefeatedMewtwo::
# 56 "data/maps/CeruleanCave_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 57 "data/maps/CeruleanCave_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


CeruleanCave_B1F_EventScript_RanFromMewtwo::
# 62 "data/maps/CeruleanCave_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 63 "data/maps/CeruleanCave_B1F/scripts.pory"
	goto EventScript_MonFlewAway
	end


NavelRock_Base_MapScripts::
# 2 "data/maps/NavelRock_Base/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Base_OnTransition
# 3 "data/maps/NavelRock_Base/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Base_OnResume
	.byte 0


NavelRock_Base_OnTransition::
# 7 "data/maps/NavelRock_Base/scripts.pory"
	call_if_set FLAG_FOUGHT_LUGIA, NavelRock_Base_EventScript_HideLugia
# 8 "data/maps/NavelRock_Base/scripts.pory"
	call_if_unset FLAG_FOUGHT_LUGIA, NavelRock_Base_EventScript_TryShowLugia
	end


NavelRock_Base_EventScript_HideLugia::
# 13 "data/maps/NavelRock_Base/scripts.pory"
	setflag FLAG_HIDE_LUGIA
	return


NavelRock_Base_EventScript_TryShowLugia::
# 18 "data/maps/NavelRock_Base/scripts.pory"
	goto_if_set FLAG_LUGIA_FLEW_AWAY, EventScript_Return
# 19 "data/maps/NavelRock_Base/scripts.pory"
	clearflag FLAG_HIDE_LUGIA
	return


NavelRock_Base_OnResume::
# 24 "data/maps/NavelRock_Base/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, NavelRock_Base_EventScript_TryRemoveLugia
	end


NavelRock_Base_EventScript_TryRemoveLugia::
# 29 "data/maps/NavelRock_Base/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/NavelRock_Base/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 31 "data/maps/NavelRock_Base/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_LUGIA
	return


NavelRock_Base_EventScript_Lugia::
# 36 "data/maps/NavelRock_Base/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 37 "data/maps/NavelRock_Base/scripts.pory"
	special QuestLog_CutRecording
# 38 "data/maps/NavelRock_Base/scripts.pory"
	lock
# 39 "data/maps/NavelRock_Base/scripts.pory"
	faceplayer
# 40 "data/maps/NavelRock_Base/scripts.pory"
	waitse
# 41 "data/maps/NavelRock_Base/scripts.pory"
	delay 20
# 42 "data/maps/NavelRock_Base/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 43 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8004, 0
# 44 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8005, 3
# 45 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8006, 4
# 46 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8007, 2
# 47 "data/maps/NavelRock_Base/scripts.pory"
	special ShakeScreen
# 48 "data/maps/NavelRock_Base/scripts.pory"
	delay 30
# 49 "data/maps/NavelRock_Base/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 50 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8004, 0
# 51 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8005, 3
# 52 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8006, 4
# 53 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8007, 2
# 54 "data/maps/NavelRock_Base/scripts.pory"
	special ShakeScreen
# 55 "data/maps/NavelRock_Base/scripts.pory"
	delay 30
# 56 "data/maps/NavelRock_Base/scripts.pory"
	delay 50
# 57 "data/maps/NavelRock_Base/scripts.pory"
	waitse
# 58 "data/maps/NavelRock_Base/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 59 "data/maps/NavelRock_Base/scripts.pory"
	waitmoncry
# 60 "data/maps/NavelRock_Base/scripts.pory"
	delay 20
# 61 "data/maps/NavelRock_Base/scripts.pory"
	seteventmon SPECIES_LUGIA, 70
# 62 "data/maps/NavelRock_Base/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 63 "data/maps/NavelRock_Base/scripts.pory"
	special StartLegendaryBattle
# 64 "data/maps/NavelRock_Base/scripts.pory"
	waitstate
# 65 "data/maps/NavelRock_Base/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 66 "data/maps/NavelRock_Base/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/NavelRock_Base/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Base_EventScript_DefeatedLugia
# 68 "data/maps/NavelRock_Base/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Base_EventScript_RanFromLugia
# 69 "data/maps/NavelRock_Base/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Base_EventScript_RanFromLugia
# 70 "data/maps/NavelRock_Base/scripts.pory"
	setflag FLAG_FOUGHT_LUGIA
# 71 "data/maps/NavelRock_Base/scripts.pory"
	release
	end


NavelRock_Base_EventScript_DefeatedLugia::
# 76 "data/maps/NavelRock_Base/scripts.pory"
	setflag FLAG_LUGIA_FLEW_AWAY
# 77 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 78 "data/maps/NavelRock_Base/scripts.pory"
	goto EventScript_MonFlewAway
	end


NavelRock_Base_EventScript_RanFromLugia::
# 83 "data/maps/NavelRock_Base/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 84 "data/maps/NavelRock_Base/scripts.pory"
	goto EventScript_MonFlewAway
	end


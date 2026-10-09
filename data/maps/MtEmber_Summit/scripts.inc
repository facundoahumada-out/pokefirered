MtEmber_Summit_MapScripts::
# 2 "data/maps/MtEmber_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Summit_OnTransition
# 3 "data/maps/MtEmber_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_Summit_OnResume
	.byte 0


MtEmber_Summit_OnResume::
# 7 "data/maps/MtEmber_Summit/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, MtEmber_Summit_EventScript_TryRemoveMoltres
	end


MtEmber_Summit_EventScript_TryRemoveMoltres::
# 12 "data/maps/MtEmber_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 14 "data/maps/MtEmber_Summit/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


MtEmber_Summit_OnTransition::
# 19 "data/maps/MtEmber_Summit/scripts.pory"
	call_if_unset FLAG_FOUGHT_MOLTRES, MtEmber_Summit_EventScript_ShowMoltres
	end


MtEmber_Summit_EventScript_ShowMoltres::
# 24 "data/maps/MtEmber_Summit/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
	return


MtEmber_Summit_EventScript_Moltres::
# 29 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 30 "data/maps/MtEmber_Summit/scripts.pory"
	special QuestLog_CutRecording
# 31 "data/maps/MtEmber_Summit/scripts.pory"
	lock
# 32 "data/maps/MtEmber_Summit/scripts.pory"
	faceplayer
# 33 "data/maps/MtEmber_Summit/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 50
# 34 "data/maps/MtEmber_Summit/scripts.pory"
	waitse
# 35 "data/maps/MtEmber_Summit/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 36 "data/maps/MtEmber_Summit/scripts.pory"
	message Text_Gyaoo
# 37 "data/maps/MtEmber_Summit/scripts.pory"
	waitmessage
# 38 "data/maps/MtEmber_Summit/scripts.pory"
	waitmoncry
# 39 "data/maps/MtEmber_Summit/scripts.pory"
	delay 10
# 40 "data/maps/MtEmber_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 41 "data/maps/MtEmber_Summit/scripts.pory"
	waitbuttonpress
# 42 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 43 "data/maps/MtEmber_Summit/scripts.pory"
	special StartLegendaryBattle
# 44 "data/maps/MtEmber_Summit/scripts.pory"
	waitstate
# 45 "data/maps/MtEmber_Summit/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 46 "data/maps/MtEmber_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MtEmber_Summit_EventScript_DefeatedMoltres
# 48 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MtEmber_Summit_EventScript_RanFromMoltres
# 49 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MtEmber_Summit_EventScript_RanFromMoltres
# 50 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 51 "data/maps/MtEmber_Summit/scripts.pory"
	release
	end


MtEmber_Summit_EventScript_DefeatedMoltres::
# 56 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 57 "data/maps/MtEmber_Summit/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


MtEmber_Summit_EventScript_RanFromMoltres::
# 62 "data/maps/MtEmber_Summit/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 63 "data/maps/MtEmber_Summit/scripts.pory"
	goto EventScript_MonFlewAway
	end


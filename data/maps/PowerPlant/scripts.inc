PowerPlant_MapScripts::
# 2 "data/maps/PowerPlant/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
# 3 "data/maps/PowerPlant/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PowerPlant_OnTransition
	.byte 0


PowerPlant_OnResume::
# 7 "data/maps/PowerPlant/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, PowerPlant_EventScript_TryRemoveStaticMon
	end


PowerPlant_EventScript_TryRemoveStaticMon::
# 12 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/PowerPlant/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 14 "data/maps/PowerPlant/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


PowerPlant_OnTransition::
# 19 "data/maps/PowerPlant/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POWER_PLANT
# 20 "data/maps/PowerPlant/scripts.pory"
	call_if_unset FLAG_FOUGHT_ZAPDOS, PowerPlant_EventScript_ShowZapdos
# 21 "data/maps/PowerPlant/scripts.pory"
	call_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1, PowerPlant_EventScript_ShowElectrode1
# 22 "data/maps/PowerPlant/scripts.pory"
	call_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2, PowerPlant_EventScript_ShowElectrode2
	end


PowerPlant_EventScript_ShowZapdos::
# 27 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
	return


PowerPlant_EventScript_ShowElectrode1::
# 32 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_1
	return


PowerPlant_EventScript_ShowElectrode2::
# 37 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_2
	return


PowerPlant_EventScript_Zapdos::
# 42 "data/maps/PowerPlant/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 43 "data/maps/PowerPlant/scripts.pory"
	special QuestLog_CutRecording
# 44 "data/maps/PowerPlant/scripts.pory"
	lock
# 45 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 46 "data/maps/PowerPlant/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50
# 47 "data/maps/PowerPlant/scripts.pory"
	waitse
# 48 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 49 "data/maps/PowerPlant/scripts.pory"
	message Text_Gyaoo
# 50 "data/maps/PowerPlant/scripts.pory"
	waitmessage
# 51 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 52 "data/maps/PowerPlant/scripts.pory"
	delay 10
# 53 "data/maps/PowerPlant/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 54 "data/maps/PowerPlant/scripts.pory"
	waitbuttonpress
# 55 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 56 "data/maps/PowerPlant/scripts.pory"
	special StartLegendaryBattle
# 57 "data/maps/PowerPlant/scripts.pory"
	waitstate
# 58 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 59 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_DefeatedZapdos
# 61 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_RanFromZapdos
# 62 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_RanFromZapdos
# 63 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 64 "data/maps/PowerPlant/scripts.pory"
	release
	end


PowerPlant_EventScript_DefeatedZapdos::
# 69 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 70 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


PowerPlant_EventScript_RanFromZapdos::
# 75 "data/maps/PowerPlant/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 76 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_MonFlewAway
	end


PowerPlant_EventScript_Electrode1::
# 81 "data/maps/PowerPlant/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 82 "data/maps/PowerPlant/scripts.pory"
	lock
# 83 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 84 "data/maps/PowerPlant/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 85 "data/maps/PowerPlant/scripts.pory"
	waitse
# 86 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 87 "data/maps/PowerPlant/scripts.pory"
	delay 40
# 88 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 89 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 90 "data/maps/PowerPlant/scripts.pory"
	dowildbattle
# 91 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 92 "data/maps/PowerPlant/scripts.pory"
	special QuestLog_CutRecording
# 93 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 94 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_FoughtElectrode1
# 95 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_FoughtElectrode1
# 96 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_FoughtElectrode1
# 97 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 98 "data/maps/PowerPlant/scripts.pory"
	release
	end


PowerPlant_EventScript_FoughtElectrode1::
# 103 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 104 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


PowerPlant_EventScript_Electrode2::
# 109 "data/maps/PowerPlant/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 110 "data/maps/PowerPlant/scripts.pory"
	lock
# 111 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 112 "data/maps/PowerPlant/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 113 "data/maps/PowerPlant/scripts.pory"
	waitse
# 114 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 115 "data/maps/PowerPlant/scripts.pory"
	delay 40
# 116 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 117 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 118 "data/maps/PowerPlant/scripts.pory"
	dowildbattle
# 119 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 120 "data/maps/PowerPlant/scripts.pory"
	special QuestLog_CutRecording
# 121 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 122 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_FoughtElectrode2
# 123 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_FoughtElectrode2
# 124 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_FoughtElectrode2
# 125 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 126 "data/maps/PowerPlant/scripts.pory"
	release
	end


PowerPlant_EventScript_FoughtElectrode2::
# 131 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 132 "data/maps/PowerPlant/scripts.pory"
	goto EventScript_RemoveStaticMon
	end


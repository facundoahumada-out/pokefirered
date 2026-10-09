BirthIsland_Exterior_MapScripts::
# 2 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_OnTransition
# 3 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_OnResume
# 4 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_OnReturnToField
	.byte 0


BirthIsland_Exterior_OnReturnToField::
# 8 "data/maps/BirthIsland_Exterior/scripts.pory"
	special SetDeoxysTrianglePalette
	end


BirthIsland_Exterior_OnTransition::
# 13 "data/maps/BirthIsland_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR
# 14 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DEOXYS_N
# 15 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_STEP_COUNTER, 0
# 16 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_NUM, 0
# 17 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_set FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle
# 18 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_unset FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle
	end


BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle::
# 23 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 24 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
	return


BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle::
# 29 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_set FLAG_DEOXYS_FLEW_AWAY, EventScript_Return
# 30 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 31 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_DEOXYS_AWAKENED
	return


BirthIsland_Exterior_OnResume::
# 36 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, BirthIsland_Exterior_EventScript_TryRemoveDeoxys
	end


BirthIsland_Exterior_EventScript_TryRemoveDeoxys::
# 41 "data/maps/BirthIsland_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 42 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 43 "data/maps/BirthIsland_Exterior/scripts.pory"
	removeobject LOCALID_BIRTH_ISLAND_DEOXYS
	return


BirthIsland_Exterior_EventScript_Triangle::
# 48 "data/maps/BirthIsland_Exterior/scripts.pory"
	lock
# 49 "data/maps/BirthIsland_Exterior/scripts.pory"
	faceplayer
# 50 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 51 "data/maps/BirthIsland_Exterior/scripts.pory"
	special QuestLog_CutRecording
# 52 "data/maps/BirthIsland_Exterior/scripts.pory"
	special DoDeoxysTriangleInteraction
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitstate
# 54 "data/maps/BirthIsland_Exterior/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 55 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_0x8000, 0, BirthIsland_Exterior_EventScript_NotSolved1
# 56 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_0x8000, 1, BirthIsland_Exterior_EventScript_NotSolved2
# 57 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_0x8000, 2, BirthIsland_Exterior_EventScript_Deoxys
# 58 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_0x8000, 3, BirthIsland_Exterior_EventScript_NotSolved3
	end


BirthIsland_Exterior_EventScript_NotSolved1::
# 63 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
	end


BirthIsland_Exterior_EventScript_NotSolved2::
# 68 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
	end


BirthIsland_Exterior_EventScript_NotSolved3::
# 73 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
	end


BirthIsland_Exterior_EventScript_Deoxys::
# 78 "data/maps/BirthIsland_Exterior/scripts.pory"
	addobject LOCALID_BIRTH_ISLAND_DEOXYS
# 79 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 80 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
# 81 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_BIRTH_ISLAND_EXTERIOR )
# 82 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_BIRTH_ISLAND_EXTERIOR )
# 83 "data/maps/BirthIsland_Exterior/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 84 "data/maps/BirthIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_DEOXYS, 0
# 85 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 86 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_BIRTH_ISLAND_DEOXYS, Movement_DeoxysApproach
# 87 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 88 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 89 "data/maps/BirthIsland_Exterior/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 90 "data/maps/BirthIsland_Exterior/scripts.pory"
	delay 40
# 91 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmoncry
# 92 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_BIRTH_ISLAND_DEOXYS
# 93 "data/maps/BirthIsland_Exterior/scripts.pory"
	seteventmon SPECIES_DEOXYS, 30
# 94 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 95 "data/maps/BirthIsland_Exterior/scripts.pory"
	special StartLegendaryBattle
# 96 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitstate
# 97 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 98 "data/maps/BirthIsland_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 99 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BirthIsland_Exterior_EventScript_DefeatedDeoxys
# 100 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BirthIsland_Exterior_EventScript_RanFromDeoxys
# 101 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_EventScript_RanFromDeoxys
# 102 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_FOUGHT_DEOXYS
# 103 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
	end


BirthIsland_Exterior_EventScript_DefeatedDeoxys::
# 108 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_DEOXYS_FLEW_AWAY
# 109 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 110 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto EventScript_MonFlewAway
	end


BirthIsland_Exterior_EventScript_RanFromDeoxys::
# 115 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 116 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto EventScript_MonFlewAway
	end


# 120 "data/maps/BirthIsland_Exterior/scripts.pory"
Movement_DeoxysApproach:
# 121 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 122 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 123 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 124 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 125 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 126 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 127 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 128 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end

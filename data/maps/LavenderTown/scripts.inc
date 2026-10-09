LavenderTown_MapScripts::
# 2 "data/maps/LavenderTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0


LavenderTown_OnTransition::
# 6 "data/maps/LavenderTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 7 "data/maps/LavenderTown/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 8 "data/maps/LavenderTown/scripts.pory"
	setflag FLAG_HIDE_SS_ANNE_RIVAL
	end


LavenderTown_EventScript_LittleGirl::
# 13 "data/maps/LavenderTown/scripts.pory"
	lock
# 14 "data/maps/LavenderTown/scripts.pory"
	faceplayer
# 15 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
# 16 "data/maps/LavenderTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_EventScript_LittleGirlBelieve
# 17 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_JustImaginingWhiteHand
# 18 "data/maps/LavenderTown/scripts.pory"
	release
	end


LavenderTown_EventScript_LittleGirlBelieve::
# 23 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_SoThereAreBelievers
# 24 "data/maps/LavenderTown/scripts.pory"
	release
	end


LavenderTown_EventScript_WorkerM::
# 29 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
	end


LavenderTown_EventScript_Boy::
# 34 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
	end


LavenderTown_EventScript_TownSign::
# 39 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
	end


LavenderTown_EventScript_SilphScopeNotice::
# 44 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
	end


LavenderTown_EventScript_VolunteerHouseSign::
# 49 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
	end


LavenderTown_EventScript_PokemonTowerSign::
# 54 "data/maps/LavenderTown/scripts.pory"
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
	end


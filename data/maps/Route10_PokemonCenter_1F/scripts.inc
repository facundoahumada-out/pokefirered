Route10_PokemonCenter_1F_MapScripts::
# 4 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
# 5 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Route10_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 10 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE10
	end


Route10_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 16 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 17 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 18 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
	end


Route10_PokemonCenter_1F_EventScript_FatMan::
# 23 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
	end


Route10_PokemonCenter_1F_EventScript_Gentleman::
# 28 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
	end


Route10_PokemonCenter_1F_EventScript_Youngster::
# 33 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
	end


Route10_PokemonCenter_1F_EventScript_Aide::
# 38 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 39 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 40 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 41 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone
# 42 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
# 43 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 44 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 45 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 46 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 47 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 48 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_lt VAR_0x8006, 20, Aide_EventScript_HaventCaughtEnough
# 49 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
# 50 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	checkitemspace ITEM_EVERSTONE
# 51 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 52 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_EVERSTONE
# 53 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
# 54 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 55 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
	end


Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone::
# 60 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 61 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
	end


Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
# 66 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, 20
# 67 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_EVERSTONE
	return


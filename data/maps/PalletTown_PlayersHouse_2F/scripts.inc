PalletTown_PlayersHouse_2F_MapScripts::
# 2 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
# 3 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

PalletTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 4 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
	.2byte 0


PalletTown_PlayersHouse_2F_OnTransition::
# 9 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_EventScript_SetRespawn
	end


PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 14 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
	return


PalletTown_PlayersHouse_2F_FirstWarpIn::
# 19 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 20 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
	end


PalletTown_PlayersHouse_2F_EventScript_NES::
# 25 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PlayedWithNES, MSGBOX_SIGN
	end


PalletTown_PlayersHouse_2F_EventScript_Sign::
# 30 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
	end


PalletTown_PlayersHouse_2F_EventScript_PC::
# 35 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 36 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lockall
# 37 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, HELPCONTEXT_BEDROOM_PC
# 38 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special Script_SetHelpContext
# 39 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 40 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOn
# 41 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 42 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox Text_PlayerBootedUpPC
# 43 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 44 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 45 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 46 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


EventScript_PalletTown_PlayersHouse_2F_ShutDownPC::
# 51 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 52 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 53 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOff
# 54 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 55 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


IndigoPlateau_PokemonCenter_1F_MapScripts::
# 2 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


IndigoPlateau_PokemonCenter_1F_OnTransition::
# 7 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
# 8 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 9 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
	end


IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 14 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, EventScript_Return
# 15 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
	return


IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 20 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 23 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end


IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
# 31 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
# 32 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end


IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
# 37 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 38 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end


IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 43 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
	end


IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 48 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 49 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 50 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message Text_MayIHelpYou
# 52 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 53 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 54 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 55 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end


	.align 2
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 61 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 62 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 63 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 64 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 65 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 66 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 71 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 72 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 74 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end


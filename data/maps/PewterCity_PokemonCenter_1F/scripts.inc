PewterCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PewterCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end


PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 25 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 26 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 27 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 0
# 28 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_JIGGLYPUFF, 0
# 29 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 30 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 31 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	delay 455
# 32 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_POKE_CENTER, 1
# 33 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 38 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 43 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 44 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 45 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 50 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
	end


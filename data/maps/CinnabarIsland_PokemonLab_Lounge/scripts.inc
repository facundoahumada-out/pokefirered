CinnabarIsland_PokemonLab_Lounge_MapScripts::
	.byte 0


CinnabarIsland_PokemonLab_Lounge_EventScript_Scientist::
# 4 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon, MSGBOX_NPC
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton::
# 9 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 10 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 11 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ELECTRODE
# 12 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 13 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set FLAG_DID_ESPHERE_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded
# 14 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 15 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 16 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 17 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 18 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 19 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon
# 20 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_DoInGameTrade
# 21 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_Thanks
# 22 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag FLAG_DID_ESPHERE_TRADE
# 23 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade::
# 28 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 29 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon::
# 34 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 35 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 36 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded::
# 41 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 42 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_Norma::
# 47 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 48 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 49 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 50 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 51 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 52 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 53 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set FLAG_DID_TANGENY_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded
# 54 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 55 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 56 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special ChoosePartyMon
# 57 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 58 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 59 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 60 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 61 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 62 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 63 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon
# 64 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 65 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 66 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special CreateInGameTradePokemon
# 67 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special DoInGameTradeScene
# 68 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 69 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 70 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag FLAG_DID_TANGENY_TRADE
# 71 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade::
# 76 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 77 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon::
# 82 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 83 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 84 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded::
# 89 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 90 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
	end


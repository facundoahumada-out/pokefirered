UndergroundPath_NorthEntrance_MapScripts::
	.byte 0


UndergroundPath_NorthEntrance_EventScript_Saige::
# 4 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	lock
# 5 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	faceplayer
# 6 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN
# 7 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 8 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	goto_if_set FLAG_DID_MS_NIDO_TRADE, UndergroundPath_NorthEntrance_EventScript_AlreadyTraded
# 9 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 10 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, UndergroundPath_NorthEntrance_EventScript_DeclineTrade
# 11 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 12 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, UndergroundPath_NorthEntrance_EventScript_DeclineTrade
# 13 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 14 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, UndergroundPath_NorthEntrance_EventScript_NotRequestedMon
# 15 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	call EventScript_DoInGameTrade
# 16 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 17 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	setflag FLAG_DID_MS_NIDO_TRADE
# 18 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	release
	end


UndergroundPath_NorthEntrance_EventScript_DeclineTrade::
# 23 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 24 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	release
	end


UndergroundPath_NorthEntrance_EventScript_NotRequestedMon::
# 29 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 30 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 31 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	release
	end


UndergroundPath_NorthEntrance_EventScript_AlreadyTraded::
# 36 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 37 "data/maps/UndergroundPath_NorthEntrance/scripts.pory"
	release
	end


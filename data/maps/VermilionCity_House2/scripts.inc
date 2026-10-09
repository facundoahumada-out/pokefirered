VermilionCity_House2_MapScripts::
	.byte 0


VermilionCity_House2_EventScript_Elyssa::
# 4 "data/maps/VermilionCity_House2/scripts.pory"
	lock
# 5 "data/maps/VermilionCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/VermilionCity_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 7 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 8 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_set FLAG_DID_CH_DING_TRADE, VermilionCity_House2_EventScript_AlreadyTraded
# 9 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon, MSGBOX_YESNO
# 10 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_House2_EventScript_DeclineTrade
# 11 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 12 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, VermilionCity_House2_EventScript_DeclineTrade
# 13 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 14 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, VermilionCity_House2_EventScript_NotRequestedMon
# 15 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_DoInGameTrade
# 16 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_ThankYou
# 17 "data/maps/VermilionCity_House2/scripts.pory"
	setflag FLAG_DID_CH_DING_TRADE
# 18 "data/maps/VermilionCity_House2/scripts.pory"
	release
	end


VermilionCity_House2_EventScript_DeclineTrade::
# 23 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_ThatsTooBad
# 24 "data/maps/VermilionCity_House2/scripts.pory"
	release
	end


VermilionCity_House2_EventScript_NotRequestedMon::
# 29 "data/maps/VermilionCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 30 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_ThisIsNoMon
# 31 "data/maps/VermilionCity_House2/scripts.pory"
	release
	end


VermilionCity_House2_EventScript_AlreadyTraded::
# 36 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_HowIsMyOldMon
# 37 "data/maps/VermilionCity_House2/scripts.pory"
	release
	end


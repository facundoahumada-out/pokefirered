CeruleanCity_House3_MapScripts::
	.byte 0


CeruleanCity_House3_EventScript_OldWoman::
# 4 "data/maps/CeruleanCity_House3/scripts.pory"
	msgbox CeruleanCity_House3_Text_PleaseTradeWithMyHusband, MSGBOX_NPC
	end


CeruleanCity_House3_EventScript_Dontae::
# 9 "data/maps/CeruleanCity_House3/scripts.pory"
	lock
# 10 "data/maps/CeruleanCity_House3/scripts.pory"
	faceplayer
# 11 "data/maps/CeruleanCity_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_JYNX
# 12 "data/maps/CeruleanCity_House3/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 13 "data/maps/CeruleanCity_House3/scripts.pory"
	goto_if_set FLAG_DID_ZYNX_TRADE, CeruleanCity_House3_EventScript_AlreadyTraded
# 14 "data/maps/CeruleanCity_House3/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 15 "data/maps/CeruleanCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House3_EventScript_DeclineTrade
# 16 "data/maps/CeruleanCity_House3/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 17 "data/maps/CeruleanCity_House3/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CeruleanCity_House3_EventScript_DeclineTrade
# 18 "data/maps/CeruleanCity_House3/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 19 "data/maps/CeruleanCity_House3/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CeruleanCity_House3_EventScript_NotRequestedMon
# 20 "data/maps/CeruleanCity_House3/scripts.pory"
	call EventScript_DoInGameTrade
# 21 "data/maps/CeruleanCity_House3/scripts.pory"
	msgbox Trade_Text_Thanks
# 22 "data/maps/CeruleanCity_House3/scripts.pory"
	setflag FLAG_DID_ZYNX_TRADE
# 23 "data/maps/CeruleanCity_House3/scripts.pory"
	release
	end


CeruleanCity_House3_EventScript_DeclineTrade::
# 28 "data/maps/CeruleanCity_House3/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 29 "data/maps/CeruleanCity_House3/scripts.pory"
	release
	end


CeruleanCity_House3_EventScript_NotRequestedMon::
# 34 "data/maps/CeruleanCity_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 35 "data/maps/CeruleanCity_House3/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 36 "data/maps/CeruleanCity_House3/scripts.pory"
	release
	end


CeruleanCity_House3_EventScript_AlreadyTraded::
# 41 "data/maps/CeruleanCity_House3/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 42 "data/maps/CeruleanCity_House3/scripts.pory"
	release
	end


Route2_House_MapScripts::
	.byte 0


Route2_House_EventScript_Scientist::
# 4 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Text_FaintedMonsCanUseFieldMoves, MSGBOX_NPC
	end


Route2_House_EventScript_Reyley::
# 9 "data/maps/Route2_House/scripts.pory"
	lock
# 10 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 11 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MR_MIME
# 12 "data/maps/Route2_House/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 13 "data/maps/Route2_House/scripts.pory"
	goto_if_set FLAG_DID_MIMIEN_TRADE, Route2_House_EventScript_AlreadyTraded
# 14 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 15 "data/maps/Route2_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route2_House_EventScript_DeclineTrade
# 16 "data/maps/Route2_House/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 17 "data/maps/Route2_House/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Route2_House_EventScript_DeclineTrade
# 18 "data/maps/Route2_House/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 19 "data/maps/Route2_House/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Route2_House_EventScript_NotRequestedMon
# 20 "data/maps/Route2_House/scripts.pory"
	call EventScript_DoInGameTrade
# 21 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 22 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DID_MIMIEN_TRADE
# 23 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_EventScript_DeclineTrade::
# 28 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 29 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_EventScript_NotRequestedMon::
# 34 "data/maps/Route2_House/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 35 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 36 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_EventScript_AlreadyTraded::
# 41 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 42 "data/maps/Route2_House/scripts.pory"
	release
	end


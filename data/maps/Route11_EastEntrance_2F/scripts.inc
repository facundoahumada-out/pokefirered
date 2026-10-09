Route11_EastEntrance_2F_MapScripts::
	.byte 0


Route11_EastEntrance_2F_EventScript_LeftBinoculars::
# 6 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	lockall
# 7 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_set FLAG_WOKE_UP_ROUTE_12_SNORLAX, Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone
# 8 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad
# 9 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	releaseall
	end


Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone::
# 14 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_WhatABreathtakingView
# 15 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	releaseall
	end


Route11_EastEntrance_2F_EventScript_RightBinoculars::
# 20 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender, MSGBOX_SIGN
	end


Route11_EastEntrance_2F_EventScript_Turner::
# 25 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	lock
# 26 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	faceplayer
# 27 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORINOA
# 28 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 29 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_set FLAG_DID_NINA_TRADE, Route11_EastEntrance_2F_EventScript_AlreadyTraded
# 30 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 31 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route11_EastEntrance_2F_EventScript_DeclineTrade
# 32 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 33 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Route11_EastEntrance_2F_EventScript_DeclineTrade
# 34 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 35 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Route11_EastEntrance_2F_EventScript_NotRequestedMon
# 36 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	call EventScript_DoInGameTrade
# 37 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 38 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	setflag FLAG_DID_NINA_TRADE
# 39 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_DeclineTrade::
# 44 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 45 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_NotRequestedMon::
# 50 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 51 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 52 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_AlreadyTraded::
# 57 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 58 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_Aide::
# 63 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	lock
# 64 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	faceplayer
# 65 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 66 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_set FLAG_GOT_ITEMFINDER, Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder
# 67 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30, MSGBOX_YESNO
# 68 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 69 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 70 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 71 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 72 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 73 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_lt VAR_0x8006, 30, Aide_EventScript_HaventCaughtEnough
# 74 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GreatHereYouGo
# 75 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	checkitemspace ITEM_ITEMFINDER
# 76 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 77 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	giveitem_msg Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide, ITEM_ITEMFINDER
# 78 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	setflag FLAG_GOT_ITEMFINDER
# 79 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
# 80 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder::
# 85 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
# 86 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_GetAideRequestInfo::
# 91 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_1, 30
# 92 "data/maps/Route11_EastEntrance_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ITEMFINDER
	return


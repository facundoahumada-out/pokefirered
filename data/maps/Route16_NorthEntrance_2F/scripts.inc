Route16_NorthEntrance_2F_MapScripts::
	.byte 0


Route16_NorthEntrance_2F_EventScript_LittleBoy::
# 6 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend, MSGBOX_NPC
	end


Route16_NorthEntrance_2F_EventScript_LittleGirl::
# 11 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes, MSGBOX_NPC
	end


Route16_NorthEntrance_2F_EventScript_LeftBinoculars::
# 16 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore, MSGBOX_SIGN
	end


Route16_NorthEntrance_2F_EventScript_RightBinoculars::
# 21 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_LongPathOverWater, MSGBOX_SIGN
	end


Route16_NorthEntrance_2F_EventScript_Aide::
# 26 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	lock
# 27 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	faceplayer
# 28 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 29 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	goto_if_set FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE, Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin
# 30 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40, MSGBOX_YESNO
# 31 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 32 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 33 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 34 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 35 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 36 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	goto_if_lt VAR_0x8006, 40, Aide_EventScript_HaventCaughtEnough
# 37 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GreatHereYouGo
# 38 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	checkitemspace ITEM_AMULET_COIN
# 39 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 40 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	giveitem_msg Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide, ITEM_AMULET_COIN
# 41 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE
# 42 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
# 43 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	release
	end


Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin::
# 48 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
# 49 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	release
	end


Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo::
# 54 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_1, 40
# 55 "data/maps/Route16_NorthEntrance_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_AMULET_COIN
	return


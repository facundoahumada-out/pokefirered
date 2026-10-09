CeladonCity_Restaurant_MapScripts::
	.byte 0


CeladonCity_Restaurant_EventScript_Chef::
# 4 "data/maps/CeladonCity_Restaurant/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_Woman::
# 9 "data/maps/CeladonCity_Restaurant/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_CoinCaseMan::
# 14 "data/maps/CeladonCity_Restaurant/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_Restaurant/scripts.pory"
	faceplayer
# 16 "data/maps/CeladonCity_Restaurant/scripts.pory"
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
# 17 "data/maps/CeladonCity_Restaurant/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
# 18 "data/maps/CeladonCity_Restaurant/scripts.pory"
	checkitemspace ITEM_COIN_CASE
# 19 "data/maps/CeladonCity_Restaurant/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
# 20 "data/maps/CeladonCity_Restaurant/scripts.pory"
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
# 21 "data/maps/CeladonCity_Restaurant/scripts.pory"
	setflag FLAG_GOT_COIN_CASE
# 22 "data/maps/CeladonCity_Restaurant/scripts.pory"
	release
	end


CeladonCity_Restaurant_EventScript_NoRoomForCoinCase::
# 27 "data/maps/CeladonCity_Restaurant/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
# 28 "data/maps/CeladonCity_Restaurant/scripts.pory"
	release
	end


CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase::
# 33 "data/maps/CeladonCity_Restaurant/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
# 34 "data/maps/CeladonCity_Restaurant/scripts.pory"
	release
	end


CeladonCity_Restaurant_EventScript_WorkerM::
# 39 "data/maps/CeladonCity_Restaurant/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_FatMan::
# 44 "data/maps/CeladonCity_Restaurant/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
	end


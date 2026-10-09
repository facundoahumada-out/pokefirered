FuchsiaCity_WardensHouse_MapScripts::
	.byte 0


FuchsiaCity_WardensHouse_EventScript_Warden::
# 4 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	lock
# 5 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	faceplayer
# 6 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	goto_if_set FLAG_GOT_HM04, FuchsiaCity_WardensHouse_EventScript_ExplainStrength
# 7 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	goto_if_set FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH, FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth
# 8 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HifFuffHefifoo, MSGBOX_YESNO
# 9 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FuchsiaCity_WardensHouse_EventScript_WardenYes
# 10 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	call_if_eq VAR_RESULT, NO, FuchsiaCity_WardensHouse_EventScript_WardenNo
# 11 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	release
	end


FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth::
# 16 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 17 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 18 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	message FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden
# 19 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	waitmessage
# 20 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	waitfanfare
# 21 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth
# 22 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	call EventScript_RestorePrevTextColor
# 23 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	checkplayergender
# 24 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	call_if_eq VAR_RESULT, MALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksMale
# 25 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale
# 26 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	giveitem_msg FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden, ITEM_HM04
# 27 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	setflag FLAG_GOT_HM04
# 28 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	removeitem ITEM_GOLD_TEETH
# 29 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	release
	end


FuchsiaCity_WardensHouse_EventScript_WardenThanksMale::
# 34 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething
	return


FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale::
# 39 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething
	return


FuchsiaCity_WardensHouse_EventScript_WardenYes::
# 44 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo
	return


FuchsiaCity_WardensHouse_EventScript_WardenNo::
# 49 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo
	return


FuchsiaCity_WardensHouse_EventScript_ExplainStrength::
# 54 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ExplainStrength
# 55 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	release
	end


FuchsiaCity_WardensHouse_EventScript_DisplaySign1::
# 60 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay, MSGBOX_SIGN
	end


FuchsiaCity_WardensHouse_EventScript_DisplaySign2::
# 65 "data/maps/FuchsiaCity_WardensHouse/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay, MSGBOX_SIGN
	end


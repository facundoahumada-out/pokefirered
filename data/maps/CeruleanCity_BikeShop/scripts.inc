CeruleanCity_BikeShop_MapScripts::
	.byte 0


CeruleanCity_BikeShop_EventScript_Clerk::
# 4 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	lock
# 5 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	faceplayer
# 6 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle
# 7 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher
# 8 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	showmoneybox 0, 0
# 9 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	message CeruleanCity_BikeShop_Text_WelcomeToBikeShop
# 10 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	waitmessage
# 11 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	multichoice 11, 0, MULTICHOICE_BIKE_SHOP, FALSE
# 12 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 13 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle
# 14 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
# 15 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	end


CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle::
# 21 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_SorryYouCantAffordIt
# 22 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	end


CeruleanCity_BikeShop_EventScript_ClerkGoodbye::
# 27 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
# 28 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	hidemoneybox
# 29 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	release
	end


CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher::
# 34 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo
# 35 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgreceiveditem CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle, ITEM_BICYCLE, 1, MUS_OBTAIN_KEY_ITEM
# 36 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	setflag FLAG_GOT_BICYCLE
# 37 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	additem ITEM_BICYCLE
# 38 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	removeitem ITEM_BIKE_VOUCHER
# 39 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
# 40 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	release
	end


CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle::
# 45 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle
# 46 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	release
	end


CeruleanCity_BikeShop_EventScript_NoRoomForBicycle::
# 52 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_MakeRoomForBicycle
# 53 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	release
	end


CeruleanCity_BikeShop_EventScript_Woman::
# 58 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe, MSGBOX_NPC
	end


CeruleanCity_BikeShop_EventScript_Youngster::
# 63 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	lock
# 64 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	faceplayer
# 65 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_YoungsterHaveBike
# 66 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_BikesCoolButExpensive
# 67 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	release
	end


CeruleanCity_BikeShop_EventScript_YoungsterHaveBike::
# 72 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_WowYourBikeIsCool
# 73 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	release
	end


CeruleanCity_BikeShop_EventScript_Bicycle::
# 78 "data/maps/CeruleanCity_BikeShop/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ShinyNewBicycle, MSGBOX_SIGN
	end


FuchsiaCity_House2_MapScripts::
	.byte 0


FuchsiaCity_House2_EventScript_FishingGurusBrother::
# 4 "data/maps/FuchsiaCity_House2/scripts.pory"
	lock
# 5 "data/maps/FuchsiaCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_GOOD_ROD, FuchsiaCity_House2_EventScript_AlreadyGotGoodRod
# 7 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_DoYouLikeToFish, MSGBOX_YESNO
# 8 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House2_EventScript_GiveGoodRod
# 9 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_OhThatsDisappointing
# 10 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end


FuchsiaCity_House2_EventScript_AlreadyGotGoodRod::
# 15 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HowAreTheFishBiting
# 16 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end


FuchsiaCity_House2_EventScript_GiveGoodRod::
# 21 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_LikeYourStyleTakeThis
# 22 "data/maps/FuchsiaCity_House2/scripts.pory"
	checkitemspace ITEM_GOOD_ROD
# 23 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_House2_EventScript_NoRoomForGoodRod
# 24 "data/maps/FuchsiaCity_House2/scripts.pory"
	giveitem_msg FuchsiaCity_House2_Text_ReceivedGoodRod, ITEM_GOOD_ROD
# 25 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons
# 26 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_GOT_GOOD_ROD
# 27 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end


FuchsiaCity_House2_EventScript_NoRoomForGoodRod::
# 32 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_YouHaveNoRoomForGift
# 33 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end


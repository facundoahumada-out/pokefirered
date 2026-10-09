VermilionCity_House1_MapScripts::
	.byte 0


VermilionCity_House1_EventScript_FishingGuru::
# 4 "data/maps/VermilionCity_House1/scripts.pory"
	lock
# 5 "data/maps/VermilionCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/VermilionCity_House1/scripts.pory"
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_AlreadyGotOldRod
# 7 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
# 8 "data/maps/VermilionCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveOldRod
# 9 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
# 10 "data/maps/VermilionCity_House1/scripts.pory"
	release
	end


VermilionCity_House1_EventScript_AlreadyGotOldRod::
# 15 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
# 16 "data/maps/VermilionCity_House1/scripts.pory"
	release
	end


VermilionCity_House1_EventScript_GiveOldRod::
# 21 "data/maps/VermilionCity_House1/scripts.pory"
	checkitemspace ITEM_OLD_ROD
# 22 "data/maps/VermilionCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForOldRod
# 23 "data/maps/VermilionCity_House1/scripts.pory"
	additem ITEM_OLD_ROD
# 24 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_TakeThisAndFish
# 25 "data/maps/VermilionCity_House1/scripts.pory"
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
# 26 "data/maps/VermilionCity_House1/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 27 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
# 28 "data/maps/VermilionCity_House1/scripts.pory"
	release
	end


VermilionCity_House1_EventScript_NoRoomForOldRod::
# 33 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
# 34 "data/maps/VermilionCity_House1/scripts.pory"
	release
	end


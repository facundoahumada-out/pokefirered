FiveIsland_MemorialPillar_MapScripts::
	.byte 0


FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 4 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 5 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 6 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 7 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 8 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 9 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 10 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 11 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 12 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 13 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 14 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 15 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 16 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
	end


FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 21 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 22 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
	end


FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 27 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 28 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_TM42
# 29 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 30 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 31 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
	end


FiveIsland_MemorialPillar_EventScript_Memorial::
# 36 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 37 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special QuestLog_CutRecording
# 38 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lockall
# 39 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 40 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 41 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 42 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_LEMONADE
# 43 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 44 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
	end


FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 49 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 50 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 51 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
	end


FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 56 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_LEMONADE
# 57 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 58 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 59 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 60 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 61 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 62 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 64 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 65 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 66 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_TM42
# 67 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 68 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 69 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
	end


FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 74 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 75 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 76 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 77 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
	return


FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 82 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 83 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 84 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
	end


FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 89 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 90 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
	end


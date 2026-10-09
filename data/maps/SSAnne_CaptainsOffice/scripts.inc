SSAnne_CaptainsOffice_MapScripts::
	.byte 0


SSAnne_CaptainsOffice_EventScript_Captain::
# 4 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	lock
# 5 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_GOT_HM01, SSAnne_CaptainsOffice_EventScript_AlreadyGotCut
# 6 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick
# 7 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 8 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	message SSAnne_CaptainsOffice_Text_RubbedCaptainsBack
# 9 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmessage
# 10 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	playfanfare MUS_HEAL
# 11 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	waitfanfare
# 12 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	call EventScript_RestorePrevTextColor
# 13 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	delay 50
# 14 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 15 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmovement 0
# 16 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut
# 17 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	giveitem_msg SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain, ITEM_HM01, 1, MUS_OBTAIN_KEY_ITEM
# 18 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ExplainCut
# 19 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	setflag FLAG_GOT_HM01
# 20 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
# 21 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	release
	end


SSAnne_CaptainsOffice_EventScript_NoRoomForCut::
# 27 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis
# 28 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	closemessage
# 29 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FaceOriginalDirection
# 30 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmovement 0
# 31 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	release
	end


SSAnne_CaptainsOffice_EventScript_AlreadyGotCut::
# 36 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 37 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmovement 0
# 38 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon
# 39 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	release
	end


SSAnne_CaptainsOffice_EventScript_TrashCan::
# 44 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked, MSGBOX_SIGN
	end


SSAnne_CaptainsOffice_EventScript_Book::
# 49 "data/maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_HowToConquerSeasickness, MSGBOX_SIGN
	end


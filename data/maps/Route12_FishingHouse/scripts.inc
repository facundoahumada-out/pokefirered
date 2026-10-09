Route12_FishingHouse_MapScripts::
	.byte 0


Route12_FishingHouse_EventScript_FishingGuruBrother::
# 4 "data/maps/Route12_FishingHouse/scripts.pory"
	lock
# 5 "data/maps/Route12_FishingHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_CheckMagikarpRecord
# 7 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
# 8 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route12_FishingHouse_EventScript_GiveSuperRod
# 9 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
# 10 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_GiveSuperRod::
# 15 "data/maps/Route12_FishingHouse/scripts.pory"
	checkitemspace ITEM_SUPER_ROD
# 16 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForSuperRod
# 17 "data/maps/Route12_FishingHouse/scripts.pory"
	additem ITEM_SUPER_ROD
# 18 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
# 19 "data/maps/Route12_FishingHouse/scripts.pory"
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
# 20 "data/maps/Route12_FishingHouse/scripts.pory"
	setflag FLAG_GOT_SUPER_ROD
# 21 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
# 22 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NoRoomForSuperRod::
# 27 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 28 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_CheckMagikarpRecord::
# 33 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 34 "data/maps/Route12_FishingHouse/scripts.pory"
	special QuestLog_CutRecording
# 35 "data/maps/Route12_FishingHouse/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGIKARP
# 36 "data/maps/Route12_FishingHouse/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 37 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoMagikarpInParty
# 38 "data/maps/Route12_FishingHouse/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 39 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
# 40 "data/maps/Route12_FishingHouse/scripts.pory"
	special ChoosePartyMon
# 41 "data/maps/Route12_FishingHouse/scripts.pory"
	waitstate
# 42 "data/maps/Route12_FishingHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 43 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_ge VAR_RESULT, PARTY_SIZE, Route12_FishingHouse_EventScript_CancelShowMon
# 44 "data/maps/Route12_FishingHouse/scripts.pory"
	special CompareMagikarpSize
# 45 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route12_FishingHouse_EventScript_NotMagikarp
# 46 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Route12_FishingHouse_EventScript_NotRecordMagikarp
# 47 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 3, Route12_FishingHouse_EventScript_NewRecordMagikarp
# 48 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 4, Route12_FishingHouse_EventScript_TieRecordMagikarp
# 49 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NoMagikarpInParty::
# 54 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
# 55 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_CancelShowMon::
# 60 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NotMagikarp::
# 65 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
# 66 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NotRecordMagikarp::
# 71 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
# 72 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp
# 73 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_TieRecordMagikarp::
# 78 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
# 79 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast
# 80 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NewRecordMagikarp::
# 85 "data/maps/Route12_FishingHouse/scripts.pory"
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
# 86 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_WhoaXInchesTakeThis
# 87 "data/maps/Route12_FishingHouse/scripts.pory"
	giveitem ITEM_NET_BALL
# 88 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForNetBall
# 89 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
# 90 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NoRoomForNetBall::
# 95 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 96 "data/maps/Route12_FishingHouse/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_MagikarpRecordSign::
# 101 "data/maps/Route12_FishingHouse/scripts.pory"
	lockall
# 102 "data/maps/Route12_FishingHouse/scripts.pory"
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet
# 103 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
# 104 "data/maps/Route12_FishingHouse/scripts.pory"
	releaseall
	end


Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet::
# 109 "data/maps/Route12_FishingHouse/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 110 "data/maps/Route12_FishingHouse/scripts.pory"
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXInches
# 111 "data/maps/Route12_FishingHouse/scripts.pory"
	releaseall
	end


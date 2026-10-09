SixIsland_WaterPath_House1_MapScripts::
	.byte 0


SixIsland_WaterPath_House1_EventScript_Beauty::
# 4 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	lock
# 5 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	faceplayer
# 6 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 7 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	special QuestLog_CutRecording
# 8 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	setvar VAR_0x8004, SPECIES_HERACROSS
# 9 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 10 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty
# 11 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 12 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
# 13 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	special ChoosePartyMon
# 14 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	waitstate
# 15 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 16 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_ge VAR_RESULT, PARTY_SIZE, SixIsland_WaterPath_House1_EventScript_DontShowMon
# 17 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	special CompareHeracrossSize
# 18 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SixIsland_WaterPath_House1_EventScript_ShownNonHeracross
# 19 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross
# 20 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 21 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_eq VAR_RESULT, 4, SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross
# 22 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty::
# 27 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
# 28 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_DontShowMon::
# 33 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_ShownNonHeracross::
# 38 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
# 39 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross::
# 44 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 45 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest
# 46 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross::
# 51 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 52 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore
# 53 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_ShownBigHeracross::
# 58 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
# 59 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward
# 60 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	giveitem ITEM_NEST_BALL
# 61 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall
# 62 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
# 63 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall::
# 68 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
# 69 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_SizeRecord::
# 74 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	lockall
# 75 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty
# 76 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
# 77 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	releaseall
	end


SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty::
# 82 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 83 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches
# 84 "data/maps/SixIsland_WaterPath_House1/scripts.pory"
	releaseall
	end


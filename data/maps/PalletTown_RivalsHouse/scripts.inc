PalletTown_RivalsHouse_MapScripts::
# 4 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
	.byte 0


PalletTown_RivalsHouse_OnTransition::
# 8 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
# 9 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
	end


PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 14 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectxyperm LOCALID_DAISY, 5, 4
	return


PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 20 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_TEMP_1, TRUE
	return


PalletTown_RivalsHouse_EventScript_Daisy::
# 25 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 26 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 27 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 28 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_GroomMon
# 29 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_TEMP_1, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
# 30 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 31 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
# 32 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
# 33 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 34 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 35 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
# 36 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 37 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 42 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 43 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GroomMon::
# 48 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 49 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special QuestLog_CutRecording
# 50 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500, PalletTown_RivalsHouse_EventScript_RateMonFriendship
# 51 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 52 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 53 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 54 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special ChoosePartyMon
# 55 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitstate
# 56 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 57 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 58 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 59 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 60 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
# 61 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 62 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 63 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playfanfare MUS_HEAL
# 65 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitfanfare
# 66 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special DaisyMassageServices
# 67 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special BufferMonNickname
# 69 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 70 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 75 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 76 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 81 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 82 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 87 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 88 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 89 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 90 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_0x8000, 0, PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
# 91 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_0x8000, 1, PalletTown_RivalsHouse_EventScript_MonFriendshipLower
# 92 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_0x8000, 2, PalletTown_RivalsHouse_EventScript_MonFriendshipLow
# 93 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_0x8000, 3, PalletTown_RivalsHouse_EventScript_MonFriendshipMid
# 94 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_0x8000, 4, PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
# 95 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_0x8000, 5, PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
# 96 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_0x8000, 6, PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 101 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 102 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 107 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 108 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 113 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 114 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 119 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 120 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 125 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 126 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 131 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 132 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 137 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 138 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 143 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 144 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 149 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 150 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 151 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 152 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
# 153 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
# 154 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 155 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 156 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 157 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 15
# 158 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 159 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 160 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 12
# 161 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 162 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
# 167 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
# 168 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 173 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 174 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_TownMap::
# 179 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
	end


PalletTown_RivalsHouse_EventScript_Bookshelf::
# 184 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_EventScript_Picture::
# 189 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
	end


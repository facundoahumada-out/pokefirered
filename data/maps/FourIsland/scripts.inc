FourIsland_MapScripts::
# 2 "data/maps/FourIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
# 3 "data/maps/FourIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FourIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/FourIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
	.2byte 0


FourIsland_OnTransition::
# 9 "data/maps/FourIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
# 10 "data/maps/FourIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_ShowRival
# 11 "data/maps/FourIsland/scripts.pory"
	call FourIsland_EventScript_TrySetDayCareManPos
	end


FourIsland_EventScript_ShowRival::
# 16 "data/maps/FourIsland/scripts.pory"
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
	return


FourIsland_EventScript_TrySetDayCareManPos::
# 21 "data/maps/FourIsland/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, FourIsland_EventScript_EndSetDayCareManPos
# 22 "data/maps/FourIsland/scripts.pory"
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
# 23 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_EndSetDayCareManPos::
	return


FourIsland_EventScript_RivalScene::
# 28 "data/maps/FourIsland/scripts.pory"
	lockall
# 29 "data/maps/FourIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 30 "data/maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 31 "data/maps/FourIsland/scripts.pory"
	waitmovement 0
# 32 "data/maps/FourIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 33 "data/maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 34 "data/maps/FourIsland/scripts.pory"
	waitmovement 0
# 35 "data/maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
# 36 "data/maps/FourIsland/scripts.pory"
	waitmovement 0
# 37 "data/maps/FourIsland/scripts.pory"
	delay 25
# 38 "data/maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalApproach
# 39 "data/maps/FourIsland/scripts.pory"
	waitmovement 0
# 40 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
# 41 "data/maps/FourIsland/scripts.pory"
	closemessage
# 42 "data/maps/FourIsland/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_Movement_PlayerWatchRivalExit
# 43 "data/maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalExit
# 44 "data/maps/FourIsland/scripts.pory"
	waitmovement 0
# 45 "data/maps/FourIsland/scripts.pory"
	fadedefaultbgm
# 46 "data/maps/FourIsland/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/FourIsland/scripts.pory"
	delay 35
# 48 "data/maps/FourIsland/scripts.pory"
	removeobject LOCALID_FOUR_ISLAND_RIVAL
# 49 "data/maps/FourIsland/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 50 "data/maps/FourIsland/scripts.pory"
	releaseall
	end


# 54 "data/maps/FourIsland/scripts.pory"
FourIsland_Movement_RivalApproach::
# 55 "data/maps/FourIsland/scripts.pory"
	walk_right
# 56 "data/maps/FourIsland/scripts.pory"
	walk_right
# 57 "data/maps/FourIsland/scripts.pory"
	walk_down
# 58 "data/maps/FourIsland/scripts.pory"
	walk_down
# 59 "data/maps/FourIsland/scripts.pory"
	step_end

# 62 "data/maps/FourIsland/scripts.pory"
FourIsland_Movement_RivalExit::
# 63 "data/maps/FourIsland/scripts.pory"
	delay_16
# 64 "data/maps/FourIsland/scripts.pory"
	delay_4
# 65 "data/maps/FourIsland/scripts.pory"
	walk_down
# 66 "data/maps/FourIsland/scripts.pory"
	step_end

# 69 "data/maps/FourIsland/scripts.pory"
FourIsland_Movement_PlayerWatchRivalExit::
# 70 "data/maps/FourIsland/scripts.pory"
	walk_left
# 71 "data/maps/FourIsland/scripts.pory"
	walk_in_place_faster_right
# 72 "data/maps/FourIsland/scripts.pory"
	step_end

FourIsland_EventScript_DaycareMan::
# 76 "data/maps/FourIsland/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 77 "data/maps/FourIsland/scripts.pory"
	special QuestLog_CutRecording
# 78 "data/maps/FourIsland/scripts.pory"
	lock
# 79 "data/maps/FourIsland/scripts.pory"
	faceplayer
# 80 "data/maps/FourIsland/scripts.pory"
	special GetDaycareMonNicknames
# 81 "data/maps/FourIsland/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 82 "data/maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_EventScript_DaycareEggWaiting
# 83 "data/maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_EventScript_CheckOnOneMon
# 84 "data/maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_EventScript_CheckOnTwoMons
# 85 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
# 86 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_DaycareEggWaiting::
# 91 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
# 92 "data/maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
# 93 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 94 "data/maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
# 95 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_IllKeepIt
# 96 "data/maps/FourIsland/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 97 "data/maps/FourIsland/scripts.pory"
	special RejectEggFromDayCare
# 98 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_DaycareAcceptEgg::
# 103 "data/maps/FourIsland/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 104 "data/maps/FourIsland/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, FourIsland_EventScript_DaycareReceivedEgg
# 105 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_YouHaveNoRoomForIt
# 106 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_DaycareReceivedEgg::
# 111 "data/maps/FourIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 112 "data/maps/FourIsland/scripts.pory"
	message DayCare_Text_ReceivedEgg
# 113 "data/maps/FourIsland/scripts.pory"
	call EventScript_RestorePrevTextColor
# 114 "data/maps/FourIsland/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 115 "data/maps/FourIsland/scripts.pory"
	waitfanfare
# 116 "data/maps/FourIsland/scripts.pory"
	waitbuttonpress
# 117 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_TakeGoodCareOfIt
# 118 "data/maps/FourIsland/scripts.pory"
	special GiveEggFromDaycare
# 119 "data/maps/FourIsland/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 120 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_CheckOnOneMon::
# 125 "data/maps/FourIsland/scripts.pory"
	special GetDaycareMonNicknames
# 126 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_YourMonIsDoingFine
# 127 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_CheckOnTwoMons::
# 132 "data/maps/FourIsland/scripts.pory"
	special GetDaycareMonNicknames
# 133 "data/maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_YourMonsAreDoingFine
# 134 "data/maps/FourIsland/scripts.pory"
	special SetDaycareCompatibilityString
# 135 "data/maps/FourIsland/scripts.pory"
	special ShowFieldMessageStringVar4
# 136 "data/maps/FourIsland/scripts.pory"
	waitmessage
# 137 "data/maps/FourIsland/scripts.pory"
	waitbuttonpress
# 138 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_OldWoman::
# 143 "data/maps/FourIsland/scripts.pory"
	lock
# 144 "data/maps/FourIsland/scripts.pory"
	faceplayer
# 145 "data/maps/FourIsland/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, FourIsland_EventScript_OldWomanLoreleiLeft
# 146 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasReturned
# 147 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_OldWomanLoreleiLeft::
# 152 "data/maps/FourIsland/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 5
# 153 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
# 154 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_LittleGirl::
# 159 "data/maps/FourIsland/scripts.pory"
	lock
# 160 "data/maps/FourIsland/scripts.pory"
	faceplayer
# 161 "data/maps/FourIsland/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 4
# 162 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
# 163 "data/maps/FourIsland/scripts.pory"
	release
	end


FourIsland_EventScript_FatMan::
# 168 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
	end


FourIsland_EventScript_IslandSign::
# 173 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
	end


FourIsland_EventScript_LoreleisHouseSign::
# 178 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
	end


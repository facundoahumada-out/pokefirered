CableClub_OnTransition::
# 2 "data/scripts/cable_club.pory"
	call CableClub_EventScript_HideOrShowMysteryGiftMan
	end


CableClub_EventScript_HideOrShowMysteryGiftMan::
# 7 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, ValidateSavedWonderCard
# 8 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_HideMysteryGiftMan
# 9 "data/scripts/cable_club.pory"
	clearflag FLAG_HIDE_MG_DELIVERYMEN
	return


EventScript_HideMysteryGiftMan::
# 14 "data/scripts/cable_club.pory"
	setflag FLAG_HIDE_MG_DELIVERYMEN
	return


CableClub_EventScript_MysteryGiftMan::
# 19 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/scripts/cable_club.pory"
	special QuestLog_CutRecording
# 21 "data/scripts/cable_club.pory"
	trywondercardscript
# 23 "data/scripts/cable_club.pory"
EventScript_MysteryGiftThankYou::
# 24 "data/scripts/cable_club.pory"
	msgbox Text_ThankYouForAccessingMysteryGift, MSGBOX_NPC
	end


# 28 "data/scripts/cable_club.pory"

# 29 "data/scripts/cable_club.pory"

# 30 "data/scripts/cable_club.pory"
CableClub_OnWarp::
# 31 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, EventScript_CheckTurnAttendant
# 32 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, EventScript_CheckTurnAttendant
# 33 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, EventScript_CheckTurnAttendant
# 34 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, EventScript_CheckTurnAttendant
# 35 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, EventScript_CheckTurnAttendant
# 36 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, EventScript_CheckTurnAttendant
# 37 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant
# 38 "data/scripts/cable_club.pory"
	.2byte 0
# 39 "data/scripts/cable_club.pory"

# 40 "data/scripts/cable_club.pory"
EventScript_CheckTurnAttendant::
# 41 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8007, 0, EventScript_CheckTurnAttendantEnd
# 42 "data/scripts/cable_club.pory"
	turnobject VAR_0x8007, DIR_WEST
# 43 "data/scripts/cable_club.pory"
EventScript_CheckTurnAttendantEnd:
# 44 "data/scripts/cable_club.pory"
	end

CableClub_OnLoad::
# 48 "data/scripts/cable_club.pory"
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, EventScript_OnLoadFromColosseum
# 49 "data/scripts/cable_club.pory"
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, EventScript_OnLoadFromColosseum
# 50 "data/scripts/cable_club.pory"
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, EventScript_OnLoadFromColosseum
# 51 "data/scripts/cable_club.pory"
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, EventScript_OnLoadFromTradeCenter
# 52 "data/scripts/cable_club.pory"
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, EventScript_OnLoadFromUnionRoom
# 53 "data/scripts/cable_club.pory"
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, EventScript_OnLoadFromBerryCrush
# 54 "data/scripts/cable_club.pory"
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_OnLoadFromGameCorner
	end


EventScript_OnLoadFromColosseum::
# 59 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenDirectCornerBarrier
	end


EventScript_OnLoadFromTradeCenter::
# 64 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenDirectCornerBarrier
	end


EventScript_OnLoadFromUnionRoom::
# 69 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenUnionRoomBarrier
	end


EventScript_OnLoadFromBerryCrush::
# 74 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenDirectCornerBarrier
	end


EventScript_OnLoadFromGameCorner::
# 79 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenGameCornerBarrier
	end


# 83 "data/scripts/cable_club.pory"

# 84 "data/scripts/cable_club.pory"

# 85 "data/scripts/cable_club.pory"
CableClub_OnFrame::
# 86 "data/scripts/cable_club.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1, CableClub_EventScript_Tutorial
# 87 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, CableClub_EventScript_ExitLinkRoom
# 88 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, CableClub_EventScript_ExitLinkRoom
# 89 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, CableClub_EventScript_ExitLinkRoom
# 90 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, CableClub_EventScript_ExitTradeCenter
# 91 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, CableClub_EventScript_ExitUnionRoom
# 92 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, CableClub_EventScript_ExitLinkRoom
# 93 "data/scripts/cable_club.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
# 94 "data/scripts/cable_club.pory"
	.2byte 0
# 95 "data/scripts/cable_club.pory"

# 96 "data/scripts/cable_club.pory"
CableClub_EventScript_ExitLinkRoom::
# 97 "data/scripts/cable_club.pory"
	lockall
# 98 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CloseLinkAndExitLinkRoom
# 99 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CloseDirectCornerBarrier
# 100 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 101 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 102 "data/scripts/cable_club.pory"
	erasebox 0, 0, 29, 19
# 103 "data/scripts/cable_club.pory"
	releaseall
# 104 "data/scripts/cable_club.pory"
	end

CableClub_EventScript_ExitMinigameRoom::
# 108 "data/scripts/cable_club.pory"
	lockall
# 109 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CloseLinkAndExitLinkRoom
# 110 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CloseGameCornerBarrier
# 111 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 112 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 113 "data/scripts/cable_club.pory"
	erasebox 0, 0, 29, 19
# 114 "data/scripts/cable_club.pory"
	releaseall
	end


CableClub_EventScript_CloseLinkAndExitLinkRoom::
# 119 "data/scripts/cable_club.pory"
	special CloseLink
# 120 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 121 "data/scripts/cable_club.pory"
	special QuestLog_StartRecordingInputsAfterDeferredEvent
# 122 "data/scripts/cable_club.pory"
	setvar VAR_CABLE_CLUB_STATE, 0
# 123 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 124 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8007, 0, CableClub_EventScript_PlayerExitLinkRoom
# 125 "data/scripts/cable_club.pory"
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
# 126 "data/scripts/cable_club.pory"
	waitmovement 0
# 127 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerExitLinkRoom
# 128 "data/scripts/cable_club.pory"
	waitmovement 0
# 129 "data/scripts/cable_club.pory"
	applymovement VAR_0x8007, Movement_AttendantFaceDown
# 130 "data/scripts/cable_club.pory"
	waitmovement 0
	return


CableClub_EventScript_ExitTradeCenter::
# 135 "data/scripts/cable_club.pory"
	lockall
# 136 "data/scripts/cable_club.pory"
	call CableClub_EventScript_PlayerExitTradeCenter
# 137 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CloseDirectCornerBarrier
# 138 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 139 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 140 "data/scripts/cable_club.pory"
	erasebox 0, 0, 29, 19
# 141 "data/scripts/cable_club.pory"
	releaseall
	end


CableClub_EventScript_PlayerExitTradeCenter::
# 146 "data/scripts/cable_club.pory"
	special CloseLink
# 147 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 148 "data/scripts/cable_club.pory"
	special QuestLog_StartRecordingInputsAfterDeferredEvent
# 149 "data/scripts/cable_club.pory"
	setvar VAR_CABLE_CLUB_STATE, 0
# 150 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 151 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8007, 0, CableClub_EventScript_PlayerExitLinkRoom
# 152 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerFaceAttendantRight
# 153 "data/scripts/cable_club.pory"
	waitmovement 0
# 154 "data/scripts/cable_club.pory"
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
# 155 "data/scripts/cable_club.pory"
	waitmovement 0
# 156 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TrainerCardDataOverwritten
	return


CableClub_EventScript_ExitUnionRoom::
# 161 "data/scripts/cable_club.pory"
	lockall
# 162 "data/scripts/cable_club.pory"
	call CableClub_EventScript_PlayerExitUnionRoom
# 163 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CloseUnionRoomBarrier
# 164 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 165 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 166 "data/scripts/cable_club.pory"
	erasebox 0, 0, 29, 19
# 167 "data/scripts/cable_club.pory"
	releaseall
	end


CableClub_EventScript_PlayerExitUnionRoom::
# 172 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 173 "data/scripts/cable_club.pory"
	special QuestLog_StartRecordingInputsAfterDeferredEvent
# 174 "data/scripts/cable_club.pory"
	setvar VAR_CABLE_CLUB_STATE, 0
# 175 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 176 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8007, 0, CableClub_EventScript_PlayerExitLinkRoom
# 177 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerFaceAttendantRight
# 178 "data/scripts/cable_club.pory"
	waitmovement 0
# 179 "data/scripts/cable_club.pory"
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
# 180 "data/scripts/cable_club.pory"
	waitmovement 0
# 181 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TrainerCardDataOverwritten
	return


CableClub_EventScript_TrainerCardDataOverwritten::
# 186 "data/scripts/cable_club.pory"
	message CableClub_Text_TrainerCardDataOverwritten
# 187 "data/scripts/cable_club.pory"
	waitmessage
# 188 "data/scripts/cable_club.pory"
	playse SE_PIN
# 189 "data/scripts/cable_club.pory"
	message CableClub_Text_HopeToSeeYouAgain
# 190 "data/scripts/cable_club.pory"
	waitmessage
# 191 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerExitLinkRoom
# 192 "data/scripts/cable_club.pory"
	waitmovement 0
# 193 "data/scripts/cable_club.pory"
	applymovement VAR_0x8007, Movement_AttendantFaceDown
# 194 "data/scripts/cable_club.pory"
	waitmovement 0
	return


CableClub_EventScript_PlayerExitLinkRoom::
# 199 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerExitLinkRoom
# 200 "data/scripts/cable_club.pory"
	waitmovement 0
	return


CableClub_EventScript_Tutorial::
# 205 "data/scripts/cable_club.pory"
	lockall
# 206 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 207 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 208 "data/scripts/cable_club.pory"
	waitmovement 0
# 209 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_FirstTimeRightThisWay
# 210 "data/scripts/cable_club.pory"
	closemessage
# 211 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerApproachCounter
# 212 "data/scripts/cable_club.pory"
	waitmovement 0
# 213 "data/scripts/cable_club.pory"
	delay 30
# 214 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_ExplainWirelessClubFirstTime
# 215 "data/scripts/cable_club.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 2
# 216 "data/scripts/cable_club.pory"
	releaseall
	end


# 220 "data/scripts/cable_club.pory"
Movement_PlayerApproachCounter:
# 221 "data/scripts/cable_club.pory"
	walk_up
# 222 "data/scripts/cable_club.pory"
	walk_up
# 223 "data/scripts/cable_club.pory"
	step_end

CableClub_EventScript_WelcomeToCableClub::
# 227 "data/scripts/cable_club.pory"
	message CableClub_Text_WelcomeWhichCableClubService
# 228 "data/scripts/cable_club.pory"
	waitmessage
# 229 "data/scripts/cable_club.pory"
	delay 15
# 230 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SelectCableClubRoom
	end


CableClub_EventScript_UnusedWelcomeToCableClub::
# 235 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_WhichService
# 236 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SelectCableClubRoom
	end


CableClub_EventScript_SelectCableClubRoom::
# 241 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, 0
# 242 "data/scripts/cable_club.pory"
	multichoice 0, 0, MULTICHOICE_TRADE_CENTER_COLOSSEUM, FALSE
# 243 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 244 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_TradeCenter
# 245 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_Colosseum
# 246 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_AbortLink
# 247 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_Colosseum::
# 252 "data/scripts/cable_club.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 253 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SelectBattleMode
	end


CableClub_EventScript_SelectBattleMode::
# 258 "data/scripts/cable_club.pory"
	message CableClub_Text_PlayWhichBattleMode
# 259 "data/scripts/cable_club.pory"
	waitmessage
# 260 "data/scripts/cable_club.pory"
	multichoice 0, 0, MULTICHOICE_SINGLE_DOUBLE_MULTI_INFO_EXIT, FALSE
# 261 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 262 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_SingleBattleMode
# 263 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_DoubleBattleMode
# 264 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_MultiBattleMode
# 265 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 3, CableClub_EventScript_BattleModeInfo
# 266 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 4, CableClub_EventScript_AbortLink
# 267 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_BattleModeInfo::
# 272 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_ExplainBattleModes
# 273 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SelectBattleMode
	end


CableClub_EventScript_SingleBattleMode::
# 278 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, USING_SINGLE_BATTLE
# 279 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_TryEnterColosseum
	end


CableClub_EventScript_DoubleBattleMode::
# 284 "data/scripts/cable_club.pory"
	special HasEnoughMonsForDoubleBattle
# 285 "data/scripts/cable_club.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, CableClub_EventScript_NeedTwoMonsForDoubleBattle
# 286 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, USING_DOUBLE_BATTLE
# 287 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_TryEnterColosseum
	end


CableClub_EventScript_NeedTwoMonsForDoubleBattle::
# 292 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NeedTwoMonsForDoubleBattle
# 293 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SelectBattleMode
	end


CableClub_EventScript_MultiBattleMode::
# 298 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, USING_MULTI_BATTLE
# 299 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_TryEnterColosseum
	end


CableClub_EventScript_TryEnterColosseum::
# 304 "data/scripts/cable_club.pory"
	call EventScript_AskSaveGame
# 305 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
# 306 "data/scripts/cable_club.pory"
	message CableClub_Text_PleaseWaitBCancel
# 307 "data/scripts/cable_club.pory"
	waitmessage
# 308 "data/scripts/cable_club.pory"
	special HelpSystem_Disable
# 309 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 310 "data/scripts/cable_club.pory"
	special TryBattleLinkup
# 311 "data/scripts/cable_club.pory"
	waitstate
# 312 "data/scripts/cable_club.pory"
	call EventScript_RestorePrevTextColor
# 313 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterColosseum
# 314 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
# 315 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, CableClub_EventScript_AbortLinkDifferentSelections
# 316 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, CableClub_EventScript_AbortLinkIncorrectNumberOfBattlers
# 317 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_AbortLink
# 318 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
	end


CableClub_EventScript_EnterColosseum::
# 323 "data/scripts/cable_club.pory"
	special HealPlayerParty
# 324 "data/scripts/cable_club.pory"
	special SavePlayerParty
# 325 "data/scripts/cable_club.pory"
	special LoadPlayerBag
# 326 "data/scripts/cable_club.pory"
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
# 327 "data/scripts/cable_club.pory"
	messageautoscroll CableClub_Text_PleaseEnter
# 328 "data/scripts/cable_club.pory"
	waitmessage
# 329 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenDirectCornerBarrier
# 330 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 331 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 332 "data/scripts/cable_club.pory"
	delay 60
# 333 "data/scripts/cable_club.pory"
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
# 334 "data/scripts/cable_club.pory"
	waitmovement 0
# 335 "data/scripts/cable_club.pory"
	closemessage
# 336 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
# 337 "data/scripts/cable_club.pory"
	waitmovement 0
# 338 "data/scripts/cable_club.pory"
	opendoor 9, 1
# 339 "data/scripts/cable_club.pory"
	waitdooranim
# 340 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
# 341 "data/scripts/cable_club.pory"
	waitmovement 0
# 342 "data/scripts/cable_club.pory"
	hideobjectat LOCALID_PLAYER, 0
# 343 "data/scripts/cable_club.pory"
	closedoor 9, 1
# 344 "data/scripts/cable_club.pory"
	waitdooranim
# 345 "data/scripts/cable_club.pory"
	release
# 346 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8004, USING_MULTI_BATTLE, CableClub_EventScript_WarpTo4PColosseum
# 347 "data/scripts/cable_club.pory"
	special SetCableClubWarp
# 348 "data/scripts/cable_club.pory"
	warp MAP_BATTLE_COLOSSEUM_2P, 6, 8
# 349 "data/scripts/cable_club.pory"
	special DoCableClubWarp
# 350 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_PlayerApproachLinkRoomRight::
# 356 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomRight
# 357 "data/scripts/cable_club.pory"
	waitmovement 0
	return


CableClub_EventScript_WarpTo4PColosseum::
# 362 "data/scripts/cable_club.pory"
	special SetCableClubWarp
# 363 "data/scripts/cable_club.pory"
	warp MAP_BATTLE_COLOSSEUM_4P, 5, 8
# 364 "data/scripts/cable_club.pory"
	special DoCableClubWarp
# 365 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_AbortLinkIncorrectNumberOfBattlers::
# 370 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 371 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, USING_SINGLE_BATTLE, CableClub_EventScript_AbortLinkWrongNumberForSingleBattle
# 372 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, USING_DOUBLE_BATTLE, CableClub_EventScript_AbortLinkWrongNumberForDoubleBattle
# 373 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, USING_MULTI_BATTLE, CableClub_EventScript_AbortLinkNeedFourPlayers
# 374 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants
	end


CableClub_EventScript_AbortLinkNeedFourPlayers::
# 379 "data/scripts/cable_club.pory"
	special CloseLink
# 380 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NeedFourPlayers
# 381 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end


CableClub_EventScript_AbortLinkWrongNumberForDoubleBattle::
# 386 "data/scripts/cable_club.pory"
	special CloseLink
# 387 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_CantDoubleBattleWithXPlayers
# 388 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end


CableClub_EventScript_AbortLinkWrongNumberForSingleBattle::
# 393 "data/scripts/cable_club.pory"
	special CloseLink
# 394 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_CantSingleBattleWithXPlayers
# 395 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end


CableClub_EventScript_ConfirmNumberAndRestart::
# 400 "data/scripts/cable_club.pory"
	special CloseLink
# 401 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 402 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_PleaseConfirmNumberAndRestart
# 403 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_TradeCenter::
# 408 "data/scripts/cable_club.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 409 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CheckPartyTradeRequirements
# 410 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
# 411 "data/scripts/cable_club.pory"
	call EventScript_AskSaveGame
# 412 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
# 413 "data/scripts/cable_club.pory"
	message CableClub_Text_PleaseWaitBCancel
# 414 "data/scripts/cable_club.pory"
	waitmessage
# 415 "data/scripts/cable_club.pory"
	special HelpSystem_Disable
# 416 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 417 "data/scripts/cable_club.pory"
	special TryTradeLinkup
# 418 "data/scripts/cable_club.pory"
	waitstate
# 419 "data/scripts/cable_club.pory"
	call EventScript_RestorePrevTextColor
# 420 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterTradeCenter
# 421 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
# 422 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, CableClub_EventScript_AbortLinkDifferentSelections
# 423 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants
# 424 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_AbortLink
# 425 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
# 426 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_PLAYER_NOT_READY, CableClub_EventScript_AbortLinkPlayerNotReady
# 427 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_PARTNER_NOT_READY, CableClub_EventScript_AbortLinkOtherTrainerNotReady
	end


CableClub_EventScript_EnterTradeCenter::
# 432 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, USING_TRADE_CENTER
# 433 "data/scripts/cable_club.pory"
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
# 434 "data/scripts/cable_club.pory"
	messageautoscroll CableClub_Text_PleaseEnter
# 435 "data/scripts/cable_club.pory"
	waitmessage
# 436 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenDirectCornerBarrier
# 437 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 438 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 439 "data/scripts/cable_club.pory"
	delay 60
# 440 "data/scripts/cable_club.pory"
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
# 441 "data/scripts/cable_club.pory"
	waitmovement 0
# 442 "data/scripts/cable_club.pory"
	closemessage
# 443 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
# 444 "data/scripts/cable_club.pory"
	waitmovement 0
# 445 "data/scripts/cable_club.pory"
	opendoor 9, 1
# 446 "data/scripts/cable_club.pory"
	waitdooranim
# 447 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
# 448 "data/scripts/cable_club.pory"
	waitmovement 0
# 449 "data/scripts/cable_club.pory"
	hideobjectat LOCALID_PLAYER, 0
# 450 "data/scripts/cable_club.pory"
	closedoor 9, 1
# 451 "data/scripts/cable_club.pory"
	waitdooranim
# 452 "data/scripts/cable_club.pory"
	release
# 453 "data/scripts/cable_club.pory"
	special SetCableClubWarp
# 454 "data/scripts/cable_club.pory"
	setwarp MAP_TRADE_CENTER, 5, 8
# 455 "data/scripts/cable_club.pory"
	special DoCableClubWarp
# 456 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_CheckPartyTradeRequirements::
# 461 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 462 "data/scripts/cable_club.pory"
	goto_if_lt VAR_RESULT, 2, CableClub_EventScript_NeedTwoMonsToTrade
# 463 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, DoesPartyHaveEnigmaBerry
# 464 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_CantTradeEnigmaBerry
# 465 "data/scripts/cable_club.pory"
	setvar VAR_RESULT, TRUE
	return


CableClub_EventScript_NeedTwoMonsToTrade::
# 470 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NeedTwoMonsToTrade
# 471 "data/scripts/cable_club.pory"
	setvar VAR_RESULT, FALSE
	return


CableClub_EventScript_CantTradeEnigmaBerry::
# 476 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_CantTradeEnigmaBerry
# 477 "data/scripts/cable_club.pory"
	setvar VAR_RESULT, FALSE
	return


CableClub_EventScript_RecordCorner::
	end


CableClub_EventScript_AbortLinkPlayerNotReady::
# 487 "data/scripts/cable_club.pory"
	special CloseLink
# 488 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 489 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NotSetUpForFarAwayRegion
# 490 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_AbortLinkOtherTrainerNotReady::
# 495 "data/scripts/cable_club.pory"
	special CloseLink
# 496 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 497 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_OtherTrainerNotReady
# 498 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_AbortLinkConnectionError::
# 503 "data/scripts/cable_club.pory"
	special CloseLink
# 504 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 505 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_LinkErrorPleaseReset
# 506 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_AbortLinkSomeoneNotReady::
# 511 "data/scripts/cable_club.pory"
	special CloseLink
# 512 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 513 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_SomeoneIsNotReadyToLink
# 514 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_AbortLinkDifferentSelections::
# 519 "data/scripts/cable_club.pory"
	special CloseLink
# 520 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 521 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_PlayersMadeDifferentSelections
# 522 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_AbortLink::
# 527 "data/scripts/cable_club.pory"
	special CloseLink
# 528 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 529 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_PleaseVisitAgain
# 530 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_AbortMinigame::
# 535 "data/scripts/cable_club.pory"
	special CloseLink
# 536 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 537 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_ComeAgain
# 538 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_CableClubWarp::
# 544 "data/scripts/cable_club.pory"
	special SetCableClubWarp
# 545 "data/scripts/cable_club.pory"
	special DoCableClubWarp
# 546 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants::
# 551 "data/scripts/cable_club.pory"
	special CloseLink
# 552 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 553 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants
# 554 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_AbortLinkPlayerHasBadEgg::
# 559 "data/scripts/cable_club.pory"
	special CloseLink
# 560 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 561 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_YouHaveAMonThatCantBeTaken
# 562 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_WirelessClubAdjustements::
# 567 "data/scripts/cable_club.pory"
	msgbox Text_WirelessClubUndergoingAdjustments
# 568 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_NotReadyYet::
# 573 "data/scripts/cable_club.pory"
	msgbox Text_AppearsToBeUndergoingAdjustments
# 574 "data/scripts/cable_club.pory"
	releaseall
	end


# 578 "data/scripts/cable_club.pory"
Movement_AttendantFaceDown::
# 579 "data/scripts/cable_club.pory"
	face_down
# 580 "data/scripts/cable_club.pory"
	step_end

# 584 "data/scripts/cable_club.pory"
Movement_AttendantFaceRight::
# 585 "data/scripts/cable_club.pory"
	face_right
# 586 "data/scripts/cable_club.pory"
	step_end

# 589 "data/scripts/cable_club.pory"
Movement_AttendantFaceLeft::
# 590 "data/scripts/cable_club.pory"
	face_left
# 591 "data/scripts/cable_club.pory"
	step_end

# 594 "data/scripts/cable_club.pory"
Movement_PlayerExitLinkRoom::
# 595 "data/scripts/cable_club.pory"
	walk_down
# 596 "data/scripts/cable_club.pory"
	walk_down
# 597 "data/scripts/cable_club.pory"
	step_end

# 600 "data/scripts/cable_club.pory"
Movement_PlayerApproachLinkRoomRight::
# 601 "data/scripts/cable_club.pory"
	walk_right
# 602 "data/scripts/cable_club.pory"
	walk_up
# 603 "data/scripts/cable_club.pory"
	walk_up
# 604 "data/scripts/cable_club.pory"
	step_end

# 607 "data/scripts/cable_club.pory"
Movement_PlayerApproachLinkRoomLeft::
# 608 "data/scripts/cable_club.pory"
	walk_left
# 609 "data/scripts/cable_club.pory"
	walk_up
# 610 "data/scripts/cable_club.pory"
	walk_up
# 611 "data/scripts/cable_club.pory"
	step_end

# 614 "data/scripts/cable_club.pory"
Movement_PlayerEnterLinkRoom::
# 615 "data/scripts/cable_club.pory"
	walk_up
# 616 "data/scripts/cable_club.pory"
	step_end

# 620 "data/scripts/cable_club.pory"
Movement_PlayerFaceAttendantLeft::
# 621 "data/scripts/cable_club.pory"
	face_left
# 622 "data/scripts/cable_club.pory"
	step_end

# 625 "data/scripts/cable_club.pory"
Movement_PlayerFaceAttendantRight::
# 626 "data/scripts/cable_club.pory"
	face_right
# 627 "data/scripts/cable_club.pory"
	step_end

# 630 "data/scripts/cable_club.pory"
Movement_PlayerEnterMinigameRoom::
# 631 "data/scripts/cable_club.pory"
	walk_left
# 632 "data/scripts/cable_club.pory"
	walk_up
# 633 "data/scripts/cable_club.pory"
	walk_up
# 634 "data/scripts/cable_club.pory"
	walk_up
# 635 "data/scripts/cable_club.pory"
	step_end

CableClub_EventScript_ShowBattleRecords::
# 639 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 640 "data/scripts/cable_club.pory"
	lockall
# 641 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 642 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, 0
# 643 "data/scripts/cable_club.pory"
	special ShowBattleRecords
# 644 "data/scripts/cable_club.pory"
	waitstate
# 645 "data/scripts/cable_club.pory"
	releaseall
	end


BattleColosseum_2P_EventScript_PlayerSpot0::
# 650 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 0
# 651 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 652 "data/scripts/cable_club.pory"
	special EnterColosseumPlayerSpot
# 653 "data/scripts/cable_club.pory"
	waitstate
	end


BattleColosseum_2P_EventScript_PlayerSpot1::
# 658 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 1
# 659 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 660 "data/scripts/cable_club.pory"
	special EnterColosseumPlayerSpot
# 661 "data/scripts/cable_club.pory"
	waitstate
	end


BattleColosseum_4P_EventScript_PlayerSpot0::
# 666 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 667 "data/scripts/cable_club.pory"
	special ChooseHalfPartyForBattle
# 668 "data/scripts/cable_club.pory"
	waitstate
# 669 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
# 670 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 0
# 671 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 672 "data/scripts/cable_club.pory"
	special EnterColosseumPlayerSpot
# 673 "data/scripts/cable_club.pory"
	waitstate
	end


BattleColosseum_4P_EventScript_PlayerSpot1::
# 678 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 679 "data/scripts/cable_club.pory"
	special ChooseHalfPartyForBattle
# 680 "data/scripts/cable_club.pory"
	waitstate
# 681 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
# 682 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 1
# 683 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 684 "data/scripts/cable_club.pory"
	special EnterColosseumPlayerSpot
# 685 "data/scripts/cable_club.pory"
	waitstate
	end


BattleColosseum_4P_EventScript_PlayerSpot2::
# 690 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 691 "data/scripts/cable_club.pory"
	special ChooseHalfPartyForBattle
# 692 "data/scripts/cable_club.pory"
	waitstate
# 693 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
# 694 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 2
# 695 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 696 "data/scripts/cable_club.pory"
	special EnterColosseumPlayerSpot
# 697 "data/scripts/cable_club.pory"
	waitstate
	end


BattleColosseum_4P_EventScript_PlayerSpot3::
# 702 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 703 "data/scripts/cable_club.pory"
	special ChooseHalfPartyForBattle
# 704 "data/scripts/cable_club.pory"
	waitstate
# 705 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
# 706 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 3
# 707 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 708 "data/scripts/cable_club.pory"
	special EnterColosseumPlayerSpot
# 709 "data/scripts/cable_club.pory"
	waitstate
	end


BattleColosseum_4P_EventScript_CancelSpotTrigger::
	end


TradeCenter_EventScript_Chair0::
# 718 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 0
# 719 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 720 "data/scripts/cable_club.pory"
	special EnterTradeSeat
# 721 "data/scripts/cable_club.pory"
	waitstate
	end


TradeCenter_EventScript_Chair1::
# 726 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 1
# 727 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 728 "data/scripts/cable_club.pory"
	special EnterTradeSeat
# 729 "data/scripts/cable_club.pory"
	waitstate
	end


TradeCenter_EventScript_Chair2::
# 735 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 2
# 736 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 737 "data/scripts/cable_club.pory"
	special EnterTradeSeat
# 738 "data/scripts/cable_club.pory"
	waitstate
	end


TradeCenter_EventScript_Chair3::
# 744 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 3
# 745 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 746 "data/scripts/cable_club.pory"
	special EnterTradeSeat
# 747 "data/scripts/cable_club.pory"
	waitstate
	end


# 751 "data/scripts/cable_club.pory"

# 752 "data/scripts/cable_club.pory"

# 753 "data/scripts/cable_club.pory"
@ Nop in FRLG
# 754 "data/scripts/cable_club.pory"
@ Separate labels to match GetDirectionForEventScript
# 755 "data/scripts/cable_club.pory"
RecordCorner_EventScript_Spot0::
# 756 "data/scripts/cable_club.pory"
RecordCorner_EventScript_Spot1::
# 757 "data/scripts/cable_club.pory"
RecordCorner_EventScript_Spot2::
# 758 "data/scripts/cable_club.pory"
RecordCorner_EventScript_Spot3::
# 759 "data/scripts/cable_club.pory"
	end

CableClub_EventScript_ReadTrainerCard::
# 763 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 764 "data/scripts/cable_club.pory"
	msgbox Text_LookedAtPlayersTrainerCard
# 765 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 766 "data/scripts/cable_club.pory"
	special Script_ShowLinkTrainerCard
# 767 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_ReadTrainerCardColored::
# 772 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 773 "data/scripts/cable_club.pory"
	msgbox Text_LookedAtPlayersTrainerCardColored
# 774 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 775 "data/scripts/cable_club.pory"
	special Script_ShowLinkTrainerCard
# 776 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_TooBusyToNotice::
# 781 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 782 "data/scripts/cable_club.pory"
	msgbox Text_TrainerTooBusyToNotice
# 783 "data/scripts/cable_club.pory"
	closemessage
	end


BattleColosseum_2P_EventScript_Attendant::
# 788 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 789 "data/scripts/cable_club.pory"
	special Script_FacePlayer
# 790 "data/scripts/cable_club.pory"
	msgbox Text_TakeSeatStartBattle
# 791 "data/scripts/cable_club.pory"
	special Script_ClearHeldMovement
# 792 "data/scripts/cable_club.pory"
	closemessage
	end


TradeCenter_EventScript_Attendant::
# 797 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 798 "data/scripts/cable_club.pory"
	special Script_FacePlayer
# 799 "data/scripts/cable_club.pory"
	msgbox Text_TakeSeatStartTrade
# 800 "data/scripts/cable_club.pory"
	special Script_ClearHeldMovement
# 801 "data/scripts/cable_club.pory"
	closemessage
	end


RecordCorner_EventScript_Attendant::
	end


TradeCenter_ConfirmLeaveRoom::
# 811 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 812 "data/scripts/cable_club.pory"
	msgbox Text_TerminateLinkIfYouLeaveRoom, MSGBOX_YESNO
# 813 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, YES, TradeCenter_TerminateLink
# 814 "data/scripts/cable_club.pory"
	erasebox 0, 0, 29, 19
# 815 "data/scripts/cable_club.pory"
	releaseall
	end


TradeCenter_TerminateLink::
# 820 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 821 "data/scripts/cable_club.pory"
	messageautoscroll Text_TerminateLinkConfirmation
# 822 "data/scripts/cable_club.pory"
	waitmessage
# 823 "data/scripts/cable_club.pory"
	special ExitLinkRoom
	end


CableClub_EventScript_DoLinkRoomExit::
# 828 "data/scripts/cable_club.pory"
	special CleanupLinkRoomState
# 829 "data/scripts/cable_club.pory"
	special ReturnFromLinkRoom
# 830 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_UnionRoomAttendant::
# 835 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 836 "data/scripts/cable_club.pory"
	special QuestLog_CutRecording
# 837 "data/scripts/cable_club.pory"
	lock
# 838 "data/scripts/cable_club.pory"
	faceplayer
# 839 "data/scripts/cable_club.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_WirelessClubAdjustements
# 840 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, IsBadEggInParty
# 841 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_AbortLinkPlayerHasBadEgg
# 842 "data/scripts/cable_club.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 843 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 844 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_UnionRoomAdapterNotConnected
# 845 "data/scripts/cable_club.pory"
	message CableClub_Text_WelcomeUnionRoomEnter
# 846 "data/scripts/cable_club.pory"
	waitmessage
# 847 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_AskEnterUnionRoom
	end


CableClub_EventScript_AskEnterUnionRoom::
# 852 "data/scripts/cable_club.pory"
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO, FALSE
# 853 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 854 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_EnterUnionRoom
# 855 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_AbortLink
# 856 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_UnionRoomInfo
# 857 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_UnionRoomInfo::
# 862 "data/scripts/cable_club.pory"
	message CableClub_Text_UnionRoomInfo
# 863 "data/scripts/cable_club.pory"
	waitmessage
# 864 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_AskEnterUnionRoom
	end


CableClub_EventScript_EnterUnionRoom::
# 869 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CheckPartyUnionRoomRequirements
# 870 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AbortLink
# 871 "data/scripts/cable_club.pory"
	call EventScript_AskSaveGame
# 872 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
# 873 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_EnjoyUnionRoom
# 874 "data/scripts/cable_club.pory"
	closemessage
# 875 "data/scripts/cable_club.pory"
	special HealPlayerParty
# 876 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, USING_UNION_ROOM
# 877 "data/scripts/cable_club.pory"
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
# 878 "data/scripts/cable_club.pory"
	special HelpSystem_Disable
# 879 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenUnionRoomBarrier
# 880 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 881 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 882 "data/scripts/cable_club.pory"
	delay 60
# 883 "data/scripts/cable_club.pory"
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
# 884 "data/scripts/cable_club.pory"
	waitmovement 0
# 885 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
# 886 "data/scripts/cable_club.pory"
	waitmovement 0
# 887 "data/scripts/cable_club.pory"
	opendoor 5, 1
# 888 "data/scripts/cable_club.pory"
	waitdooranim
# 889 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
# 890 "data/scripts/cable_club.pory"
	waitmovement 0
# 891 "data/scripts/cable_club.pory"
	hideobjectat LOCALID_PLAYER, 0
# 892 "data/scripts/cable_club.pory"
	closedoor 5, 1
# 893 "data/scripts/cable_club.pory"
	waitdooranim
# 894 "data/scripts/cable_club.pory"
	special Script_ResetUnionRoomTrade
# 895 "data/scripts/cable_club.pory"
	special SetCableClubWarp
# 896 "data/scripts/cable_club.pory"
	warpspinenter MAP_UNION_ROOM, 7, 11
# 897 "data/scripts/cable_club.pory"
	waitstate
# 898 "data/scripts/cable_club.pory"
	special RunUnionRoom
# 899 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_CheckPartyUnionRoomRequirements::
# 904 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 905 "data/scripts/cable_club.pory"
	goto_if_lt VAR_RESULT, 2, CableClub_EventScript_NeedTwoMonsForUnionRoom
# 906 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, DoesPartyHaveEnigmaBerry
# 907 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_NoEnigmaBerryInUnionRoom
# 908 "data/scripts/cable_club.pory"
	setvar VAR_RESULT, TRUE
	return


CableClub_EventScript_NeedTwoMonsForUnionRoom::
# 913 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NeedTwoMonsForUnionRoom
# 914 "data/scripts/cable_club.pory"
	goto EventScript_SetResultFalse
	end


CableClub_EventScript_NoEnigmaBerryInUnionRoom::
# 919 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NoEnigmaBerryInUnionRoom
# 920 "data/scripts/cable_club.pory"
	goto EventScript_SetResultFalse
	end


CableClub_EventScript_UnionRoomAdapterNotConnected::
# 925 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_UnionRoomAdapterNotConnected
# 926 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_WirelessClubAttendant::
# 931 "data/scripts/cable_club.pory"
	lock
# 932 "data/scripts/cable_club.pory"
	faceplayer
# 933 "data/scripts/cable_club.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_WirelessClubAdjustements
# 934 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_AskAboutLinking, MSGBOX_YESNO
# 935 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_DontAskAboutLinking
# 936 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_ExplainWirelessClub
# 937 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_DontAskAboutLinking::
# 942 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_HopeYouEnjoyWirelessSystem
# 943 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_DirectCornerAttendant::
# 948 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 949 "data/scripts/cable_club.pory"
	special QuestLog_CutRecording
# 950 "data/scripts/cable_club.pory"
	lock
# 951 "data/scripts/cable_club.pory"
	faceplayer
# 952 "data/scripts/cable_club.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_WirelessClubAdjustements
# 953 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, IsBadEggInParty
# 954 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_AbortLinkPlayerHasBadEgg
# 955 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 956 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_WelcomeToCableClub
# 957 "data/scripts/cable_club.pory"
	message CableClub_Text_WelcomeWhichDirectCornerRoom
# 958 "data/scripts/cable_club.pory"
	waitmessage
# 959 "data/scripts/cable_club.pory"
	delay 15
# 960 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_DirectCornerSelectService
	end


CableClub_EventScript_DirectCornerSelectService::
# 965 "data/scripts/cable_club.pory"
	goto_if_unset FLAG_GOT_POWDER_JAR, CableClub_EventScript_DirectCornerNoBerry
# 966 "data/scripts/cable_club.pory"
	multichoice 0, 0, MULTICHOICE_TRADE_COLOSSEUM_CRUSH, FALSE
# 967 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 968 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_WirelessTrade
# 969 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_WirelessBattleSelect
# 970 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_WirelessBerryCrush
# 971 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 3, CableClub_EventScript_AbortLink
# 972 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_DirectCornerNoBerry::
# 977 "data/scripts/cable_club.pory"
	multichoice 0, 0, MULTICHOICE_TRADE_COLOSSEUM_2, FALSE
# 978 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 979 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_WirelessTrade
# 980 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_WirelessBattleSelect
# 981 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_AbortLink
# 982 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_WirelessTrade::
# 987 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_TradePokemon, MSGBOX_YESNO
# 988 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_AbortLink
# 989 "data/scripts/cable_club.pory"
	call CableClub_EventScript_CheckPartyTradeRequirements
# 990 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AbortLink
# 991 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, LINK_GROUP_TRADE
# 992 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end


CableClub_EventScript_WirelessBattleSelect::
# 997 "data/scripts/cable_club.pory"
	message CableClub_Text_PlayWhichBattleMode
# 998 "data/scripts/cable_club.pory"
	waitmessage
# 999 "data/scripts/cable_club.pory"
	multichoice 0, 0, MULTICHOICE_SINGLE_DOUBLE_MULTI_INFO_EXIT, FALSE
# 1000 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 1001 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_WirelessSingleBattle
# 1002 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_WirelessDoubleBattle
# 1003 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_WirelessMultiBattle
# 1004 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 3, CableClub_EventScript_WirelessBattleInfo
# 1005 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 4, CableClub_EventScript_AbortLink
# 1006 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_WirelessSingleBattle::
# 1011 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, LINK_GROUP_SINGLE_BATTLE
# 1012 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end


CableClub_EventScript_WirelessDoubleBattle::
# 1017 "data/scripts/cable_club.pory"
	special HasEnoughMonsForDoubleBattle
# 1018 "data/scripts/cable_club.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, CableClub_EventScript_TwoMonsNeededForWirelessDoubleBattle
# 1019 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, LINK_GROUP_DOUBLE_BATTLE
# 1020 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end


CableClub_EventScript_TwoMonsNeededForWirelessDoubleBattle::
# 1025 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NeedTwoMonsForDoubleBattle
# 1026 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_WirelessBattleSelect
	end


CableClub_EventScript_WirelessMultiBattle::
# 1031 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, LINK_GROUP_MULTI_BATTLE
# 1032 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end


CableClub_EventScript_WirelessBattleInfo::
# 1037 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_ExplainBattleModes
# 1038 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_WirelessBattleSelect
	end


CableClub_EventScript_WirelessBerryCrush::
# 1043 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_UseBerryCrush, MSGBOX_YESNO
# 1044 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_AbortLink
# 1045 "data/scripts/cable_club.pory"
	special HasAtLeastOneBerry
# 1046 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_NeedBerryForBerryCrush
# 1047 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, LINK_GROUP_BERRY_CRUSH
# 1048 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end


CableClub_EventScript_NeedBerryForBerryCrush::
# 1053 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_NeedBerryForBerryCrush
# 1054 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_DirectCornerSelectService
	end


CableClub_EventScript_SaveAndChooseLinkLeader::
# 1059 "data/scripts/cable_club.pory"
	call EventScript_AskSaveGame
# 1060 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
# 1061 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 1062 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, LINK_GROUP_TRADE, CableClub_EventScript_ChooseLinkLeaderFrom2
# 1063 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, LINK_GROUP_SINGLE_BATTLE, CableClub_EventScript_ChooseLinkLeaderFrom2
# 1064 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, LINK_GROUP_DOUBLE_BATTLE, CableClub_EventScript_ChooseLinkLeaderFrom2
# 1065 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, LINK_GROUP_MULTI_BATTLE, CableClub_EventScript_ChooseLinkLeaderFrom4
# 1066 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, LINK_GROUP_BERRY_CRUSH, CableClub_EventScript_ChooseLinkLeader
	end


CableClub_EventScript_ChooseLinkLeaderFrom2::
# 1071 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1072 "data/scripts/cable_club.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 1073 "data/scripts/cable_club.pory"
	waitmessage
# 1074 "data/scripts/cable_club.pory"
	call EventScript_RestorePrevTextColor
# 1075 "data/scripts/cable_club.pory"
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
# 1076 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 1077 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_TryJoinGroup2Players
# 1078 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_TryLeadGroup2Players
# 1079 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_AbortLink
# 1080 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_TryLeadGroup2Players::
# 1085 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 1086 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
# 1087 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom2
# 1088 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryLeadGroup2Players
# 1089 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_TryJoinGroup2Players::
# 1094 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 1095 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
# 1096 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom2
# 1097 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinGroup2Players
# 1098 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_ChooseLinkLeaderFrom4::
# 1103 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1104 "data/scripts/cable_club.pory"
	message CableClub_Text_ChooseGroupLeaderOfFour
# 1105 "data/scripts/cable_club.pory"
	waitmessage
# 1106 "data/scripts/cable_club.pory"
	call EventScript_RestorePrevTextColor
# 1107 "data/scripts/cable_club.pory"
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
# 1108 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 1109 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_TryJoinGroup4Players
# 1110 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_TryLeadGroup4Players
# 1111 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_AbortLink
# 1112 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_TryLeadGroup4Players::
# 1117 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 1118 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
# 1119 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom4
# 1120 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryLeadGroup4Players
# 1121 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_TryJoinGroup4Players::
# 1126 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 1127 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
# 1128 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom4
# 1129 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinGroup4Players
# 1130 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_ChooseLinkLeader::
# 1135 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1136 "data/scripts/cable_club.pory"
	message CableClub_Text_ChooseGroupLeader
# 1137 "data/scripts/cable_club.pory"
	waitmessage
# 1138 "data/scripts/cable_club.pory"
	call EventScript_RestorePrevTextColor
# 1139 "data/scripts/cable_club.pory"
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
# 1140 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 1141 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_TryJoinGroupXPlayers
# 1142 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_TryLeadGroupXPlayers
# 1143 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_AbortLink
# 1144 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end


CableClub_EventScript_TryLeadGroupXPlayers::
# 1149 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 1150 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
# 1151 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeader
# 1152 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryLeadGroupXPlayers
# 1153 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_TryJoinGroupXPlayers::
# 1158 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 1159 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
# 1160 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeader
# 1161 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinGroupXPlayers
# 1162 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_TryBecomeLinkLeader::
# 1167 "data/scripts/cable_club.pory"
	special HelpSystem_Disable
# 1168 "data/scripts/cable_club.pory"
	special TryBecomeLinkLeader
# 1169 "data/scripts/cable_club.pory"
	waitstate
	return


CableClub_EventScript_TryJoinLinkGroup::
# 1174 "data/scripts/cable_club.pory"
	special HelpSystem_Disable
# 1175 "data/scripts/cable_club.pory"
	special TryJoinLinkGroup
# 1176 "data/scripts/cable_club.pory"
	waitstate
	return


CableClub_EventScript_EnterWirelessLinkRoom::
# 1181 "data/scripts/cable_club.pory"
	messageautoscroll CableClub_Text_DirectYouToYourRoom
# 1182 "data/scripts/cable_club.pory"
	waitmessage
# 1183 "data/scripts/cable_club.pory"
	delay 60
# 1184 "data/scripts/cable_club.pory"
	closemessage
# 1185 "data/scripts/cable_club.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 1186 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenDirectCornerBarrier
# 1187 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 1188 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 1189 "data/scripts/cable_club.pory"
	delay 60
# 1190 "data/scripts/cable_club.pory"
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
# 1191 "data/scripts/cable_club.pory"
	waitmovement 0
# 1192 "data/scripts/cable_club.pory"
	closemessage
# 1193 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
# 1194 "data/scripts/cable_club.pory"
	waitmovement 0
# 1195 "data/scripts/cable_club.pory"
	opendoor 9, 1
# 1196 "data/scripts/cable_club.pory"
	waitdooranim
# 1197 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
# 1198 "data/scripts/cable_club.pory"
	waitmovement 0
# 1199 "data/scripts/cable_club.pory"
	hideobjectat LOCALID_PLAYER, 0
# 1200 "data/scripts/cable_club.pory"
	closedoor 9, 1
# 1201 "data/scripts/cable_club.pory"
	waitdooranim
# 1202 "data/scripts/cable_club.pory"
	release
# 1203 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_ShowWirelessCommunicationScreen::
# 1208 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 1209 "data/scripts/cable_club.pory"
	lockall
# 1210 "data/scripts/cable_club.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_NotReadyYet
# 1211 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 1212 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AdapterNotConnected
# 1213 "data/scripts/cable_club.pory"
	special HelpSystem_Disable
# 1214 "data/scripts/cable_club.pory"
	fadescreen FADE_TO_BLACK
# 1215 "data/scripts/cable_club.pory"
	special ShowWirelessCommunicationScreen
# 1216 "data/scripts/cable_club.pory"
	waitstate
# 1217 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_ParticipantsStepUpToCounter
# 1218 "data/scripts/cable_club.pory"
	special HelpSystem_Enable
# 1219 "data/scripts/cable_club.pory"
	releaseall
	end


CableClub_EventScript_AdapterNotConnected::
# 1224 "data/scripts/cable_club.pory"
	msgbox CableClub_Text_AdapterNotConnected
# 1225 "data/scripts/cable_club.pory"
	releaseall
	end


CableClub_EventScript_OpenUnionRoomBarrier::
# 1230 "data/scripts/cable_club.pory"
	setmetatile 5, 3, METATILE_PokemonCenter_Floor_ShadeLeft, 0
	return


CableClub_EventScript_CloseUnionRoomBarrier::
# 1235 "data/scripts/cable_club.pory"
	setmetatile 5, 3, METATILE_PokemonCenter_CounterBarrier, 1
	return


CableClub_EventScript_OpenDirectCornerBarrier::
# 1240 "data/scripts/cable_club.pory"
	setmetatile 9, 3, METATILE_PokemonCenter_Floor_ShadeLeft, 0
	return


CableClub_EventScript_CloseDirectCornerBarrier::
# 1245 "data/scripts/cable_club.pory"
	setmetatile 9, 3, METATILE_PokemonCenter_CounterBarrier, 1
	return


CableClub_EventScript_OpenGameCornerBarrier::
# 1250 "data/scripts/cable_club.pory"
	setmetatile 5, 3, METATILE_GameCorner_CheckeredFloor_ShadeLeft, 0
	return


CableClub_EventScript_CloseGameCornerBarrier::
# 1255 "data/scripts/cable_club.pory"
	setmetatile 5, 3, METATILE_GameCorner_CounterBarrier, 1
	return


CableClub_OnResume::
# 1260 "data/scripts/cable_club.pory"
	special InitUnionRoom
	end


JoyfulGameCorner_EventScript_InfoMan2::
# 1265 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 1266 "data/scripts/cable_club.pory"
	special QuestLog_CutRecording
# 1267 "data/scripts/cable_club.pory"
	lock
# 1268 "data/scripts/cable_club.pory"
	faceplayer
# 1269 "data/scripts/cable_club.pory"
	message Text_DescribeWhichGame
# 1270 "data/scripts/cable_club.pory"
	waitmessage
# 1271 "data/scripts/cable_club.pory"
	multichoice 0, 0, MULTICHOICE_POKEJUMP_DODRIO, FALSE
# 1272 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 1273 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_PokemonJumpInfo
# 1274 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_DodrioBerryPickingInfo
# 1275 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_MinigameInfoExit
# 1276 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_MinigameInfoExit
	end


CableClub_EventScript_PokemonJumpInfo::
# 1281 "data/scripts/cable_club.pory"
	msgbox Text_PokemonJumpInfo
# 1282 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_DodrioBerryPickingInfo::
# 1287 "data/scripts/cable_club.pory"
	msgbox Text_DodrioBerryPickingInfo
# 1288 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_MinigameInfoExit::
# 1293 "data/scripts/cable_club.pory"
	msgbox Text_TalkToManToPlay
# 1294 "data/scripts/cable_club.pory"
	release
	end


JoyfulGameCorner_EventScript_MinigameAttendant::
# 1299 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 1300 "data/scripts/cable_club.pory"
	special QuestLog_CutRecording
# 1301 "data/scripts/cable_club.pory"
	lock
# 1302 "data/scripts/cable_club.pory"
	faceplayer
# 1303 "data/scripts/cable_club.pory"
	message Text_WelcomeCanYouWait
# 1304 "data/scripts/cable_club.pory"
	waitmessage
# 1305 "data/scripts/cable_club.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 1306 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AdapterNotConnectedMinigame
# 1307 "data/scripts/cable_club.pory"
	delay 60
# 1308 "data/scripts/cable_club.pory"
	special HelpSystem_Disable
# 1309 "data/scripts/cable_club.pory"
	message Text_PlayWhichGame
# 1310 "data/scripts/cable_club.pory"
	waitmessage
# 1311 "data/scripts/cable_club.pory"
	multichoice 0, 0, MULTICHOICE_POKEJUMP_DODRIO, FALSE
# 1312 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 1313 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_PlayPokemonJump
# 1314 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_PlayDodrioBerryPicking
# 1315 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_AbortMinigame
# 1316 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortMinigame
	end


CableClub_EventScript_PlayPokemonJump::
# 1321 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 0
# 1322 "data/scripts/cable_club.pory"
	special IsPokemonJumpSpeciesInParty
# 1323 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_NoEligiblePkmn
# 1324 "data/scripts/cable_club.pory"
	msgbox Text_EnterWhichPokemon
# 1325 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 0
# 1326 "data/scripts/cable_club.pory"
	special ChooseMonForWirelessMinigame
# 1327 "data/scripts/cable_club.pory"
	waitstate
# 1328 "data/scripts/cable_club.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CableClub_EventScript_AbortMinigame
# 1329 "data/scripts/cable_club.pory"
	call EventScript_AskSaveGame
# 1330 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortMinigame
# 1331 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, LINK_GROUP_POKEMON_JUMP
# 1332 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_ChooseLinkLeaderMinigame
	end


CableClub_EventScript_PlayDodrioBerryPicking::
# 1337 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 1
# 1338 "data/scripts/cable_club.pory"
	special IsDodrioInParty
# 1339 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_NoEligiblePkmn
# 1340 "data/scripts/cable_club.pory"
	msgbox Text_EnterWhichPokemon
# 1341 "data/scripts/cable_club.pory"
	setvar VAR_0x8005, 1
# 1342 "data/scripts/cable_club.pory"
	special ChooseMonForWirelessMinigame
# 1343 "data/scripts/cable_club.pory"
	waitstate
# 1344 "data/scripts/cable_club.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CableClub_EventScript_AbortMinigame
# 1345 "data/scripts/cable_club.pory"
	call EventScript_AskSaveGame
# 1346 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortMinigame
# 1347 "data/scripts/cable_club.pory"
	setvar VAR_0x8004, LINK_GROUP_BERRY_PICKING
# 1348 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_ChooseLinkLeaderMinigame
	end


CableClub_EventScript_ChooseLinkLeaderMinigame::
# 1353 "data/scripts/cable_club.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1354 "data/scripts/cable_club.pory"
	message CableClub_Text_ChooseGroupLeader
# 1355 "data/scripts/cable_club.pory"
	waitmessage
# 1356 "data/scripts/cable_club.pory"
	call EventScript_RestorePrevTextColor
# 1357 "data/scripts/cable_club.pory"
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
# 1358 "data/scripts/cable_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 1359 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 0, CableClub_EventScript_TryJoinMinigameLinkGroup
# 1360 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 1, CableClub_EventScript_TryBecomeMinigameLinkLeader
# 1361 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, 2, CableClub_EventScript_AbortMinigame
# 1362 "data/scripts/cable_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, CableClub_EventScript_AbortMinigame
	end


CableClub_EventScript_TryBecomeMinigameLinkLeader::
# 1367 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 1368 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterMinigame
# 1369 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderMinigame
# 1370 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryBecomeMinigameLinkLeader
# 1371 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_TryJoinMinigameLinkGroup::
# 1376 "data/scripts/cable_club.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 1377 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterMinigame
# 1378 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderMinigame
# 1379 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinMinigameLinkGroup
# 1380 "data/scripts/cable_club.pory"
	release
	return


CableClub_EventScript_EnterMinigame::
# 1385 "data/scripts/cable_club.pory"
	messageautoscroll Text_AllGoodToGo
# 1386 "data/scripts/cable_club.pory"
	waitmessage
# 1387 "data/scripts/cable_club.pory"
	delay 120
# 1388 "data/scripts/cable_club.pory"
	closemessage
# 1389 "data/scripts/cable_club.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 1390 "data/scripts/cable_club.pory"
	call CableClub_EventScript_OpenGameCornerBarrier
# 1391 "data/scripts/cable_club.pory"
	special DrawWholeMapView
# 1392 "data/scripts/cable_club.pory"
	playse SE_CLICK
# 1393 "data/scripts/cable_club.pory"
	delay 60
# 1394 "data/scripts/cable_club.pory"
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
# 1395 "data/scripts/cable_club.pory"
	waitmovement 0
# 1396 "data/scripts/cable_club.pory"
	closemessage
# 1397 "data/scripts/cable_club.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerEnterMinigameRoom
# 1398 "data/scripts/cable_club.pory"
	waitmovement 0
# 1399 "data/scripts/cable_club.pory"
	hideobjectat LOCALID_PLAYER, 0
# 1400 "data/scripts/cable_club.pory"
	release
# 1401 "data/scripts/cable_club.pory"
	waitstate
	end


CableClub_EventScript_AdapterNotConnectedMinigame::
# 1406 "data/scripts/cable_club.pory"
	msgbox Text_AdapterNotConnectedMinigame
# 1407 "data/scripts/cable_club.pory"
	release
	end


CableClub_EventScript_NoEligiblePkmn::
# 1412 "data/scripts/cable_club.pory"
	msgbox EventScript_ExplainPokemonJumpRequirements, MSGBOX_YESNO
# 1413 "data/scripts/cable_club.pory"
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_AbortMinigame
# 1414 "data/scripts/cable_club.pory"
	call_if_eq VAR_0x8005, 0, CableClub_EventScript_ExplainPokemonJumpRequirements
# 1415 "data/scripts/cable_club.pory"
	call_if_eq VAR_0x8005, 1, CableClub_EventScript_ExplainDodrioBerryPickingRequirements
# 1416 "data/scripts/cable_club.pory"
	goto CableClub_EventScript_AbortMinigame
	end


CableClub_EventScript_ExplainPokemonJumpRequirements::
# 1421 "data/scripts/cable_club.pory"
	msgbox Text_ShortJumpingPokemonAllowed
	return


CableClub_EventScript_ExplainDodrioBerryPickingRequirements::
# 1426 "data/scripts/cable_club.pory"
	msgbox Text_OnlyDodrioAllowed
	return


TwoIsland_JoyfulGameCorner_EventScript_ShowPokemonJumpRecords::
# 1431 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 1432 "data/scripts/cable_club.pory"
	lockall
# 1433 "data/scripts/cable_club.pory"
	special ShowPokemonJumpRecords
# 1434 "data/scripts/cable_club.pory"
	waitstate
# 1435 "data/scripts/cable_club.pory"
	releaseall
	end


TwoIsland_JoyfulGameCorner_EventScript_ShowDodrioBerryPickingRecords::
# 1440 "data/scripts/cable_club.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 1441 "data/scripts/cable_club.pory"
	lockall
# 1442 "data/scripts/cable_club.pory"
	special ShowDodrioBerryPickingRecords
# 1443 "data/scripts/cable_club.pory"
	waitstate
# 1444 "data/scripts/cable_club.pory"
	releaseall
	end


CableClub_Text_WelcomeWhichCableClubService::
# 1448 "data/scripts/cable_club.pory"
	.string "Welcome to the Pokémon Cable\n"
	.string "Club.\p"
	.string "Which of our services do you wish\n"
	.string "to use?$"

CableClub_Text_WhichService::
# 1455 "data/scripts/cable_club.pory"
	.string "Which of our services do you wish\n"
	.string "to use?$"

CableClub_Text_TradeMonsUsingLinkCable::
# 1460 "data/scripts/cable_club.pory"
	.string "Trade Pokémon with another player\n"
	.string "using a GBA Game Link cable.$"

CableClub_Text_BattleUsingLinkCable::
# 1465 "data/scripts/cable_club.pory"
	.string "You may battle another Trainer\n"
	.string "using a GBA Game Link cable.$"

CableClub_Text_CloseThisMenu::
# 1471 "data/scripts/cable_club.pory"
	.string "おわります$"

CableClub_Text_NeedTwoMonsForDoubleBattle::
# 1475 "data/scripts/cable_club.pory"
	.string "For a Double Battle, you must\n"
	.string "have at least two Pokémon.$"

CableClub_Text_NeedTwoMonsToTrade::
# 1480 "data/scripts/cable_club.pory"
	.string "For trading, you must have at\n"
	.string "least two Pokémon with you.$"

CableClub_Text_CantTradeEnigmaBerry::
# 1485 "data/scripts/cable_club.pory"
	.string "A Pokémon holding the {STR_VAR_1}\n"
	.string "Berry can't be traded.$"

CableClub_Text_PleaseWaitBCancel::
# 1490 "data/scripts/cable_club.pory"
	.string "Please wait.\n"
	.string "… … B Button: Cancel$"

CableClub_Text_WhenAllPlayersReadyAConfirmBCancel::
# 1495 "data/scripts/cable_club.pory"
	.string "When all players are ready…\n"
	.string "A Button: Confirm\l"
	.string "B Button: Cancel$"

CableClub_Text_StartLinkWithXPlayersAConfirmBCancel::
# 1501 "data/scripts/cable_club.pory"
	.string "Start link with {STR_VAR_1} players.\n"
	.string "A Button: Confirm\l"
	.string "B Button: Cancel$"

CableClub_Text_AwaitingLinkupBCancel::
# 1507 "data/scripts/cable_club.pory"
	.string "Awaiting linkup…\n"
	.string "… … B Button: Cancel$"

CableClub_Text_OkayToSaveProgress::
# 1513 "data/scripts/cable_club.pory"
	.string "はじめる　まえに　レポートを\n"
	.string "かきますが　よろしいですか？$"

CableClub_Text_PleaseEnter::
# 1518 "data/scripts/cable_club.pory"
	.string "Please enter.$"

CableClub_Text_DirectYouToYourRoom::
# 1522 "data/scripts/cable_club.pory"
	.string "I'll direct you to your room now.$"

CableClub_Text_SomeoneIsNotReadyToLink::
# 1526 "data/scripts/cable_club.pory"
	.string "Someone is not ready to link.\p"
	.string "Please come back after everyone\n"
	.string "has made preparations.$"

CableClub_Text_LinkErrorPleaseReset::
# 1532 "data/scripts/cable_club.pory"
	.string "Sorry, we have a link error…\n"
	.string "Please reset and try again.$"

CableClub_Text_PlayersMadeDifferentSelections::
# 1537 "data/scripts/cable_club.pory"
	.string "The link partners appear to have\n"
	.string "made different selections.$"

CableClub_Text_PleaseVisitAgain::
# 1542 "data/scripts/cable_club.pory"
	.string "Please do visit again.$"

CableClub_Text_IncorrectNumberOfParticipants::
# 1546 "data/scripts/cable_club.pory"
	.string "The number of participants is\n"
	.string "incorrect.$"

CableClub_Text_CantSingleBattleWithXPlayers::
# 1551 "data/scripts/cable_club.pory"
	.string "The Single Battle Mode can't be\n"
	.string "played by {STR_VAR_1} players.$"

CableClub_Text_CantDoubleBattleWithXPlayers::
# 1556 "data/scripts/cable_club.pory"
	.string "The Double Battle Mode can't be\n"
	.string "played by {STR_VAR_1} players.$"

CableClub_Text_NeedFourPlayers::
# 1561 "data/scripts/cable_club.pory"
	.string "There must be four players to play\n"
	.string "this Battle Mode.$"

CableClub_Text_PleaseConfirmNumberAndRestart::
# 1566 "data/scripts/cable_club.pory"
	.string "Please confirm the number of\n"
	.string "players and start again.$"

Text_TerminateLinkIfYouLeaveRoom::
# 1571 "data/scripts/cable_club.pory"
	.string "The link will be terminated if you\n"
	.string "leave the room. Is that okay?$"

Text_TerminateLinkConfirmation::
# 1576 "data/scripts/cable_club.pory"
	.string "Terminating link…\n"
	.string "You will be escorted out of\l"
	.string "the room. Please wait.$"

Text_TrainerTooBusyToNotice::
# 1582 "data/scripts/cable_club.pory"
	.string "This Trainer is too busy to\n"
	.string "notice…$"

Text_LookedAtPlayersTrainerCard::
# 1587 "data/scripts/cable_club.pory"
	.string "Score! Got to look at {STR_VAR_1}'s\n"
	.string "Trainer Card!$"

Text_LookedAtPlayersTrainerCardColored::
# 1592 "data/scripts/cable_club.pory"
	.string "Score! Got to look at {STR_VAR_1}'s\n"
	.string "Trainer Card!\p"
	.string "It's a {STR_VAR_2} card!$"

Text_TakeSeatStartBattle::
# 1598 "data/scripts/cable_club.pory"
	.string "Please take your seat and start\n"
	.string "your battle.$"

Text_TakeSeatStartTrade::
# 1603 "data/scripts/cable_club.pory"
	.string "Please take your seat and start\n"
	.string "your trade.$"

RecordCorner_Text_ThanksForComing::
# 1609 "data/scripts/cable_club.pory"
	.string "ごりよう　ありがとう　ございました$"

CableClub_Text_TrainerCardDataOverwritten::
# 1613 "data/scripts/cable_club.pory"
	.string "The Trainer Card data will\n"
	.string "be overwritten.$"

CableClub_Text_HopeToSeeYouAgain::
# 1618 "data/scripts/cable_club.pory"
	.string "I hope to see you again!$"

CableClub_Text_NotSetUpForFarAwayRegion::
# 1622 "data/scripts/cable_club.pory"
	.string "I'm awfully sorry.\p"
	.string "We're not set up to conduct trades\n"
	.string "with Trainers far away in another\l"
	.string "region yet…$"

CableClub_Text_OtherTrainerNotReady::
# 1629 "data/scripts/cable_club.pory"
	.string "The other Trainer is not ready.$"

CableClub_Text_YouHaveAMonThatCantBeTaken::
# 1633 "data/scripts/cable_club.pory"
	.string "You have at least one Pokémon\n"
	.string "that can't be taken.$"

CableClub_Text_AdapterNotConnected::
# 1638 "data/scripts/cable_club.pory"
	.string "The Wireless Adapter is not\n"
	.string "connected properly.$"

CableClub_Text_ParticipantsStepUpToCounter::
# 1643 "data/scripts/cable_club.pory"
	.string "Participants are asked to step up\n"
	.string "to the reception counter.$"

CableClub_Text_Hello::
# 1649 "data/scripts/cable_club.pory"
	.string "こんにちは！$"

CableClub_Text_PleaseWait::
# 1654 "data/scripts/cable_club.pory"
	.string "しょうしょう　おまちください$"

CableClub_Text_YouMayTradeHere::
# 1658 "data/scripts/cable_club.pory"
	.string "You may trade your Pokémon here\n"
	.string "with another Trainer.$"

CableClub_Text_YouMayBattleHere::
# 1663 "data/scripts/cable_club.pory"
	.string "You may battle with your friends\n"
	.string "here.$"

CableClub_Text_CanMakeBerryPowder::
# 1668 "data/scripts/cable_club.pory"
	.string "Two to five Trainers can make\n"
	.string "Berry Powder together.$"

CableClub_Text_CanMixRecords::
# 1674 "data/scripts/cable_club.pory"
	.string "ワイヤレス　クラブでの\n"
	.string "あそびかたを　せつめいします$"

CableClub_Text_CancelSelectedItem::
# 1679 "data/scripts/cable_club.pory"
	.string "Cancels the selected Menu item.$"

CableClub_Text_WhichBattleMode::
# 1684 "data/scripts/cable_club.pory"
	.string "どちらの　しょうぶに　しますか？$"

CableClub_Text_ReturnsToPreviousStep::
# 1689 "data/scripts/cable_club.pory"
	.string "ひとつ　まえに　もどります$"

CableClub_Text_NeedBerryForBerryCrush::
# 1693 "data/scripts/cable_club.pory"
	.string "To use the Berry Crush service,\n"
	.string "you must have at least one Berry.$"

CableClub_Text_NeedTwoMonsForUnionRoom::
# 1698 "data/scripts/cable_club.pory"
	.string "To enter the Union Room, you must\n"
	.string "have at least two Pokémon.$"

CableClub_Text_NoEnigmaBerryInUnionRoom::
# 1703 "data/scripts/cable_club.pory"
	.string "No Pokémon holding the {STR_VAR_1}\n"
	.string "Berry may enter the Union Room.$"

CableClub_Text_UnionRoomAdapterNotConnected::
# 1708 "data/scripts/cable_club.pory"
	.string "This is the Pokémon Wireless Club\n"
	.string "Union Room.\p"
	.string "Unfortunately, your Wireless\n"
	.string "Adapter is not connected properly.\p"
	.string "Please do come again.$"

CableClub_Text_OhExcuseMe::
# 1717 "data/scripts/cable_club.pory"
	.string "あ‥‥\n"
	.string "おきゃくさま！$"

Text_PlayerIsPlayingRightNowGoForIt::
# 1722 "data/scripts/cable_club.pory"
	.string "It appears as if {STR_VAR_1} is playing\n"
	.string "right now.\l"
	.string "Go for it!$"

Text_DescribeWhichGame::
# 1728 "data/scripts/cable_club.pory"
	.string "I can explain game rules to you,\n"
	.string "if you'd like.\p"
	.string "Which game should I describe?$"

Text_PokemonJumpInfo::
# 1734 "data/scripts/cable_club.pory"
	.string "“Pokémon Jump”\p"
	.string "Make your Pokémon skip the\n"
	.string "Vine Whip rope with the A Button.\p"
	.string "Only mini Pokémon around 28 inches\n"
	.string "or less may participate.\p"
	.string "Pokémon that only swim, burrow, or\n"
	.string "fly are not good at jumping.\p"
	.string "As a result, those Pokémon may not\n"
	.string "participate.\p"
	.string "Good things happen if everyone\n"
	.string "jumps in time.$"

Text_DodrioBerryPickingInfo::
# 1748 "data/scripts/cable_club.pory"
	.string "“Dodrio Berry-Picking”\p"
	.string "Command Dodrio's three heads to\n"
	.string "catch falling Berries.\p"
	.string "Press right, up, or left on the\n"
	.string "{PLUS} Control Pad to move the heads.\p"
	.string "To play this game, you must have\n"
	.string "a Dodrio.$"

Text_TalkToManToPlay::
# 1758 "data/scripts/cable_club.pory"
	.string "If you want to play a game,\n"
	.string "please tell the man beside me.$"

Text_WelcomeCanYouWait::
# 1763 "data/scripts/cable_club.pory"
	.string "Hi, welcome!\n"
	.string "You can play games over the\l"
	.string "Wireless Communication System.\p"
	.string "Can you wait just a little bit?$"

CableClub_Text_ComeAgain::
# 1770 "data/scripts/cable_club.pory"
	.string "All right, come again!$"

Text_AdapterNotConnectedMinigame::
# 1774 "data/scripts/cable_club.pory"
	.string "The Wireless Adapter isn't\n"
	.string "connected.\p"
	.string "Come back when it's hooked up!$"

Text_PlayWhichGame::
# 1780 "data/scripts/cable_club.pory"
	.string "All right, which game did you want\n"
	.string "to play?$"

Text_EnterWhichPokemon::
# 1785 "data/scripts/cable_club.pory"
	.string "Which Pokémon would you like to\n"
	.string "enter?$"

Text_AllGoodToGo::
# 1790 "data/scripts/cable_club.pory"
	.string "Okay, you're all good to go.\n"
	.string "Don't let the others beat you!$"

Text_LeavingDoComeAgain::
# 1796 "data/scripts/cable_club.pory"
	.string "きょうは　けえるのか？\n"
	.string "またこいよ！$"

EventScript_ExplainPokemonJumpRequirements::
# 1801 "data/scripts/cable_club.pory"
	.string "It doesn't look like you have any\n"
	.string "Pokémon that you can enter…\p"
	.string "Would you like me to explain what\n"
	.string "kinds of Pokémon can enter?$"

Text_ShortJumpingPokemonAllowed::
# 1808 "data/scripts/cable_club.pory"
	.string "“Pokémon Jump” is open to Pokémon\n"
	.string "around 28 inches or less.\p"
	.string "What you can't enter are those\n"
	.string "Pokémon that can't jump.\p"
	.string "You know, like Pokémon that only\n"
	.string "swim, burrow, or fly.\p"
	.string "That's all you need to know.$"

Text_OnlyDodrioAllowed::
# 1818 "data/scripts/cable_club.pory"
	.string "“Dodrio Berry-Picking”…\n"
	.string "Well, the name says it all.\p"
	.string "You have to have a Dodrio to play\n"
	.string "this game.$"

Text_RetryFromStartPlease::
# 1826 "data/scripts/cable_club.pory"
	.string "もういちど　はじめから\n"
	.string "やりなおして　みて　くれ$"

CableClub_Text_WelcomeWhichDirectCornerRoom::
# 1831 "data/scripts/cable_club.pory"
	.string "Welcome to the Pokémon Wireless\n"
	.string "Club Direct Corner.\p"
	.string "You may interact directly with\n"
	.string "your friends here.\p"
	.string "Which room would you like to\n"
	.string "enter?$"

CableClub_Text_TradePokemon::
# 1840 "data/scripts/cable_club.pory"
	.string "Would you like to trade Pokémon?$"

CableClub_Text_PlayWhichBattleMode::
# 1844 "data/scripts/cable_club.pory"
	.string "Which Battle Mode would you like\n"
	.string "to play?$"

CableClub_Text_UseBerryCrush::
# 1849 "data/scripts/cable_club.pory"
	.string "Would you like to use the\n"
	.string "Berry Crush System?$"

CableClub_Text_ExplainBattleModes::
# 1854 "data/scripts/cable_club.pory"
	.string "There are three Battle Modes.\p"
	.string "Single Battle is for two Trainers\n"
	.string "with one or more Pokémon each.\p"
	.string "Each Trainer can have one Pokémon\n"
	.string "in battle at a time.\p"
	.string "Double Battle is for two Trainers\n"
	.string "with two or more Pokémon each.\p"
	.string "Each Trainer will send out two\n"
	.string "Pokémon in battle at a time.\p"
	.string "Multi Battle is for four Trainers\n"
	.string "with one or more Pokémon each.\p"
	.string "Each Trainer can have one Pokémon\n"
	.string "in battle at a time.$"

CableClub_Text_ChooseGroupLeaderOfTwo::
# 1870 "data/scripts/cable_club.pory"
	.string "Please decide which of you two\n"
	.string "will become the Leader.\p"
	.string "The other player must then choose\n"
	.string "“Join Group.”$"

CableClub_Text_ChooseGroupLeaderOfFour::
# 1877 "data/scripts/cable_club.pory"
	.string "Please decide which of you four\n"
	.string "will become the Group Leader.\p"
	.string "The other players must then choose\n"
	.string "“Join Group.”$"

CableClub_Text_ChooseGroupLeader::
# 1884 "data/scripts/cable_club.pory"
	.string "Please decide which of you will\n"
	.string "become the Group Leader.\p"
	.string "The other players must then choose\n"
	.string "“Join Group.”$"

CableClub_Text_WelcomeUnionRoomEnter::
# 1891 "data/scripts/cable_club.pory"
	.string "Welcome to the Pokémon Wireless\n"
	.string "Club Union Room.\p"
	.string "You may interact directly with\n"
	.string "other Trainers here, some of\l"
	.string "whom you may not even know.\p"
	.string "Would you like to enter the Room?$"

CableClub_Text_UnionRoomInfo::
# 1900 "data/scripts/cable_club.pory"
	.string "The Trainers in the Union Room\n"
	.string "will be those players around you\l"
	.string "who have also entered the Room.\p"
	.string "You may do all sorts of things\n"
	.string "here, such as exchanging greetings.\p"
	.string "You may enter two Pokémon up to\n"
	.string "Lv. 30 for a one-on-one battle.\p"
	.string "You may take part in a chat with\n"
	.string "two to five people.\p"
	.string "Or, you may register a Pokémon for\n"
	.string "trade.\p"
	.string "Would you like to enter the Room?$"

CableClub_Text_EnjoyUnionRoom::
# 1915 "data/scripts/cable_club.pory"
	.string "I hope you enjoy your time in\n"
	.string "the Union Room.$"

CableClub_Text_FirstTimeRightThisWay::
# 1920 "data/scripts/cable_club.pory"
	.string "Hello!\n"
	.string "My name is Teala.\p"
	.string "This must be your first time\n"
	.string "up here.\p"
	.string "I'll show you how the Wireless\n"
	.string "Communication System works.\p"
	.string "First, I need to show you this\n"
	.string "floor of our Pokémon Center.\p"
	.string "Right this way, please.$"

CableClub_Text_ExplainWirelessClubFirstTime::
# 1932 "data/scripts/cable_club.pory"
	.string "On the top floor, there are two\n"
	.string "rooms.\p"
	.string "First, the room on the left.\n"
	.string "It's the Union Room.\p"
	.string "You may link up with Trainers\n"
	.string "around you who have also entered\l"
	.string "the Union Room.\p"
	.string "With them, you may do things like\n"
	.string "chat, battle, and trade.\p"
	.string "Second, the room on the right is\n"
	.string "the Direct Corner.\p"
	.string "You may trade or battle Pokémon\n"
	.string "with your friends in this room.\p"
	.string "If the Wireless Adapter isn't\n"
	.string "connected, you may still link up\l"
	.string "using a GBA Game Link cable.\p"
	.string "If that is the case, you must go\n"
	.string "to the Direct Corner.\p"
	.string "I hope you enjoy the Wireless \n"
	.string "Communication System.$"

CableClub_Text_AskAboutLinking::
# 1955 "data/scripts/cable_club.pory"
	.string "Hello, {PLAYER}!\p"
	.string "It's me, Teala, the Pokémon\n"
	.string "Center 2F attendant.\p"
	.string "Is there something you needed to\n"
	.string "ask me about linking?$"

CableClub_Text_ExplainWirelessClub::
# 1963 "data/scripts/cable_club.pory"
	.string "Let me explain how the Pokémon\n"
	.string "Wireless Club works.\p"
	.string "On this, the top floor, there are\n"
	.string "two rooms.\p"
	.string "First, the room on the left.\n"
	.string "It's the Union Room.\p"
	.string "You may link up with Trainers\n"
	.string "around you who have also entered\l"
	.string "the Union Room.\p"
	.string "With them, you may do things like\n"
	.string "chat, battle, and trade.\p"
	.string "Second, the room on the right is\n"
	.string "the Direct Corner.\p"
	.string "You may trade or battle Pokémon\n"
	.string "with your friends in this room.\p"
	.string "Sometimes, you may not be able to\n"
	.string "find your friends in the Union Room\l"
	.string "or the Direct Corner.\p"
	.string "In that case, please move closer\n"
	.string "to your friends.\p"
	.string "If the Wireless Adapter isn't\n"
	.string "connected, you may still link up\l"
	.string "using a GBA Game Link cable.\p"
	.string "If that is the case, you must go\n"
	.string "to the Direct Corner.\p"
	.string "I hope you enjoy the Wireless \n"
	.string "Communication System.$"

CableClub_Text_HopeYouEnjoyWirelessSystem::
# 1993 "data/scripts/cable_club.pory"
	.string "I hope you enjoy the Wireless\n"
	.string "Communication System.$"

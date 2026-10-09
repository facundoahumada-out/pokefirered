ViridianCity_MapScripts::
# 2 "data/maps/ViridianCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0


ViridianCity_OnTransition::
# 6 "data/maps/ViridianCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 7 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
# 8 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
# 9 "data/maps/ViridianCity/scripts.pory"
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
# 10 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
	end


ViridianCity_EventScript_SetOldManNormal::
# 15 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
	return


ViridianCity_EventScript_SetOldManStandingByRoad::
# 20 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 21 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 22 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
	return


ViridianCity_EventScript_SetOldManBlockingRoad::
# 27 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 28 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 29 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
	return


ViridianCity_EventScript_TryUnlockGym::
# 34 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, EventScript_Return
# 35 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_Return
# 36 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, EventScript_Return
# 37 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, EventScript_Return
# 38 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EventScript_Return
# 39 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, EventScript_Return
# 40 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	return


ViridianCity_EventScript_GymDoorLocked::
# 45 "data/maps/ViridianCity/scripts.pory"
	lockall
# 46 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 47 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/ViridianCity/scripts.pory"
	delay 20
# 50 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 51 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 52 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 53 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/ViridianCity/scripts.pory"
	releaseall
	end


# 58 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Movement_JumpDownLedge::
# 59 "data/maps/ViridianCity/scripts.pory"
	jump_2_down
# 60 "data/maps/ViridianCity/scripts.pory"
	step_end

ViridianCity_EventScript_CitySign::
# 64 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips1::
# 69 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips2::
# 74 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymSign::
# 79 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymDoor::
# 84 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
	end


ViridianCity_EventScript_Boy::
# 89 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
	end


ViridianCity_EventScript_OldMan::
# 95 "data/maps/ViridianCity/scripts.pory"
	lock
# 96 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 97 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 98 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 99 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 100 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 101 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_OldManGymLeaderReturned::
# 107 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 108 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialOldMan::
# 113 "data/maps/ViridianCity/scripts.pory"
	lock
# 114 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 115 "data/maps/ViridianCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
# 116 "data/maps/ViridianCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
# 117 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
# 118 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
	end


ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 123 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 124 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
# 125 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 126 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TeachyTVNotHelpful::
# 131 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 132 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialCompleted::
# 137 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 138 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialStart::
# 143 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 144 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_WatchToLearnBasics::
# 150 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 151 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialUnused::
# 157 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 158 "data/maps/ViridianCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 159 "data/maps/ViridianCity/scripts.pory"
	special QuestLog_CutRecording
# 160 "data/maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 161 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 162 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialNotReady::
# 167 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 168 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 169 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_Youngster::
# 174 "data/maps/ViridianCity/scripts.pory"
	lock
# 175 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 176 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 177 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 178 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
	end


ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 183 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 184 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_YoungsterDeclineExplanation::
# 189 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 190 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_Woman::
# 195 "data/maps/ViridianCity/scripts.pory"
	lock
# 196 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 197 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
# 198 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 199 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_WomanRoadBlocked::
# 204 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 205 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 206 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 207 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_DreamEaterTutor::
# 213 "data/maps/ViridianCity/scripts.pory"
	goto EventScript_DreamEaterTutor
	end


ViridianCity_EventScript_RoadBlocked::
# 218 "data/maps/ViridianCity/scripts.pory"
	lockall
# 219 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 220 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 221 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 222 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 223 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/ViridianCity/scripts.pory"
	releaseall
	end


# 228 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Movement_WalkDown::
# 229 "data/maps/ViridianCity/scripts.pory"
	walk_down
# 230 "data/maps/ViridianCity/scripts.pory"
	step_end

ViridianCity_EventScript_TutorialTriggerLeft::
# 234 "data/maps/ViridianCity/scripts.pory"
	lockall
# 235 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 236 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 237 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 239 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 241 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialTriggerRight::
# 246 "data/maps/ViridianCity/scripts.pory"
	lockall
# 247 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 248 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 249 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 251 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 253 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_DoTutorialBattle::
# 258 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 259 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 260 "data/maps/ViridianCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 261 "data/maps/ViridianCity/scripts.pory"
	special QuestLog_CutRecording
# 262 "data/maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 263 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 264 "data/maps/ViridianCity/scripts.pory"
	lock
# 265 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 266 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 267 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 268 "data/maps/ViridianCity/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 269 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	return


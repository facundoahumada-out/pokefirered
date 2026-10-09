CeruleanCity_House4_MapScripts::
	.byte 0


CeruleanCity_House4_EventScript_WonderNewsBerryMan::
# 7 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 8 "data/maps/CeruleanCity_House4/scripts.pory"
	special QuestLog_CutRecording
# 9 "data/maps/CeruleanCity_House4/scripts.pory"
	lock
# 10 "data/maps/CeruleanCity_House4/scripts.pory"
	specialvar VAR_0x8004, WonderNews_GetRewardInfo
# 11 "data/maps/CeruleanCity_House4/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 12 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_0x8004, NEWS_REWARD_NONE, CeruleanCity_House4_EventScript_NoNews
# 13 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_0x8004, NEWS_REWARD_RECV_SMALL, CeruleanCity_House4_EventScript_Reward_RecvSmall
# 14 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_0x8004, NEWS_REWARD_RECV_BIG, CeruleanCity_House4_EventScript_Reward_RecvBig
# 15 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_0x8004, NEWS_REWARD_WAITING, CeruleanCity_House4_EventScript_Waiting
# 16 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_0x8004, NEWS_REWARD_SENT_SMALL, CeruleanCity_House4_EventScript_Reward_SentSmall
# 17 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_0x8004, NEWS_REWARD_SENT_BIG, CeruleanCity_House4_EventScript_Reward_SentBig
# 18 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_0x8004, NEWS_REWARD_AT_MAX, CeruleanCity_House4_EventScript_AtMax
	end


CeruleanCity_House4_EventScript_NoNews::
# 24 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_NothingEntertaining
# 25 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_Reward_RecvSmall::
# 31 "data/maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 32 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
# 33 "data/maps/CeruleanCity_House4/scripts.pory"
	giveitem VAR_0x8008
# 34 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 35 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_Reward_RecvBig::
# 41 "data/maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 42 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
# 43 "data/maps/CeruleanCity_House4/scripts.pory"
	giveitem VAR_0x8008, 4
# 44 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 45 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_Waiting::
# 51 "data/maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 52 "data/maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 53 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
# 54 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_Reward_SentSmall::
# 60 "data/maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 61 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
# 62 "data/maps/CeruleanCity_House4/scripts.pory"
	giveitem VAR_0x8008
# 63 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 64 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_Reward_SentBig::
# 70 "data/maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 71 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
# 72 "data/maps/CeruleanCity_House4/scripts.pory"
	giveitem VAR_0x8008, 4
# 73 "data/maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 74 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_AtMax::
# 80 "data/maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 81 "data/maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 82 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
# 83 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_MovementReactionToNews::
# 88 "data/maps/CeruleanCity_House4/scripts.pory"
	playse SE_PIN
# 89 "data/maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
# 90 "data/maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 91 "data/maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 92 "data/maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 93 "data/maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
# 94 "data/maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
	return


CeruleanCity_House4_EventScript_NoRoomForBerries::
# 99 "data/maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
# 100 "data/maps/CeruleanCity_House4/scripts.pory"
	release
	end


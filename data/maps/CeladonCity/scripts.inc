CeladonCity_MapScripts::
# 2 "data/maps/CeladonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
	.byte 0


CeladonCity_OnTransition::
# 6 "data/maps/CeladonCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
	end


CeladonCity_EventScript_LittleGirl::
# 11 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
	end


CeladonCity_EventScript_OldMan1::
# 16 "data/maps/CeladonCity/scripts.pory"
	lock
# 17 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
# 18 "data/maps/CeladonCity/scripts.pory"
	release
	end


CeladonCity_EventScript_Woman::
# 23 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
	end


CeladonCity_EventScript_OldMan2::
# 28 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
	end


CeladonCity_EventScript_SoftboiledTutor::
# 33 "data/maps/CeladonCity/scripts.pory"
	goto EventScript_SoftboiledTutor
	end


CeladonCity_EventScript_FatMan::
# 38 "data/maps/CeladonCity/scripts.pory"
	lock
# 39 "data/maps/CeladonCity/scripts.pory"
	faceplayer
# 40 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
# 41 "data/maps/CeladonCity/scripts.pory"
	closemessage
# 42 "data/maps/CeladonCity/scripts.pory"
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
# 43 "data/maps/CeladonCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/CeladonCity/scripts.pory"
	release
	end


CeladonCity_EventScript_Poliwrath::
# 49 "data/maps/CeladonCity/scripts.pory"
	lock
# 50 "data/maps/CeladonCity/scripts.pory"
	faceplayer
# 51 "data/maps/CeladonCity/scripts.pory"
	waitse
# 52 "data/maps/CeladonCity/scripts.pory"
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
# 53 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_Poliwrath
# 54 "data/maps/CeladonCity/scripts.pory"
	closemessage
# 55 "data/maps/CeladonCity/scripts.pory"
	waitmoncry
# 56 "data/maps/CeladonCity/scripts.pory"
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
# 57 "data/maps/CeladonCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/CeladonCity/scripts.pory"
	release
	end


CeladonCity_EventScript_RocketGrunt1::
# 63 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
	end


CeladonCity_EventScript_RocketGrunt2::
# 68 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
	end


CeladonCity_EventScript_Boy::
# 73 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
	end


CeladonCity_EventScript_SilphCoScientist::
# 78 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
	end


CeladonCity_EventScript_TrainerTips1::
# 83 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
	end


CeladonCity_EventScript_CitySign::
# 88 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
	end


CeladonCity_EventScript_GymSign::
# 93 "data/maps/CeladonCity/scripts.pory"
	lockall
# 94 "data/maps/CeladonCity/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 0
# 95 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GymSign
# 96 "data/maps/CeladonCity/scripts.pory"
	releaseall
	end


CeladonCity_EventScript_MansionSign::
# 101 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_DeptStoreSign::
# 106 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_TrainerTips2::
# 111 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
	end


CeladonCity_EventScript_PrizeExchangeSign::
# 116 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_GameCornerSign::
# 121 "data/maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
	end


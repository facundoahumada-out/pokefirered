SaffronCity_MapScripts::
# 2 "data/maps/SaffronCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0


SaffronCity_OnTransition::
# 6 "data/maps/SaffronCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 7 "data/maps/SaffronCity/scripts.pory"
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
	end


SaffronCity_EventScript_MoveDoorGuardGrunt::
# 12 "data/maps/SaffronCity/scripts.pory"
	setobjectxyperm LOCALID_SAFFRON_DOOR_GUARD_GRUNT, 33, 31
	return


SaffronCity_EventScript_RocketGrunt1::
# 17 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt2::
# 22 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt3::
# 27 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt4::
# 32 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt5::
# 37 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt6::
# 42 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
	end


SaffronCity_EventScript_RocketGrunt7::
# 47 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
	end


SaffronCity_EventScript_DoorGuardGrunt::
# 52 "data/maps/SaffronCity/scripts.pory"
	lock
# 53 "data/maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
# 54 "data/maps/SaffronCity/scripts.pory"
	applymovement LOCALID_SAFFRON_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 55 "data/maps/SaffronCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
# 57 "data/maps/SaffronCity/scripts.pory"
	release
	end


SaffronCity_EventScript_DoorGuardAsleep::
# 62 "data/maps/SaffronCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 63 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
# 64 "data/maps/SaffronCity/scripts.pory"
	release
	end


SaffronCity_EventScript_WorkerM::
# 69 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
	end


SaffronCity_EventScript_Youngster::
# 74 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
	end


SaffronCity_EventScript_Lass::
# 79 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
	end


SaffronCity_EventScript_Boy::
# 84 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
	end


SaffronCity_EventScript_Pidgeot::
# 89 "data/maps/SaffronCity/scripts.pory"
	lock
# 90 "data/maps/SaffronCity/scripts.pory"
	faceplayer
# 91 "data/maps/SaffronCity/scripts.pory"
	waitse
# 92 "data/maps/SaffronCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 93 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 94 "data/maps/SaffronCity/scripts.pory"
	waitmoncry
# 95 "data/maps/SaffronCity/scripts.pory"
	release
	end


SaffronCity_EventScript_Man::
# 100 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
	end


SaffronCity_EventScript_CitySign::
# 105 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
	end


SaffronCity_EventScript_DojoSign::
# 110 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
	end


SaffronCity_EventScript_GymSign::
# 115 "data/maps/SaffronCity/scripts.pory"
	lockall
# 116 "data/maps/SaffronCity/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 117 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 118 "data/maps/SaffronCity/scripts.pory"
	releaseall
	end


SaffronCity_EventScript_TrainerTips1::
# 123 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
	end


SaffronCity_EventScript_TrainerTips2::
# 128 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
	end


SaffronCity_EventScript_SilphCoSign::
# 133 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
	end


SaffronCity_EventScript_MrPsychicsHouseSign::
# 138 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
	end


SaffronCity_EventScript_SilphProductSign::
# 143 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
	end


SaffronCity_EventScript_TrainerFanClubSign::
# 148 "data/maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end


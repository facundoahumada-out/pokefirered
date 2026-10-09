SaffronCity_Gym_MapScripts::
	.byte 0


SaffronCity_Gym_EventScript_Sabrina::
# 4 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 6 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
# 7 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
# 8 "data/maps/SaffronCity_Gym/scripts.pory"
	release
	end


SaffronCity_Gym_EventScript_DefeatedSabrina::
# 13 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 14 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 15 "data/maps/SaffronCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 16 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 17 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 18 "data/maps/SaffronCity_Gym/scripts.pory"
	set_gym_trainers 6
# 19 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
	end


SaffronCity_Gym_EventScript_GiveTM04::
# 24 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
# 25 "data/maps/SaffronCity_Gym/scripts.pory"
	checkitemspace ITEM_TM04
# 26 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
# 27 "data/maps/SaffronCity_Gym/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 28 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 29 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
# 30 "data/maps/SaffronCity_Gym/scripts.pory"
	release
	end


SaffronCity_Gym_EventScript_NoRoomForTM04::
# 35 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
# 36 "data/maps/SaffronCity_Gym/scripts.pory"
	release
	end


SaffronCity_Gym_EventScript_Johan::
# 41 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 42 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Tyron::
# 47 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 48 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 49 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Cameron::
# 54 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 55 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Preston::
# 60 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 61 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Amanda::
# 66 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 67 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Stacy::
# 72 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 73 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Tasha::
# 78 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 79 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_GymGuy::
# 84 "data/maps/SaffronCity_Gym/scripts.pory"
	lock
# 85 "data/maps/SaffronCity_Gym/scripts.pory"
	faceplayer
# 86 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
# 87 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
# 88 "data/maps/SaffronCity_Gym/scripts.pory"
	release
	end


SaffronCity_Gym_EventScript_GymGuyPostVictory::
# 93 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
# 94 "data/maps/SaffronCity_Gym/scripts.pory"
	release
	end


SaffronCity_Gym_EventScript_GymStatue::
# 99 "data/maps/SaffronCity_Gym/scripts.pory"
	lockall
# 100 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
# 101 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
# 102 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
	end


SaffronCity_Gym_EventScript_GymStatuePostVictory::
# 107 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
# 108 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
	end


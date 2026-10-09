CeruleanCity_Gym_MapScripts::
	.byte 0


CeruleanCity_Gym_EventScript_Misty::
# 4 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 6 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 7 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 8 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_MistyDefeated::
# 13 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 14 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 15 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 16 "data/maps/CeruleanCity_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 17 "data/maps/CeruleanCity_Gym/scripts.pory"
	set_gym_trainers 2
# 18 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
	end


CeruleanCity_Gym_EventScript_GiveTM03::
# 23 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 24 "data/maps/CeruleanCity_Gym/scripts.pory"
	checkitemspace ITEM_TM03
# 25 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
# 26 "data/maps/CeruleanCity_Gym/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 27 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 28 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 29 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 34 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 35 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_Diana::
# 40 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 41 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
	end


CeruleanCity_Gym_EventScript_Luis::
# 46 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 47 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 48 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
	end


CeruleanCity_Gym_EventScript_GymGuy::
# 53 "data/maps/CeruleanCity_Gym/scripts.pory"
	lock
# 54 "data/maps/CeruleanCity_Gym/scripts.pory"
	faceplayer
# 55 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 56 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 57 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 62 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 63 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_GymStatue::
# 68 "data/maps/CeruleanCity_Gym/scripts.pory"
	lockall
# 69 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
# 70 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
# 71 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	end


CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 76 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 77 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	end


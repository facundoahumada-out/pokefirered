PewterCity_Gym_MapScripts::
	.byte 0


PewterCity_Gym_EventScript_Brock::
# 4 "data/maps/PewterCity_Gym/scripts.pory"
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 6 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 7 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 8 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_DefeatedBrock::
# 13 "data/maps/PewterCity_Gym/scripts.pory"
	famechecker FAMECHECKER_BROCK, 1
# 14 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 15 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 16 "data/maps/PewterCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 17 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 18 "data/maps/PewterCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 19 "data/maps/PewterCity_Gym/scripts.pory"
	set_gym_trainers 1
# 20 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
	end


PewterCity_Gym_EventScript_GiveTM39::
# 25 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 26 "data/maps/PewterCity_Gym/scripts.pory"
	checkitemspace ITEM_TM39
# 27 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 28 "data/maps/PewterCity_Gym/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 29 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 30 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 31 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_NoRoomForTM39::
# 36 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 37 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_Liam::
# 42 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 43 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end


PewterCity_Gym_EventScript_GymGuy::
# 48 "data/maps/PewterCity_Gym/scripts.pory"
	lock
# 49 "data/maps/PewterCity_Gym/scripts.pory"
	faceplayer
# 50 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 51 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 52 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 53 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
	end


PewterCity_Gym_EventScript_GymGuyPostVictory::
# 58 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 59 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 64 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 65 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end


PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 70 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 71 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end


PewterCity_Gym_EventScript_GymGuyAdvice::
# 76 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 77 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_GymStatue::
# 82 "data/maps/PewterCity_Gym/scripts.pory"
	lockall
# 83 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
# 84 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue
# 85 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
	end


PewterCity_Gym_EventScript_GymStatuePostVictory::
# 90 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 91 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
	end


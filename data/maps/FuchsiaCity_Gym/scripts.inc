FuchsiaCity_Gym_MapScripts::
	.byte 0


FuchsiaCity_Gym_EventScript_Koga::
# 4 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 6 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
# 7 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
# 8 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
	end


FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 13 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 14 "data/maps/FuchsiaCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 15 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 16 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 17 "data/maps/FuchsiaCity_Gym/scripts.pory"
	set_gym_trainers 5
# 18 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
	end


FuchsiaCity_Gym_EventScript_GiveTM06::
# 23 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
# 24 "data/maps/FuchsiaCity_Gym/scripts.pory"
	checkitemspace ITEM_TM06
# 25 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
# 26 "data/maps/FuchsiaCity_Gym/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 27 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 28 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
# 29 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
	end


FuchsiaCity_Gym_EventScript_NoRoomForTM06::
# 34 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
# 35 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
	end


FuchsiaCity_Gym_EventScript_Phil::
# 40 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 41 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Edgar::
# 46 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 47 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Kirk::
# 52 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 53 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 54 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Shawn::
# 59 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 60 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Kayden::
# 65 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 66 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Nate::
# 71 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 72 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_GymGuy::
# 77 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lock
# 78 "data/maps/FuchsiaCity_Gym/scripts.pory"
	faceplayer
# 79 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
# 80 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
# 81 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
	end


FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
# 86 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
# 87 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
	end


FuchsiaCity_Gym_EventScript_GymStatue::
# 92 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
# 94 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
# 95 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
	end


FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
# 100 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
# 101 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
	end


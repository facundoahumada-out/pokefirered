CeladonCity_Gym_MapScripts::
	.byte 0


CeladonCity_Gym_EventScript_Erika::
# 4 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 6 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
# 7 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 4
# 8 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 9 "data/maps/CeladonCity_Gym/scripts.pory"
	release
	end


CeladonCity_Gym_EventScript_DefeatedErika::
# 14 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 1
# 15 "data/maps/CeladonCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 16 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_ERIKA
# 17 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 18 "data/maps/CeladonCity_Gym/scripts.pory"
	set_gym_trainers 4
# 19 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
	end


CeladonCity_Gym_EventScript_GiveTM19::
# 24 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
# 25 "data/maps/CeladonCity_Gym/scripts.pory"
	checkitemspace ITEM_TM19
# 26 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
# 27 "data/maps/CeladonCity_Gym/scripts.pory"
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 28 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM19_FROM_ERIKA
# 29 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainTM19
# 30 "data/maps/CeladonCity_Gym/scripts.pory"
	release
	end


CeladonCity_Gym_EventScript_NoRoomForTM19::
# 35 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
# 36 "data/maps/CeladonCity_Gym/scripts.pory"
	release
	end


CeladonCity_Gym_EventScript_Kay::
# 41 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 42 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Lisa::
# 47 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 48 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 49 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Tina::
# 54 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 55 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Bridget::
# 60 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 61 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Tamia::
# 66 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 67 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 68 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Lori::
# 73 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 74 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Mary::
# 79 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 80 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_GymStatue::
# 85 "data/maps/CeladonCity_Gym/scripts.pory"
	lockall
# 86 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
# 87 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
# 88 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
	end


CeladonCity_Gym_EventScript_GymStatuePostVictory::
# 93 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
# 94 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
	end


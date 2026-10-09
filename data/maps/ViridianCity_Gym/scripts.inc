ViridianCity_Gym_MapScripts::
	.byte 0


ViridianCity_Gym_EventScript_Giovanni::
# 4 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
# 6 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_GiveTM26
# 7 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 8 "data/maps/ViridianCity_Gym/scripts.pory"
	closemessage
# 9 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 10 "data/maps/ViridianCity_Gym/scripts.pory"
	removeobject LOCALID_VIRIDIAN_GIOVANNI
# 11 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 12 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 17 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 3
# 18 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 19 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 20 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 21 "data/maps/ViridianCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 22 "data/maps/ViridianCity_Gym/scripts.pory"
	set_gym_trainers 8
# 23 "data/maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
	end


ViridianCity_Gym_EventScript_GiveTM26::
# 28 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 29 "data/maps/ViridianCity_Gym/scripts.pory"
	checkitemspace ITEM_TM26
# 30 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
# 31 "data/maps/ViridianCity_Gym/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 32 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 33 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 34 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_NoRoomForTM26::
# 39 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 40 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_Jason::
# 45 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 46 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Cole::
# 51 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 52 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Atsushi::
# 57 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 58 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Kiyo::
# 63 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 64 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Takashi::
# 69 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 70 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Samuel::
# 75 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 76 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Yuji::
# 81 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 82 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Warren::
# 87 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 88 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_GymGuy::
# 93 "data/maps/ViridianCity_Gym/scripts.pory"
	lock
# 94 "data/maps/ViridianCity_Gym/scripts.pory"
	faceplayer
# 95 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 96 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 97 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 102 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 103 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 104 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_GymStatue::
# 109 "data/maps/ViridianCity_Gym/scripts.pory"
	lockall
# 110 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 111 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 112 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
	end


ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 117 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 118 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
	end


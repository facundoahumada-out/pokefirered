SaffronCity_Dojo_MapScripts::
# 2 "data/maps/SaffronCity_Dojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_Dojo_OnTransition
	.byte 0


SaffronCity_Dojo_OnTransition::
# 6 "data/maps/SaffronCity_Dojo/scripts.pory"
	special UpdateDailyLeaderVisibility
	end


SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
# 11 "data/maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 12 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 13 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterLeft
# 14 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 15 "data/maps/SaffronCity_Dojo/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
# 20 "data/maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 21 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 22 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterRight
# 23 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 24 "data/maps/SaffronCity_Dojo/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_HitmonleeBall::
# 29 "data/maps/SaffronCity_Dojo/scripts.pory"
	lock
# 30 "data/maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 31 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 32 "data/maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONLEE, 10, 3
# 33 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONLEE
# 34 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 36 "data/maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 37 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
# 38 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 39 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 40 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 41 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
# 46 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
# 47 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_HitmonchanBall::
# 52 "data/maps/SaffronCity_Dojo/scripts.pory"
	lock
# 53 "data/maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 54 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 55 "data/maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONCHAN, 10, 3
# 56 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONCHAN
# 57 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 58 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 59 "data/maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
# 61 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 62 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 63 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 64 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_GiveHitmon::
# 69 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 70 "data/maps/SaffronCity_Dojo/scripts.pory"
	givemon VAR_TEMP_1, 25
# 71 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SaffronCity_Dojo_EventScript_ReceivedHitmonParty
# 72 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_Dojo_EventScript_ReceivedHitmonPC
# 73 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 74 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_ReceivedHitmonParty::
# 79 "data/maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 80 "data/maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 81 "data/maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 82 "data/maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 83 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 84 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 85 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 86 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 87 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_EndGiveMon
# 88 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 89 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_ChangePokemonNickname
# 90 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end


SaffronCity_Dojo_EventScript_ReceivedHitmonPC::
# 95 "data/maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 96 "data/maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 97 "data/maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 98 "data/maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 99 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 100 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 101 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 102 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 103 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 104 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 105 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
	end


SaffronCity_Dojo_EventScript_TransferredHitmonToPC::
# 110 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_TransferredToPC
# 111 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end


SaffronCity_Dojo_EventScript_EndGiveMon::
# 116 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_Statue::
# 121 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_LeftScroll::
# 126 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_RightScroll::
# 131 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_Hitoshi::
# 136 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
# 137 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Hideki::
# 142 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
# 143 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Aaron::
# 148 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
# 149 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Mike::
# 154 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
# 155 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_MasterKoichi::
# 160 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
# 161 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon
# 162 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon::
# 167 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_StayAndTrainWithUs
# 168 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
# 173 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 174 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_DailySabrina::
# 180 "data/maps/SaffronCity_Dojo/scripts.pory"
	lock
# 181 "data/maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 182 "data/maps/SaffronCity_Dojo/scripts.pory"
	specialvar VAR_RESULT, IsDailyLeaderBeatenToday
# 183 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_DailyLeaderAlreadyBeaten
# 184 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_DailySabrinaIntro, MSGBOX_YESNO
# 185 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_DailySabrinaDeclined
# 186 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_DailySabrinaAccept
# 187 "data/maps/SaffronCity_Dojo/scripts.pory"
	cleartrainerflag TRAINER_DAILY_SABRINA
# 188 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_no_intro TRAINER_DAILY_SABRINA, Text_DailyLeaderDefeat
# 189 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto EventScript_DailyLeaderReward
	end


SaffronCity_Dojo_EventScript_DailySabrinaDeclined::
# 194 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_DailySabrinaDeclined
# 195 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


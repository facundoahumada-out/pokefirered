SaffronCity_Dojo_MapScripts::
	.byte 0


SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
# 4 "data/maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 5 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 6 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterLeft
# 7 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 8 "data/maps/SaffronCity_Dojo/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
# 13 "data/maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 14 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 15 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterRight
# 16 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 17 "data/maps/SaffronCity_Dojo/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_HitmonleeBall::
# 22 "data/maps/SaffronCity_Dojo/scripts.pory"
	lock
# 23 "data/maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 24 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 25 "data/maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONLEE, 10, 3
# 26 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONLEE
# 27 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 29 "data/maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 30 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
# 31 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 32 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 33 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 34 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
# 39 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
# 40 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_HitmonchanBall::
# 45 "data/maps/SaffronCity_Dojo/scripts.pory"
	lock
# 46 "data/maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 47 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 48 "data/maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONCHAN, 10, 3
# 49 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONCHAN
# 50 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 52 "data/maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 53 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
# 54 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 55 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 56 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 57 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_GiveHitmon::
# 62 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 63 "data/maps/SaffronCity_Dojo/scripts.pory"
	givemon VAR_TEMP_1, 25
# 64 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SaffronCity_Dojo_EventScript_ReceivedHitmonParty
# 65 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_Dojo_EventScript_ReceivedHitmonPC
# 66 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 67 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_ReceivedHitmonParty::
# 72 "data/maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 73 "data/maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 74 "data/maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 75 "data/maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 76 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 77 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 78 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 79 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 80 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_EndGiveMon
# 81 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 82 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_ChangePokemonNickname
# 83 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end


SaffronCity_Dojo_EventScript_ReceivedHitmonPC::
# 88 "data/maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 89 "data/maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 90 "data/maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 91 "data/maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 92 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 93 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 94 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 95 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 96 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 97 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 98 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
	end


SaffronCity_Dojo_EventScript_TransferredHitmonToPC::
# 103 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_TransferredToPC
# 104 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end


SaffronCity_Dojo_EventScript_EndGiveMon::
# 109 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_Statue::
# 114 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_LeftScroll::
# 119 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_RightScroll::
# 124 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_Hitoshi::
# 129 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
# 130 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Hideki::
# 135 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
# 136 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Aaron::
# 141 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
# 142 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Mike::
# 147 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
# 148 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_MasterKoichi::
# 153 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
# 154 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon
# 155 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon::
# 160 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_StayAndTrainWithUs
# 161 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
# 166 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 167 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
	end


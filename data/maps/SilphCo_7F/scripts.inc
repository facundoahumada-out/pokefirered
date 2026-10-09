SilphCo_7F_MapScripts::
# 2 "data/maps/SilphCo_7F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
# 3 "data/maps/SilphCo_7F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_7F_OnTransition
	.byte 0


SilphCo_7F_OnLoad::
# 7 "data/maps/SilphCo_7F/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_1, EventScript_Close7FDoor1
# 8 "data/maps/SilphCo_7F/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_2, EventScript_Close7FDoor2
# 9 "data/maps/SilphCo_7F/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_3, EventScript_Close7FDoor3
	end


SilphCo_7F_OnTransition::
# 14 "data/maps/SilphCo_7F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_SetObjRocketsGone
	end


SilphCo_7F_EventScript_SetObjRocketsGone::
# 19 "data/maps/SilphCo_7F/scripts.pory"
	setobjectmovementtype LOCALID_SILPH_CO_7F_WORKER_M2, MOVEMENT_TYPE_FACE_UP
	return


SilphCo_7F_EventScript_RivalTriggerTop::
# 24 "data/maps/SilphCo_7F/scripts.pory"
	lockall
# 25 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 26 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
	end


SilphCo_7F_EventScript_RivalTriggerBottom::
# 31 "data/maps/SilphCo_7F/scripts.pory"
	lockall
# 32 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
	end


SilphCo_7F_EventScript_RivalScene::
# 38 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 39 "data/maps/SilphCo_7F/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 40 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_ExclamationMark
# 41 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
# 42 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_Delay48
# 44 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
# 45 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RivalWhatKeptYou
# 46 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalApproachTop
# 47 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalApproachBottom
# 48 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RivalIntro
# 49 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_RIVAL
# 50 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, SilphCo_7F_EventScript_RivalSquirtle
# 51 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, SilphCo_7F_EventScript_RivalBulbasaur
# 52 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, SilphCo_7F_EventScript_RivalCharmander
# 53 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RivalPostBattle
# 54 "data/maps/SilphCo_7F/scripts.pory"
	closemessage
# 55 "data/maps/SilphCo_7F/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 56 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalExitTop
# 57 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalExitBottom
# 58 "data/maps/SilphCo_7F/scripts.pory"
	playse SE_WARP_IN
# 59 "data/maps/SilphCo_7F/scripts.pory"
	fadedefaultbgm
# 60 "data/maps/SilphCo_7F/scripts.pory"
	removeobject LOCALID_SILPH_CO_RIVAL
# 61 "data/maps/SilphCo_7F/scripts.pory"
	waitse
# 62 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_7F, 1
# 63 "data/maps/SilphCo_7F/scripts.pory"
	releaseall
	end


SilphCo_7F_EventScript_RivalApproachTop::
# 68 "data/maps/SilphCo_7F/scripts.pory"
	closemessage
# 69 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalApproachTop
# 70 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
	return


SilphCo_7F_EventScript_RivalApproachBottom::
	return


SilphCo_7F_EventScript_RivalSquirtle::
# 79 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_SQUIRTLE, SilphCo_7F_Text_RivalDefeat
	return


SilphCo_7F_EventScript_RivalBulbasaur::
# 84 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_BULBASAUR, SilphCo_7F_Text_RivalDefeat
	return


SilphCo_7F_EventScript_RivalCharmander::
# 89 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_CHARMANDER, SilphCo_7F_Text_RivalDefeat
	return


SilphCo_7F_EventScript_RivalExitTop::
# 94 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitTop
# 95 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
	return


SilphCo_7F_EventScript_RivalExitBottom::
# 100 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitBottom
# 101 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
	return


# 105 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Movement_RivalApproachTop::
# 106 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 107 "data/maps/SilphCo_7F/scripts.pory"
	step_end

# 110 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Movement_RivalExitTop::
# 111 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 112 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 113 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 114 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 115 "data/maps/SilphCo_7F/scripts.pory"
	delay_16
# 116 "data/maps/SilphCo_7F/scripts.pory"
	step_end

# 119 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Movement_RivalExitBottom::
# 120 "data/maps/SilphCo_7F/scripts.pory"
	walk_left
# 121 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 122 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 123 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 124 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 125 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 126 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 127 "data/maps/SilphCo_7F/scripts.pory"
	delay_16
# 128 "data/maps/SilphCo_7F/scripts.pory"
	step_end

SilphCo_7F_EventScript_LaprasGuy::
# 132 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 133 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 134 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_set FLAG_GOT_LAPRAS_FROM_SILPH, SilphCo_7F_EventScript_AlreadyGotLapras
# 135 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_HaveMonForSavingUs
# 136 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LAPRAS
# 137 "data/maps/SilphCo_7F/scripts.pory"
	givemon SPECIES_LAPRAS, 25
# 138 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SilphCo_7F_EventScript_ReceiveLaprasParty
# 139 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SilphCo_7F_EventScript_ReceiveLaprasPC
# 140 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 141 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_ReceiveLaprasParty::
# 146 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 147 "data/maps/SilphCo_7F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 148 "data/maps/SilphCo_7F/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 149 "data/maps/SilphCo_7F/scripts.pory"
	waitmessage
# 150 "data/maps/SilphCo_7F/scripts.pory"
	waitfanfare
# 151 "data/maps/SilphCo_7F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 152 "data/maps/SilphCo_7F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 153 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_EndReceiveLapras
# 154 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 155 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_ChangePokemonNickname
# 156 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
	end


SilphCo_7F_EventScript_ReceiveLaprasPC::
# 161 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 162 "data/maps/SilphCo_7F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 163 "data/maps/SilphCo_7F/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 164 "data/maps/SilphCo_7F/scripts.pory"
	waitmessage
# 165 "data/maps/SilphCo_7F/scripts.pory"
	waitfanfare
# 166 "data/maps/SilphCo_7F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 167 "data/maps/SilphCo_7F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 168 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_LaprasTransferredToPC
# 169 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 170 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasTransferredToPC
	end


SilphCo_7F_EventScript_LaprasTransferredToPC::
# 175 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_TransferredToPC
# 176 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
	end


SilphCo_7F_EventScript_EndReceiveLapras::
# 181 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 182 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_ExplainLapras
# 183 "data/maps/SilphCo_7F/scripts.pory"
	setflag FLAG_GOT_LAPRAS_FROM_SILPH
# 184 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_AlreadyGotLapras::
# 189 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RocketBossWentToBoardroom
# 190 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_WorkerM1::
# 195 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 196 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 197 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM1RocketsGone
# 198 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RocketsAfterMasterBall
# 199 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_WorkerM1RocketsGone::
# 204 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_CanceledMasterBallProject
# 205 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_WorkerM2::
# 210 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 211 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 212 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM2RocketsGone
# 213 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_BadIfTeamRocketTookOver
# 214 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_WorkerM2RocketsGone::
# 219 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_WowYouChasedOffTeamRocket
# 220 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_WorkerF::
# 225 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 226 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 227 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerFRocketsGone
# 228 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_ReallyDangerousHere
# 229 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_WorkerFRocketsGone::
# 234 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_ThankYouSoMuch
# 235 "data/maps/SilphCo_7F/scripts.pory"
	release
	end


SilphCo_7F_EventScript_FloorSign::
# 240 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_7F_EventScript_Joshua::
# 245 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSHUA, SilphCo_7F_Text_JoshuaIntro, SilphCo_7F_Text_JoshuaDefeat
# 246 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_7F_EventScript_Grunt1::
# 251 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_33, SilphCo_7F_Text_Grunt1Intro, SilphCo_7F_Text_Grunt1Defeat
# 252 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_7F_EventScript_Grunt2::
# 257 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_34, SilphCo_7F_Text_Grunt2Intro, SilphCo_7F_Text_Grunt2Defeat
# 258 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_7F_EventScript_Grunt3::
# 263 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_35, SilphCo_7F_Text_Grunt3Intro, SilphCo_7F_Text_Grunt3Defeat
# 264 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_2F_MapScripts::
	.byte 0


PokemonTower_2F_EventScript_Channeler::
# 4 "data/maps/PokemonTower_2F/scripts.pory"
	msgbox PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts, MSGBOX_NPC
	end


PokemonTower_2F_EventScript_RivalTriggerRight::
# 9 "data/maps/PokemonTower_2F/scripts.pory"
	lockall
# 10 "data/maps/PokemonTower_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/PokemonTower_2F/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
	end


PokemonTower_2F_EventScript_RivalTriggerDown::
# 16 "data/maps/PokemonTower_2F/scripts.pory"
	lockall
# 17 "data/maps/PokemonTower_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/PokemonTower_2F/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
	end


PokemonTower_2F_EventScript_Rival::
# 23 "data/maps/PokemonTower_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 24 "data/maps/PokemonTower_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 25 "data/maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PokemonTower_2F_EventScript_RivalFacePlayerRight
# 26 "data/maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PokemonTower_2F_EventScript_RivalFacePlayerDown
# 27 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_ExclamationMark
# 28 "data/maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_Delay48
# 30 "data/maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/PokemonTower_2F/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalIntro
# 32 "data/maps/PokemonTower_2F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_POKEMON_TOWER_RIVAL
# 33 "data/maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonTower_2F_EventScript_RivalSquirtle
# 34 "data/maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonTower_2F_EventScript_RivalBulbasaur
# 35 "data/maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonTower_2F_EventScript_RivalCharmander
# 36 "data/maps/PokemonTower_2F/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalPostBattle
# 37 "data/maps/PokemonTower_2F/scripts.pory"
	closemessage
# 38 "data/maps/PokemonTower_2F/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 39 "data/maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PokemonTower_2F_EventScript_RivalExitRight
# 40 "data/maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PokemonTower_2F_EventScript_RivalExitDown
# 41 "data/maps/PokemonTower_2F/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/PokemonTower_2F/scripts.pory"
	delay 25
# 43 "data/maps/PokemonTower_2F/scripts.pory"
	fadedefaultbgm
# 44 "data/maps/PokemonTower_2F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_RIVAL
# 45 "data/maps/PokemonTower_2F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_2F, 1
# 46 "data/maps/PokemonTower_2F/scripts.pory"
	releaseall
	end


PokemonTower_2F_EventScript_RivalFacePlayerRight::
# 51 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 52 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 53 "data/maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
	return


PokemonTower_2F_EventScript_RivalFacePlayerDown::
# 58 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
	return


PokemonTower_2F_EventScript_RivalSquirtle::
# 65 "data/maps/PokemonTower_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE, PokemonTower_2F_Text_RivalDefeat
	return


PokemonTower_2F_EventScript_RivalBulbasaur::
# 70 "data/maps/PokemonTower_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR, PokemonTower_2F_Text_RivalDefeat
	return


PokemonTower_2F_EventScript_RivalCharmander::
# 75 "data/maps/PokemonTower_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER, PokemonTower_2F_Text_RivalDefeat
	return


PokemonTower_2F_EventScript_RivalExitRight::
# 80 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitRight
# 81 "data/maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
	return


PokemonTower_2F_EventScript_RivalExitDown::
# 86 "data/maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitDown
# 87 "data/maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
	return


# 91 "data/maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_Movement_RivalExitRight::
# 92 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 93 "data/maps/PokemonTower_2F/scripts.pory"
	walk_right
# 94 "data/maps/PokemonTower_2F/scripts.pory"
	walk_right
# 95 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 96 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 97 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 98 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 99 "data/maps/PokemonTower_2F/scripts.pory"
	walk_in_place_faster_right
# 100 "data/maps/PokemonTower_2F/scripts.pory"
	step_end

# 103 "data/maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_Movement_RivalExitDown::
# 104 "data/maps/PokemonTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/PokemonTower_2F/scripts.pory"
	walk_right
# 106 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 107 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 108 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 109 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 110 "data/maps/PokemonTower_2F/scripts.pory"
	walk_down
# 111 "data/maps/PokemonTower_2F/scripts.pory"
	walk_in_place_faster_right
# 112 "data/maps/PokemonTower_2F/scripts.pory"
	step_end

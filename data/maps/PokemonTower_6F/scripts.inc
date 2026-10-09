PokemonTower_6F_MapScripts::
	.byte 0


PokemonTower_6F_EventScript_MarowakGhost::
# 4 "data/maps/PokemonTower_6F/scripts.pory"
	lockall
# 5 "data/maps/PokemonTower_6F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MON
# 6 "data/maps/PokemonTower_6F/scripts.pory"
	msgbox PokemonTower_6F_Text_BeGoneIntruders
# 7 "data/maps/PokemonTower_6F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 8 "data/maps/PokemonTower_6F/scripts.pory"
	setwildbattle SPECIES_MAROWAK, 30
# 9 "data/maps/PokemonTower_6F/scripts.pory"
	special StartMarowakBattle
# 10 "data/maps/PokemonTower_6F/scripts.pory"
	waitstate
# 11 "data/maps/PokemonTower_6F/scripts.pory"
	special QuestLog_CutRecording
# 12 "data/maps/PokemonTower_6F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PokemonTower_6F_EventScript_DefeatedMarowakGhost
# 13 "data/maps/PokemonTower_6F/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonTower_6F_Movement_ForcePlayerUp
# 14 "data/maps/PokemonTower_6F/scripts.pory"
	waitmovement 0
# 15 "data/maps/PokemonTower_6F/scripts.pory"
	releaseall
	end


PokemonTower_6F_EventScript_DefeatedMarowakGhost::
# 20 "data/maps/PokemonTower_6F/scripts.pory"
	message PokemonTower_6F_Text_GhostWasCubonesMother
# 21 "data/maps/PokemonTower_6F/scripts.pory"
	waitmessage
# 22 "data/maps/PokemonTower_6F/scripts.pory"
	waitse
# 23 "data/maps/PokemonTower_6F/scripts.pory"
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
# 24 "data/maps/PokemonTower_6F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/PokemonTower_6F/scripts.pory"
	waitmoncry
# 26 "data/maps/PokemonTower_6F/scripts.pory"
	msgbox PokemonTower_6F_Text_MothersSpiritWasCalmed
# 27 "data/maps/PokemonTower_6F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_6F, 1
# 28 "data/maps/PokemonTower_6F/scripts.pory"
	releaseall
	end


# 32 "data/maps/PokemonTower_6F/scripts.pory"
PokemonTower_6F_Movement_ForcePlayerUp::
# 33 "data/maps/PokemonTower_6F/scripts.pory"
	walk_up
# 34 "data/maps/PokemonTower_6F/scripts.pory"
	step_end

PokemonTower_6F_EventScript_Angelica::
# 38 "data/maps/PokemonTower_6F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_ANGELICA, PokemonTower_6F_Text_AngelicaIntro, PokemonTower_6F_Text_AngelicaDefeat
# 39 "data/maps/PokemonTower_6F/scripts.pory"
	msgbox PokemonTower_6F_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_6F_EventScript_Emilia::
# 44 "data/maps/PokemonTower_6F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_EMILIA, PokemonTower_6F_Text_EmiliaIntro, PokemonTower_6F_Text_EmiliaDefeat
# 45 "data/maps/PokemonTower_6F/scripts.pory"
	msgbox PokemonTower_6F_Text_EmiliaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_6F_EventScript_Jennifer::
# 50 "data/maps/PokemonTower_6F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JENNIFER, PokemonTower_6F_Text_JenniferIntro, PokemonTower_6F_Text_JenniferDefeat
# 51 "data/maps/PokemonTower_6F/scripts.pory"
	msgbox PokemonTower_6F_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end


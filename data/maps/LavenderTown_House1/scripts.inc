LavenderTown_House1_MapScripts::
	.byte 0


LavenderTown_House1_EventScript_CooltrainerF::
# 4 "data/maps/LavenderTown_House1/scripts.pory"
	lock
# 5 "data/maps/LavenderTown_House1/scripts.pory"
	faceplayer
# 6 "data/maps/LavenderTown_House1/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_House1_EventScript_CooltrainerFGhostGone
# 7 "data/maps/LavenderTown_House1/scripts.pory"
	msgbox LavenderTown_House1_Text_RocketsKilledCubonesMother
# 8 "data/maps/LavenderTown_House1/scripts.pory"
	release
	end


LavenderTown_House1_EventScript_CooltrainerFGhostGone::
# 13 "data/maps/LavenderTown_House1/scripts.pory"
	msgbox LavenderTown_House1_Text_GhostOfPokemonTowerIsGone
# 14 "data/maps/LavenderTown_House1/scripts.pory"
	release
	end


LavenderTown_House1_EventScript_Cubone::
# 19 "data/maps/LavenderTown_House1/scripts.pory"
	lock
# 20 "data/maps/LavenderTown_House1/scripts.pory"
	faceplayer
# 21 "data/maps/LavenderTown_House1/scripts.pory"
	waitse
# 22 "data/maps/LavenderTown_House1/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 23 "data/maps/LavenderTown_House1/scripts.pory"
	msgbox LavenderTown_House1_Text_Cubone
# 24 "data/maps/LavenderTown_House1/scripts.pory"
	waitmoncry
# 25 "data/maps/LavenderTown_House1/scripts.pory"
	release
	end


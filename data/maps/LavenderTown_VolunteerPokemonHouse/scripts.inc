LavenderTown_VolunteerPokemonHouse_MapScripts::
	.byte 0


LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 5 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 6 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
# 7 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
# 8 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	checkitemspace ITEM_POKE_FLUTE
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
# 10 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setflag FLAG_GOT_POKE_FLUTE
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_OBTAIN_KEY_ITEM
# 12 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
# 13 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
# 18 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 19 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
# 24 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
# 25 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 30 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 31 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 32 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 33 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 39 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
	end


LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 44 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 45 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
# 47 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
# 48 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
# 53 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 59 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 63 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 71 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 72 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 73 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 74 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 75 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lockall
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 83 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 84 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	releaseall
	end


LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 89 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
	end


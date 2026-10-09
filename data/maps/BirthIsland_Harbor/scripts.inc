BirthIsland_Harbor_MapScripts::
	.byte 0


BirthIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/BirthIsland_Harbor/scripts.pory"
	lock
# 5 "data/maps/BirthIsland_Harbor/scripts.pory"
	faceplayer
# 6 "data/maps/BirthIsland_Harbor/scripts.pory"
	message Text_WhereDoYouWantToSail
# 7 "data/maps/BirthIsland_Harbor/scripts.pory"
	waitmessage
# 8 "data/maps/BirthIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_BIRTH_ISLAND
# 9 "data/maps/BirthIsland_Harbor/scripts.pory"
	multichoice 20, 8, MULTICHOICE_SEAGALLOP_VERMILION, FALSE
# 10 "data/maps/BirthIsland_Harbor/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 11 "data/maps/BirthIsland_Harbor/scripts.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToVermilionCity
# 12 "data/maps/BirthIsland_Harbor/scripts.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_CancelSail
# 13 "data/maps/BirthIsland_Harbor/scripts.pory"
	goto_if_eq VAR_0x8000, 127, EventScript_CancelSail
	end


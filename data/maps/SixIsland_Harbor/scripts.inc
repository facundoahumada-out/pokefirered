SixIsland_Harbor_MapScripts::
	.byte 0


SixIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/SixIsland_Harbor/scripts.pory"
	lock
# 5 "data/maps/SixIsland_Harbor/scripts.pory"
	faceplayer
# 6 "data/maps/SixIsland_Harbor/scripts.pory"
	message Text_WhereDoYouWantToSail
# 7 "data/maps/SixIsland_Harbor/scripts.pory"
	waitmessage
# 8 "data/maps/SixIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_SIX_ISLAND
# 9 "data/maps/SixIsland_Harbor/scripts.pory"
	goto EventScript_ChooseDestFromIsland
	end


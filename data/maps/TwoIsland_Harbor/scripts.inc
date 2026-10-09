TwoIsland_Harbor_MapScripts::
	.byte 0


TwoIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/TwoIsland_Harbor/scripts.pory"
	lock
# 5 "data/maps/TwoIsland_Harbor/scripts.pory"
	faceplayer
# 6 "data/maps/TwoIsland_Harbor/scripts.pory"
	message Text_WhereDoYouWantToSail
# 7 "data/maps/TwoIsland_Harbor/scripts.pory"
	waitmessage
# 8 "data/maps/TwoIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_TWO_ISLAND
# 9 "data/maps/TwoIsland_Harbor/scripts.pory"
	goto EventScript_ChooseDestFromTwoIsland
	end


FiveIsland_Harbor_MapScripts::
	.byte 0


FiveIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/FiveIsland_Harbor/scripts.pory"
	lock
# 5 "data/maps/FiveIsland_Harbor/scripts.pory"
	faceplayer
# 6 "data/maps/FiveIsland_Harbor/scripts.pory"
	message Text_WhereDoYouWantToSail
# 7 "data/maps/FiveIsland_Harbor/scripts.pory"
	waitmessage
# 8 "data/maps/FiveIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_FIVE_ISLAND
# 9 "data/maps/FiveIsland_Harbor/scripts.pory"
	goto EventScript_ChooseDestFromIsland
	end


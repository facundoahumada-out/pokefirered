SevenIsland_TanobyRuins_MoneanChamber_MapScripts::
# 2 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_MoneanChamber_OnTransition
	.byte 0


SevenIsland_TanobyRuins_MoneanChamber_OnTransition::
# 6 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
# 7 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	call EventScript_TryDarkenRuins
	end


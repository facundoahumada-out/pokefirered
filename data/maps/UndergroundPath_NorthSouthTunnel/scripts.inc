UndergroundPath_NorthSouthTunnel_MapScripts::
# 2 "data/maps/UndergroundPath_NorthSouthTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UndergroundPath_NorthSouthTunnel_OnTransition
	.byte 0


UndergroundPath_NorthSouthTunnel_OnTransition::
# 6 "data/maps/UndergroundPath_NorthSouthTunnel/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL
	end


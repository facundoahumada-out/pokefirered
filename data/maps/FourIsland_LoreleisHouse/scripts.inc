FourIsland_LoreleisHouse_MapScripts::
# 2 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_OnTransition
	.byte 0


FourIsland_LoreleisHouse_OnTransition::
# 6 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	special UpdateLoreleiDollCollection
	end


FourIsland_LoreleisHouse_EventScript_Lorelei::
# 11 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	lock
# 12 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	faceplayer
# 13 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei3
# 14 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei2
# 15 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
# 16 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	release
	end


FourIsland_LoreleisHouse_EventScript_Lorelei2::
# 21 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
# 22 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
# 23 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	release
	end


FourIsland_LoreleisHouse_EventScript_Lorelei3::
# 28 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
# 29 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	release
	end


FourIsland_LoreleisHouse_EventScript_Doll::
# 34 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	lock
# 35 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
# 36 "data/maps/FourIsland_LoreleisHouse/scripts.pory"
	release
	end


ThreeIsland_Port_MapScripts::
# 2 "data/maps/ThreeIsland_Port/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Port_OnTransition
	.byte 0


ThreeIsland_Port_OnTransition::
# 6 "data/maps/ThreeIsland_Port/scripts.pory"
	clearflag FLAG_SYS_PC_STORAGE_DISABLED
# 7 "data/maps/ThreeIsland_Port/scripts.pory"
	setflag FLAG_SEVII_DETOUR_FINISHED
	end


ThreeIsland_Port_EventScript_Woman::
# 12 "data/maps/ThreeIsland_Port/scripts.pory"
	lock
# 13 "data/maps/ThreeIsland_Port/scripts.pory"
	faceplayer
# 14 "data/maps/ThreeIsland_Port/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, ThreeIsland_Port_EventScript_WomanLostelleFound
# 15 "data/maps/ThreeIsland_Port/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_Port_EventScript_WomanBikersGone
# 16 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox ThreeIsland_Port_Text_IllCallThePolice
# 17 "data/maps/ThreeIsland_Port/scripts.pory"
	release
	end


ThreeIsland_Port_EventScript_WomanLostelleFound::
# 22 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
# 23 "data/maps/ThreeIsland_Port/scripts.pory"
	release
	end


ThreeIsland_Port_EventScript_WomanBikersGone::
# 28 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox ThreeIsland_Port_Text_ThankGoodnessBikersGone
# 29 "data/maps/ThreeIsland_Port/scripts.pory"
	release
	end


ThreeIsland_Port_EventScript_Biker1::
# 34 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
	end


ThreeIsland_Port_EventScript_Biker2::
# 39 "data/maps/ThreeIsland_Port/scripts.pory"
	lock
# 40 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox ThreeIsland_Port_Text_ForkOverMoney
# 41 "data/maps/ThreeIsland_Port/scripts.pory"
	release
	end


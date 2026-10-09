ThreeIsland_House2_MapScripts::
	.byte 0


ThreeIsland_House2_EventScript_Man::
# 4 "data/maps/ThreeIsland_House2/scripts.pory"
	lock
# 5 "data/maps/ThreeIsland_House2/scripts.pory"
	faceplayer
# 6 "data/maps/ThreeIsland_House2/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 1
# 7 "data/maps/ThreeIsland_House2/scripts.pory"
	msgbox ThreeIsland_House2_Text_IAdmireSabrina
# 8 "data/maps/ThreeIsland_House2/scripts.pory"
	release
	end


ThreeIsland_House2_EventScript_Rocker::
# 13 "data/maps/ThreeIsland_House2/scripts.pory"
	msgbox ThreeIsland_House2_Text_CantMakeThisSpoonBend, MSGBOX_NPC
	end


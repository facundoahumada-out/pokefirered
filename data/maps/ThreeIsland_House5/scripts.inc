ThreeIsland_House5_MapScripts::
	.byte 0


ThreeIsland_House5_EventScript_LittleGirl::
# 4 "data/maps/ThreeIsland_House5/scripts.pory"
	lock
# 5 "data/maps/ThreeIsland_House5/scripts.pory"
	faceplayer
# 6 "data/maps/ThreeIsland_House5/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_House5_EventScript_LittleGirlLostelleFound
# 7 "data/maps/ThreeIsland_House5/scripts.pory"
	msgbox ThreeIsland_House5_Text_ImNotLostelle
# 8 "data/maps/ThreeIsland_House5/scripts.pory"
	release
	end


ThreeIsland_House5_EventScript_LittleGirlLostelleFound::
# 13 "data/maps/ThreeIsland_House5/scripts.pory"
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
# 14 "data/maps/ThreeIsland_House5/scripts.pory"
	release
	end


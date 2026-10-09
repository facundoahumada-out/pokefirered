ThreeIsland_House1_MapScripts::
	.byte 0


ThreeIsland_House1_EventScript_Lostelle::
# 4 "data/maps/ThreeIsland_House1/scripts.pory"
	lock
# 5 "data/maps/ThreeIsland_House1/scripts.pory"
	faceplayer
# 6 "data/maps/ThreeIsland_House1/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 7 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
# 8 "data/maps/ThreeIsland_House1/scripts.pory"
	release
	end


ThreeIsland_House1_EventScript_DisplayCase::
# 13 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
	end


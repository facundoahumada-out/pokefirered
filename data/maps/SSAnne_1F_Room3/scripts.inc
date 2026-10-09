SSAnne_1F_Room3_MapScripts::
	.byte 0


SSAnne_1F_Room3_EventScript_LittleGirl::
# 4 "data/maps/SSAnne_1F_Room3/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff, MSGBOX_NPC
	end


SSAnne_1F_Room3_EventScript_BaldingMan::
# 9 "data/maps/SSAnne_1F_Room3/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy, MSGBOX_NPC
	end


SSAnne_1F_Room3_EventScript_Wigglytuff::
# 14 "data/maps/SSAnne_1F_Room3/scripts.pory"
	lock
# 15 "data/maps/SSAnne_1F_Room3/scripts.pory"
	faceplayer
# 16 "data/maps/SSAnne_1F_Room3/scripts.pory"
	waitse
# 17 "data/maps/SSAnne_1F_Room3/scripts.pory"
	playmoncry SPECIES_WIGGLYTUFF, CRY_MODE_NORMAL
# 18 "data/maps/SSAnne_1F_Room3/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_Wigglytuff
# 19 "data/maps/SSAnne_1F_Room3/scripts.pory"
	waitmoncry
# 20 "data/maps/SSAnne_1F_Room3/scripts.pory"
	release
	end


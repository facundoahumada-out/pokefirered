SSAnne_B1F_Room5_MapScripts::
	.byte 0


SSAnne_B1F_Room5_EventScript_Boy::
# 4 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	msgbox SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks, MSGBOX_NPC
	end


SSAnne_B1F_Room5_EventScript_Machoke::
# 9 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	lock
# 10 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	faceplayer
# 11 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	waitse
# 12 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
# 13 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	msgbox SSAnne_B1F_Room5_Text_Machoke
# 14 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	waitmoncry
# 15 "data/maps/SSAnne_B1F_Room5/scripts.pory"
	release
	end


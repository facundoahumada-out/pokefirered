SSAnne_B1F_Room1_MapScripts::
	.byte 0


SSAnne_B1F_Room1_EventScript_Barny::
# 4 "data/maps/SSAnne_B1F_Room1/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_BARNY, SSAnne_B1F_Room1_Text_BarnyIntro, SSAnne_B1F_Room1_Text_BarnyDefeat
# 5 "data/maps/SSAnne_B1F_Room1/scripts.pory"
	msgbox SSAnne_B1F_Room1_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_B1F_Room1_EventScript_Phillip::
# 10 "data/maps/SSAnne_B1F_Room1/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_PHILLIP, SSAnne_B1F_Room1_Text_PhillipIntro, SSAnne_B1F_Room1_Text_PhillipDefeat
# 11 "data/maps/SSAnne_B1F_Room1/scripts.pory"
	msgbox SSAnne_B1F_Room1_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end


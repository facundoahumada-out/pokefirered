SSAnne_2F_Room4_MapScripts::
	.byte 0


SSAnne_2F_Room4_EventScript_Lamar::
# 4 "data/maps/SSAnne_2F_Room4/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_LAMAR, SSAnne_2F_Room4_Text_LamarIntro, SSAnne_2F_Room4_Text_LamarDefeat
# 5 "data/maps/SSAnne_2F_Room4/scripts.pory"
	msgbox SSAnne_2F_Room4_Text_LamarPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_2F_Room4_EventScript_Dawn::
# 10 "data/maps/SSAnne_2F_Room4/scripts.pory"
	trainerbattle_single TRAINER_LASS_DAWN, SSAnne_2F_Room4_Text_DawnIntro, SSAnne_2F_Room4_Text_DawnDefeat
# 11 "data/maps/SSAnne_2F_Room4/scripts.pory"
	msgbox SSAnne_2F_Room4_Text_DawnPostBattle, MSGBOX_AUTOCLOSE
	end


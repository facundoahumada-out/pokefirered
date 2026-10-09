SSAnne_B1F_Room4_MapScripts::
	.byte 0


SSAnne_B1F_Room4_EventScript_Leonard::
# 4 "data/maps/SSAnne_B1F_Room4/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_LEONARD, SSAnne_B1F_Room4_Text_LeonardIntro, SSAnne_B1F_Room4_Text_LeonardDefeat
# 5 "data/maps/SSAnne_B1F_Room4/scripts.pory"
	msgbox SSAnne_B1F_Room4_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_B1F_Room4_EventScript_Duncan::
# 10 "data/maps/SSAnne_B1F_Room4/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DUNCAN, SSAnne_B1F_Room4_Text_DuncanIntro, SSAnne_B1F_Room4_Text_DuncanDefeat
# 11 "data/maps/SSAnne_B1F_Room4/scripts.pory"
	msgbox SSAnne_B1F_Room4_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end


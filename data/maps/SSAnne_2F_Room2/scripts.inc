SSAnne_2F_Room2_MapScripts::
	.byte 0


SSAnne_2F_Room2_EventScript_Dale::
# 4 "data/maps/SSAnne_2F_Room2/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_DALE, SSAnne_2F_Room2_Text_DaleIntro, SSAnne_2F_Room2_Text_DaleDefeat
# 5 "data/maps/SSAnne_2F_Room2/scripts.pory"
	msgbox SSAnne_2F_Room2_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_2F_Room2_EventScript_Brooks::
# 10 "data/maps/SSAnne_2F_Room2/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_BROOKS, SSAnne_2F_Room2_Text_BrooksIntro, SSAnne_2F_Room2_Text_BrooksDefeat
# 11 "data/maps/SSAnne_2F_Room2/scripts.pory"
	msgbox SSAnne_2F_Room2_Text_BrooksPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_1F_Room2_MapScripts::
	.byte 0


SSAnne_1F_Room2_EventScript_Woman::
# 4 "data/maps/SSAnne_1F_Room2/scripts.pory"
	msgbox SSAnne_1F_Room2_Text_CruisingAroundWorld, MSGBOX_NPC
	end


SSAnne_1F_Room2_EventScript_Ann::
# 9 "data/maps/SSAnne_1F_Room2/scripts.pory"
	trainerbattle_single TRAINER_LASS_ANN, SSAnne_1F_Room2_Text_AnnIntro, SSAnne_1F_Room2_Text_AnnDefeat
# 10 "data/maps/SSAnne_1F_Room2/scripts.pory"
	msgbox SSAnne_1F_Room2_Text_AnnPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_1F_Room2_EventScript_Tyler::
# 15 "data/maps/SSAnne_1F_Room2/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, SSAnne_1F_Room2_Text_TylerIntro, SSAnne_1F_Room2_Text_TylerDefeat
# 16 "data/maps/SSAnne_1F_Room2/scripts.pory"
	msgbox SSAnne_1F_Room2_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	end


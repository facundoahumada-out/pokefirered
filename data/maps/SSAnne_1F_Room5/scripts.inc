SSAnne_1F_Room5_MapScripts::
	.byte 0


SSAnne_1F_Room5_EventScript_Arthur::
# 4 "data/maps/SSAnne_1F_Room5/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_ARTHUR, SSAnne_1F_Room5_Text_ArthurIntro, SSAnne_1F_Room5_Text_ArthurDefeat
# 5 "data/maps/SSAnne_1F_Room5/scripts.pory"
	msgbox SSAnne_1F_Room5_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_Deck_MapScripts::
	.byte 0


SSAnne_Deck_EventScript_Youngster::
# 4 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ShipDepartingSoon, MSGBOX_NPC
	end


SSAnne_Deck_EventScript_BaldingMan::
# 9 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_FeelSeasick, MSGBOX_NPC
	end


SSAnne_Deck_EventScript_Sailor::
# 14 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ScrubbingDecksHardWork, MSGBOX_NPC
	end


SSAnne_Deck_EventScript_Edmond::
# 19 "data/maps/SSAnne_Deck/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_EDMOND, SSAnne_Deck_Text_EdmondIntro, SSAnne_Deck_Text_EdmondDefeat
# 20 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
	end


SSAnne_Deck_EventScript_Trevor::
# 25 "data/maps/SSAnne_Deck/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_TREVOR, SSAnne_Deck_Text_TrevorIntro, SSAnne_Deck_Text_TrevorDefeat
# 26 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
	end


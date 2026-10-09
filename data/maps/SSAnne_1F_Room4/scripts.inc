SSAnne_1F_Room4_MapScripts::
	.byte 0


SSAnne_1F_Room4_EventScript_Woman::
# 4 "data/maps/SSAnne_1F_Room4/scripts.pory"
	lock
# 5 "data/maps/SSAnne_1F_Room4/scripts.pory"
	faceplayer
# 6 "data/maps/SSAnne_1F_Room4/scripts.pory"
	checkplayergender
# 7 "data/maps/SSAnne_1F_Room4/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room4_EventScript_WomanPlayerMale
# 8 "data/maps/SSAnne_1F_Room4/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaitressCherryPiePlease
# 9 "data/maps/SSAnne_1F_Room4/scripts.pory"
	release
	end


SSAnne_1F_Room4_EventScript_WomanPlayerMale::
# 14 "data/maps/SSAnne_1F_Room4/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaiterCherryPiePlease
# 15 "data/maps/SSAnne_1F_Room4/scripts.pory"
	release
	end


FuchsiaCity_House1_MapScripts::
	.byte 0


FuchsiaCity_House1_EventScript_Woman::
# 4 "data/maps/FuchsiaCity_House1/scripts.pory"
	msgbox FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth, MSGBOX_NPC
	end


FuchsiaCity_House1_EventScript_OldMan::
# 9 "data/maps/FuchsiaCity_House1/scripts.pory"
	lock
# 10 "data/maps/FuchsiaCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/FuchsiaCity_House1/scripts.pory"
	famechecker FAMECHECKER_BILL, 2
# 12 "data/maps/FuchsiaCity_House1/scripts.pory"
	msgbox FuchsiaCity_House1_Text_BillIsMyGrandson
# 13 "data/maps/FuchsiaCity_House1/scripts.pory"
	release
	end


FuchsiaCity_House1_EventScript_LittleBoy::
# 18 "data/maps/FuchsiaCity_House1/scripts.pory"
	msgbox FuchsiaCity_House1_Text_BillFilesHisOwnMonData, MSGBOX_NPC
	end


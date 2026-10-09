ViridianCity_House_MapScripts::
	.byte 0


ViridianCity_House_EventScript_BaldingMan::
# 4 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_NicknamingIsFun, MSGBOX_NPC
	end


ViridianCity_House_EventScript_LittleGirl::
# 9 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
	end


ViridianCity_House_EventScript_Speary::
# 14 "data/maps/ViridianCity_House/scripts.pory"
	lock
# 15 "data/maps/ViridianCity_House/scripts.pory"
	faceplayer
# 16 "data/maps/ViridianCity_House/scripts.pory"
	waitse
# 17 "data/maps/ViridianCity_House/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 18 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_Speary
# 19 "data/maps/ViridianCity_House/scripts.pory"
	waitmoncry
# 20 "data/maps/ViridianCity_House/scripts.pory"
	release
	end


ViridianCity_House_EventScript_NicknameSign::
# 25 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
	end


VermilionCity_House3_MapScripts::
	.byte 0


VermilionCity_House3_EventScript_Boy::
# 4 "data/maps/VermilionCity_House3/scripts.pory"
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
	end


VermilionCity_House3_EventScript_Lass::
# 9 "data/maps/VermilionCity_House3/scripts.pory"
	msgbox VermilionCity_House3_Text_SendMyPidgeyToUnionRoom, MSGBOX_NPC
	end


VermilionCity_House3_EventScript_Pidgey::
# 14 "data/maps/VermilionCity_House3/scripts.pory"
	lock
# 15 "data/maps/VermilionCity_House3/scripts.pory"
	faceplayer
# 16 "data/maps/VermilionCity_House3/scripts.pory"
	waitse
# 17 "data/maps/VermilionCity_House3/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 18 "data/maps/VermilionCity_House3/scripts.pory"
	msgbox VermilionCity_House3_Text_Pidgey
# 19 "data/maps/VermilionCity_House3/scripts.pory"
	waitmoncry
# 20 "data/maps/VermilionCity_House3/scripts.pory"
	release
	end


VermilionCity_House3_EventScript_Letter::
# 25 "data/maps/VermilionCity_House3/scripts.pory"
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
	end


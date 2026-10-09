SaffronCity_House_MapScripts::
	.byte 0


SaffronCity_House_EventScript_Lass::
# 4 "data/maps/SaffronCity_House/scripts.pory"
	msgbox SaffronCity_House_Text_DontLookAtMyLetter, MSGBOX_NPC
	end


SaffronCity_House_EventScript_Youngster::
# 9 "data/maps/SaffronCity_House/scripts.pory"
	msgbox SaffronCity_House_Text_GettingCopycatPokeDoll, MSGBOX_NPC
	end


SaffronCity_House_EventScript_Pidgey::
# 14 "data/maps/SaffronCity_House/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_House/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_House/scripts.pory"
	waitse
# 17 "data/maps/SaffronCity_House/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 18 "data/maps/SaffronCity_House/scripts.pory"
	msgbox SaffronCity_House_Text_Pidgey
# 19 "data/maps/SaffronCity_House/scripts.pory"
	waitmoncry
# 20 "data/maps/SaffronCity_House/scripts.pory"
	release
	end


SaffronCity_House_EventScript_Letter::
# 25 "data/maps/SaffronCity_House/scripts.pory"
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
	end


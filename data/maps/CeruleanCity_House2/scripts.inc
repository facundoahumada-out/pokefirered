CeruleanCity_House2_MapScripts::
	.byte 0


CeruleanCity_House2_EventScript_Hiker::
# 4 "data/maps/CeruleanCity_House2/scripts.pory"
	lock
# 5 "data/maps/CeruleanCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/CeruleanCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_House2_EventScript_HikerGotTM28
# 7 "data/maps/CeruleanCity_House2/scripts.pory"
	msgbox CeruleanCity_House2_Text_RocketsStoleTMForDig
# 8 "data/maps/CeruleanCity_House2/scripts.pory"
	release
	end


CeruleanCity_House2_EventScript_HikerGotTM28::
# 13 "data/maps/CeruleanCity_House2/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeachDiglettDigWithoutTM
# 14 "data/maps/CeruleanCity_House2/scripts.pory"
	release
	end


CeruleanCity_House2_EventScript_Lass::
# 19 "data/maps/CeruleanCity_House2/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood, MSGBOX_NPC
	end


CeruleanCity_House2_EventScript_WallHole::
# 24 "data/maps/CeruleanCity_House2/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketLeftWayOut, MSGBOX_SIGN
	end


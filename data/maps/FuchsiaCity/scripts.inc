FuchsiaCity_MapScripts::
# 2 "data/maps/FuchsiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
	.byte 0


FuchsiaCity_OnTransition::
# 6 "data/maps/FuchsiaCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 7 "data/maps/FuchsiaCity/scripts.pory"
	call_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetOmanyteGfx
# 8 "data/maps/FuchsiaCity/scripts.pory"
	call_if_unset FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetKabutoGfx
	end


FuchsiaCity_EventScript_SetOmanyteGfx::
# 13 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OMANYTE
	return


FuchsiaCity_EventScript_SetKabutoGfx::
# 18 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_KABUTO
	return


FuchsiaCity_EventScript_LittleBoy::
# 23 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_DidYouTrySafariGame, MSGBOX_NPC
	end


FuchsiaCity_EventScript_OldMan::
# 28 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneZooInFront, MSGBOX_NPC
	end


FuchsiaCity_EventScript_Erik::
# 33 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_WheresSara, MSGBOX_NPC
	end


FuchsiaCity_EventScript_Youngster::
# 38 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_ItemBallInThere, MSGBOX_NPC
	end


FuchsiaCity_EventScript_Lass::
# 43 "data/maps/FuchsiaCity/scripts.pory"
	lock
# 44 "data/maps/FuchsiaCity/scripts.pory"
	faceplayer
# 45 "data/maps/FuchsiaCity/scripts.pory"
	famechecker FAMECHECKER_KOGA, 3
# 46 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_MyFatherIsGymLeader
# 47 "data/maps/FuchsiaCity/scripts.pory"
	release
	end


FuchsiaCity_EventScript_CitySign::
# 52 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_CitySign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_SafariZoneSign::
# 57 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_SafariGameSign::
# 62 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_SafariGameSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_WardensHomeSign::
# 67 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_WardensHomeSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_SafariZoneOfficeSign::
# 73 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneOfficeSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_GymSign::
# 78 "data/maps/FuchsiaCity/scripts.pory"
	lockall
# 79 "data/maps/FuchsiaCity/scripts.pory"
	famechecker FAMECHECKER_KOGA, 0
# 80 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_GymSign
# 81 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_ChanseySign::
# 86 "data/maps/FuchsiaCity/scripts.pory"
	lockall
# 87 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_CHANSEY
# 88 "data/maps/FuchsiaCity/scripts.pory"
	special SetSeenMon
# 89 "data/maps/FuchsiaCity/scripts.pory"
	showmonpic SPECIES_CHANSEY, 10, 3
# 90 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_ChanseySign
# 91 "data/maps/FuchsiaCity/scripts.pory"
	hidemonpic
# 92 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_VoltorbSign::
# 97 "data/maps/FuchsiaCity/scripts.pory"
	lockall
# 98 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLTORB
# 99 "data/maps/FuchsiaCity/scripts.pory"
	special SetSeenMon
# 100 "data/maps/FuchsiaCity/scripts.pory"
	showmonpic SPECIES_VOLTORB, 10, 3
# 101 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_VoltorbSign
# 102 "data/maps/FuchsiaCity/scripts.pory"
	hidemonpic
# 103 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_KangaskhanSign::
# 108 "data/maps/FuchsiaCity/scripts.pory"
	lockall
# 109 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_KANGASKHAN
# 110 "data/maps/FuchsiaCity/scripts.pory"
	special SetSeenMon
# 111 "data/maps/FuchsiaCity/scripts.pory"
	showmonpic SPECIES_KANGASKHAN, 10, 3
# 112 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_KangaskhanSign
# 113 "data/maps/FuchsiaCity/scripts.pory"
	hidemonpic
# 114 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_SlowpokeSign::
# 119 "data/maps/FuchsiaCity/scripts.pory"
	lockall
# 120 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_SLOWPOKE
# 121 "data/maps/FuchsiaCity/scripts.pory"
	special SetSeenMon
# 122 "data/maps/FuchsiaCity/scripts.pory"
	showmonpic SPECIES_SLOWPOKE, 10, 3
# 123 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_SlowpokeSign
# 124 "data/maps/FuchsiaCity/scripts.pory"
	hidemonpic
# 125 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_LaprasSign::
# 130 "data/maps/FuchsiaCity/scripts.pory"
	lockall
# 131 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 132 "data/maps/FuchsiaCity/scripts.pory"
	special SetSeenMon
# 133 "data/maps/FuchsiaCity/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 134 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_LaprasSign
# 135 "data/maps/FuchsiaCity/scripts.pory"
	hidemonpic
# 136 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_FossilMonSign::
# 141 "data/maps/FuchsiaCity/scripts.pory"
	lockall
# 142 "data/maps/FuchsiaCity/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_OmanyteSign
# 143 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTO
# 144 "data/maps/FuchsiaCity/scripts.pory"
	special SetSeenMon
# 145 "data/maps/FuchsiaCity/scripts.pory"
	showmonpic SPECIES_KABUTO, 10, 3
# 146 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_KabutoSign
# 147 "data/maps/FuchsiaCity/scripts.pory"
	hidemonpic
# 148 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_OmanyteSign::
# 153 "data/maps/FuchsiaCity/scripts.pory"
	setvar VAR_0x8004, SPECIES_OMANYTE
# 154 "data/maps/FuchsiaCity/scripts.pory"
	special SetSeenMon
# 155 "data/maps/FuchsiaCity/scripts.pory"
	showmonpic SPECIES_OMANYTE, 10, 3
# 156 "data/maps/FuchsiaCity/scripts.pory"
	msgbox FuchsiaCity_Text_OmanyteSign
# 157 "data/maps/FuchsiaCity/scripts.pory"
	hidemonpic
# 158 "data/maps/FuchsiaCity/scripts.pory"
	releaseall
	end


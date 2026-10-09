SilphCo_1F_MapScripts::
# 2 "data/maps/SilphCo_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
	.byte 0


SilphCo_1F_OnTransition::
# 6 "data/maps/SilphCo_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
	end


SilphCo_1F_EventScript_Receptionist::
# 11 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
	end


SilphCo_1F_EventScript_FloorSign::
# 16 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
	end


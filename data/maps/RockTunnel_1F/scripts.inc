RockTunnel_1F_MapScripts::
# 2 "data/maps/RockTunnel_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
	.byte 0


RockTunnel_1F_OnTransition::
# 6 "data/maps/RockTunnel_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
	end


RockTunnel_1F_EventScript_RouteSign::
# 11 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
	end


RockTunnel_1F_EventScript_Lenny::
# 16 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
# 17 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Oliver::
# 22 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
# 23 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Lucas::
# 28 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
# 29 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Ashton::
# 34 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
# 35 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Leah::
# 40 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
# 41 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Ariana::
# 46 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
# 47 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Dana::
# 52 "data/maps/RockTunnel_1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
# 53 "data/maps/RockTunnel_1F/scripts.pory"
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_Meadow_MapScripts::
# 2 "data/maps/FiveIsland_Meadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
	.byte 0


FiveIsland_Meadow_OnLoad::
# 6 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	end


FiveIsland_Meadow_EventScript_WarehouseDoor::
# 11 "data/maps/FiveIsland_Meadow/scripts.pory"
	lockall
# 12 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
# 13 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
# 14 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
# 15 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
	end


FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
# 20 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 21 "data/maps/FiveIsland_Meadow/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 22 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 23 "data/maps/FiveIsland_Meadow/scripts.pory"
	delay 60
# 24 "data/maps/FiveIsland_Meadow/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 25 "data/maps/FiveIsland_Meadow/scripts.pory"
	special DrawWholeMapView
# 26 "data/maps/FiveIsland_Meadow/scripts.pory"
	playse SE_PIN
# 27 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitse
# 28 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
	end


FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
# 33 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
# 34 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
	end


FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
# 39 "data/maps/FiveIsland_Meadow/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
	return


FiveIsland_Meadow_EventScript_Rocket1::
# 44 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 45 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_Meadow_EventScript_Rocket2::
# 50 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
# 51 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_Meadow_EventScript_Rocket3::
# 56 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
# 57 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end


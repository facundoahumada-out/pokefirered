SevenIsland_TrainerTower_MapScripts::
# 2 "data/maps/SevenIsland_TrainerTower/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_OnTransition
	.byte 0


SevenIsland_TrainerTower_OnTransition::
# 6 "data/maps/SevenIsland_TrainerTower/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
	end


SevenIsland_TrainerTower_EventScript_TrainerTowerSign::
# 11 "data/maps/SevenIsland_TrainerTower/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
	end


SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign::
# 16 "data/maps/SevenIsland_TrainerTower/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
	end


SilphCo_3F_MapScripts::
# 2 "data/maps/SilphCo_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
	.byte 0


SilphCo_3F_OnLoad::
# 6 "data/maps/SilphCo_3F/scripts.pory"
	call_if_unset FLAG_SILPH_3F_DOOR_1, EventScript_Close3FDoor1
# 7 "data/maps/SilphCo_3F/scripts.pory"
	call_if_unset FLAG_SILPH_3F_DOOR_2, EventScript_Close3FDoor2
	end


SilphCo_3F_EventScript_WorkerM::
# 12 "data/maps/SilphCo_3F/scripts.pory"
	lock
# 13 "data/maps/SilphCo_3F/scripts.pory"
	faceplayer
# 14 "data/maps/SilphCo_3F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_3F_EventScript_WorkerMRocketsGone
# 15 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_WhatAmIToDo
# 16 "data/maps/SilphCo_3F/scripts.pory"
	release
	end


SilphCo_3F_EventScript_WorkerMRocketsGone::
# 21 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
# 22 "data/maps/SilphCo_3F/scripts.pory"
	release
	end


SilphCo_3F_EventScript_FloorSign::
# 27 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_3F_EventScript_Jose::
# 32 "data/maps/SilphCo_3F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
# 33 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_3F_EventScript_Grunt::
# 38 "data/maps/SilphCo_3F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
# 39 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


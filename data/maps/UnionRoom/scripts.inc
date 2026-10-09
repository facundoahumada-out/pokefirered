UnionRoom_MapScripts::
# 2 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, UnionRoom_OnResume
# 3 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnionRoom_OnTransition
	.byte 0


UnionRoom_OnResume::
# 7 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
# 8 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
# 9 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
# 10 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
# 11 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
# 12 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
# 13 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
# 14 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
# 15 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_1
# 16 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_2
# 17 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_3
# 18 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_4
# 19 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_5
# 20 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_6
# 21 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_7
# 22 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_8
# 23 "data/maps/UnionRoom/scripts.pory"
	special RunUnionRoom
	end


UnionRoom_OnTransition::
	end


UnionRoom_EventScript_Player1::
# 32 "data/maps/UnionRoom/scripts.pory"
	lock
# 33 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 34 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 1
# 35 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 36 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player2::
# 41 "data/maps/UnionRoom/scripts.pory"
	lock
# 42 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 43 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 2
# 44 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 45 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player3::
# 50 "data/maps/UnionRoom/scripts.pory"
	lock
# 51 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 52 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 3
# 53 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 54 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player4::
# 59 "data/maps/UnionRoom/scripts.pory"
	lock
# 60 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 61 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 4
# 62 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 63 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player5::
# 68 "data/maps/UnionRoom/scripts.pory"
	lock
# 69 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 70 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 5
# 71 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 72 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player6::
# 77 "data/maps/UnionRoom/scripts.pory"
	lock
# 78 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 79 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 6
# 80 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 81 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player7::
# 86 "data/maps/UnionRoom/scripts.pory"
	lock
# 87 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 88 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 7
# 89 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 90 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player8::
# 95 "data/maps/UnionRoom/scripts.pory"
	lock
# 96 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 97 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 8
# 98 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 99 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Attendant::
# 104 "data/maps/UnionRoom/scripts.pory"
	lock
# 105 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 106 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 9
# 107 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 108 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Unused::
# 113 "data/maps/UnionRoom/scripts.pory"
	lockall
# 114 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, 10
# 115 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 116 "data/maps/UnionRoom/scripts.pory"
	releaseall
	end


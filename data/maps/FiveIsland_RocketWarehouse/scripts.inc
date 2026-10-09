FiveIsland_RocketWarehouse_MapScripts::
# 5 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 6 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
	.byte 0


FiveIsland_RocketWarehouse_OnTransition::
# 10 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
	end


FiveIsland_RocketWarehouse_OnLoad::
# 15 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
	end


FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
# 20 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
# 21 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
	return


FiveIsland_RocketWarehouse_EventScript_Cage::
# 26 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	lockall
# 27 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_CageUnlocked
# 28 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
# 29 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
	end


FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
# 34 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
# 35 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
	end


FiveIsland_RocketWarehouse_EventScript_Computer::
# 40 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
	end


FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
# 45 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	lockall
# 46 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
# 47 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 48 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 49 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
	end


FiveIsland_RocketWarehouse_EventScript_Gideon::
# 54 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
# 55 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
# 56 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
# 61 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 5
# 62 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
# 67 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
# 68 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_RECOVERED_SAPPHIRE
# 69 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 70 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
	end


FiveIsland_RocketWarehouse_EventScript_Grunt2::
# 75 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
# 76 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Grunt3::
# 81 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
# 82 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Admin2::
# 87 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
# 88 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
# 93 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 94 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le VAR_0x8004, 24, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
# 95 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
# 96 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	closemessage
# 97 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT2
# 99 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT3
# 100 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN2
# 101 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN1
# 102 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
# 103 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 104 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 105 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
# 106 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
	end


FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
# 111 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 112 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_Grunt1::
# 117 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
# 118 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Admin1::
# 123 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
# 124 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
# 129 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 130 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 131 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_RESULT, DIR_NORTH, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
# 132 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
# 133 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	closemessage
# 134 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le VAR_0x8004, 24, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
# 135 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_0x8004, 25, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
# 136 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_0x8004, 26, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 137 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_0x8004, 27, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 138 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	playse SE_PIN
# 139 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 140 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	special DrawWholeMapView
# 141 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitse
# 142 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le VAR_0x8004, 24, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 143 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_0x8004, 25, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 144 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_0x8004, 26, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 145 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_0x8004, 27, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
# 146 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
# 147 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
	end


FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
# 152 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_eq VAR_0x8004, 27, EventScript_Return
# 153 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 154 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
# 159 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
# 160 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
# 165 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
# 166 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
# 171 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterUp
# 172 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
# 177 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
# 178 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
	return


FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
# 183 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterDown
# 184 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
	return


# 188 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar::
# 189 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 190 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 191 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	step_end

# 195 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch::
# 196 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 197 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	step_end

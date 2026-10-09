ThreeIsland_DunsparceTunnel_MapScripts::
# 2 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_DunsparceTunnel_OnTransition
	.byte 0


ThreeIsland_DunsparceTunnel_OnTransition::
# 6 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
# 7 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 8 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 9 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	call_if_eq VAR_0x8008, TRUE, ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut
# 10 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	call_if_eq VAR_0x8008, FALSE, ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall
	end


ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut::
# 15 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setmaplayoutindex LAYOUT_THREE_ISLAND_DUNSPARCE_TUNNEL_DUG_OUT
	return


ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall::
# 20 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setobjectxyperm LOCALID_PROSPECTOR, 6, 3
# 21 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setobjectmovementtype LOCALID_PROSPECTOR, MOVEMENT_TYPE_FACE_RIGHT
	return


ThreeIsland_DunsparceTunnel_EventScript_Prospector::
# 26 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	lock
# 27 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	faceplayer
# 28 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_set FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL, ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
# 29 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 30 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold
# 31 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ProspectingForGold
# 32 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	closemessage
# 33 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	applymovement LOCALID_PROSPECTOR, Common_Movement_FaceOriginalDirection
# 34 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	waitmovement 0
# 35 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
	end


ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold::
# 40 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou
# 41 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	giveitem ITEM_NUGGET
# 42 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget
# 43 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setflag FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
# 44 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
	end


ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget::
# 49 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull
# 50 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
	end


ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget::
# 55 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
# 56 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
	end


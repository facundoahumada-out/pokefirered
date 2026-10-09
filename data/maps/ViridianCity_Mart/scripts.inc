ViridianCity_Mart_MapScripts::
# 2 "data/maps/ViridianCity_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ViridianCity_Mart_OnLoad
# 3 "data/maps/ViridianCity_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ViridianCity_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/ViridianCity_Mart/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0, ViridianCity_Mart_EventScript_ParcelScene
	.2byte 0


ViridianCity_Mart_OnLoad::
# 9 "data/maps/ViridianCity_Mart/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, ViridianCity_Mart_EventScript_HideQuestionnaire
	end


ViridianCity_Mart_EventScript_HideQuestionnaire::
# 14 "data/maps/ViridianCity_Mart/scripts.pory"
	setmetatile 1, 3, METATILE_Mart_CounterMid_Top, 1
# 15 "data/maps/ViridianCity_Mart/scripts.pory"
	setmetatile 1, 4, METATILE_Mart_CounterMid_Bottom, 1
	end


ViridianCity_Mart_EventScript_ParcelScene::
# 20 "data/maps/ViridianCity_Mart/scripts.pory"
	lockall
# 21 "data/maps/ViridianCity_Mart/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 22 "data/maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, Common_Movement_WalkInPlaceFasterDown
# 23 "data/maps/ViridianCity_Mart/scripts.pory"
	waitmovement 0
# 24 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_YouCameFromPallet
# 25 "data/maps/ViridianCity_Mart/scripts.pory"
	closemessage
# 26 "data/maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, ViridianCity_Mart_Movement_FacePlayer
# 27 "data/maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Mart_Movement_ApproachCounter
# 28 "data/maps/ViridianCity_Mart/scripts.pory"
	waitmovement 0
# 29 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_TakeThisToProfOak
# 30 "data/maps/ViridianCity_Mart/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 31 "data/maps/ViridianCity_Mart/scripts.pory"
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_OBTAIN_KEY_ITEM
# 32 "data/maps/ViridianCity_Mart/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 33 "data/maps/ViridianCity_Mart/scripts.pory"
	releaseall
	end


# 37 "data/maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Movement_ApproachCounter::
# 38 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 39 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 40 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 41 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 42 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_in_place_faster_left
# 43 "data/maps/ViridianCity_Mart/scripts.pory"
	step_end

# 46 "data/maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Movement_FacePlayer::
# 47 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 48 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 49 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 50 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 51 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_in_place_faster_right
# 52 "data/maps/ViridianCity_Mart/scripts.pory"
	step_end

ViridianCity_Mart_EventScript_Clerk::
# 56 "data/maps/ViridianCity_Mart/scripts.pory"
	lock
# 57 "data/maps/ViridianCity_Mart/scripts.pory"
	faceplayer
# 58 "data/maps/ViridianCity_Mart/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, ViridianCity_Mart_EventScript_SayHiToOak
# 59 "data/maps/ViridianCity_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 60 "data/maps/ViridianCity_Mart/scripts.pory"
	message Text_MayIHelpYou
# 61 "data/maps/ViridianCity_Mart/scripts.pory"
	waitmessage
# 62 "data/maps/ViridianCity_Mart/scripts.pory"
	pokemart ViridianCity_Mart_Items
# 63 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 64 "data/maps/ViridianCity_Mart/scripts.pory"
	release
	end


	.align 2
# 68 "data/maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Items::
# 69 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 70 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 71 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 72 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

ViridianCity_Mart_EventScript_SayHiToOak::
# 77 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_SayHiToOakForMe
# 78 "data/maps/ViridianCity_Mart/scripts.pory"
	release
	end


ViridianCity_Mart_EventScript_Woman::
# 83 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes, MSGBOX_NPC
	end


ViridianCity_Mart_EventScript_Youngster::
# 88 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_GotToBuySomePotions, MSGBOX_NPC
	end


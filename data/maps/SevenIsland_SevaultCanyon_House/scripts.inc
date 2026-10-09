SevenIsland_SevaultCanyon_House_MapScripts::
	.byte 0


SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan::
# 6 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	lock
# 7 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	goto_if_set FLAG_TEMP_2, SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced
# 8 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 9 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 10 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 11 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	fadedefaultbgm
# 12 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay 30
# 13 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 14 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 15 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 16 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 17 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance, MSGBOX_YESNO
# 18 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_SevaultCanyon_House_EventScript_DeclineDance
# 19 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance
# 20 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	closemessage
# 21 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	call EventScript_RestorePrevTextColor
# 22 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	call_if_ne VAR_FACING, DIR_SOUTH, SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown
# 23 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay 30
# 24 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 25 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 26 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 27 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	fadedefaultbgm
# 28 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay 30
# 29 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 30 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow
# 31 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	setflag FLAG_TEMP_2
# 32 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
	end


SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown::
# 37 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 38 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
	return


SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced::
# 43 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 44 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 45 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 46 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
	end


SevenIsland_SevaultCanyon_House_EventScript_DeclineDance::
# 51 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ComeOnDance
# 53 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
	end


# 57 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_Movement_ChanseyDance::
# 58 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 59 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 60 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 61 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 62 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 63 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 64 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 65 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 66 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_right
# 67 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 68 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_up
# 69 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 70 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_left
# 71 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 72 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_down
# 73 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 74 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	step_end

SevenIsland_SevaultCanyon_House_EventScript_Chansey::
# 78 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	lock
# 79 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	faceplayer
# 80 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitse
# 81 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 82 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_Chansey
# 83 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmoncry
# 84 "data/maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
	end


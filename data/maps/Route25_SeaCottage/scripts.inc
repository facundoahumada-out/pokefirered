Route25_SeaCottage_MapScripts::
# 5 "data/maps/Route25_SeaCottage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_SeaCottage_OnTransition
	.byte 0


Route25_SeaCottage_OnTransition::
# 9 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_unset FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_HideClefairyBill
# 10 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket
	end


Route25_SeaCottage_EventScript_HideClefairyBill::
# 15 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_HIDE_BILL_CLEFAIRY
# 16 "data/maps/Route25_SeaCottage/scripts.pory"
	setobjectxyperm LOCALID_BILL_HUMAN, 3, 3
	return


Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket::
# 21 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_TEMP_3
	return


Route25_SeaCottage_EventScript_Bill::
# 26 "data/maps/Route25_SeaCottage/scripts.pory"
	lock
# 27 "data/maps/Route25_SeaCottage/scripts.pory"
	faceplayer
# 28 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_TEMP_3, Route25_SeaCottage_EventScript_BillGoLookAtPC
# 29 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_BillGoToSSAnne
# 30 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_BillGiveSSTicket
# 31 "data/maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 32 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillAskForHelpMale
# 33 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillAskForHelpFemale
	end


Route25_SeaCottage_EventScript_BillAskForHelpMale::
# 38 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutPal, MSGBOX_YESNO
# 39 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
	end


Route25_SeaCottage_EventScript_BillAskForHelpFemale::
# 44 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutLady, MSGBOX_YESNO
# 45 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
	end


Route25_SeaCottage_EventScript_BillAskForHelp::
# 50 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_DeclineHelpBill
# 51 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_RunCellSeparationOnPC
# 52 "data/maps/Route25_SeaCottage/scripts.pory"
	closemessage
# 53 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 10
# 54 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth
# 55 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 56 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 57 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 58 "data/maps/Route25_SeaCottage/scripts.pory"
	opendoor 10, 3
# 59 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 60 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillEnterTeleporter
# 61 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route25_SeaCottage/scripts.pory"
	removeobject LOCALID_BILL_CLEFAIRY
# 63 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 64 "data/maps/Route25_SeaCottage/scripts.pory"
	closedoor 10, 3
# 65 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 66 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_TEMP_2
# 67 "data/maps/Route25_SeaCottage/scripts.pory"
	release
	end


Route25_SeaCottage_EventScript_DeclineHelpBill::
# 73 "data/maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 74 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_DeclineHelpBillMale
# 75 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_DeclineHelpBillFemale
	return


Route25_SeaCottage_EventScript_DeclineHelpBillMale::
# 80 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseChief
	return


Route25_SeaCottage_EventScript_DeclineHelpBillFemale::
# 85 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseBeautiful
	return


Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth::
# 90 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporterSouth
# 91 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
	return


Route25_SeaCottage_EventScript_BillWalkToTeleporter::
# 96 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporter
# 97 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
	return


Route25_SeaCottage_EventScript_BillGoToSSAnne::
# 102 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
# 103 "data/maps/Route25_SeaCottage/scripts.pory"
	release
	end


Route25_SeaCottage_EventScript_BillGiveSSTicket::
# 108 "data/maps/Route25_SeaCottage/scripts.pory"
	famechecker FAMECHECKER_BILL, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 109 "data/maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 110 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillThanksMale
# 111 "data/maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillThanksFemale
# 112 "data/maps/Route25_SeaCottage/scripts.pory"
	checkitemspace ITEM_SS_TICKET
# 113 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route25_SeaCottage_EventScript_NoRoomForSSTicket
# 114 "data/maps/Route25_SeaCottage/scripts.pory"
	giveitem_msg Route25_SeaCottage_Text_ReceivedSSTicketFromBill, ITEM_SS_TICKET, 1, MUS_OBTAIN_KEY_ITEM
# 115 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_SS_TICKET_DUP
# 116 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
# 117 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_SS_TICKET
# 118 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_SYS_NOT_SOMEONES_PC
# 119 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
	end


Route25_SeaCottage_EventScript_BillThanksMale::
# 124 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksBudTakeThis
	return


Route25_SeaCottage_EventScript_BillThanksFemale::
# 129 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksLadyTakeThis
	return


Route25_SeaCottage_EventScript_NoRoomForSSTicket::
# 134 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_YouveGotTooMuchStuff
# 135 "data/maps/Route25_SeaCottage/scripts.pory"
	release
	end


Route25_SeaCottage_EventScript_BillGoLookAtPC::
# 140 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_CheckOutRareMonsOnPC
# 141 "data/maps/Route25_SeaCottage/scripts.pory"
	release
	end


# 145 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporter::
# 146 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 147 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 148 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end

# 151 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporterSouth::
# 152 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 153 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 154 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 155 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 156 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_in_place_faster_up
# 157 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end

# 160 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillEnterTeleporter::
# 161 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 162 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end

Route25_SeaCottage_EventScript_Computer::
# 166 "data/maps/Route25_SeaCottage/scripts.pory"
	lockall
# 167 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_TEMP_3, Route25_SeaCottage_EventScript_OpenBillsMonList
# 168 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route25_SeaCottage_EventScript_RunCellSeparator
# 169 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 170 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
	end


Route25_SeaCottage_EventScript_RunCellSeparator::
# 175 "data/maps/Route25_SeaCottage/scripts.pory"
	fadeoutbgm 0
# 176 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 177 "data/maps/Route25_SeaCottage/scripts.pory"
	closemessage
# 178 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_TEMP_2
# 179 "data/maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 180 "data/maps/Route25_SeaCottage/scripts.pory"
	special SpawnCameraObject
# 181 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanToTeleporters
# 182 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 35
# 184 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_PIN
# 185 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 186 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 0
# 187 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 188 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 10
# 189 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 190 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 191 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 192 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 193 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 194 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 195 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 196 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 1
# 197 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 198 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_WARP_IN
# 199 "data/maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterCable
# 200 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 201 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 202 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 203 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 204 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 205 "data/maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 206 "data/maps/Route25_SeaCottage/scripts.pory"
	opendoor 3, 3
# 207 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 208 "data/maps/Route25_SeaCottage/scripts.pory"
	fadeinbgm 0
# 209 "data/maps/Route25_SeaCottage/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 210 "data/maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 211 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 50
# 212 "data/maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 213 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillExitTeleporter
# 214 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 216 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanBackFromTeleporters
# 217 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 219 "data/maps/Route25_SeaCottage/scripts.pory"
	closedoor 3, 3
# 220 "data/maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 221 "data/maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom
# 222 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route25_SeaCottage/scripts.pory"
	special RemoveCameraObject
# 224 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
	end


Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 229 "data/maps/Route25_SeaCottage/scripts.pory"
	playse SE_BALL
# 230 "data/maps/Route25_SeaCottage/scripts.pory"
	waitse
# 231 "data/maps/Route25_SeaCottage/scripts.pory"
	delay 20
	return


# 235 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanToTeleporters::
# 236 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 237 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 238 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 239 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 240 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end

# 243 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanBackFromTeleporters::
# 244 "data/maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 245 "data/maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 246 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 247 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 248 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 249 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 250 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end

Route25_SeaCottage_EventScript_OpenBillsMonList::
# 254 "data/maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 255 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_BillsMonList::
# 260 "data/maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 261 "data/maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 262 "data/maps/Route25_SeaCottage/scripts.pory"
	multichoice 0, 0, MULTICHOICE_EEVEELUTIONS, FALSE
# 263 "data/maps/Route25_SeaCottage/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 264 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_0x8000, 0, Route25_SeaCottage_EventScript_ViewEevee
# 265 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_0x8000, 1, Route25_SeaCottage_EventScript_ViewFlareon
# 266 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_0x8000, 2, Route25_SeaCottage_EventScript_ViewJolteon
# 267 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_0x8000, 3, Route25_SeaCottage_EventScript_ViewVaporeon
# 268 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_0x8000, 4, Route25_SeaCottage_EventScript_ExitBillsMonList
# 269 "data/maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_0x8000, 127, Route25_SeaCottage_EventScript_ExitBillsMonList
	end


Route25_SeaCottage_EventScript_ViewEevee::
# 274 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 275 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 276 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 277 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_EEVEE
# 278 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 279 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewFlareon::
# 284 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_FLAREON, 10, 3
# 285 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 286 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 287 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 288 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 289 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewJolteon::
# 294 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_JOLTEON, 10, 3
# 295 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 296 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 297 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 298 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 299 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewVaporeon::
# 304 "data/maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_VAPOREON, 10, 3
# 305 "data/maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 306 "data/maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 307 "data/maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_VAPOREON
# 308 "data/maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 309 "data/maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ExitBillsMonList::
# 314 "data/maps/Route25_SeaCottage/scripts.pory"
	releaseall
	end


# 318 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom::
# 319 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 320 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 321 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 322 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 323 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 324 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 325 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end

# 328 "data/maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillExitTeleporter::
# 329 "data/maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 330 "data/maps/Route25_SeaCottage/scripts.pory"
	step_end

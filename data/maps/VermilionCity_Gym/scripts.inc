VermilionCity_Gym_MapScripts::
# 7 "data/maps/VermilionCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
# 8 "data/maps/VermilionCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
	.byte 0


VermilionCity_Gym_OnLoad::
# 12 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FLAG_TEMP_1, VermilionCity_Gym_EventScript_SetOneBeamOff
# 13 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
	end


VermilionCity_Gym_EventScript_SetOneBeamOff::
# 18 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 19 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 20 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 21 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 22 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 23 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 24 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 25 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 26 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 27 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
	return


VermilionCity_Gym_EventScript_SetBeamsOff::
# 32 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 33 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 34 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
# 35 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 36 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 37 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 38 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 39 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
# 40 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 41 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
	return


VermilionCity_Gym_OnTransition::
# 46 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_InitTrashCans
	end


VermilionCity_Gym_EventScript_InitTrashCans::
# 51 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, EventScript_Return
# 52 "data/maps/VermilionCity_Gym/scripts.pory"
	special SetVermilionTrashCans
# 53 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8004
# 54 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8005
	return


VermilionCity_Gym_EventScript_TrashCan1::
# 59 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 60 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 61 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan2::
# 66 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 67 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 68 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan3::
# 73 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 74 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 75 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan4::
# 80 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 81 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 4
# 82 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan5::
# 87 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 88 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 89 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan6::
# 94 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 95 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 96 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan7::
# 101 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 102 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 103 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan8::
# 108 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 109 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 8
# 110 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan9::
# 115 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 116 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 9
# 117 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan10::
# 122 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 123 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 10
# 124 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan11::
# 129 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 130 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 11
# 131 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan12::
# 136 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 137 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 12
# 138 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan13::
# 143 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 144 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 13
# 145 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan14::
# 150 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 151 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 14
# 152 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan15::
# 157 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 158 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8008, 15
# 159 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan::
# 164 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 165 "data/maps/VermilionCity_Gym/scripts.pory"
	special QuestLog_CutRecording
# 166 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_0
# 167 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_1
# 168 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_LocksAlreadyOpen
# 169 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, VermilionCity_Gym_EventScript_TrySwitchTwo
# 170 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8004, VAR_0x8008, VermilionCity_Gym_EventScript_FoundSwitchOne
# 171 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 172 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_FoundSwitchOne::
# 177 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 178 "data/maps/VermilionCity_Gym/scripts.pory"
	playse SE_PIN
# 179 "data/maps/VermilionCity_Gym/scripts.pory"
	waitse
# 180 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 181 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 182 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_TEMP_1
# 183 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_TrySwitchTwo::
# 188 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8005, VAR_0x8008, VermilionCity_Gym_EventScript_FoundSwitchTwo
# 189 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
# 190 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 191 "data/maps/VermilionCity_Gym/scripts.pory"
	special SetVermilionTrashCans
# 192 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8004
# 193 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8005
# 194 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 195 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 196 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_FoundSwitchTwo::
# 201 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 202 "data/maps/VermilionCity_Gym/scripts.pory"
	closemessage
# 203 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 204 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 205 "data/maps/VermilionCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 206 "data/maps/VermilionCity_Gym/scripts.pory"
	waitse
# 207 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
# 208 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_LocksAlreadyOpen::
# 213 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 214 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_SetBeamsOn::
# 219 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 220 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 221 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
# 222 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 223 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 224 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 225 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 226 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
# 227 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 228 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
	return


VermilionCity_Gym_EventScript_LtSurge::
# 233 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 234 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 235 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_GiveTM34
# 236 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 237 "data/maps/VermilionCity_Gym/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 242 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 243 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_ShowOaksAide
# 244 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 245 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 246 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 247 "data/maps/VermilionCity_Gym/scripts.pory"
	set_gym_trainers 3
# 248 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
	end


VermilionCity_Gym_EventScript_ShowOaksAide::
# 253 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
	return


VermilionCity_Gym_EventScript_GiveTM34::
# 258 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 259 "data/maps/VermilionCity_Gym/scripts.pory"
	checkitemspace ITEM_TM34
# 260 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_NoRoomForTM34
# 261 "data/maps/VermilionCity_Gym/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 262 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 263 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
# 264 "data/maps/VermilionCity_Gym/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_NoRoomForTM34::
# 269 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 270 "data/maps/VermilionCity_Gym/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_Dwayne::
# 275 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 276 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 277 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_Baily::
# 282 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Text_BailyIntro, VermilionCity_Gym_Text_BailyDefeat
# 283 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_Tucker::
# 288 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Text_TuckerIntro, VermilionCity_Gym_Text_TuckerDefeat, VermilionCity_Gym_EventScript_DefeatedTucker
# 289 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 290 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_DefeatedTucker::
# 295 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
# 296 "data/maps/VermilionCity_Gym/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_GymGuy::
# 301 "data/maps/VermilionCity_Gym/scripts.pory"
	lock
# 302 "data/maps/VermilionCity_Gym/scripts.pory"
	faceplayer
# 303 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuyPostVictory
# 304 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 305 "data/maps/VermilionCity_Gym/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 310 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 311 "data/maps/VermilionCity_Gym/scripts.pory"
	release
	end


VermilionCity_Gym_EventScript_GymStatue::
# 316 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 317 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
# 318 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
# 319 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	end


VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 324 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
# 325 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	end


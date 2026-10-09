ThreeIsland_MapScripts::
# 2 "data/maps/ThreeIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_OnTransition
	.byte 0


ThreeIsland_OnTransition::
# 6 "data/maps/ThreeIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND
# 7 "data/maps/ThreeIsland/scripts.pory"
	call_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_EventScript_HideAntiBikers
# 8 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers
	end


ThreeIsland_EventScript_HideAntiBikers::
# 13 "data/maps/ThreeIsland/scripts.pory"
	setflag FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
	return


ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers::
# 18 "data/maps/ThreeIsland/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER1, MOVEMENT_TYPE_LOOK_AROUND
# 19 "data/maps/ThreeIsland/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER2, MOVEMENT_TYPE_LOOK_AROUND
	return


ThreeIsland_EventScript_Biker::
# 24 "data/maps/ThreeIsland/scripts.pory"
	lock
# 25 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 2
# 26 "data/maps/ThreeIsland/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 27 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_AntiBiker1::
# 32 "data/maps/ThreeIsland/scripts.pory"
	lock
# 33 "data/maps/ThreeIsland/scripts.pory"
	goto_if_set FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER, ThreeIsland_EventScript_AntiBiker1GotFullRestore
# 34 "data/maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_GiveFullRestore
# 35 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 0
# 36 "data/maps/ThreeIsland/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 37 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_AntiBiker1GotFullRestore::
# 42 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 43 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 44 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 45 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_GiveFullRestore::
# 50 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 51 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 52 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_ThankYouOhYourMonGotHurt
# 53 "data/maps/ThreeIsland/scripts.pory"
	checkitemspace ITEM_FULL_RESTORE
# 54 "data/maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_EventScript_NoRoomForFullRestore
# 55 "data/maps/ThreeIsland/scripts.pory"
	msgreceiveditem ThreeIsland_Text_GivenFullRestore, ITEM_FULL_RESTORE
# 56 "data/maps/ThreeIsland/scripts.pory"
	additem ITEM_FULL_RESTORE
# 57 "data/maps/ThreeIsland/scripts.pory"
	setflag FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER
# 58 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 59 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_NoRoomForFullRestore::
# 64 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_OhYourBagIsFull
# 65 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_BikerArgumentScene::
# 70 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceLeft
# 71 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceLeft
# 72 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 73 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 74 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_GoBackToKanto
# 75 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
# 76 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
# 77 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
# 78 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_SpeakLeft
# 79 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 80 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_BossIsOnHisWay
# 81 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceUp
# 82 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceUp
# 83 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceAntiBiker
# 84 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, ThreeIsland_Movement_SpeakRight
# 85 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 86 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_GetOffIslandNow
# 87 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
# 88 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
# 89 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
# 90 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_SpeakLeft
# 91 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 92 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WhosGonnaMakeMe
	return


ThreeIsland_EventScript_PlayerFaceUp::
# 97 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 98 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PlayerFaceDown::
# 104 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 105 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PlayerFaceLeft::
# 110 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 111 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PlayerFaceRight::
# 116 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 117 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PlayerFaceBiker::
# 122 "data/maps/ThreeIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 123 "data/maps/ThreeIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceUp
# 124 "data/maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceRight
	end


ThreeIsland_EventScript_PlayerFaceAntiBiker::
# 129 "data/maps/ThreeIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 130 "data/maps/ThreeIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceLeft
# 131 "data/maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceUp
	end


ThreeIsland_EventScript_AntiBiker2::
# 136 "data/maps/ThreeIsland/scripts.pory"
	lock
# 137 "data/maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_AntiBiker2BikersGone
# 138 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 139 "data/maps/ThreeIsland/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 140 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_AntiBiker2BikersGone::
# 145 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, Common_Movement_FacePlayer
# 146 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 147 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_LostelleWentOffTowardsBondBridge
# 148 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_BikerBossIntroTrigger::
# 153 "data/maps/ThreeIsland/scripts.pory"
	lockall
# 154 "data/maps/ThreeIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 155 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 156 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 157 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_AreYouBossGoBackToKanto
# 158 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 159 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 160 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_JustGotHerePal
# 161 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 162 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 163 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_FollowersRaisingHavoc
# 164 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 165 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 166 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_OughtToBeThankingUs
# 167 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 168 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 169 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_YouCowardsToughInPack
# 170 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 3
# 171 "data/maps/ThreeIsland/scripts.pory"
	releaseall
	end


# 175 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_SpeakLeft::
# 176 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_left
# 177 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 180 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_SpeakRight::
# 181 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_right
# 182 "data/maps/ThreeIsland/scripts.pory"
	step_end

ThreeIsland_EventScript_BattleBikersTriggerLeft::
# 186 "data/maps/ThreeIsland/scripts.pory"
	lockall
# 187 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 0
# 188 "data/maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerMidLeft::
# 193 "data/maps/ThreeIsland/scripts.pory"
	lockall
# 194 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 195 "data/maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerMid::
# 200 "data/maps/ThreeIsland/scripts.pory"
	lockall
# 201 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 2
# 202 "data/maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerMidRight::
# 207 "data/maps/ThreeIsland/scripts.pory"
	lockall
# 208 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 3
# 209 "data/maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerRight::
# 214 "data/maps/ThreeIsland/scripts.pory"
	lockall
# 215 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 4
# 216 "data/maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersScene::
# 221 "data/maps/ThreeIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 222 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_WalkInPlaceFasterDown
# 223 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 224 "data/maps/ThreeIsland/scripts.pory"
	playse SE_PIN
# 225 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_ExclamationMark
# 226 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 227 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_Delay48
# 228 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 229 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerApproach
# 230 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 231 "data/maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 232 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WannaMakeSomethingOfYourStaring, MSGBOX_YESNO
# 233 "data/maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_EventScript_LeaveBikersAlone
# 234 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker1Intro
# 235 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER1
# 236 "data/maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON, ThreeIsland_Text_Biker1Defeat
# 237 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerSpeak
# 238 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 239 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker1PostBattle
# 240 "data/maps/ThreeIsland/scripts.pory"
	closemessage
# 241 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerApproach
# 242 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 243 "data/maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 244 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker2Intro
# 245 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER2
# 246 "data/maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_2, ThreeIsland_Text_Biker2Defeat
# 247 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerSpeak
# 248 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 249 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker2PostBattle
# 250 "data/maps/ThreeIsland/scripts.pory"
	closemessage
# 251 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_BikerApproach
# 252 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 253 "data/maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 254 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker3Intro
# 255 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER3
# 256 "data/maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_3, ThreeIsland_Text_Biker3Defeat
# 257 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterLeft
# 258 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 259 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER4, Common_Movement_WalkInPlaceFasterDown
# 260 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER5, Common_Movement_WalkInPlaceFasterDown
# 261 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 262 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker3PostBattle
# 263 "data/maps/ThreeIsland/scripts.pory"
	closemessage
# 264 "data/maps/ThreeIsland/scripts.pory"
	delay 45
# 265 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PaxtonApproachLeft
# 266 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PaxtonApproachMidLeft
# 267 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PaxtonApproachMid
# 268 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, ThreeIsland_EventScript_PaxtonApproachMidRight
# 269 "data/maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, ThreeIsland_EventScript_PaxtonApproachRight
# 270 "data/maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 271 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonIntro
# 272 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PAXTON
# 273 "data/maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_CUE_BALL_PAXTON, ThreeIsland_Text_PaxtonDefeat
# 274 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonPostBattle
# 275 "data/maps/ThreeIsland/scripts.pory"
	closemessage
# 276 "data/maps/ThreeIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 277 "data/maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_PAXTON
# 278 "data/maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER1
# 279 "data/maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER2
# 280 "data/maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER3
# 281 "data/maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER4
# 282 "data/maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER5
# 283 "data/maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER6
# 284 "data/maps/ThreeIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 285 "data/maps/ThreeIsland/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 4
# 286 "data/maps/ThreeIsland/scripts.pory"
	releaseall
	end


ThreeIsland_EventScript_PaxtonApproachLeft::
# 291 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 292 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachLeft
# 293 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PaxtonApproachMidLeft::
# 298 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 299 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidLeft
# 300 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PaxtonApproachMid::
# 305 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 306 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMid
# 307 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 308 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PaxtonApproachMidRight::
# 313 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 314 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 315 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidRight
# 316 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PaxtonApproachRight::
# 321 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 322 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 323 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachRight
# 324 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_LeaveBikersAlone::
# 329 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_ThatsSmart
# 330 "data/maps/ThreeIsland/scripts.pory"
	closemessage
# 331 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerLeaveBikers
# 332 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 333 "data/maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_Biker1ReturnToPack
# 334 "data/maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 335 "data/maps/ThreeIsland/scripts.pory"
	fadedefaultbgm
# 336 "data/maps/ThreeIsland/scripts.pory"
	releaseall
	end


# 340 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PlayerLeaveBikers::
# 341 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 342 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 345 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_BikerApproach::
# 346 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 347 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 350 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_Biker1ReturnToPack::
# 351 "data/maps/ThreeIsland/scripts.pory"
	walk_up
# 352 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_left
# 353 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 356 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_BikerSpeak::
# 357 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_down
# 358 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 361 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachLeft::
# 362 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 363 "data/maps/ThreeIsland/scripts.pory"
	walk_left
# 364 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_down
# 365 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 368 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidLeft::
# 369 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 370 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 373 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMid::
# 374 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 375 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 376 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_right
# 377 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 380 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PlayerFacePaxton::
# 381 "data/maps/ThreeIsland/scripts.pory"
	delay_16
# 382 "data/maps/ThreeIsland/scripts.pory"
	delay_16
# 383 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_left
# 384 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 387 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidRight::
# 388 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 389 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 390 "data/maps/ThreeIsland/scripts.pory"
	walk_right
# 391 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_right
# 392 "data/maps/ThreeIsland/scripts.pory"
	step_end

# 395 "data/maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachRight::
# 396 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 397 "data/maps/ThreeIsland/scripts.pory"
	walk_down
# 398 "data/maps/ThreeIsland/scripts.pory"
	walk_right
# 399 "data/maps/ThreeIsland/scripts.pory"
	walk_right
# 400 "data/maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_right
# 401 "data/maps/ThreeIsland/scripts.pory"
	step_end

ThreeIsland_EventScript_Woman::
# 405 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
	end


ThreeIsland_EventScript_LittleBoy::
# 410 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
	end


ThreeIsland_EventScript_Doduo::
# 415 "data/maps/ThreeIsland/scripts.pory"
	lock
# 416 "data/maps/ThreeIsland/scripts.pory"
	faceplayer
# 417 "data/maps/ThreeIsland/scripts.pory"
	waitse
# 418 "data/maps/ThreeIsland/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 419 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Doduo
# 420 "data/maps/ThreeIsland/scripts.pory"
	waitmoncry
# 421 "data/maps/ThreeIsland/scripts.pory"
	release
	end


ThreeIsland_EventScript_IslandSign::
# 426 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
	end


ThreeIsland_EventScript_Biker6::
# 431 "data/maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
	end


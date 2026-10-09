FiveIsland_WaterLabyrinth_MapScripts::
	.byte 0


FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 4 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 5 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 6 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 7 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 8 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 9 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 10 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 11 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 12 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 13 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 14 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
	end


FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 19 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 20 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 21 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
	end


FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 26 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 27 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	end


FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 32 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	getpartysize
# 33 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 34 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 35 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	giveegg SPECIES_TOGEPI
# 36 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 37 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 38 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 39 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitfanfare
# 40 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 41 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 42 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
	end


FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 49 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 50 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 51 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 52 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 53 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 54 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 55 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 56 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 57 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 58 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
	end


FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 63 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 64 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 65 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
	end


FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 70 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	end


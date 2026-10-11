SaffronCity_CopycatsHouse_2F_MapScripts::
	.byte 0


SaffronCity_CopycatsHouse_2F_EventScript_Doduo::
# 4 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	lock
# 5 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	faceplayer
# 6 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	waitse
# 7 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 8 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_Doduo
# 9 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	waitmoncry
# 10 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	release
	end


SaffronCity_CopycatsHouse_2F_EventScript_Doll::
# 15 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	lock
# 16 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll
# 17 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	release
	end


SaffronCity_CopycatsHouse_2F_EventScript_Copycat::
# 22 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 23 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	special QuestLog_CutRecording
# 24 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	lock
# 25 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	faceplayer
# 27 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	goto_if_set FLAG_TUTOR_MIMIC, EventScript_MimicTutor
# 28 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 29 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_MimicTutor
# 30 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	checkplayergender
# 31 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale
# 32 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale
# 33 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	release
	end


SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale::
# 38 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale
	return


SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale::
# 43 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale
	return


SaffronCity_CopycatsHouse_2F_EventScript_Computer::
# 48 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MySecrets, MSGBOX_SIGN
	end


SaffronCity_CopycatsHouse_2F_EventScript_Game::
# 53 "data/maps/SaffronCity_CopycatsHouse_2F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket, MSGBOX_SIGN
	end


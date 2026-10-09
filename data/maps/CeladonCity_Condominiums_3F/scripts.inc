CeladonCity_Condominiums_3F_MapScripts::
	.byte 0


CeladonCity_Condominiums_3F_EventScript_Programmer::
# 4 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheProgrammer, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_GraphicArtist::
# 9 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_Writer::
# 14 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_IWroteTheStory, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_Designer::
# 19 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	lock
# 20 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	faceplayer
# 21 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	specialvar VAR_RESULT, HasAllKantoMons
# 22 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeladonCity_Condominiums_3F_EventScript_CompletedPokedex
# 23 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex
# 24 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	release
	end


CeladonCity_Condominiums_3F_EventScript_CompletedPokedex::
# 29 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	goto CeladonCity_Condominiums_3F_EventScript_ShowDiploma
	end


CeladonCity_Condominiums_3F_EventScript_ShowDiploma::
# 34 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	message CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations
# 35 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	waitmessage
# 36 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	delay 60
# 37 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 38 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	special ShowDiploma
# 39 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	waitstate
# 40 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	release
	end


CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign::
# 45 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer1::
# 50 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsTheGameProgram, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer2::
# 55 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer3::
# 60 "data/maps/CeladonCity_Condominiums_3F/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding, MSGBOX_SIGN
	end


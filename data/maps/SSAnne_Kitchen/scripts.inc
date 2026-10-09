SSAnne_Kitchen_MapScripts::
	.byte 0


SSAnne_Kitchen_EventScript_Chef1::
# 4 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_BusyOutOfTheWay, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef2::
# 9 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SawOddBerryInTrash, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef3::
# 14 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SoBusyImDizzy, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef4::
# 19 "data/maps/SSAnne_Kitchen/scripts.pory"
	lock
# 20 "data/maps/SSAnne_Kitchen/scripts.pory"
	faceplayer
# 21 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_IAmLeChefMainCourseIs
# 22 "data/maps/SSAnne_Kitchen/scripts.pory"
	random 3
# 23 "data/maps/SSAnne_Kitchen/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 24 "data/maps/SSAnne_Kitchen/scripts.pory"
	call_if_eq VAR_0x8008, 0, SSAnne_Kitchen_EventScript_SalmonDuSalad
# 25 "data/maps/SSAnne_Kitchen/scripts.pory"
	call_if_eq VAR_0x8008, 1, SSAnne_Kitchen_EventScript_EelsAuBarbecue
# 26 "data/maps/SSAnne_Kitchen/scripts.pory"
	call_if_eq VAR_0x8008, 2, SSAnne_Kitchen_EventScript_PrimeBeefsteak
# 27 "data/maps/SSAnne_Kitchen/scripts.pory"
	release
	end


SSAnne_Kitchen_EventScript_SalmonDuSalad::
# 32 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SalmonDuSalad
	return


SSAnne_Kitchen_EventScript_EelsAuBarbecue::
# 37 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_EelsAuBarbecue
	return


SSAnne_Kitchen_EventScript_PrimeBeefsteak::
# 42 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PrimeBeefsteak
	return


SSAnne_Kitchen_EventScript_Chef5::
# 47 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PeelSpudsEveryDay, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef6::
# 52 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton, MSGBOX_NPC
	end


SSAnne_Kitchen_EventScript_Chef7::
# 57 "data/maps/SSAnne_Kitchen/scripts.pory"
	msgbox SSAnne_Kitchen_Text_OnlyGetToPeelOnions, MSGBOX_NPC
	end


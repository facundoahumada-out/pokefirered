SSAnne_2F_Room1_MapScripts::
	.byte 0


SSAnne_2F_Room1_EventScript_Gentleman::
# 4 "data/maps/SSAnne_2F_Room1/scripts.pory"
	lock
# 5 "data/maps/SSAnne_2F_Room1/scripts.pory"
	faceplayer
# 6 "data/maps/SSAnne_2F_Room1/scripts.pory"
	message SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis
# 7 "data/maps/SSAnne_2F_Room1/scripts.pory"
	waitmessage
# 8 "data/maps/SSAnne_2F_Room1/scripts.pory"
	setvar VAR_0x8004, SPECIES_SNORLAX
# 9 "data/maps/SSAnne_2F_Room1/scripts.pory"
	special SetSeenMon
# 10 "data/maps/SSAnne_2F_Room1/scripts.pory"
	showmonpic SPECIES_SNORLAX, 10, 3
# 11 "data/maps/SSAnne_2F_Room1/scripts.pory"
	waitbuttonpress
# 12 "data/maps/SSAnne_2F_Room1/scripts.pory"
	hidemonpic
# 13 "data/maps/SSAnne_2F_Room1/scripts.pory"
	release
	end


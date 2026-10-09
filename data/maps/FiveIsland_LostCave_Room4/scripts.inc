FiveIsland_LostCave_Room4_MapScripts::
	.byte 0


FiveIsland_LostCave_Room4_EventScript_Laura::
# 4 "data/maps/FiveIsland_LostCave_Room4/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_LAURA, FiveIsland_LostCave_Room4_Text_LauraIntro, FiveIsland_LostCave_Room4_Text_LauraDefeat
# 5 "data/maps/FiveIsland_LostCave_Room4/scripts.pory"
	msgbox FiveIsland_LostCave_Room4_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end


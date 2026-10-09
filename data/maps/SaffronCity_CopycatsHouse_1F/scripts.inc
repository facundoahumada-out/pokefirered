SaffronCity_CopycatsHouse_1F_MapScripts::
	.byte 0


SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom::
# 4 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered, MSGBOX_NPC
	end


SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad::
# 9 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople, MSGBOX_NPC
	end


SaffronCity_CopycatsHouse_1F_EventScript_Chansey::
# 14 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	waitse
# 17 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 18 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_Chansey
# 19 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	waitmoncry
# 20 "data/maps/SaffronCity_CopycatsHouse_1F/scripts.pory"
	release
	end


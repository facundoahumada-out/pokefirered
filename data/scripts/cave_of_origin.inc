CaveOfOrigin_EventScript_Shake1::
# 3 "data/scripts/cave_of_origin.pory"
	lockall
# 4 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_1, 1
# 5 "data/scripts/cave_of_origin.pory"
	goto CaveOfOrigin_EventScript_Shake
	end


CaveOfOrigin_EventScript_Shake2::
# 10 "data/scripts/cave_of_origin.pory"
	lockall
# 11 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_2, 1
# 12 "data/scripts/cave_of_origin.pory"
	goto CaveOfOrigin_EventScript_Shake
	end


CaveOfOrigin_EventScript_Shake3::
# 17 "data/scripts/cave_of_origin.pory"
	lockall
# 18 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_3, 1
# 19 "data/scripts/cave_of_origin.pory"
	goto CaveOfOrigin_EventScript_Shake
	end


CaveOfOrigin_EventScript_Shake::
# 24 "data/scripts/cave_of_origin.pory"
	setvar VAR_0x8004, 1
# 25 "data/scripts/cave_of_origin.pory"
	setvar VAR_0x8005, 1
# 26 "data/scripts/cave_of_origin.pory"
	setvar VAR_0x8006, 8
# 27 "data/scripts/cave_of_origin.pory"
	setvar VAR_0x8007, 5
# 28 "data/scripts/cave_of_origin.pory"
	special ShakeScreen
# 29 "data/scripts/cave_of_origin.pory"
	waitstate
# 30 "data/scripts/cave_of_origin.pory"
	releaseall
	end


CaveOfOrigin_EventScript_DisableShakes::
# 35 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_2, 1
# 37 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_3, 1
# 38 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_4, 1
# 39 "data/scripts/cave_of_origin.pory"
	setvar VAR_TEMP_5, 1
	return


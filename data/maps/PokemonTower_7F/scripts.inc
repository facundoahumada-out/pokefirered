PokemonTower_7F_MapScripts::
	.byte 0


PokemonTower_7F_EventScript_MrFuji::
# 4 "data/maps/PokemonTower_7F/scripts.pory"
	lock
# 5 "data/maps/PokemonTower_7F/scripts.pory"
	faceplayer
# 6 "data/maps/PokemonTower_7F/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/PokemonTower_7F/scripts.pory"
	setflag FLAG_HIDE_TOWER_FUJI
# 8 "data/maps/PokemonTower_7F/scripts.pory"
	clearflag FLAG_HIDE_POKEHOUSE_FUJI
# 9 "data/maps/PokemonTower_7F/scripts.pory"
	setflag FLAG_RESCUED_MR_FUJI
# 10 "data/maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_MrFujiThankYouFollowMe
# 11 "data/maps/PokemonTower_7F/scripts.pory"
	closemessage
# 12 "data/maps/PokemonTower_7F/scripts.pory"
	warp MAP_LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE, 4, 7
# 13 "data/maps/PokemonTower_7F/scripts.pory"
	waitstate
# 14 "data/maps/PokemonTower_7F/scripts.pory"
	release
	end


PokemonTower_7F_EventScript_Grunt1::
# 19 "data/maps/PokemonTower_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_19, PokemonTower_7F_Text_Grunt1Intro, PokemonTower_7F_Text_Grunt1Defeat, PokemonTower_7F_EventScript_DefeatedGrunt1
# 20 "data/maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_7F_EventScript_DefeatedGrunt1::
# 25 "data/maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle
# 26 "data/maps/PokemonTower_7F/scripts.pory"
	closemessage
# 27 "data/maps/PokemonTower_7F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 28 "data/maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 10, PokemonTower_7F_EventScript_Grunt1ExitMid
# 29 "data/maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 11, PokemonTower_7F_EventScript_Grunt1ExitRight
# 30 "data/maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 9, PokemonTower_7F_EventScript_Grunt1ExitLeft
# 31 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1Exit
# 32 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 33 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end


PokemonTower_7F_EventScript_Grunt1ExitMid::
# 38 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitMid
# 39 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 40 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end


PokemonTower_7F_EventScript_Grunt1ExitRight::
# 45 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitRight
# 46 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 47 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end


PokemonTower_7F_EventScript_Grunt1ExitLeft::
# 52 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitLeft
# 53 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 54 "data/maps/PokemonTower_7F/scripts.pory"
	playse SE_EXIT
# 55 "data/maps/PokemonTower_7F/scripts.pory"
	delay 25
# 56 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
	end


PokemonTower_7F_EventScript_RemoveGrunt1::
# 61 "data/maps/PokemonTower_7F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT1
# 62 "data/maps/PokemonTower_7F/scripts.pory"
	release
	end


# 66 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitMid::
# 67 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 68 "data/maps/PokemonTower_7F/scripts.pory"
	walk_right
# 69 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 70 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 71 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 72 "data/maps/PokemonTower_7F/scripts.pory"
	walk_right
# 73 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 74 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 75 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

# 78 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitRight::
# 79 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 80 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 81 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 82 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 83 "data/maps/PokemonTower_7F/scripts.pory"
	walk_right
# 84 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 85 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 86 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

# 89 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1Exit::
# 90 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 91 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 92 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 93 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 94 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 95 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 96 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

# 99 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitLeft::
# 100 "data/maps/PokemonTower_7F/scripts.pory"
	walk_right
# 101 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 102 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 103 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 104 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 105 "data/maps/PokemonTower_7F/scripts.pory"
	walk_right
# 106 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 107 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 108 "data/maps/PokemonTower_7F/scripts.pory"
	walk_in_place_faster_left
# 109 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

PokemonTower_7F_EventScript_Grunt2::
# 113 "data/maps/PokemonTower_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_20, PokemonTower_7F_Text_Grunt2Intro, PokemonTower_7F_Text_Grunt2Defeat, PokemonTower_7F_EventScript_DefeatedGrunt2
# 114 "data/maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_7F_EventScript_DefeatedGrunt2::
# 119 "data/maps/PokemonTower_7F/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 1
# 120 "data/maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle
# 121 "data/maps/PokemonTower_7F/scripts.pory"
	closemessage
# 122 "data/maps/PokemonTower_7F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 123 "data/maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 12, PokemonTower_7F_EventScript_Grunt2ExitLeft
# 124 "data/maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 13, PokemonTower_7F_EventScript_Grunt2ExitRight
# 125 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2Exit
# 126 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 127 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
	end


PokemonTower_7F_EventScript_Grunt2ExitLeft::
# 132 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitLeft
# 133 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 134 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
	end


PokemonTower_7F_EventScript_Grunt2ExitRight::
# 139 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitRight
# 140 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 141 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
	end


PokemonTower_7F_EventScript_RemoveGrunt2::
# 146 "data/maps/PokemonTower_7F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT2
# 147 "data/maps/PokemonTower_7F/scripts.pory"
	release
	end


# 151 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt2ExitLeft::
# 152 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 153 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 154 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 155 "data/maps/PokemonTower_7F/scripts.pory"
	walk_left
# 156 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 157 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 158 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 159 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

# 162 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt2Exit::
# 163 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 164 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 165 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 166 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 167 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 168 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 169 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

# 172 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt2ExitRight::
# 173 "data/maps/PokemonTower_7F/scripts.pory"
	walk_left
# 174 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 175 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 176 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 177 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 178 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 179 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 180 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 181 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

PokemonTower_7F_EventScript_Grunt3::
# 185 "data/maps/PokemonTower_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_21, PokemonTower_7F_Text_Grunt3Intro, PokemonTower_7F_Text_Grunt3Defeat, PokemonTower_7F_EventScript_DefeatedGrunt3
# 186 "data/maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_7F_EventScript_DefeatedGrunt3::
# 191 "data/maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle
# 192 "data/maps/PokemonTower_7F/scripts.pory"
	closemessage
# 193 "data/maps/PokemonTower_7F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 194 "data/maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 10, PokemonTower_7F_EventScript_Grunt3ExitRight
# 195 "data/maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 9, PokemonTower_7F_EventScript_Grunt3ExitLeft
# 196 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3Exit
# 197 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 198 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
	end


PokemonTower_7F_EventScript_Grunt3ExitRight::
# 203 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitRight
# 204 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 205 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
	end


PokemonTower_7F_EventScript_Grunt3ExitLeft::
# 210 "data/maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitLeft
# 211 "data/maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 212 "data/maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
	end


PokemonTower_7F_EventScript_RemoveGrunt3::
# 217 "data/maps/PokemonTower_7F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT3
# 218 "data/maps/PokemonTower_7F/scripts.pory"
	release
	end


PokemonTower_7F_EventScript_Unused::
# 223 "data/maps/PokemonTower_7F/scripts.pory"
	release
	end


# 227 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt3ExitRight::
# 228 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 229 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 230 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 231 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 232 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 233 "data/maps/PokemonTower_7F/scripts.pory"
	walk_right
# 234 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 235 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

# 238 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt3Exit::
# 239 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 240 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 241 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 242 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 243 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 244 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 245 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

# 248 "data/maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt3ExitLeft::
# 249 "data/maps/PokemonTower_7F/scripts.pory"
	walk_right
# 250 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 251 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 252 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 253 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 254 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 255 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 256 "data/maps/PokemonTower_7F/scripts.pory"
	walk_down
# 257 "data/maps/PokemonTower_7F/scripts.pory"
	step_end

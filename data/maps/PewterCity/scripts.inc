PewterCity_MapScripts::
# 2 "data/maps/PewterCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
	.byte 0


PewterCity_OnTransition::
# 6 "data/maps/PewterCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 7 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
	end


PewterCity_EventScript_GymGuide::
# 14 "data/maps/PewterCity/scripts.pory"
	lock
# 15 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 16 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 17 "data/maps/PewterCity/scripts.pory"
	closemessage
# 18 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 19 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 20 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 21 "data/maps/PewterCity/scripts.pory"
	closemessage
# 22 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 23 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 24 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 25 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 26 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 27 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_WalkToGymEast::
# 32 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 33 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 34 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 36 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 37 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymWest::
# 43 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 44 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 45 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 47 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 48 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymNorth::
# 54 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 55 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 56 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 58 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 59 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 63 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast::
# 64 "data/maps/PewterCity/scripts.pory"
	delay_16
# 65 "data/maps/PewterCity/scripts.pory"
	delay_16
# 66 "data/maps/PewterCity/scripts.pory"
	delay_4
# 67 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_down
# 68 "data/maps/PewterCity/scripts.pory"
	step_end

# 71 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast::
# 72 "data/maps/PewterCity/scripts.pory"
	walk_down
# 73 "data/maps/PewterCity/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity/scripts.pory"
	walk_left
# 76 "data/maps/PewterCity/scripts.pory"
	walk_up
# 77 "data/maps/PewterCity/scripts.pory"
	walk_left
# 78 "data/maps/PewterCity/scripts.pory"
	walk_left
# 79 "data/maps/PewterCity/scripts.pory"
	walk_left
# 80 "data/maps/PewterCity/scripts.pory"
	walk_left
# 81 "data/maps/PewterCity/scripts.pory"
	walk_left
# 82 "data/maps/PewterCity/scripts.pory"
	walk_left
# 83 "data/maps/PewterCity/scripts.pory"
	walk_left
# 84 "data/maps/PewterCity/scripts.pory"
	walk_left
# 85 "data/maps/PewterCity/scripts.pory"
	walk_left
# 86 "data/maps/PewterCity/scripts.pory"
	walk_left
# 87 "data/maps/PewterCity/scripts.pory"
	walk_left
# 88 "data/maps/PewterCity/scripts.pory"
	walk_left
# 89 "data/maps/PewterCity/scripts.pory"
	walk_left
# 90 "data/maps/PewterCity/scripts.pory"
	walk_left
# 91 "data/maps/PewterCity/scripts.pory"
	walk_left
# 92 "data/maps/PewterCity/scripts.pory"
	walk_up
# 93 "data/maps/PewterCity/scripts.pory"
	walk_up
# 94 "data/maps/PewterCity/scripts.pory"
	walk_up
# 95 "data/maps/PewterCity/scripts.pory"
	walk_up
# 96 "data/maps/PewterCity/scripts.pory"
	walk_up
# 97 "data/maps/PewterCity/scripts.pory"
	walk_up
# 98 "data/maps/PewterCity/scripts.pory"
	walk_up
# 99 "data/maps/PewterCity/scripts.pory"
	walk_up
# 100 "data/maps/PewterCity/scripts.pory"
	walk_up
# 101 "data/maps/PewterCity/scripts.pory"
	walk_up
# 102 "data/maps/PewterCity/scripts.pory"
	walk_left
# 103 "data/maps/PewterCity/scripts.pory"
	walk_left
# 104 "data/maps/PewterCity/scripts.pory"
	walk_left
# 105 "data/maps/PewterCity/scripts.pory"
	walk_left
# 106 "data/maps/PewterCity/scripts.pory"
	walk_left
# 107 "data/maps/PewterCity/scripts.pory"
	walk_left
# 108 "data/maps/PewterCity/scripts.pory"
	walk_left
# 109 "data/maps/PewterCity/scripts.pory"
	walk_left
# 110 "data/maps/PewterCity/scripts.pory"
	walk_left
# 111 "data/maps/PewterCity/scripts.pory"
	walk_left
# 112 "data/maps/PewterCity/scripts.pory"
	walk_left
# 113 "data/maps/PewterCity/scripts.pory"
	walk_left
# 114 "data/maps/PewterCity/scripts.pory"
	walk_left
# 115 "data/maps/PewterCity/scripts.pory"
	walk_left
# 116 "data/maps/PewterCity/scripts.pory"
	walk_left
# 117 "data/maps/PewterCity/scripts.pory"
	walk_left
# 118 "data/maps/PewterCity/scripts.pory"
	walk_down
# 119 "data/maps/PewterCity/scripts.pory"
	walk_down
# 120 "data/maps/PewterCity/scripts.pory"
	walk_down
# 121 "data/maps/PewterCity/scripts.pory"
	walk_down
# 122 "data/maps/PewterCity/scripts.pory"
	walk_down
# 123 "data/maps/PewterCity/scripts.pory"
	walk_down
# 124 "data/maps/PewterCity/scripts.pory"
	walk_down
# 125 "data/maps/PewterCity/scripts.pory"
	walk_down
# 126 "data/maps/PewterCity/scripts.pory"
	walk_right
# 127 "data/maps/PewterCity/scripts.pory"
	walk_right
# 128 "data/maps/PewterCity/scripts.pory"
	walk_right
# 129 "data/maps/PewterCity/scripts.pory"
	walk_right
# 130 "data/maps/PewterCity/scripts.pory"
	walk_right
# 131 "data/maps/PewterCity/scripts.pory"
	walk_right
# 132 "data/maps/PewterCity/scripts.pory"
	walk_right
# 133 "data/maps/PewterCity/scripts.pory"
	walk_right
# 134 "data/maps/PewterCity/scripts.pory"
	step_end

# 137 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest::
# 138 "data/maps/PewterCity/scripts.pory"
	delay_16
# 139 "data/maps/PewterCity/scripts.pory"
	step_end

# 142 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest::
# 143 "data/maps/PewterCity/scripts.pory"
	walk_left
# 144 "data/maps/PewterCity/scripts.pory"
	walk_left
# 145 "data/maps/PewterCity/scripts.pory"
	walk_left
# 146 "data/maps/PewterCity/scripts.pory"
	walk_left
# 147 "data/maps/PewterCity/scripts.pory"
	walk_left
# 148 "data/maps/PewterCity/scripts.pory"
	walk_left
# 149 "data/maps/PewterCity/scripts.pory"
	walk_left
# 150 "data/maps/PewterCity/scripts.pory"
	walk_left
# 151 "data/maps/PewterCity/scripts.pory"
	walk_left
# 152 "data/maps/PewterCity/scripts.pory"
	walk_left
# 153 "data/maps/PewterCity/scripts.pory"
	walk_left
# 154 "data/maps/PewterCity/scripts.pory"
	walk_left
# 155 "data/maps/PewterCity/scripts.pory"
	walk_left
# 156 "data/maps/PewterCity/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity/scripts.pory"
	walk_left
# 158 "data/maps/PewterCity/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity/scripts.pory"
	walk_left
# 160 "data/maps/PewterCity/scripts.pory"
	walk_left
# 161 "data/maps/PewterCity/scripts.pory"
	walk_left
# 162 "data/maps/PewterCity/scripts.pory"
	walk_left
# 163 "data/maps/PewterCity/scripts.pory"
	walk_up
# 164 "data/maps/PewterCity/scripts.pory"
	walk_up
# 165 "data/maps/PewterCity/scripts.pory"
	walk_up
# 166 "data/maps/PewterCity/scripts.pory"
	walk_up
# 167 "data/maps/PewterCity/scripts.pory"
	walk_up
# 168 "data/maps/PewterCity/scripts.pory"
	walk_up
# 169 "data/maps/PewterCity/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity/scripts.pory"
	walk_left
# 172 "data/maps/PewterCity/scripts.pory"
	walk_left
# 173 "data/maps/PewterCity/scripts.pory"
	walk_left
# 174 "data/maps/PewterCity/scripts.pory"
	walk_left
# 175 "data/maps/PewterCity/scripts.pory"
	walk_left
# 176 "data/maps/PewterCity/scripts.pory"
	walk_left
# 177 "data/maps/PewterCity/scripts.pory"
	walk_left
# 178 "data/maps/PewterCity/scripts.pory"
	walk_left
# 179 "data/maps/PewterCity/scripts.pory"
	walk_left
# 180 "data/maps/PewterCity/scripts.pory"
	walk_down
# 181 "data/maps/PewterCity/scripts.pory"
	walk_down
# 182 "data/maps/PewterCity/scripts.pory"
	walk_down
# 183 "data/maps/PewterCity/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity/scripts.pory"
	walk_down
# 185 "data/maps/PewterCity/scripts.pory"
	walk_down
# 186 "data/maps/PewterCity/scripts.pory"
	walk_right
# 187 "data/maps/PewterCity/scripts.pory"
	step_end

# 190 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth::
# 191 "data/maps/PewterCity/scripts.pory"
	delay_16
# 192 "data/maps/PewterCity/scripts.pory"
	step_end

# 195 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth::
# 196 "data/maps/PewterCity/scripts.pory"
	walk_up
# 197 "data/maps/PewterCity/scripts.pory"
	walk_left
# 198 "data/maps/PewterCity/scripts.pory"
	walk_left
# 199 "data/maps/PewterCity/scripts.pory"
	walk_left
# 200 "data/maps/PewterCity/scripts.pory"
	walk_left
# 201 "data/maps/PewterCity/scripts.pory"
	walk_left
# 202 "data/maps/PewterCity/scripts.pory"
	walk_left
# 203 "data/maps/PewterCity/scripts.pory"
	walk_left
# 204 "data/maps/PewterCity/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity/scripts.pory"
	walk_left
# 206 "data/maps/PewterCity/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity/scripts.pory"
	walk_left
# 208 "data/maps/PewterCity/scripts.pory"
	walk_left
# 209 "data/maps/PewterCity/scripts.pory"
	walk_left
# 210 "data/maps/PewterCity/scripts.pory"
	walk_left
# 211 "data/maps/PewterCity/scripts.pory"
	walk_left
# 212 "data/maps/PewterCity/scripts.pory"
	walk_left
# 213 "data/maps/PewterCity/scripts.pory"
	walk_left
# 214 "data/maps/PewterCity/scripts.pory"
	walk_left
# 215 "data/maps/PewterCity/scripts.pory"
	walk_left
# 216 "data/maps/PewterCity/scripts.pory"
	walk_up
# 217 "data/maps/PewterCity/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity/scripts.pory"
	walk_up
# 219 "data/maps/PewterCity/scripts.pory"
	walk_up
# 220 "data/maps/PewterCity/scripts.pory"
	walk_up
# 221 "data/maps/PewterCity/scripts.pory"
	walk_up
# 222 "data/maps/PewterCity/scripts.pory"
	walk_up
# 223 "data/maps/PewterCity/scripts.pory"
	walk_left
# 224 "data/maps/PewterCity/scripts.pory"
	walk_left
# 225 "data/maps/PewterCity/scripts.pory"
	walk_left
# 226 "data/maps/PewterCity/scripts.pory"
	walk_left
# 227 "data/maps/PewterCity/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity/scripts.pory"
	walk_left
# 229 "data/maps/PewterCity/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity/scripts.pory"
	walk_left
# 231 "data/maps/PewterCity/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity/scripts.pory"
	walk_left
# 233 "data/maps/PewterCity/scripts.pory"
	walk_down
# 234 "data/maps/PewterCity/scripts.pory"
	walk_down
# 235 "data/maps/PewterCity/scripts.pory"
	walk_down
# 236 "data/maps/PewterCity/scripts.pory"
	walk_down
# 237 "data/maps/PewterCity/scripts.pory"
	walk_down
# 238 "data/maps/PewterCity/scripts.pory"
	walk_down
# 239 "data/maps/PewterCity/scripts.pory"
	walk_right
# 240 "data/maps/PewterCity/scripts.pory"
	step_end

# 243 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast::
# 244 "data/maps/PewterCity/scripts.pory"
	walk_down
# 245 "data/maps/PewterCity/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 247 "data/maps/PewterCity/scripts.pory"
	walk_in_place_up
# 248 "data/maps/PewterCity/scripts.pory"
	step_end

# 251 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast::
# 252 "data/maps/PewterCity/scripts.pory"
	walk_left
# 253 "data/maps/PewterCity/scripts.pory"
	walk_left
# 254 "data/maps/PewterCity/scripts.pory"
	walk_left
# 255 "data/maps/PewterCity/scripts.pory"
	walk_up
# 256 "data/maps/PewterCity/scripts.pory"
	walk_left
# 257 "data/maps/PewterCity/scripts.pory"
	walk_left
# 258 "data/maps/PewterCity/scripts.pory"
	walk_left
# 259 "data/maps/PewterCity/scripts.pory"
	walk_left
# 260 "data/maps/PewterCity/scripts.pory"
	walk_left
# 261 "data/maps/PewterCity/scripts.pory"
	walk_left
# 262 "data/maps/PewterCity/scripts.pory"
	walk_left
# 263 "data/maps/PewterCity/scripts.pory"
	walk_left
# 264 "data/maps/PewterCity/scripts.pory"
	walk_left
# 265 "data/maps/PewterCity/scripts.pory"
	walk_left
# 266 "data/maps/PewterCity/scripts.pory"
	walk_left
# 267 "data/maps/PewterCity/scripts.pory"
	walk_left
# 268 "data/maps/PewterCity/scripts.pory"
	walk_left
# 269 "data/maps/PewterCity/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity/scripts.pory"
	walk_up
# 272 "data/maps/PewterCity/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity/scripts.pory"
	walk_up
# 274 "data/maps/PewterCity/scripts.pory"
	walk_up
# 275 "data/maps/PewterCity/scripts.pory"
	walk_up
# 276 "data/maps/PewterCity/scripts.pory"
	walk_up
# 277 "data/maps/PewterCity/scripts.pory"
	walk_up
# 278 "data/maps/PewterCity/scripts.pory"
	walk_up
# 279 "data/maps/PewterCity/scripts.pory"
	walk_up
# 280 "data/maps/PewterCity/scripts.pory"
	walk_up
# 281 "data/maps/PewterCity/scripts.pory"
	walk_left
# 282 "data/maps/PewterCity/scripts.pory"
	walk_left
# 283 "data/maps/PewterCity/scripts.pory"
	walk_left
# 284 "data/maps/PewterCity/scripts.pory"
	walk_left
# 285 "data/maps/PewterCity/scripts.pory"
	walk_left
# 286 "data/maps/PewterCity/scripts.pory"
	walk_left
# 287 "data/maps/PewterCity/scripts.pory"
	walk_left
# 288 "data/maps/PewterCity/scripts.pory"
	walk_left
# 289 "data/maps/PewterCity/scripts.pory"
	walk_left
# 290 "data/maps/PewterCity/scripts.pory"
	walk_left
# 291 "data/maps/PewterCity/scripts.pory"
	walk_left
# 292 "data/maps/PewterCity/scripts.pory"
	walk_left
# 293 "data/maps/PewterCity/scripts.pory"
	walk_left
# 294 "data/maps/PewterCity/scripts.pory"
	walk_left
# 295 "data/maps/PewterCity/scripts.pory"
	walk_left
# 296 "data/maps/PewterCity/scripts.pory"
	walk_left
# 297 "data/maps/PewterCity/scripts.pory"
	walk_down
# 298 "data/maps/PewterCity/scripts.pory"
	walk_down
# 299 "data/maps/PewterCity/scripts.pory"
	walk_down
# 300 "data/maps/PewterCity/scripts.pory"
	walk_down
# 301 "data/maps/PewterCity/scripts.pory"
	walk_down
# 302 "data/maps/PewterCity/scripts.pory"
	walk_down
# 303 "data/maps/PewterCity/scripts.pory"
	walk_down
# 304 "data/maps/PewterCity/scripts.pory"
	walk_down
# 305 "data/maps/PewterCity/scripts.pory"
	walk_right
# 306 "data/maps/PewterCity/scripts.pory"
	walk_right
# 307 "data/maps/PewterCity/scripts.pory"
	walk_right
# 308 "data/maps/PewterCity/scripts.pory"
	walk_right
# 309 "data/maps/PewterCity/scripts.pory"
	walk_right
# 310 "data/maps/PewterCity/scripts.pory"
	walk_right
# 311 "data/maps/PewterCity/scripts.pory"
	walk_right
# 312 "data/maps/PewterCity/scripts.pory"
	walk_right
# 313 "data/maps/PewterCity/scripts.pory"
	walk_right
# 314 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/PewterCity/scripts.pory"
	step_end

# 318 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest::
# 319 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 320 "data/maps/PewterCity/scripts.pory"
	step_end

# 323 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest::
# 324 "data/maps/PewterCity/scripts.pory"
	walk_left
# 325 "data/maps/PewterCity/scripts.pory"
	walk_left
# 326 "data/maps/PewterCity/scripts.pory"
	walk_left
# 327 "data/maps/PewterCity/scripts.pory"
	walk_left
# 328 "data/maps/PewterCity/scripts.pory"
	walk_left
# 329 "data/maps/PewterCity/scripts.pory"
	walk_left
# 330 "data/maps/PewterCity/scripts.pory"
	walk_left
# 331 "data/maps/PewterCity/scripts.pory"
	walk_left
# 332 "data/maps/PewterCity/scripts.pory"
	walk_left
# 333 "data/maps/PewterCity/scripts.pory"
	walk_left
# 334 "data/maps/PewterCity/scripts.pory"
	walk_left
# 335 "data/maps/PewterCity/scripts.pory"
	walk_left
# 336 "data/maps/PewterCity/scripts.pory"
	walk_left
# 337 "data/maps/PewterCity/scripts.pory"
	walk_left
# 338 "data/maps/PewterCity/scripts.pory"
	walk_left
# 339 "data/maps/PewterCity/scripts.pory"
	walk_left
# 340 "data/maps/PewterCity/scripts.pory"
	walk_left
# 341 "data/maps/PewterCity/scripts.pory"
	walk_left
# 342 "data/maps/PewterCity/scripts.pory"
	walk_left
# 343 "data/maps/PewterCity/scripts.pory"
	walk_up
# 344 "data/maps/PewterCity/scripts.pory"
	walk_up
# 345 "data/maps/PewterCity/scripts.pory"
	walk_up
# 346 "data/maps/PewterCity/scripts.pory"
	walk_up
# 347 "data/maps/PewterCity/scripts.pory"
	walk_up
# 348 "data/maps/PewterCity/scripts.pory"
	walk_up
# 349 "data/maps/PewterCity/scripts.pory"
	walk_up
# 350 "data/maps/PewterCity/scripts.pory"
	walk_left
# 351 "data/maps/PewterCity/scripts.pory"
	walk_left
# 352 "data/maps/PewterCity/scripts.pory"
	walk_left
# 353 "data/maps/PewterCity/scripts.pory"
	walk_left
# 354 "data/maps/PewterCity/scripts.pory"
	walk_left
# 355 "data/maps/PewterCity/scripts.pory"
	walk_left
# 356 "data/maps/PewterCity/scripts.pory"
	walk_left
# 357 "data/maps/PewterCity/scripts.pory"
	walk_left
# 358 "data/maps/PewterCity/scripts.pory"
	walk_left
# 359 "data/maps/PewterCity/scripts.pory"
	walk_left
# 360 "data/maps/PewterCity/scripts.pory"
	walk_down
# 361 "data/maps/PewterCity/scripts.pory"
	walk_down
# 362 "data/maps/PewterCity/scripts.pory"
	walk_down
# 363 "data/maps/PewterCity/scripts.pory"
	walk_down
# 364 "data/maps/PewterCity/scripts.pory"
	walk_down
# 365 "data/maps/PewterCity/scripts.pory"
	walk_down
# 366 "data/maps/PewterCity/scripts.pory"
	walk_right
# 367 "data/maps/PewterCity/scripts.pory"
	walk_right
# 368 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 369 "data/maps/PewterCity/scripts.pory"
	step_end

# 372 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth::
# 373 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 374 "data/maps/PewterCity/scripts.pory"
	step_end

# 377 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth::
# 378 "data/maps/PewterCity/scripts.pory"
	walk_left
# 379 "data/maps/PewterCity/scripts.pory"
	walk_left
# 380 "data/maps/PewterCity/scripts.pory"
	walk_left
# 381 "data/maps/PewterCity/scripts.pory"
	walk_left
# 382 "data/maps/PewterCity/scripts.pory"
	walk_left
# 383 "data/maps/PewterCity/scripts.pory"
	walk_left
# 384 "data/maps/PewterCity/scripts.pory"
	walk_left
# 385 "data/maps/PewterCity/scripts.pory"
	walk_left
# 386 "data/maps/PewterCity/scripts.pory"
	walk_left
# 387 "data/maps/PewterCity/scripts.pory"
	walk_left
# 388 "data/maps/PewterCity/scripts.pory"
	walk_left
# 389 "data/maps/PewterCity/scripts.pory"
	walk_left
# 390 "data/maps/PewterCity/scripts.pory"
	walk_left
# 391 "data/maps/PewterCity/scripts.pory"
	walk_left
# 392 "data/maps/PewterCity/scripts.pory"
	walk_left
# 393 "data/maps/PewterCity/scripts.pory"
	walk_left
# 394 "data/maps/PewterCity/scripts.pory"
	walk_left
# 395 "data/maps/PewterCity/scripts.pory"
	walk_left
# 396 "data/maps/PewterCity/scripts.pory"
	walk_left
# 397 "data/maps/PewterCity/scripts.pory"
	walk_up
# 398 "data/maps/PewterCity/scripts.pory"
	walk_up
# 399 "data/maps/PewterCity/scripts.pory"
	walk_up
# 400 "data/maps/PewterCity/scripts.pory"
	walk_up
# 401 "data/maps/PewterCity/scripts.pory"
	walk_up
# 402 "data/maps/PewterCity/scripts.pory"
	walk_up
# 403 "data/maps/PewterCity/scripts.pory"
	walk_up
# 404 "data/maps/PewterCity/scripts.pory"
	walk_left
# 405 "data/maps/PewterCity/scripts.pory"
	walk_left
# 406 "data/maps/PewterCity/scripts.pory"
	walk_left
# 407 "data/maps/PewterCity/scripts.pory"
	walk_left
# 408 "data/maps/PewterCity/scripts.pory"
	walk_left
# 409 "data/maps/PewterCity/scripts.pory"
	walk_left
# 410 "data/maps/PewterCity/scripts.pory"
	walk_left
# 411 "data/maps/PewterCity/scripts.pory"
	walk_left
# 412 "data/maps/PewterCity/scripts.pory"
	walk_left
# 413 "data/maps/PewterCity/scripts.pory"
	walk_left
# 414 "data/maps/PewterCity/scripts.pory"
	walk_down
# 415 "data/maps/PewterCity/scripts.pory"
	walk_down
# 416 "data/maps/PewterCity/scripts.pory"
	walk_down
# 417 "data/maps/PewterCity/scripts.pory"
	walk_down
# 418 "data/maps/PewterCity/scripts.pory"
	walk_down
# 419 "data/maps/PewterCity/scripts.pory"
	walk_down
# 420 "data/maps/PewterCity/scripts.pory"
	walk_right
# 421 "data/maps/PewterCity/scripts.pory"
	walk_right
# 422 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 423 "data/maps/PewterCity/scripts.pory"
	step_end

# 426 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GymGuideExit::
# 427 "data/maps/PewterCity/scripts.pory"
	walk_down
# 428 "data/maps/PewterCity/scripts.pory"
	walk_left
# 429 "data/maps/PewterCity/scripts.pory"
	walk_left
# 430 "data/maps/PewterCity/scripts.pory"
	walk_left
# 431 "data/maps/PewterCity/scripts.pory"
	walk_left
# 432 "data/maps/PewterCity/scripts.pory"
	walk_left
# 433 "data/maps/PewterCity/scripts.pory"
	walk_left
# 434 "data/maps/PewterCity/scripts.pory"
	walk_left
# 435 "data/maps/PewterCity/scripts.pory"
	walk_left
# 436 "data/maps/PewterCity/scripts.pory"
	walk_left
# 437 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_GymGuideTriggerTop::
# 441 "data/maps/PewterCity/scripts.pory"
	lockall
# 442 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 443 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerMid::
# 448 "data/maps/PewterCity/scripts.pory"
	lockall
# 449 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 450 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerBottom::
# 455 "data/maps/PewterCity/scripts.pory"
	lockall
# 456 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 457 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerRight::
# 463 "data/maps/PewterCity/scripts.pory"
	lockall
# 464 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 465 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTrigger::
# 470 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 471 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 472 "data/maps/PewterCity/scripts.pory"
	closemessage
# 473 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 474 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 475 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 476 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 477 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 478 "data/maps/PewterCity/scripts.pory"
	closemessage
# 479 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 480 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 481 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 482 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 483 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 484 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_WalkToGymTop::
# 489 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 490 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 491 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 492 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 493 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymMid::
# 498 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 499 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 501 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 502 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymBottom::
# 507 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 508 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 510 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 511 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymRight::
# 517 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 518 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 520 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 521 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 525 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop::
# 526 "data/maps/PewterCity/scripts.pory"
	walk_left
# 527 "data/maps/PewterCity/scripts.pory"
	walk_left
# 528 "data/maps/PewterCity/scripts.pory"
	walk_left
# 529 "data/maps/PewterCity/scripts.pory"
	walk_left
# 530 "data/maps/PewterCity/scripts.pory"
	walk_up
# 531 "data/maps/PewterCity/scripts.pory"
	walk_left
# 532 "data/maps/PewterCity/scripts.pory"
	walk_left
# 533 "data/maps/PewterCity/scripts.pory"
	walk_left
# 534 "data/maps/PewterCity/scripts.pory"
	walk_left
# 535 "data/maps/PewterCity/scripts.pory"
	walk_left
# 536 "data/maps/PewterCity/scripts.pory"
	walk_left
# 537 "data/maps/PewterCity/scripts.pory"
	walk_left
# 538 "data/maps/PewterCity/scripts.pory"
	walk_left
# 539 "data/maps/PewterCity/scripts.pory"
	walk_left
# 540 "data/maps/PewterCity/scripts.pory"
	walk_left
# 541 "data/maps/PewterCity/scripts.pory"
	walk_left
# 542 "data/maps/PewterCity/scripts.pory"
	walk_left
# 543 "data/maps/PewterCity/scripts.pory"
	walk_left
# 544 "data/maps/PewterCity/scripts.pory"
	walk_left
# 545 "data/maps/PewterCity/scripts.pory"
	walk_left
# 546 "data/maps/PewterCity/scripts.pory"
	walk_up
# 547 "data/maps/PewterCity/scripts.pory"
	walk_up
# 548 "data/maps/PewterCity/scripts.pory"
	walk_up
# 549 "data/maps/PewterCity/scripts.pory"
	walk_up
# 550 "data/maps/PewterCity/scripts.pory"
	walk_up
# 551 "data/maps/PewterCity/scripts.pory"
	walk_up
# 552 "data/maps/PewterCity/scripts.pory"
	walk_up
# 553 "data/maps/PewterCity/scripts.pory"
	walk_up
# 554 "data/maps/PewterCity/scripts.pory"
	walk_up
# 555 "data/maps/PewterCity/scripts.pory"
	walk_up
# 556 "data/maps/PewterCity/scripts.pory"
	walk_left
# 557 "data/maps/PewterCity/scripts.pory"
	walk_left
# 558 "data/maps/PewterCity/scripts.pory"
	walk_left
# 559 "data/maps/PewterCity/scripts.pory"
	walk_left
# 560 "data/maps/PewterCity/scripts.pory"
	walk_left
# 561 "data/maps/PewterCity/scripts.pory"
	walk_left
# 562 "data/maps/PewterCity/scripts.pory"
	walk_left
# 563 "data/maps/PewterCity/scripts.pory"
	walk_left
# 564 "data/maps/PewterCity/scripts.pory"
	walk_left
# 565 "data/maps/PewterCity/scripts.pory"
	walk_left
# 566 "data/maps/PewterCity/scripts.pory"
	walk_left
# 567 "data/maps/PewterCity/scripts.pory"
	walk_left
# 568 "data/maps/PewterCity/scripts.pory"
	walk_left
# 569 "data/maps/PewterCity/scripts.pory"
	walk_left
# 570 "data/maps/PewterCity/scripts.pory"
	walk_left
# 571 "data/maps/PewterCity/scripts.pory"
	walk_left
# 572 "data/maps/PewterCity/scripts.pory"
	walk_down
# 573 "data/maps/PewterCity/scripts.pory"
	walk_down
# 574 "data/maps/PewterCity/scripts.pory"
	walk_down
# 575 "data/maps/PewterCity/scripts.pory"
	walk_down
# 576 "data/maps/PewterCity/scripts.pory"
	walk_down
# 577 "data/maps/PewterCity/scripts.pory"
	walk_down
# 578 "data/maps/PewterCity/scripts.pory"
	walk_down
# 579 "data/maps/PewterCity/scripts.pory"
	walk_down
# 580 "data/maps/PewterCity/scripts.pory"
	walk_right
# 581 "data/maps/PewterCity/scripts.pory"
	walk_right
# 582 "data/maps/PewterCity/scripts.pory"
	walk_right
# 583 "data/maps/PewterCity/scripts.pory"
	walk_right
# 584 "data/maps/PewterCity/scripts.pory"
	walk_right
# 585 "data/maps/PewterCity/scripts.pory"
	walk_right
# 586 "data/maps/PewterCity/scripts.pory"
	walk_right
# 587 "data/maps/PewterCity/scripts.pory"
	walk_right
# 588 "data/maps/PewterCity/scripts.pory"
	step_end

# 591 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid::
# 592 "data/maps/PewterCity/scripts.pory"
	walk_up
# 593 "data/maps/PewterCity/scripts.pory"
	walk_left
# 594 "data/maps/PewterCity/scripts.pory"
	walk_left
# 595 "data/maps/PewterCity/scripts.pory"
	walk_left
# 596 "data/maps/PewterCity/scripts.pory"
	walk_left
# 597 "data/maps/PewterCity/scripts.pory"
	walk_up
# 598 "data/maps/PewterCity/scripts.pory"
	walk_left
# 599 "data/maps/PewterCity/scripts.pory"
	walk_left
# 600 "data/maps/PewterCity/scripts.pory"
	walk_left
# 601 "data/maps/PewterCity/scripts.pory"
	walk_left
# 602 "data/maps/PewterCity/scripts.pory"
	walk_left
# 603 "data/maps/PewterCity/scripts.pory"
	walk_left
# 604 "data/maps/PewterCity/scripts.pory"
	walk_left
# 605 "data/maps/PewterCity/scripts.pory"
	walk_left
# 606 "data/maps/PewterCity/scripts.pory"
	walk_left
# 607 "data/maps/PewterCity/scripts.pory"
	walk_left
# 608 "data/maps/PewterCity/scripts.pory"
	walk_left
# 609 "data/maps/PewterCity/scripts.pory"
	walk_left
# 610 "data/maps/PewterCity/scripts.pory"
	walk_left
# 611 "data/maps/PewterCity/scripts.pory"
	walk_left
# 612 "data/maps/PewterCity/scripts.pory"
	walk_left
# 613 "data/maps/PewterCity/scripts.pory"
	walk_up
# 614 "data/maps/PewterCity/scripts.pory"
	walk_up
# 615 "data/maps/PewterCity/scripts.pory"
	walk_up
# 616 "data/maps/PewterCity/scripts.pory"
	walk_up
# 617 "data/maps/PewterCity/scripts.pory"
	walk_up
# 618 "data/maps/PewterCity/scripts.pory"
	walk_up
# 619 "data/maps/PewterCity/scripts.pory"
	walk_up
# 620 "data/maps/PewterCity/scripts.pory"
	walk_up
# 621 "data/maps/PewterCity/scripts.pory"
	walk_up
# 622 "data/maps/PewterCity/scripts.pory"
	walk_up
# 623 "data/maps/PewterCity/scripts.pory"
	walk_left
# 624 "data/maps/PewterCity/scripts.pory"
	walk_left
# 625 "data/maps/PewterCity/scripts.pory"
	walk_left
# 626 "data/maps/PewterCity/scripts.pory"
	walk_left
# 627 "data/maps/PewterCity/scripts.pory"
	walk_left
# 628 "data/maps/PewterCity/scripts.pory"
	walk_left
# 629 "data/maps/PewterCity/scripts.pory"
	walk_left
# 630 "data/maps/PewterCity/scripts.pory"
	walk_left
# 631 "data/maps/PewterCity/scripts.pory"
	walk_left
# 632 "data/maps/PewterCity/scripts.pory"
	walk_left
# 633 "data/maps/PewterCity/scripts.pory"
	walk_left
# 634 "data/maps/PewterCity/scripts.pory"
	walk_left
# 635 "data/maps/PewterCity/scripts.pory"
	walk_left
# 636 "data/maps/PewterCity/scripts.pory"
	walk_left
# 637 "data/maps/PewterCity/scripts.pory"
	walk_left
# 638 "data/maps/PewterCity/scripts.pory"
	walk_left
# 639 "data/maps/PewterCity/scripts.pory"
	walk_down
# 640 "data/maps/PewterCity/scripts.pory"
	walk_down
# 641 "data/maps/PewterCity/scripts.pory"
	walk_down
# 642 "data/maps/PewterCity/scripts.pory"
	walk_down
# 643 "data/maps/PewterCity/scripts.pory"
	walk_down
# 644 "data/maps/PewterCity/scripts.pory"
	walk_down
# 645 "data/maps/PewterCity/scripts.pory"
	walk_down
# 646 "data/maps/PewterCity/scripts.pory"
	walk_down
# 647 "data/maps/PewterCity/scripts.pory"
	walk_right
# 648 "data/maps/PewterCity/scripts.pory"
	walk_right
# 649 "data/maps/PewterCity/scripts.pory"
	walk_right
# 650 "data/maps/PewterCity/scripts.pory"
	walk_right
# 651 "data/maps/PewterCity/scripts.pory"
	walk_right
# 652 "data/maps/PewterCity/scripts.pory"
	walk_right
# 653 "data/maps/PewterCity/scripts.pory"
	walk_right
# 654 "data/maps/PewterCity/scripts.pory"
	walk_right
# 655 "data/maps/PewterCity/scripts.pory"
	step_end

# 658 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom::
# 659 "data/maps/PewterCity/scripts.pory"
	walk_up
# 660 "data/maps/PewterCity/scripts.pory"
	walk_up
# 661 "data/maps/PewterCity/scripts.pory"
	walk_left
# 662 "data/maps/PewterCity/scripts.pory"
	walk_left
# 663 "data/maps/PewterCity/scripts.pory"
	walk_left
# 664 "data/maps/PewterCity/scripts.pory"
	walk_left
# 665 "data/maps/PewterCity/scripts.pory"
	walk_up
# 666 "data/maps/PewterCity/scripts.pory"
	walk_left
# 667 "data/maps/PewterCity/scripts.pory"
	walk_left
# 668 "data/maps/PewterCity/scripts.pory"
	walk_left
# 669 "data/maps/PewterCity/scripts.pory"
	walk_left
# 670 "data/maps/PewterCity/scripts.pory"
	walk_left
# 671 "data/maps/PewterCity/scripts.pory"
	walk_left
# 672 "data/maps/PewterCity/scripts.pory"
	walk_left
# 673 "data/maps/PewterCity/scripts.pory"
	walk_left
# 674 "data/maps/PewterCity/scripts.pory"
	walk_left
# 675 "data/maps/PewterCity/scripts.pory"
	walk_left
# 676 "data/maps/PewterCity/scripts.pory"
	walk_left
# 677 "data/maps/PewterCity/scripts.pory"
	walk_left
# 678 "data/maps/PewterCity/scripts.pory"
	walk_left
# 679 "data/maps/PewterCity/scripts.pory"
	walk_left
# 680 "data/maps/PewterCity/scripts.pory"
	walk_left
# 681 "data/maps/PewterCity/scripts.pory"
	walk_up
# 682 "data/maps/PewterCity/scripts.pory"
	walk_up
# 683 "data/maps/PewterCity/scripts.pory"
	walk_up
# 684 "data/maps/PewterCity/scripts.pory"
	walk_up
# 685 "data/maps/PewterCity/scripts.pory"
	walk_up
# 686 "data/maps/PewterCity/scripts.pory"
	walk_up
# 687 "data/maps/PewterCity/scripts.pory"
	walk_up
# 688 "data/maps/PewterCity/scripts.pory"
	walk_up
# 689 "data/maps/PewterCity/scripts.pory"
	walk_up
# 690 "data/maps/PewterCity/scripts.pory"
	walk_up
# 691 "data/maps/PewterCity/scripts.pory"
	walk_left
# 692 "data/maps/PewterCity/scripts.pory"
	walk_left
# 693 "data/maps/PewterCity/scripts.pory"
	walk_left
# 694 "data/maps/PewterCity/scripts.pory"
	walk_left
# 695 "data/maps/PewterCity/scripts.pory"
	walk_left
# 696 "data/maps/PewterCity/scripts.pory"
	walk_left
# 697 "data/maps/PewterCity/scripts.pory"
	walk_left
# 698 "data/maps/PewterCity/scripts.pory"
	walk_left
# 699 "data/maps/PewterCity/scripts.pory"
	walk_left
# 700 "data/maps/PewterCity/scripts.pory"
	walk_left
# 701 "data/maps/PewterCity/scripts.pory"
	walk_left
# 702 "data/maps/PewterCity/scripts.pory"
	walk_left
# 703 "data/maps/PewterCity/scripts.pory"
	walk_left
# 704 "data/maps/PewterCity/scripts.pory"
	walk_left
# 705 "data/maps/PewterCity/scripts.pory"
	walk_left
# 706 "data/maps/PewterCity/scripts.pory"
	walk_left
# 707 "data/maps/PewterCity/scripts.pory"
	walk_down
# 708 "data/maps/PewterCity/scripts.pory"
	walk_down
# 709 "data/maps/PewterCity/scripts.pory"
	walk_down
# 710 "data/maps/PewterCity/scripts.pory"
	walk_down
# 711 "data/maps/PewterCity/scripts.pory"
	walk_down
# 712 "data/maps/PewterCity/scripts.pory"
	walk_down
# 713 "data/maps/PewterCity/scripts.pory"
	walk_down
# 714 "data/maps/PewterCity/scripts.pory"
	walk_down
# 715 "data/maps/PewterCity/scripts.pory"
	walk_right
# 716 "data/maps/PewterCity/scripts.pory"
	walk_right
# 717 "data/maps/PewterCity/scripts.pory"
	walk_right
# 718 "data/maps/PewterCity/scripts.pory"
	walk_right
# 719 "data/maps/PewterCity/scripts.pory"
	walk_right
# 720 "data/maps/PewterCity/scripts.pory"
	walk_right
# 721 "data/maps/PewterCity/scripts.pory"
	walk_right
# 722 "data/maps/PewterCity/scripts.pory"
	walk_right
# 723 "data/maps/PewterCity/scripts.pory"
	step_end

# 726 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight::
# 727 "data/maps/PewterCity/scripts.pory"
	walk_left
# 728 "data/maps/PewterCity/scripts.pory"
	walk_left
# 729 "data/maps/PewterCity/scripts.pory"
	walk_left
# 730 "data/maps/PewterCity/scripts.pory"
	walk_left
# 731 "data/maps/PewterCity/scripts.pory"
	walk_up
# 732 "data/maps/PewterCity/scripts.pory"
	walk_left
# 733 "data/maps/PewterCity/scripts.pory"
	walk_left
# 734 "data/maps/PewterCity/scripts.pory"
	walk_left
# 735 "data/maps/PewterCity/scripts.pory"
	walk_up
# 736 "data/maps/PewterCity/scripts.pory"
	walk_up
# 737 "data/maps/PewterCity/scripts.pory"
	walk_left
# 738 "data/maps/PewterCity/scripts.pory"
	walk_left
# 739 "data/maps/PewterCity/scripts.pory"
	walk_left
# 740 "data/maps/PewterCity/scripts.pory"
	walk_left
# 741 "data/maps/PewterCity/scripts.pory"
	walk_left
# 742 "data/maps/PewterCity/scripts.pory"
	walk_left
# 743 "data/maps/PewterCity/scripts.pory"
	walk_left
# 744 "data/maps/PewterCity/scripts.pory"
	walk_left
# 745 "data/maps/PewterCity/scripts.pory"
	walk_left
# 746 "data/maps/PewterCity/scripts.pory"
	walk_left
# 747 "data/maps/PewterCity/scripts.pory"
	walk_left
# 748 "data/maps/PewterCity/scripts.pory"
	walk_left
# 749 "data/maps/PewterCity/scripts.pory"
	walk_left
# 750 "data/maps/PewterCity/scripts.pory"
	walk_left
# 751 "data/maps/PewterCity/scripts.pory"
	walk_left
# 752 "data/maps/PewterCity/scripts.pory"
	walk_up
# 753 "data/maps/PewterCity/scripts.pory"
	walk_up
# 754 "data/maps/PewterCity/scripts.pory"
	walk_up
# 755 "data/maps/PewterCity/scripts.pory"
	walk_up
# 756 "data/maps/PewterCity/scripts.pory"
	walk_up
# 757 "data/maps/PewterCity/scripts.pory"
	walk_up
# 758 "data/maps/PewterCity/scripts.pory"
	walk_up
# 759 "data/maps/PewterCity/scripts.pory"
	walk_left
# 760 "data/maps/PewterCity/scripts.pory"
	walk_left
# 761 "data/maps/PewterCity/scripts.pory"
	walk_left
# 762 "data/maps/PewterCity/scripts.pory"
	walk_left
# 763 "data/maps/PewterCity/scripts.pory"
	walk_left
# 764 "data/maps/PewterCity/scripts.pory"
	walk_left
# 765 "data/maps/PewterCity/scripts.pory"
	walk_left
# 766 "data/maps/PewterCity/scripts.pory"
	walk_left
# 767 "data/maps/PewterCity/scripts.pory"
	walk_left
# 768 "data/maps/PewterCity/scripts.pory"
	walk_left
# 769 "data/maps/PewterCity/scripts.pory"
	walk_down
# 770 "data/maps/PewterCity/scripts.pory"
	walk_down
# 771 "data/maps/PewterCity/scripts.pory"
	walk_down
# 772 "data/maps/PewterCity/scripts.pory"
	walk_down
# 773 "data/maps/PewterCity/scripts.pory"
	walk_down
# 774 "data/maps/PewterCity/scripts.pory"
	walk_down
# 775 "data/maps/PewterCity/scripts.pory"
	walk_right
# 776 "data/maps/PewterCity/scripts.pory"
	step_end

# 779 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop::
# 780 "data/maps/PewterCity/scripts.pory"
	walk_left
# 781 "data/maps/PewterCity/scripts.pory"
	walk_down
# 782 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_right
# 783 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 784 "data/maps/PewterCity/scripts.pory"
	step_end

# 787 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid::
# 788 "data/maps/PewterCity/scripts.pory"
	walk_down
# 789 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 790 "data/maps/PewterCity/scripts.pory"
	step_end

# 793 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom::
# 794 "data/maps/PewterCity/scripts.pory"
	walk_down
# 795 "data/maps/PewterCity/scripts.pory"
	walk_down
# 796 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 797 "data/maps/PewterCity/scripts.pory"
	step_end

# 800 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight::
# 801 "data/maps/PewterCity/scripts.pory"
	walk_down
# 802 "data/maps/PewterCity/scripts.pory"
	walk_down
# 803 "data/maps/PewterCity/scripts.pory"
	walk_right
# 804 "data/maps/PewterCity/scripts.pory"
	walk_down
# 805 "data/maps/PewterCity/scripts.pory"
	walk_right
# 806 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 807 "data/maps/PewterCity/scripts.pory"
	step_end

# 810 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop::
# 811 "data/maps/PewterCity/scripts.pory"
	walk_left
# 812 "data/maps/PewterCity/scripts.pory"
	walk_left
# 813 "data/maps/PewterCity/scripts.pory"
	walk_left
# 814 "data/maps/PewterCity/scripts.pory"
	walk_up
# 815 "data/maps/PewterCity/scripts.pory"
	walk_left
# 816 "data/maps/PewterCity/scripts.pory"
	walk_left
# 817 "data/maps/PewterCity/scripts.pory"
	walk_left
# 818 "data/maps/PewterCity/scripts.pory"
	walk_left
# 819 "data/maps/PewterCity/scripts.pory"
	walk_left
# 820 "data/maps/PewterCity/scripts.pory"
	walk_left
# 821 "data/maps/PewterCity/scripts.pory"
	walk_left
# 822 "data/maps/PewterCity/scripts.pory"
	walk_left
# 823 "data/maps/PewterCity/scripts.pory"
	walk_left
# 824 "data/maps/PewterCity/scripts.pory"
	walk_left
# 825 "data/maps/PewterCity/scripts.pory"
	walk_left
# 826 "data/maps/PewterCity/scripts.pory"
	walk_left
# 827 "data/maps/PewterCity/scripts.pory"
	walk_left
# 828 "data/maps/PewterCity/scripts.pory"
	walk_left
# 829 "data/maps/PewterCity/scripts.pory"
	walk_left
# 830 "data/maps/PewterCity/scripts.pory"
	walk_up
# 831 "data/maps/PewterCity/scripts.pory"
	walk_up
# 832 "data/maps/PewterCity/scripts.pory"
	walk_up
# 833 "data/maps/PewterCity/scripts.pory"
	walk_up
# 834 "data/maps/PewterCity/scripts.pory"
	walk_up
# 835 "data/maps/PewterCity/scripts.pory"
	walk_up
# 836 "data/maps/PewterCity/scripts.pory"
	walk_up
# 837 "data/maps/PewterCity/scripts.pory"
	walk_up
# 838 "data/maps/PewterCity/scripts.pory"
	walk_up
# 839 "data/maps/PewterCity/scripts.pory"
	walk_up
# 840 "data/maps/PewterCity/scripts.pory"
	walk_left
# 841 "data/maps/PewterCity/scripts.pory"
	walk_left
# 842 "data/maps/PewterCity/scripts.pory"
	walk_left
# 843 "data/maps/PewterCity/scripts.pory"
	walk_left
# 844 "data/maps/PewterCity/scripts.pory"
	walk_left
# 845 "data/maps/PewterCity/scripts.pory"
	walk_left
# 846 "data/maps/PewterCity/scripts.pory"
	walk_left
# 847 "data/maps/PewterCity/scripts.pory"
	walk_left
# 848 "data/maps/PewterCity/scripts.pory"
	walk_left
# 849 "data/maps/PewterCity/scripts.pory"
	walk_left
# 850 "data/maps/PewterCity/scripts.pory"
	walk_left
# 851 "data/maps/PewterCity/scripts.pory"
	walk_left
# 852 "data/maps/PewterCity/scripts.pory"
	walk_left
# 853 "data/maps/PewterCity/scripts.pory"
	walk_left
# 854 "data/maps/PewterCity/scripts.pory"
	walk_left
# 855 "data/maps/PewterCity/scripts.pory"
	walk_left
# 856 "data/maps/PewterCity/scripts.pory"
	walk_down
# 857 "data/maps/PewterCity/scripts.pory"
	walk_down
# 858 "data/maps/PewterCity/scripts.pory"
	walk_down
# 859 "data/maps/PewterCity/scripts.pory"
	walk_down
# 860 "data/maps/PewterCity/scripts.pory"
	walk_down
# 861 "data/maps/PewterCity/scripts.pory"
	walk_down
# 862 "data/maps/PewterCity/scripts.pory"
	walk_down
# 863 "data/maps/PewterCity/scripts.pory"
	walk_down
# 864 "data/maps/PewterCity/scripts.pory"
	walk_right
# 865 "data/maps/PewterCity/scripts.pory"
	walk_right
# 866 "data/maps/PewterCity/scripts.pory"
	walk_right
# 867 "data/maps/PewterCity/scripts.pory"
	walk_right
# 868 "data/maps/PewterCity/scripts.pory"
	walk_right
# 869 "data/maps/PewterCity/scripts.pory"
	walk_right
# 870 "data/maps/PewterCity/scripts.pory"
	walk_right
# 871 "data/maps/PewterCity/scripts.pory"
	walk_right
# 872 "data/maps/PewterCity/scripts.pory"
	walk_right
# 873 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 874 "data/maps/PewterCity/scripts.pory"
	step_end

# 877 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid::
# 878 "data/maps/PewterCity/scripts.pory"
	walk_left
# 879 "data/maps/PewterCity/scripts.pory"
	walk_left
# 880 "data/maps/PewterCity/scripts.pory"
	walk_left
# 881 "data/maps/PewterCity/scripts.pory"
	walk_left
# 882 "data/maps/PewterCity/scripts.pory"
	walk_up
# 883 "data/maps/PewterCity/scripts.pory"
	walk_left
# 884 "data/maps/PewterCity/scripts.pory"
	walk_left
# 885 "data/maps/PewterCity/scripts.pory"
	walk_left
# 886 "data/maps/PewterCity/scripts.pory"
	walk_left
# 887 "data/maps/PewterCity/scripts.pory"
	walk_left
# 888 "data/maps/PewterCity/scripts.pory"
	walk_left
# 889 "data/maps/PewterCity/scripts.pory"
	walk_left
# 890 "data/maps/PewterCity/scripts.pory"
	walk_left
# 891 "data/maps/PewterCity/scripts.pory"
	walk_left
# 892 "data/maps/PewterCity/scripts.pory"
	walk_left
# 893 "data/maps/PewterCity/scripts.pory"
	walk_left
# 894 "data/maps/PewterCity/scripts.pory"
	walk_left
# 895 "data/maps/PewterCity/scripts.pory"
	walk_left
# 896 "data/maps/PewterCity/scripts.pory"
	walk_left
# 897 "data/maps/PewterCity/scripts.pory"
	walk_left
# 898 "data/maps/PewterCity/scripts.pory"
	walk_up
# 899 "data/maps/PewterCity/scripts.pory"
	walk_up
# 900 "data/maps/PewterCity/scripts.pory"
	walk_up
# 901 "data/maps/PewterCity/scripts.pory"
	walk_up
# 902 "data/maps/PewterCity/scripts.pory"
	walk_up
# 903 "data/maps/PewterCity/scripts.pory"
	walk_up
# 904 "data/maps/PewterCity/scripts.pory"
	walk_up
# 905 "data/maps/PewterCity/scripts.pory"
	walk_up
# 906 "data/maps/PewterCity/scripts.pory"
	walk_up
# 907 "data/maps/PewterCity/scripts.pory"
	walk_up
# 908 "data/maps/PewterCity/scripts.pory"
	walk_left
# 909 "data/maps/PewterCity/scripts.pory"
	walk_left
# 910 "data/maps/PewterCity/scripts.pory"
	walk_left
# 911 "data/maps/PewterCity/scripts.pory"
	walk_left
# 912 "data/maps/PewterCity/scripts.pory"
	walk_left
# 913 "data/maps/PewterCity/scripts.pory"
	walk_left
# 914 "data/maps/PewterCity/scripts.pory"
	walk_left
# 915 "data/maps/PewterCity/scripts.pory"
	walk_left
# 916 "data/maps/PewterCity/scripts.pory"
	walk_left
# 917 "data/maps/PewterCity/scripts.pory"
	walk_left
# 918 "data/maps/PewterCity/scripts.pory"
	walk_left
# 919 "data/maps/PewterCity/scripts.pory"
	walk_left
# 920 "data/maps/PewterCity/scripts.pory"
	walk_left
# 921 "data/maps/PewterCity/scripts.pory"
	walk_left
# 922 "data/maps/PewterCity/scripts.pory"
	walk_left
# 923 "data/maps/PewterCity/scripts.pory"
	walk_left
# 924 "data/maps/PewterCity/scripts.pory"
	walk_down
# 925 "data/maps/PewterCity/scripts.pory"
	walk_down
# 926 "data/maps/PewterCity/scripts.pory"
	walk_down
# 927 "data/maps/PewterCity/scripts.pory"
	walk_down
# 928 "data/maps/PewterCity/scripts.pory"
	walk_down
# 929 "data/maps/PewterCity/scripts.pory"
	walk_down
# 930 "data/maps/PewterCity/scripts.pory"
	walk_down
# 931 "data/maps/PewterCity/scripts.pory"
	walk_down
# 932 "data/maps/PewterCity/scripts.pory"
	walk_right
# 933 "data/maps/PewterCity/scripts.pory"
	walk_right
# 934 "data/maps/PewterCity/scripts.pory"
	walk_right
# 935 "data/maps/PewterCity/scripts.pory"
	walk_right
# 936 "data/maps/PewterCity/scripts.pory"
	walk_right
# 937 "data/maps/PewterCity/scripts.pory"
	walk_right
# 938 "data/maps/PewterCity/scripts.pory"
	walk_right
# 939 "data/maps/PewterCity/scripts.pory"
	walk_right
# 940 "data/maps/PewterCity/scripts.pory"
	walk_right
# 941 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 942 "data/maps/PewterCity/scripts.pory"
	step_end

# 945 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom::
# 946 "data/maps/PewterCity/scripts.pory"
	walk_up
# 947 "data/maps/PewterCity/scripts.pory"
	walk_left
# 948 "data/maps/PewterCity/scripts.pory"
	walk_left
# 949 "data/maps/PewterCity/scripts.pory"
	walk_left
# 950 "data/maps/PewterCity/scripts.pory"
	walk_left
# 951 "data/maps/PewterCity/scripts.pory"
	walk_up
# 952 "data/maps/PewterCity/scripts.pory"
	walk_left
# 953 "data/maps/PewterCity/scripts.pory"
	walk_left
# 954 "data/maps/PewterCity/scripts.pory"
	walk_left
# 955 "data/maps/PewterCity/scripts.pory"
	walk_left
# 956 "data/maps/PewterCity/scripts.pory"
	walk_left
# 957 "data/maps/PewterCity/scripts.pory"
	walk_left
# 958 "data/maps/PewterCity/scripts.pory"
	walk_left
# 959 "data/maps/PewterCity/scripts.pory"
	walk_left
# 960 "data/maps/PewterCity/scripts.pory"
	walk_left
# 961 "data/maps/PewterCity/scripts.pory"
	walk_left
# 962 "data/maps/PewterCity/scripts.pory"
	walk_left
# 963 "data/maps/PewterCity/scripts.pory"
	walk_left
# 964 "data/maps/PewterCity/scripts.pory"
	walk_left
# 965 "data/maps/PewterCity/scripts.pory"
	walk_left
# 966 "data/maps/PewterCity/scripts.pory"
	walk_left
# 967 "data/maps/PewterCity/scripts.pory"
	walk_up
# 968 "data/maps/PewterCity/scripts.pory"
	walk_up
# 969 "data/maps/PewterCity/scripts.pory"
	walk_up
# 970 "data/maps/PewterCity/scripts.pory"
	walk_up
# 971 "data/maps/PewterCity/scripts.pory"
	walk_up
# 972 "data/maps/PewterCity/scripts.pory"
	walk_up
# 973 "data/maps/PewterCity/scripts.pory"
	walk_up
# 974 "data/maps/PewterCity/scripts.pory"
	walk_up
# 975 "data/maps/PewterCity/scripts.pory"
	walk_up
# 976 "data/maps/PewterCity/scripts.pory"
	walk_up
# 977 "data/maps/PewterCity/scripts.pory"
	walk_left
# 978 "data/maps/PewterCity/scripts.pory"
	walk_left
# 979 "data/maps/PewterCity/scripts.pory"
	walk_left
# 980 "data/maps/PewterCity/scripts.pory"
	walk_left
# 981 "data/maps/PewterCity/scripts.pory"
	walk_left
# 982 "data/maps/PewterCity/scripts.pory"
	walk_left
# 983 "data/maps/PewterCity/scripts.pory"
	walk_left
# 984 "data/maps/PewterCity/scripts.pory"
	walk_left
# 985 "data/maps/PewterCity/scripts.pory"
	walk_left
# 986 "data/maps/PewterCity/scripts.pory"
	walk_left
# 987 "data/maps/PewterCity/scripts.pory"
	walk_left
# 988 "data/maps/PewterCity/scripts.pory"
	walk_left
# 989 "data/maps/PewterCity/scripts.pory"
	walk_left
# 990 "data/maps/PewterCity/scripts.pory"
	walk_left
# 991 "data/maps/PewterCity/scripts.pory"
	walk_left
# 992 "data/maps/PewterCity/scripts.pory"
	walk_left
# 993 "data/maps/PewterCity/scripts.pory"
	walk_down
# 994 "data/maps/PewterCity/scripts.pory"
	walk_down
# 995 "data/maps/PewterCity/scripts.pory"
	walk_down
# 996 "data/maps/PewterCity/scripts.pory"
	walk_down
# 997 "data/maps/PewterCity/scripts.pory"
	walk_down
# 998 "data/maps/PewterCity/scripts.pory"
	walk_down
# 999 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1000 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1001 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1002 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1003 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1004 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1005 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1006 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1007 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1008 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1009 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1010 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 1011 "data/maps/PewterCity/scripts.pory"
	step_end

# 1014 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight::
# 1015 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1016 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1017 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1018 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1019 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1020 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1021 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1022 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1023 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1024 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1025 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1026 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1027 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1028 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1029 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1030 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1031 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1032 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1033 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1034 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1035 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1036 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1037 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1038 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1039 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1040 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1041 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1042 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1043 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1044 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1045 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1046 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1047 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1048 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1049 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1050 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1051 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1052 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1053 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1054 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1055 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1056 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1057 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1058 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1059 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1060 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1061 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1062 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1063 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1064 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 1065 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_Lass::
# 1069 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
	end


PewterCity_EventScript_MuseumGuide::
# 1074 "data/maps/PewterCity/scripts.pory"
	lock
# 1075 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1076 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 1077 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 1078 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 1079 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1080 "data/maps/PewterCity/scripts.pory"
	delay 10
# 1081 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 1082 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 1083 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 1084 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 1085 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 1086 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 1087 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1088 "data/maps/PewterCity/scripts.pory"
	delay 10
# 1089 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 1090 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1091 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 1092 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 1093 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 1094 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_LeadToMuseumNorth::
# 1099 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 1100 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 1101 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumSouth::
# 1106 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 1107 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 1108 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumWest::
# 1113 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 1114 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 1115 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumEast::
# 1120 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 1121 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 1122 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_CheckedOutMuseum::
# 1127 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 1128 "data/maps/PewterCity/scripts.pory"
	release
	end


# 1132 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth::
# 1133 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1134 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1135 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1136 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1137 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1138 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1139 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1140 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1141 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1142 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1143 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1144 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1145 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1146 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1147 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1148 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1149 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1150 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1151 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1152 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1153 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1154 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1155 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1156 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1157 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1158 "data/maps/PewterCity/scripts.pory"
	delay_8
# 1159 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1160 "data/maps/PewterCity/scripts.pory"
	step_end

# 1163 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth::
# 1164 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1165 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1166 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1167 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1168 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1169 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1170 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1171 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1172 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1173 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1174 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1175 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1176 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1177 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1178 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1179 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1180 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1181 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1182 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1183 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1184 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1185 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1186 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1187 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1188 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1189 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1190 "data/maps/PewterCity/scripts.pory"
	step_end

# 1193 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth::
# 1194 "data/maps/PewterCity/scripts.pory"
	delay_16
# 1195 "data/maps/PewterCity/scripts.pory"
	delay_16
# 1196 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1197 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1198 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1199 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1200 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1201 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1202 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1203 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1204 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1205 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1206 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1207 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1208 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1209 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1210 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1211 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1212 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1213 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1214 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1215 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1216 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1217 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1218 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1219 "data/maps/PewterCity/scripts.pory"
	delay_8
# 1220 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1221 "data/maps/PewterCity/scripts.pory"
	step_end

# 1224 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth::
# 1225 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1226 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1227 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1228 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1229 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1230 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1231 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1232 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1233 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1234 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1235 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1236 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1237 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1238 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1239 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1240 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1241 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1242 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1243 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1244 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1245 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1246 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1247 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1248 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1249 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1250 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1251 "data/maps/PewterCity/scripts.pory"
	step_end

# 1254 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest::
# 1255 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1256 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1257 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1258 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1259 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1260 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1261 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1262 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1263 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1264 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1265 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1266 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1267 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1268 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1269 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1270 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1271 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1272 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1273 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1274 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1275 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1276 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1277 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1278 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1279 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1280 "data/maps/PewterCity/scripts.pory"
	delay_8
# 1281 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1282 "data/maps/PewterCity/scripts.pory"
	step_end

# 1285 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest::
# 1286 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1287 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1288 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1289 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1290 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1291 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1292 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1293 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1294 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1295 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1296 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1297 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1298 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1299 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1300 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1301 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1302 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1303 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1304 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1305 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1306 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1307 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1308 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1309 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1310 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1311 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1312 "data/maps/PewterCity/scripts.pory"
	step_end

# 1315 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast::
# 1316 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1317 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1318 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1319 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1320 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1321 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1322 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1323 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1324 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1325 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1326 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1327 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1328 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1329 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1330 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1331 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1332 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1333 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1334 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1335 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1336 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1337 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1338 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1339 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1340 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1341 "data/maps/PewterCity/scripts.pory"
	delay_8
# 1342 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1343 "data/maps/PewterCity/scripts.pory"
	step_end

# 1346 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast::
# 1347 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1348 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1349 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1350 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1351 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1352 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1353 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1354 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1355 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1356 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1357 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1358 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1359 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1360 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1361 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1362 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1363 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1364 "data/maps/PewterCity/scripts.pory"
	walk_up
# 1365 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1366 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1367 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1368 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1369 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1370 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1371 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1372 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 1373 "data/maps/PewterCity/scripts.pory"
	step_end

# 1376 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_MuseumGuideExit::
# 1377 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1378 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1379 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1380 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1381 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1382 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1383 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1384 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1385 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1386 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1387 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1388 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1389 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1390 "data/maps/PewterCity/scripts.pory"
	walk_right
# 1391 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_FatMan::
# 1395 "data/maps/PewterCity/scripts.pory"
	lock
# 1396 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1397 "data/maps/PewterCity/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 1398 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 1399 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_BugCatcher::
# 1404 "data/maps/PewterCity/scripts.pory"
	lock
# 1405 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1406 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 1407 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 1408 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 1409 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_KnowWhatTheyreDoing::
# 1414 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 1415 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_TrainerTips::
# 1420 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
	end


PewterCity_EventScript_PoliceNotice::
# 1425 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
	end


PewterCity_EventScript_MuseumSign::
# 1430 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
	end


PewterCity_EventScript_GymSign::
# 1435 "data/maps/PewterCity/scripts.pory"
	lockall
# 1436 "data/maps/PewterCity/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 1437 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 1438 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_CitySign::
# 1443 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
	end


PewterCity_EventScript_RunningShoesAide::
# 1448 "data/maps/PewterCity/scripts.pory"
	lock
# 1449 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1450 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1451 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1452 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_RunningShoesAideTriggerTop::
# 1457 "data/maps/PewterCity/scripts.pory"
	lockall
# 1458 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1459 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1460 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerMid::
# 1465 "data/maps/PewterCity/scripts.pory"
	lockall
# 1466 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1467 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1468 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 1473 "data/maps/PewterCity/scripts.pory"
	lockall
# 1474 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 1475 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1476 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_AideGiveRunningShoes::
# 1481 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1482 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideNoticePlayer
# 1483 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideNoticePlayer
# 1484 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideNoticePlayer
# 1485 "data/maps/PewterCity/scripts.pory"
	waitse
# 1486 "data/maps/PewterCity/scripts.pory"
	playse SE_PIN
# 1487 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 1488 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1489 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 1490 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1491 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 1492 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideApproachPlayer0
# 1493 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideApproachPlayer1
# 1494 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideApproachPlayer2
# 1495 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideApproachPlayer3
# 1496 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 1497 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1498 "data/maps/PewterCity/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1499 "data/maps/PewterCity/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 1500 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 1501 "data/maps/PewterCity/scripts.pory"
	waitfanfare
# 1502 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 1503 "data/maps/PewterCity/scripts.pory"
	special DisableMsgBoxWalkaway
# 1504 "data/maps/PewterCity/scripts.pory"
	signmsg
# 1505 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 1506 "data/maps/PewterCity/scripts.pory"
	normalmsg
# 1507 "data/maps/PewterCity/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1508 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 1509 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1510 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideExit0
# 1511 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideExit1
# 1512 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideExit2
# 1513 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideExit3
# 1514 "data/maps/PewterCity/scripts.pory"
	delay 30
# 1515 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1516 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 1517 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1518 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 1519 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1520 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
	return


PewterCity_EventScript_AideNoticePlayer::
# 1525 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_WalkInPlaceFasterDown
# 1526 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer0::
# 1532 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1533 "data/maps/PewterCity/scripts.pory"
	delay 20
	return


PewterCity_EventScript_AideApproachPlayer1::
# 1538 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1539 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1540 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer2::
# 1545 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1546 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 1547 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1548 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1549 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer3::
# 1554 "data/maps/PewterCity/scripts.pory"
	closemessage
# 1555 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 1556 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1557 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1558 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit0::
# 1563 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit0
# 1564 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit1::
# 1569 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit1
# 1570 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit2::
# 1575 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit2
# 1576 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit3::
# 1581 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit3
# 1582 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 1586 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid::
# 1587 "data/maps/PewterCity/scripts.pory"
	delay_4
# 1588 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1589 "data/maps/PewterCity/scripts.pory"
	step_end

# 1592 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom::
# 1593 "data/maps/PewterCity/scripts.pory"
	delay_4
# 1594 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1595 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1596 "data/maps/PewterCity/scripts.pory"
	step_end

# 1599 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit0::
# 1600 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1601 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1602 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1603 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1604 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1605 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1606 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1607 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1608 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1609 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1610 "data/maps/PewterCity/scripts.pory"
	step_end

# 1613 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit1::
# 1614 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1615 "data/maps/PewterCity/scripts.pory"
	walk_down
# 1616 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1617 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1618 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1619 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1620 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1621 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1622 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1623 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1624 "data/maps/PewterCity/scripts.pory"
	step_end

# 1627 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit2::
# 1628 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1629 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1630 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1631 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1632 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1633 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1634 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1635 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1636 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1637 "data/maps/PewterCity/scripts.pory"
	step_end

# 1640 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit3::
# 1641 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1642 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1643 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1644 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1645 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1646 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1647 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1648 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1649 "data/maps/PewterCity/scripts.pory"
	walk_left
# 1650 "data/maps/PewterCity/scripts.pory"
	step_end

# 1654 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft::
# 1655 "data/maps/PewterCity/scripts.pory"
	walk_in_place_left
# 1656 "data/maps/PewterCity/scripts.pory"
	step_end

EventScript_RemoveStaticMon::
# 2 "data/scripts/static_pokemon.pory"
	fadescreen FADE_TO_BLACK
# 3 "data/scripts/static_pokemon.pory"
	removeobject VAR_LAST_TALKED
# 4 "data/scripts/static_pokemon.pory"
	fadescreen FADE_FROM_BLACK
# 5 "data/scripts/static_pokemon.pory"
	release
	end


EventScript_MonFlewAway::
# 10 "data/scripts/static_pokemon.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/scripts/static_pokemon.pory"
	removeobject VAR_LAST_TALKED
# 12 "data/scripts/static_pokemon.pory"
	fadescreen FADE_FROM_BLACK
# 13 "data/scripts/static_pokemon.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 14 "data/scripts/static_pokemon.pory"
	msgbox Text_MonFlewAway
# 15 "data/scripts/static_pokemon.pory"
	release
	end


EventScript_AwakenSnorlax::
# 20 "data/scripts/static_pokemon.pory"
	message Text_PlayedPokeFlute
# 21 "data/scripts/static_pokemon.pory"
	waitmessage
# 22 "data/scripts/static_pokemon.pory"
	playfanfare MUS_POKE_FLUTE
# 23 "data/scripts/static_pokemon.pory"
	waitfanfare
# 24 "data/scripts/static_pokemon.pory"
	msgbox Text_SnorlaxWokeUp
	return


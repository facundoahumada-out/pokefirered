EventScript_SetGymTrainers::
# 2 "data/scripts/set_gym_trainers.pory"
	copyvar VAR_0x8000, VAR_0x8008
# 3 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SetPewterGymTrainers
# 4 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_SetCeruleanGymTrainers
# 5 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 3, EventScript_SetVermilionGymTrainers
# 6 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 4, EventScript_SetCeladonGymTrainers
# 7 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 5, EventScript_SetFuchsiaGymTrainers
# 8 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 6, EventScript_SetSaffronGymTrainers
# 9 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 7, EventScript_SetCinnabarGymTrainers
# 10 "data/scripts/set_gym_trainers.pory"
	goto_if_eq VAR_0x8000, 8, EventScript_SetViridianGymTrainers
	end


EventScript_SetPewterGymTrainers::
# 15 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CAMPER_LIAM
	return


EventScript_SetCeruleanGymTrainers::
# 20 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PICNICKER_DIANA
# 21 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SWIMMER_MALE_LUIS
	return


EventScript_SetVermilionGymTrainers::
# 26 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SAILOR_DWAYNE
# 27 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_ENGINEER_BAILY
# 28 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_GENTLEMAN_TUCKER
	return


EventScript_SetCeladonGymTrainers::
# 33 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_LASS_KAY
# 34 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_LASS_LISA
# 35 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PICNICKER_TINA
# 36 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BEAUTY_BRIDGET
# 37 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BEAUTY_TAMIA
# 38 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BEAUTY_LORI
# 39 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_COOLTRAINER_MARY
	return


EventScript_SetFuchsiaGymTrainers::
# 44 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_TAMER_PHIL
# 45 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_TAMER_EDGAR
# 46 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JUGGLER_KIRK
# 47 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JUGGLER_SHAWN
# 48 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JUGGLER_KAYDEN
# 49 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_JUGGLER_NATE
	return


EventScript_SetSaffronGymTrainers::
# 54 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PSYCHIC_JOHAN
# 55 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PSYCHIC_TYRON
# 56 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PSYCHIC_CAMERON
# 57 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_PSYCHIC_PRESTON
# 58 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CHANNELER_AMANDA
# 59 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CHANNELER_STACY
# 60 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_CHANNELER_TASHA
	return


EventScript_SetCinnabarGymTrainers::
# 65 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SUPER_NERD_ERIK
# 66 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SUPER_NERD_AVERY
# 67 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SUPER_NERD_DEREK
# 68 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_SUPER_NERD_ZAC
# 69 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BURGLAR_QUINN
# 70 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BURGLAR_RAMON
# 71 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BURGLAR_DUSTY
	return


EventScript_SetViridianGymTrainers::
# 76 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_TAMER_JASON
# 77 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_TAMER_COLE
# 78 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BLACK_BELT_ATSUSHI
# 79 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BLACK_BELT_KIYO
# 80 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_BLACK_BELT_TAKASHI
# 81 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_COOLTRAINER_SAMUEL
# 82 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_COOLTRAINER_YUJI
# 83 "data/scripts/set_gym_trainers.pory"
	settrainerflag TRAINER_COOLTRAINER_WARREN
	return


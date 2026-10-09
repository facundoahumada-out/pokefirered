EventScript_DoTrainerBattleFromApproach::
# 2 "data/scripts/trainer_battle.pory"
	lock
# 3 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 4 "data/scripts/trainer_battle.pory"
	special EndTrainerApproach
# 5 "data/scripts/trainer_battle.pory"
	waitstate
# 6 "data/scripts/trainer_battle.pory"
	goto EventScript_DoTrainerBattle
	return


EventScript_TryDoNormalTrainerBattle::
# 10 "data/scripts/trainer_battle.pory"
	lock
# 11 "data/scripts/trainer_battle.pory"
	faceplayer
# 12 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 13 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 14 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, Script_HasTrainerBeenFought
# 15 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, FALSE, EventScript_NoTrainerBattle
# 16 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 17 "data/scripts/trainer_battle.pory"
	special SetUpTrainerMovement
# 18 "data/scripts/trainer_battle.pory"
	goto EventScript_DoTrainerBattle
	return


EventScript_NoTrainerBattle::
# 22 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 23 "data/scripts/trainer_battle.pory"
EventScript_TryDoDoubleTrainerBattle::
# 24 "data/scripts/trainer_battle.pory"
	lock
# 25 "data/scripts/trainer_battle.pory"
	faceplayer
# 26 "data/scripts/trainer_battle.pory"
	call EventScript_RevealTrainer
# 27 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, Script_HasTrainerBeenFought
# 28 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, FALSE, EventScript_NoDoubleTrainerBattle
# 29 "data/scripts/trainer_battle.pory"
	special HasEnoughMonsForDoubleBattle
# 30 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, EventScript_NotEnoughMonsForDoubleBattle
# 31 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 32 "data/scripts/trainer_battle.pory"
	special SetUpTrainerMovement
# 33 "data/scripts/trainer_battle.pory"
	goto EventScript_DoTrainerBattle
	return


EventScript_NotEnoughMonsForDoubleBattle::
# 37 "data/scripts/trainer_battle.pory"
	special ShowTrainerCantBattleSpeech
# 38 "data/scripts/trainer_battle.pory"
	waitmessage
# 39 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 40 "data/scripts/trainer_battle.pory"
	release
	end


EventScript_NoDoubleTrainerBattle::
# 45 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 46 "data/scripts/trainer_battle.pory"
EventScript_DoNoIntroTrainerBattle::
# 47 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 48 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 49 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 50 "data/scripts/trainer_battle.pory"
	goto_if_questlog EventScript_EndQuestLogBattle
# 51 "data/scripts/trainer_battle.pory"
	dotrainerbattle
# 52 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 53 "data/scripts/trainer_battle.pory"
EventScript_TryDoRematchBattle::
# 54 "data/scripts/trainer_battle.pory"
	call EventScript_RevealTrainer
# 55 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 56 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_NoRematchBattle
# 57 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 58 "data/scripts/trainer_battle.pory"
	special SetUpTrainerMovement
# 59 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 60 "data/scripts/trainer_battle.pory"
	waitmessage
# 61 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 62 "data/scripts/trainer_battle.pory"
	goto_if_questlog EventScript_EndQuestLogRematch
# 63 "data/scripts/trainer_battle.pory"
	special StartRematchBattle
# 64 "data/scripts/trainer_battle.pory"
	waitstate
# 65 "data/scripts/trainer_battle.pory"
	releaseall
	end


EventScript_NoRematchBattle::
# 70 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 71 "data/scripts/trainer_battle.pory"
EventScript_TryDoDoubleRematchBattle::
# 72 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 73 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_NoDoubleRematchBattle
# 74 "data/scripts/trainer_battle.pory"
	special HasEnoughMonsForDoubleBattle
# 75 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, EventScript_NotEnoughMonsForDoubleRematchBattle
# 76 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 77 "data/scripts/trainer_battle.pory"
	special SetUpTrainerMovement
# 78 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 79 "data/scripts/trainer_battle.pory"
	waitmessage
# 80 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 81 "data/scripts/trainer_battle.pory"
	goto_if_questlog EventScript_EndQuestLogRematch
# 82 "data/scripts/trainer_battle.pory"
	special StartRematchBattle
# 83 "data/scripts/trainer_battle.pory"
	waitstate
# 84 "data/scripts/trainer_battle.pory"
	releaseall
	end


EventScript_NoDoubleRematchBattle::
# 89 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 90 "data/scripts/trainer_battle.pory"
EventScript_NotEnoughMonsForDoubleRematchBattle::
# 91 "data/scripts/trainer_battle.pory"
	special ShowTrainerCantBattleSpeech
# 92 "data/scripts/trainer_battle.pory"
	waitmessage
# 93 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 94 "data/scripts/trainer_battle.pory"
	release
	end


EventScript_EndQuestLogRematch::
# 99 "data/scripts/trainer_battle.pory"
	releaseall
	end


EventScript_RevealTrainer::
# 104 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 105 "data/scripts/trainer_battle.pory"
	waitmovement 0
	return


# 109 "data/scripts/trainer_battle.pory"
Movement_RevealTrainer::
# 110 "data/scripts/trainer_battle.pory"
	reveal_trainer
# 111 "data/scripts/trainer_battle.pory"
	step_end

EventScript_DoTrainerBattle::
# 115 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 116 "data/scripts/trainer_battle.pory"
	waitmessage
# 117 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 118 "data/scripts/trainer_battle.pory"
	goto_if_questlog EventScript_EndQuestLogBattle
# 119 "data/scripts/trainer_battle.pory"
	dotrainerbattle
# 120 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, GetTrainerBattleMode
# 121 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_SINGLE, EventScript_EndTrainerBattle
# 122 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT, EventScript_EndTrainerBattleContinueScript
# 123 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, EventScript_EndTrainerBattleContinueScript
# 124 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, EventScript_EndTrainerBattleContinueScript
# 125 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, EventScript_EndTrainerBattleContinueScript
# 126 "data/scripts/trainer_battle.pory"
EventScript_EndTrainerBattle::
# 127 "data/scripts/trainer_battle.pory"
	releaseall
	end


EventScript_EndTrainerBattleContinueScript::
# 132 "data/scripts/trainer_battle.pory"
	gotobeatenscript
# 133 "data/scripts/trainer_battle.pory"
EventScript_EndQuestLogBattle::
# 134 "data/scripts/trainer_battle.pory"
	special SetBattledTrainerFlag
# 135 "data/scripts/trainer_battle.pory"
	releaseall
	end


Std_MsgboxAutoclose::
# 140 "data/scripts/trainer_battle.pory"
	message 0x0
# 141 "data/scripts/trainer_battle.pory"
	waitmessage
# 142 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 143 "data/scripts/trainer_battle.pory"
	release
	return


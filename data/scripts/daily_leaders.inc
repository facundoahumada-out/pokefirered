EventScript_DailyLeaderReward::
# 6 "data/scripts/daily_leaders.pory"
	checkitem VAR_0x8008
# 7 "data/scripts/daily_leaders.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DailyLeaderReward_2
EventScript_DailyLeaderReward_1:
# 14 "data/scripts/daily_leaders.pory"
	special SetDailyLeaderBeatenToday
# 15 "data/scripts/daily_leaders.pory"
	setvar VAR_RESULT, TRUE
	return

EventScript_DailyLeaderReward_2:
# 8 "data/scripts/daily_leaders.pory"
	msgbox Text_DailyLeaderTakeThis
# 9 "data/scripts/daily_leaders.pory"
	giveitem VAR_0x8008
# 10 "data/scripts/daily_leaders.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DailyLeaderReward_4
	goto EventScript_DailyLeaderReward_1

EventScript_DailyLeaderReward_4:
	return


Text_DailyLeaderDefeat::
# 19 "data/scripts/daily_leaders.pory"
	.string "What a battle!\n"
	.string "You really are the Champion!$"

Text_DailyLeaderTakeThis::
# 24 "data/scripts/daily_leaders.pory"
	.string "That was a great battle!\n"
	.string "Please, take this as a reward.$"

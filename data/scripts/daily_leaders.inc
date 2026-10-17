EventScript_DailyLeaderReward::
# 4 "data/scripts/daily_leaders.pory"
	msgbox Text_DailyLeaderTakeThis
# 5 "data/scripts/daily_leaders.pory"
	giveitem ITEM_MASTER_BALL
# 6 "data/scripts/daily_leaders.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 7 "data/scripts/daily_leaders.pory"
	special SetDailyLeaderBeatenToday
# 8 "data/scripts/daily_leaders.pory"
	msgbox Text_DailyLeaderSeeYouNextWeek
# 9 "data/scripts/daily_leaders.pory"
	release
	end


EventScript_DailyLeaderAlreadyBeaten::
# 14 "data/scripts/daily_leaders.pory"
	msgbox Text_DailyLeaderSeeYouNextWeek
# 15 "data/scripts/daily_leaders.pory"
	release
	end


Text_DailyLeaderDefeat::
# 19 "data/scripts/daily_leaders.pory"
	.string "What a battle!\n"
	.string "You really are the Champion!$"

Text_DailyLeaderTakeThis::
# 24 "data/scripts/daily_leaders.pory"
	.string "That was a great battle!\n"
	.string "Please, take this as a reward.$"

Text_DailyLeaderSeeYouNextWeek::
# 29 "data/scripts/daily_leaders.pory"
	.string "Let's battle again next week,\n"
	.string "Champion!$"

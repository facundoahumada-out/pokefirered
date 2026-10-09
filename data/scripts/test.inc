Test_EventScript_NPC::
# 2 "data/scripts/test.pory"
	msgbox Test_Text_WelcomeToWorldOfPokemon, MSGBOX_NPC
	end


EventScript_TestSignpostMsg::
# 7 "data/scripts/test.pory"
	msgbox Test_Text_ThisIsASignpost, MSGBOX_SIGN
	end


Test_EventScript_CoordEvent::
# 12 "data/scripts/test.pory"
	msgbox Test_Text_ThisIsACoordEvent, MSGBOX_SIGN
	end


Test_Text_WelcomeToWorldOfPokemon::
# 16 "data/scripts/test.pory"
	.string "テストよう　メッセージです！\n"
	.string "ポケモンの　せかいへ　ようこそ！$"

Test_Text_ThisIsASignpost::
# 21 "data/scripts/test.pory"
	.string "テストよう　メッセージです！\n"
	.string "かんばん　です$"

Test_Text_ThisIsACoordEvent::
# 26 "data/scripts/test.pory"
	.string "テストよう　メッセージです！\n"
	.string "ざひょう　チェックの　イベントです$"

Test_Text_Empty::
# 31 "data/scripts/test.pory"
	.string "$"

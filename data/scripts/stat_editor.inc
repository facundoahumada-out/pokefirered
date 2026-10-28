EventScript_StatEditor::
# 4 "data/scripts/stat_editor.pory"
	lock
# 5 "data/scripts/stat_editor.pory"
	faceplayer
# 6 "data/scripts/stat_editor.pory"
	msgbox Text_StatEditorIntro, MSGBOX_YESNO
# 7 "data/scripts/stat_editor.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_StatEditor_2
EventScript_StatEditor_1:
# 10 "data/scripts/stat_editor.pory"
	msgbox Text_StatEditorWhichMon
# 11 "data/scripts/stat_editor.pory"
	special ChoosePartyMon
# 12 "data/scripts/stat_editor.pory"
	waitstate
# 13 "data/scripts/stat_editor.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_StatEditor_5
EventScript_StatEditor_4:
# 16 "data/scripts/stat_editor.pory"
	special IsSelectedMonEgg
# 17 "data/scripts/stat_editor.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_StatEditor_8
# 22 "data/scripts/stat_editor.pory"
	special OpenStatEditor
# 23 "data/scripts/stat_editor.pory"
	waitstate
# 24 "data/scripts/stat_editor.pory"
	msgbox Text_StatEditorDone
# 25 "data/scripts/stat_editor.pory"
	release
	end

EventScript_StatEditor_2:
# 8 "data/scripts/stat_editor.pory"
	goto EventScript_StatEditorDeclined
	goto EventScript_StatEditor_1

EventScript_StatEditor_5:
# 14 "data/scripts/stat_editor.pory"
	goto EventScript_StatEditorDeclined
	goto EventScript_StatEditor_4

EventScript_StatEditor_8:
# 18 "data/scripts/stat_editor.pory"
	msgbox Text_StatEditorEgg
# 19 "data/scripts/stat_editor.pory"
	release
	end


EventScript_StatEditorDeclined::
# 30 "data/scripts/stat_editor.pory"
	msgbox Text_StatEditorDeclined
# 31 "data/scripts/stat_editor.pory"
	release
	end


Text_StatEditorIntro::
# 35 "data/scripts/stat_editor.pory"
	.string "I can boost the hidden potential\n"
	.string "of your POKéMON.\p"
	.string "Want me to take a look?$"

Text_StatEditorWhichMon::
# 41 "data/scripts/stat_editor.pory"
	.string "Which POKéMON should I boost?$"

Text_StatEditorEgg::
# 45 "data/scripts/stat_editor.pory"
	.string "That's an EGG!\n"
	.string "There's nothing to boost yet.$"

Text_StatEditorDone::
# 50 "data/scripts/stat_editor.pory"
	.string "All done!\n"
	.string "Come back anytime.$"

Text_StatEditorDeclined::
# 55 "data/scripts/stat_editor.pory"
	.string "Come back anytime.$"

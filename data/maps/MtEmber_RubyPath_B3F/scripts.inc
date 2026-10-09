MtEmber_RubyPath_B3F_MapScripts::
	.byte 0


MtEmber_RubyPath_B5F_EventScript_Ruby::
# 5 "data/maps/MtEmber_RubyPath_B3F/scripts.pory"
	lock
# 6 "data/maps/MtEmber_RubyPath_B3F/scripts.pory"
	faceplayer
# 7 "data/maps/MtEmber_RubyPath_B3F/scripts.pory"
	setflag FLAG_GOT_RUBY
# 8 "data/maps/MtEmber_RubyPath_B3F/scripts.pory"
	removeobject LOCALID_RUBY
# 9 "data/maps/MtEmber_RubyPath_B3F/scripts.pory"
	giveitem_msg MtEmber_RubyPath_B3F_Text_FoundARuby, ITEM_RUBY, 1, MUS_OBTAIN_KEY_ITEM
# 10 "data/maps/MtEmber_RubyPath_B3F/scripts.pory"
	release
	end


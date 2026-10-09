TwoIsland_MapScripts::
# 2 "data/maps/TwoIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
	.byte 0


TwoIsland_OnTransition::
# 6 "data/maps/TwoIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TWO_ISLAND
# 7 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_VISITED_TWO_ISLAND
# 8 "data/maps/TwoIsland/scripts.pory"
	call TwoIsland_EventScript_SetShopState
	end


TwoIsland_EventScript_SetShopState::
# 13 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, TwoIsland_EventScript_SetShopStateAfterHoennLink
# 14 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TwoIsland_EventScript_SetShopStateAfterChampion
# 15 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopStateAfterLostelleRescue
# 16 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateDefault
	end


TwoIsland_EventScript_SetShopStateAfterHoennLink::
# 21 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 22 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
# 23 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_SetShopExpanded2
# 24 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded3
	end


TwoIsland_EventScript_SetShopStateAfterChampion::
# 29 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 30 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopInitial
# 31 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
# 32 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
	end


TwoIsland_EventScript_SetShopStateAfterLostelleRescue::
# 37 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 38 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
	end


TwoIsland_EventScript_SetShopStateDefault::
# 43 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
	end


TwoIsland_EventScript_SetShopInitial::
# 48 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
	return


TwoIsland_EventScript_SetShopExpanded1::
# 53 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 54 "data/maps/TwoIsland/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
	return


TwoIsland_EventScript_SetShopExpanded2::
# 59 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
# 60 "data/maps/TwoIsland/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
	return


TwoIsland_EventScript_SetShopExpanded3::
# 65 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 4
# 66 "data/maps/TwoIsland/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_POKE_MANIAC
	return


TwoIsland_EventScript_Clerk::
# 71 "data/maps/TwoIsland/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 72 "data/maps/TwoIsland/scripts.pory"
	lock
# 73 "data/maps/TwoIsland/scripts.pory"
	faceplayer
# 74 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ClerkShopExpanded3
# 75 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ClerkShopExpanded2
# 76 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ClerkShopExpanded1
# 77 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopInitial
	end


TwoIsland_EventScript_ClerkShopExpanded3::
# 82 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_3, TwoIsland_EventScript_ClerkShopSkipIntro
# 83 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_3
# 84 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_BringingItemsFromDistantLands
# 85 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 86 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
	end


TwoIsland_EventScript_ClerkShopExpanded2::
# 91 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_ClerkShopSkipIntro
# 92 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_2
# 93 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_HopeYouGiveItYourBest
# 94 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 95 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
	end


TwoIsland_EventScript_ClerkShopExpanded1::
# 100 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_ClerkShopSkipIntro
# 101 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_1
# 102 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_AddedMerchandiseForLostelle
# 103 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 104 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
	end


TwoIsland_EventScript_ClerkShopInitial::
# 109 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_ClerkShopSkipIntro
# 110 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_INTRODUCED
# 111 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
# 112 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 113 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
	end


TwoIsland_EventScript_ClerkShopSkipIntro::
# 118 "data/maps/TwoIsland/scripts.pory"
	message Text_MayIHelpYou
# 119 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 120 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ShopExpanded3
# 121 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ShopExpanded2
# 122 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ShopExpanded1
# 123 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
	end


TwoIsland_EventScript_ShopInitial::
# 128 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
# 129 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 130 "data/maps/TwoIsland/scripts.pory"
	release
	end


	.align 2
# 134 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopInitial::
# 135 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 136 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

TwoIsland_EventScript_ShopExpanded1::
# 141 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
# 142 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 143 "data/maps/TwoIsland/scripts.pory"
	release
	end


	.align 2
# 147 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded1::
# 148 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 149 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 150 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 151 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

TwoIsland_EventScript_ShopExpanded2::
# 156 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
# 157 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 158 "data/maps/TwoIsland/scripts.pory"
	release
	end


	.align 2
# 162 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded2::
# 163 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 164 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 165 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LEMONADE
# 166 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 167 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 168 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

TwoIsland_EventScript_ShopExpanded3::
# 173 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
# 174 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 175 "data/maps/TwoIsland/scripts.pory"
	release
	end


	.align 2
# 179 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded3::
# 180 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 181 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 182 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 183 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LEMONADE
# 184 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 185 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 186 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 187 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

TwoIsland_EventScript_Sailor::
# 192 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
	end


TwoIsland_EventScript_Woman::
# 197 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
	end


TwoIsland_EventScript_Beauty::
# 202 "data/maps/TwoIsland/scripts.pory"
	lock
# 203 "data/maps/TwoIsland/scripts.pory"
	faceplayer
# 204 "data/maps/TwoIsland/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 4
# 205 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
# 206 "data/maps/TwoIsland/scripts.pory"
	release
	end


TwoIsland_EventScript_PokeManiac::
# 211 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
	end


TwoIsland_EventScript_Boy::
# 216 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
	end


TwoIsland_EventScript_LittleBoy::
# 221 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
	end


TwoIsland_EventScript_IslandSign::
# 226 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
	end


TwoIsland_EventScript_JoyfulGameCornerSign::
# 231 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
	end


TwoIsland_EventScript_FastCurrentSign::
# 236 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
	end


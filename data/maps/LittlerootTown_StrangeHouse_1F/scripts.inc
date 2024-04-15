# 1 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
LittlerootTown_StrangeHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.byte 0

StrangeHouse_Sign_Box::
# 6 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	msgbox StrangeHouse_Sign_Box_Text_0
# 8 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	release
	return


StrangeHouse_Tutorial_Book::
# 12 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	lock
# 13 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	msgbox StrangeHouse_Tutorial_Book_Text_0, MSGBOX_YESNO
# 14 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	hidemonpic
# 15 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StrangeHouse_Tutorial_Book_1
	return

StrangeHouse_Tutorial_Book_1:
# 16 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	msgbox StrangeHouse_Tutorial_Book_Text_1
	return


StrangeHouse_RegionBag::
# 21 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	goto_if_unset FLAG_STRANGEHOUSE_BAG, StrangeHouse_RegionBag_2
# 43 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	msgbox StrangeHouse_RegionBag_Text_12, MSGBOX_NPC
StrangeHouse_RegionBag_1:
	end

StrangeHouse_RegionBag_2:
# 22 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	lock
# 23 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	message StrangeHouse_RegionBag_Text_0
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	dynmultichoice 25, 3, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, StrangeHouse_RegionBag_Text_1, StrangeHouse_RegionBag_Text_2, StrangeHouse_RegionBag_Text_3, StrangeHouse_RegionBag_Text_4, StrangeHouse_RegionBag_Text_5, StrangeHouse_RegionBag_Text_6, StrangeHouse_RegionBag_Text_7, StrangeHouse_RegionBag_Text_8, StrangeHouse_RegionBag_Text_9, StrangeHouse_RegionBag_Text_10, StrangeHouse_RegionBag_Text_11
# 25 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	closemessage
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 0, StrangeHouse_RegionBag_7
# 28 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 1, StrangeHouse_RegionBag_8
# 29 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 2, StrangeHouse_RegionBag_9
# 30 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 3, StrangeHouse_RegionBag_10
# 31 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 4, StrangeHouse_RegionBag_11
# 32 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 5, StrangeHouse_RegionBag_12
# 33 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 6, StrangeHouse_RegionBag_13
# 34 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 7, StrangeHouse_RegionBag_14
# 35 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 8, StrangeHouse_RegionBag_15
# 36 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 9, StrangeHouse_RegionBag_16
# 37 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 10, StrangeHouse_RegionBag_17
StrangeHouse_RegionBag_5:
# 39 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	call StarterFade
# 40 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	release
	goto StrangeHouse_RegionBag_1

StrangeHouse_RegionBag_7:
# 27 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 0
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_8:
# 28 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 1
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_9:
# 29 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 2
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_10:
# 30 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 3
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_11:
# 31 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 4
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_12:
# 32 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 5
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_13:
# 33 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 6
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_14:
# 34 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 7
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_15:
# 35 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 8
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_16:
# 36 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 9
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_17:
# 37 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 10
	goto StrangeHouse_RegionBag_5


StarterFade::
# 50 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	delay 10
# 53 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


StrangeHouse_Sign_Box_Text_0:
# 7 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "I'd better keep my hands out of that. I\n"
	.string "don't know what's inside.$"

StrangeHouse_Tutorial_Book_Text_0:
# 13 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Would you like to view the\n"
	.string "Instructions?$"

StrangeHouse_Tutorial_Book_Text_1:
# 16 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Interact with the bag to your left and\n"
	.string "choose your favorite Region. This will\l"
	.string "impact what happens to you next.$"

StrangeHouse_RegionBag_Text_0:
# 23 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Where are you from?$"

StrangeHouse_RegionBag_Text_1:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Kanto$"

StrangeHouse_RegionBag_Text_2:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Johto$"

StrangeHouse_RegionBag_Text_3:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Hoenn$"

StrangeHouse_RegionBag_Text_4:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Sinnoh$"

StrangeHouse_RegionBag_Text_5:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Unova$"

StrangeHouse_RegionBag_Text_6:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Kalos$"

StrangeHouse_RegionBag_Text_7:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Alola$"

StrangeHouse_RegionBag_Text_8:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Galar$"

StrangeHouse_RegionBag_Text_9:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Paldea$"

StrangeHouse_RegionBag_Text_10:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Sevii Isles$"

StrangeHouse_RegionBag_Text_11:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Hisui$"

StrangeHouse_RegionBag_Text_12:
# 43 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Take care of your Pokémon.$"

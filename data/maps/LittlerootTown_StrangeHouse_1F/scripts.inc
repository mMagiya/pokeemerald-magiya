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
	goto_if_eq StrangeHouse_Tutorial_Book_2
StrangeHouse_Tutorial_Book_1:
# 18 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	waitmessage
# 19 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	release
	return

StrangeHouse_Tutorial_Book_2:
# 16 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	msgbox StrangeHouse_Tutorial_Book_Text_1
	goto StrangeHouse_Tutorial_Book_1


StrangeHouse_RegionBag::
# 23 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	goto_if_unset FLAG_STRANGEHOUSE_BAG, StrangeHouse_RegionBag_2
# 46 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	msgbox StrangeHouse_RegionBag_Text_12, MSGBOX_NPC
# 48 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	waitmessage
StrangeHouse_RegionBag_1:
	end

StrangeHouse_RegionBag_2:
# 24 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	lock
# 25 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	message StrangeHouse_RegionBag_Text_0
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	dynmultichoice 25, 3, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, StrangeHouse_RegionBag_Text_1, StrangeHouse_RegionBag_Text_2, StrangeHouse_RegionBag_Text_3, StrangeHouse_RegionBag_Text_4, StrangeHouse_RegionBag_Text_5, StrangeHouse_RegionBag_Text_6, StrangeHouse_RegionBag_Text_7, StrangeHouse_RegionBag_Text_8, StrangeHouse_RegionBag_Text_9, StrangeHouse_RegionBag_Text_10, StrangeHouse_RegionBag_Text_11
# 27 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	closemessage
# 28 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 0, StrangeHouse_RegionBag_7
# 30 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 1, StrangeHouse_RegionBag_8
# 31 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 2, StrangeHouse_RegionBag_9
# 32 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 3, StrangeHouse_RegionBag_10
# 33 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 4, StrangeHouse_RegionBag_11
# 34 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 5, StrangeHouse_RegionBag_12
# 35 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 6, StrangeHouse_RegionBag_13
# 36 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 7, StrangeHouse_RegionBag_14
# 37 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 8, StrangeHouse_RegionBag_15
# 38 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 9, StrangeHouse_RegionBag_16
# 39 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	case 10, StrangeHouse_RegionBag_17
StrangeHouse_RegionBag_5:
# 41 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	call StarterFade
# 42 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	waitmessage
# 43 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	releaseall
	goto StrangeHouse_RegionBag_1

StrangeHouse_RegionBag_7:
# 29 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 0
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_8:
# 30 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 1
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_9:
# 31 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 2
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_10:
# 32 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 3
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_11:
# 33 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 4
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_12:
# 34 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 5
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_13:
# 35 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 6
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_14:
# 36 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 7
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_15:
# 37 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 8
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_16:
# 38 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 9
	goto StrangeHouse_RegionBag_5

StrangeHouse_RegionBag_17:
# 39 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setvar VAR_PLAYER_REGION, 10
	goto StrangeHouse_RegionBag_5


StarterFade::
# 54 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	setflag FLAG_STRANGEHOUSE_BAG
# 57 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	removeobject 1
# 58 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	delay 10
# 59 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
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
# 25 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Where are you from?$"

StrangeHouse_RegionBag_Text_1:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Kanto$"

StrangeHouse_RegionBag_Text_2:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Johto$"

StrangeHouse_RegionBag_Text_3:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Hoenn$"

StrangeHouse_RegionBag_Text_4:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Sinnoh$"

StrangeHouse_RegionBag_Text_5:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Unova$"

StrangeHouse_RegionBag_Text_6:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Kalos$"

StrangeHouse_RegionBag_Text_7:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Alola$"

StrangeHouse_RegionBag_Text_8:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Galar$"

StrangeHouse_RegionBag_Text_9:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Paldea$"

StrangeHouse_RegionBag_Text_10:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Sevii Isles$"

StrangeHouse_RegionBag_Text_11:
# 26 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "Hisui$"

StrangeHouse_RegionBag_Text_12:
# 46 "data/maps/LittlerootTown_StrangeHouse_1F/scripts.pory"
	.string "You have already chosen.$"

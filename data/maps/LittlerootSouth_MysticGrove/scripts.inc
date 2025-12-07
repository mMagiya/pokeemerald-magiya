# 1 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"

# 2 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
LittlerootSouth_MysticGrove_MapScripts::
# 3 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.byte 0

MysticGrove_MapScripts::
	.byte 0


MysticGrove_Chrono::
# 12 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	lockall
# 13 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Chrono_Text_0, MSGBOX_YESNO
# 14 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MysticGrove_Chrono_2
MysticGrove_Chrono_1:
# 26 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	releaseall
	return

MysticGrove_Chrono_2:
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	dynmultichoice 25, 3, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MysticGrove_Chrono_Text_1, MysticGrove_Chrono_Text_2, MysticGrove_Chrono_Text_3, MysticGrove_Chrono_Text_4
# 16 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	closemessage
# 17 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 0, MysticGrove_Chrono_7
# 19 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 1, MysticGrove_Chrono_8
# 20 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 2, MysticGrove_Chrono_9
# 21 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 3, MysticGrove_Chrono_10
MysticGrove_Chrono_5:
# 23 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Chrono_Text_5
	goto MysticGrove_Chrono_1

MysticGrove_Chrono_7:
# 18 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 20, 9
	goto MysticGrove_Chrono_5

MysticGrove_Chrono_8:
# 19 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 23, 9
	goto MysticGrove_Chrono_5

MysticGrove_Chrono_9:
# 20 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 07, 69
	goto MysticGrove_Chrono_5

MysticGrove_Chrono_10:
# 21 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 11, 9
	goto MysticGrove_Chrono_5


MysticGrove_Meteoro::
# 30 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	lockall
# 31 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Meteoro_Text_0, MSGBOX_YESNO
# 32 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MysticGrove_Meteoro_2
MysticGrove_Meteoro_1:
# 47 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	releaseall
	return

MysticGrove_Meteoro_2:
# 33 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	dynmultichoice 25, 3, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MysticGrove_Meteoro_Text_1, MysticGrove_Meteoro_Text_2, MysticGrove_Meteoro_Text_3, MysticGrove_Meteoro_Text_4, MysticGrove_Meteoro_Text_5, MysticGrove_Meteoro_Text_6
# 34 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	closemessage
# 35 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 0, MysticGrove_Meteoro_7
# 37 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 1, MysticGrove_Meteoro_8
# 38 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 2, MysticGrove_Meteoro_9
# 39 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 3, MysticGrove_Meteoro_10
# 40 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 4, MysticGrove_Meteoro_11
# 41 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 5, MysticGrove_Meteoro_12
MysticGrove_Meteoro_5:
# 43 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	doweather
# 44 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Meteoro_Text_7
	goto MysticGrove_Meteoro_1

MysticGrove_Meteoro_7:
# 36 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_NONE
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_8:
# 37 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_SANDSTORM
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_9:
# 38 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_RAIN
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_10:
# 39 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_11:
# 40 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_SNOW
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_12:
# 41 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
	goto MysticGrove_Meteoro_5


MysticGrove_Flower::
# 51 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	goto_if_unset FLAG_MG_FLOWER, MysticGrove_Flower_1
	return

MysticGrove_Flower_1:
# 52 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	lockall
# 53 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	emote_exclamation_mark
# 54 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Flower_Text_0, MSGBOX_NPC
# 55 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setflag FLAG_MG_FLOWER
# 56 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	releaseall
	return


MysticGrove_Chrono_Text_0:
# 13 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Change Time?$"

MysticGrove_Chrono_Text_1:
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Morning$"

MysticGrove_Chrono_Text_2:
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Day$"

MysticGrove_Chrono_Text_3:
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Evening$"

MysticGrove_Chrono_Text_4:
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Night$"

MysticGrove_Chrono_Text_5:
# 23 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "CHRONOMANCY!$"

MysticGrove_Meteoro_Text_0:
# 31 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Change Weather?$"

MysticGrove_Meteoro_Text_1:
# 33 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Clear$"

MysticGrove_Meteoro_Text_2:
# 33 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Sandstorm$"

MysticGrove_Meteoro_Text_3:
# 33 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Rain$"

MysticGrove_Meteoro_Text_4:
# 33 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Thunder$"

MysticGrove_Meteoro_Text_5:
# 33 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Snow$"

MysticGrove_Meteoro_Text_6:
# 33 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Fog$"

MysticGrove_Meteoro_Text_7:
# 44 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "METEOROMANCY!$"

MysticGrove_Flower_Text_0:
# 54 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "HEY!\p"
	.string "\n"
	.string "Get off of my face!$"

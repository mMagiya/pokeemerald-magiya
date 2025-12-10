# 1 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"

# 2 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
LittlerootSouth_MysticGrove_MapScripts::
# 3 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.byte 0

MysticGrove_MapScripts::
	.byte 0


MysticGrove_CheckWeather::
# 12 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	lockall
# 13 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_0, MSGBOX_NPC
# 14 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	switch VAR_WEATHER_CURRENT
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 0, MysticGrove_CheckWeather_3
# 16 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 1, MysticGrove_CheckWeather_4
# 17 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 2, MysticGrove_CheckWeather_5
# 18 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 3, MysticGrove_CheckWeather_6
# 19 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 4, MysticGrove_CheckWeather_7
# 20 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 5, MysticGrove_CheckWeather_8
# 21 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_7
MysticGrove_CheckWeather_1:
# 24 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	releaseall
	return

MysticGrove_CheckWeather_3:
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_1, MSGBOX_NPC
	goto MysticGrove_CheckWeather_1

MysticGrove_CheckWeather_4:
# 16 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_2, MSGBOX_NPC
	goto MysticGrove_CheckWeather_1

MysticGrove_CheckWeather_5:
# 17 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_3, MSGBOX_NPC
	goto MysticGrove_CheckWeather_1

MysticGrove_CheckWeather_6:
# 18 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_4, MSGBOX_NPC
	goto MysticGrove_CheckWeather_1

MysticGrove_CheckWeather_7:
# 19 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_5, MSGBOX_NPC
	goto MysticGrove_CheckWeather_1

MysticGrove_CheckWeather_8:
# 20 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_CheckWeather_Text_6, MSGBOX_NPC
	goto MysticGrove_CheckWeather_1


MysticGrove_Chrono::
# 46 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	lockall
# 47 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Chrono_Text_0, MSGBOX_YESNO
# 48 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MysticGrove_Chrono_2
MysticGrove_Chrono_1:
# 63 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	releaseall
	return

MysticGrove_Chrono_2:
# 49 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	dynmultichoice 25, 3, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MysticGrove_Chrono_Text_1, MysticGrove_Chrono_Text_2, MysticGrove_Chrono_Text_3, MysticGrove_Chrono_Text_4
# 50 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	closemessage
# 51 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 0, MysticGrove_Chrono_7
# 53 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 1, MysticGrove_Chrono_8
# 54 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 2, MysticGrove_Chrono_9
# 55 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 3, MysticGrove_Chrono_10
MysticGrove_Chrono_5:
# 57 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Chrono_Text_5, MSGBOX_NPC
# 60 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MysticGrove_Chrono_1

MysticGrove_Chrono_7:
# 52 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 20, 9
	goto MysticGrove_Chrono_5

MysticGrove_Chrono_8:
# 53 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 23, 9
	goto MysticGrove_Chrono_5

MysticGrove_Chrono_9:
# 54 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 07, 129
	goto MysticGrove_Chrono_5

MysticGrove_Chrono_10:
# 55 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fwdtime 12, 9
	goto MysticGrove_Chrono_5


MysticGrove_Meteoro::
# 67 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	lockall
# 68 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Meteoro_Text_0, MSGBOX_YESNO
# 69 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MysticGrove_Meteoro_2
MysticGrove_Meteoro_1:
# 93 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	releaseall
	return

MysticGrove_Meteoro_2:
# 70 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	dynmultichoice 25, 3, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MysticGrove_Meteoro_Text_1, MysticGrove_Meteoro_Text_2, MysticGrove_Meteoro_Text_3, MysticGrove_Meteoro_Text_4, MysticGrove_Meteoro_Text_5, MysticGrove_Meteoro_Text_6
# 71 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	closemessage
# 72 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 0, MysticGrove_Meteoro_7
# 75 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 1, MysticGrove_Meteoro_8
# 77 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 2, MysticGrove_Meteoro_9
# 79 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 3, MysticGrove_Meteoro_10
# 81 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 4, MysticGrove_Meteoro_11
# 83 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	case 5, MysticGrove_Meteoro_12
MysticGrove_Meteoro_5:
# 86 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	doweather
# 87 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	msgbox MysticGrove_Meteoro_Text_7, MSGBOX_NPC
# 90 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MysticGrove_Meteoro_1

MysticGrove_Meteoro_7:
# 73 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_NONE
# 74 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setvar VAR_WEATHER_CURRENT, 0
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_8:
# 75 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_SANDSTORM
# 76 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setvar VAR_WEATHER_CURRENT, 1
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_9:
# 77 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_RAIN
# 78 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setvar VAR_WEATHER_CURRENT, 2
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_10:
# 79 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 80 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setvar VAR_WEATHER_CURRENT, 3
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_11:
# 81 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_SNOW
# 82 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setvar VAR_WEATHER_CURRENT, 4
	goto MysticGrove_Meteoro_5

MysticGrove_Meteoro_12:
# 83 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 84 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	setvar VAR_WEATHER_CURRENT, 5
	goto MysticGrove_Meteoro_5


MysticGrove_CheckWeather_Text_0:
# 13 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "The current weather is:\n$"

MysticGrove_CheckWeather_Text_1:
# 15 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Clear.$"

MysticGrove_CheckWeather_Text_2:
# 16 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Sand.$"

MysticGrove_CheckWeather_Text_3:
# 17 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Rain.$"

MysticGrove_CheckWeather_Text_4:
# 18 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Thunder.$"

MysticGrove_CheckWeather_Text_5:
# 19 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Snow.$"

MysticGrove_CheckWeather_Text_6:
# 20 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Fog.$"

MysticGrove_CheckWeather_Text_7:
# 21 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Undefined.$"

MysticGrove_Chrono_Text_0:
# 47 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Change Time?$"

MysticGrove_Chrono_Text_1:
# 49 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Morning$"

MysticGrove_Chrono_Text_2:
# 49 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Day$"

MysticGrove_Chrono_Text_3:
# 49 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Evening$"

MysticGrove_Chrono_Text_4:
# 49 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Night$"

MysticGrove_Chrono_Text_5:
# 58 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "CHRONOMANCY!$"

MysticGrove_Meteoro_Text_0:
# 68 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Change Weather?$"

MysticGrove_Meteoro_Text_1:
# 70 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Clear$"

MysticGrove_Meteoro_Text_2:
# 70 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Sandstorm$"

MysticGrove_Meteoro_Text_3:
# 70 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Rain$"

MysticGrove_Meteoro_Text_4:
# 70 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Thunder$"

MysticGrove_Meteoro_Text_5:
# 70 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Snow$"

MysticGrove_Meteoro_Text_6:
# 70 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "Fog$"

MysticGrove_Meteoro_Text_7:
# 88 "data/maps/LittlerootSouth_MysticGrove/scripts.pory"
	.string "METEOROMANCY!$"

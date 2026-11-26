# 1 "data/maps/TwilightTown/scripts.pory"


TwilightTown_MapScripts::
	.byte 0


SIGN_TWILIGHT_TOWNSIGN::
# 10 "data/maps/TwilightTown/scripts.pory"
	lockall
# 11 "data/maps/TwilightTown/scripts.pory"
	msgbox SIGN_TWILIGHT_TOWNSIGN_Text_0
# 12 "data/maps/TwilightTown/scripts.pory"
	releaseall
	return


SIGN_TWILIGHT_ABANDONEDSHACK::
# 16 "data/maps/TwilightTown/scripts.pory"
	lockall
# 17 "data/maps/TwilightTown/scripts.pory"
	msgbox SIGN_TWILIGHT_ABANDONEDSHACK_Text_0
# 18 "data/maps/TwilightTown/scripts.pory"
	releaseall
	return


SIGN_TWILIGHT_HOUSE::
# 22 "data/maps/TwilightTown/scripts.pory"
	lockall
# 23 "data/maps/TwilightTown/scripts.pory"
	msgbox SIGN_TWILIGHT_HOUSE_Text_0
# 24 "data/maps/TwilightTown/scripts.pory"
	releaseall
	return


SIGN_TWILIGHT_901::
# 28 "data/maps/TwilightTown/scripts.pory"
	lockall
# 29 "data/maps/TwilightTown/scripts.pory"
	msgbox SIGN_TWILIGHT_901_Text_0
# 30 "data/maps/TwilightTown/scripts.pory"
	releaseall
	return


SIGN_TWILIGHT_APOTHECARY::
# 34 "data/maps/TwilightTown/scripts.pory"
	lockall
# 35 "data/maps/TwilightTown/scripts.pory"
	msgbox SIGN_TWILIGHT_APOTHECARY_Text_0
# 36 "data/maps/TwilightTown/scripts.pory"
	releaseall
	return


SIGN_TWILIGHT_TOWNSIGN_Text_0:
# 11 "data/maps/TwilightTown/scripts.pory"
	.string "TWILIGHT TOWN$"

SIGN_TWILIGHT_ABANDONEDSHACK_Text_0:
# 17 "data/maps/TwilightTown/scripts.pory"
	.string "CAUTION: Abandoned!$"

SIGN_TWILIGHT_HOUSE_Text_0:
# 23 "data/maps/TwilightTown/scripts.pory"
	.string "It's a house.$"

SIGN_TWILIGHT_901_Text_0:
# 29 "data/maps/TwilightTown/scripts.pory"
	.string "Route 901 ahead!$"

SIGN_TWILIGHT_APOTHECARY_Text_0:
# 35 "data/maps/TwilightTown/scripts.pory"
	.string "APOTHECARY: We'll cure what ails you!$"

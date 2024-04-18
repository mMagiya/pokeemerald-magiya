# 1 "data/maps/WildArea_Field_1_1/scripts.pory"

# 2 "data/maps/WildArea_Field_1_1/scripts.pory"
WildArea_Field_1_1_MapScripts::
# 3 "data/maps/WildArea_Field_1_1/scripts.pory"
	.byte 0

WildArea_AreaSign_Field1::
# 7 "data/maps/WildArea_Field_1_1/scripts.pory"
	lock
# 8 "data/maps/WildArea_Field_1_1/scripts.pory"
	msgbox WildArea_AreaSign_Field1_Text_0, MSGBOX_SIGN
# 9 "data/maps/WildArea_Field_1_1/scripts.pory"
	release
	return


WildArea_AreaSign_Field1_Text_0:
# 8 "data/maps/WildArea_Field_1_1/scripts.pory"
	.string "Field 1$"

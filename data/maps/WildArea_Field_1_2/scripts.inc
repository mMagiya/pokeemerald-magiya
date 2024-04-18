# 1 "data/maps/WildArea_Field_1_2/scripts.pory"

# 2 "data/maps/WildArea_Field_1_2/scripts.pory"
WildArea_Field_1_2_MapScripts::
# 3 "data/maps/WildArea_Field_1_2/scripts.pory"
	.byte 0

WildArea_AreaSign_Field2::
# 7 "data/maps/WildArea_Field_1_2/scripts.pory"
	lock
# 8 "data/maps/WildArea_Field_1_2/scripts.pory"
	msgbox WildArea_AreaSign_Field2_Text_0, MSGBOX_SIGN
# 9 "data/maps/WildArea_Field_1_2/scripts.pory"
	release
	return


WildArea_AreaSign_Field2_Text_0:
# 8 "data/maps/WildArea_Field_1_2/scripts.pory"
	.string "Field 2$"

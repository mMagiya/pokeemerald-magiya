# 1 "data/maps/WildArea_Field_1_3/scripts.pory"

# 2 "data/maps/WildArea_Field_1_3/scripts.pory"
WildArea_Field_1_3_MapScripts::
# 3 "data/maps/WildArea_Field_1_3/scripts.pory"
	.byte 0

WildArea_AreaSign_Field3::
# 7 "data/maps/WildArea_Field_1_3/scripts.pory"
	lock
# 8 "data/maps/WildArea_Field_1_3/scripts.pory"
	msgbox WildArea_AreaSign_Field3_Text_0, MSGBOX_SIGN
# 9 "data/maps/WildArea_Field_1_3/scripts.pory"
	release
	return


WildArea_CaveDoor_DittoBlock::
# 13 "data/maps/WildArea_Field_1_3/scripts.pory"
	lock
# 14 "data/maps/WildArea_Field_1_3/scripts.pory"
	msgbox WildArea_CaveDoor_DittoBlock_Text_0, MSGBOX_NPC
# 15 "data/maps/WildArea_Field_1_3/scripts.pory"
	release
	return


WildArea_AreaSign_Field3_Text_0:
# 8 "data/maps/WildArea_Field_1_3/scripts.pory"
	.string "Field 3$"

WildArea_CaveDoor_DittoBlock_Text_0:
# 14 "data/maps/WildArea_Field_1_3/scripts.pory"
	.string "Closed until further notice.$"

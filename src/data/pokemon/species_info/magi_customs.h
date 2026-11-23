#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoCustoms[] =
{
#endif

#if P_FAMILY_WAILMER && P_MEGA_EVOLUTIONS
    [SPECIES_WAILORD_MEGA] =
    { // add 100
        .baseHP        = 170,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC), // TYPE_COSMIC to come
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 206,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE }, // ABLITY_BAROMETRIC to come (ABILITY_PRESSURE + ABILITY_THICK_FAT + ABILITY_LEVITATE + cast MOVE_GRAVITY on entry)
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wailord"),
        .cryId = CRY_WAILORD,
        .natDexNum = NATIONAL_DEX_WAILORD,
        .categoryName = _("Star Whale"),
        .height = 1450,
        .weight = 39800,
        .description = COMPOUND_STRING(
              "With the power of MEGA ENERGY, this\n"
              "POKéMON has taken to the stars. Its\n"
              "body generates a gravitational field\n"
              "equal to 1,000 times that of Earth."
        ),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
        .frontPic = gMonFrontPic_WailordMega,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 48),
            ANIMCMD_FRAME(0, 33),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_WailordMega,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 22 : 14,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_WailordMega,
        .shinyPalette = gMonShinyPalette_WailordMega,
        .iconSprite = gMonIcon_WailordMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wailord)
        OVERWORLD(
            sPicTable_Wailord,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Wailord,
            gShinyOverworldPalette_Wailord
        )
        .formChangeTable = sWailordFormChangeTable,
    },
#endif //P_FAMILY_WAILMER && P_MEGA_EVOLUTIONS

/*  // SLEEPY_SANDS indefinitely on hold until human-created art is created or sourced.
#if P_FAMILY_SANDSHREW && P_PARADOX_FORMS
    [SPECIES_SLEEPY_SANDS] =
    { // add 100
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_2 ? 45 : 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GROUND, TYPE_DARK),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 163,
        .evYield_Defense = 2,
//        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sleepy Sands"),
        .cryId = CRY_SANDSLASH,
        .natDexNum = NATIONAL_DEX_SANDSLASH,
        .categoryName = _("Paradox"),
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "This POKéMON's body is shrouded in hardened\n"
            "sand. It can manipulate it to crush its foes\n"
            "or to protect itself from harm. Its terrible\n"
            "attitude keeps anything near from sleeping."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SleepySands,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_SHAKE,
        .backPic = gMonBackPic_SleepySands,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_SleepySands,
        .shinyPalette = gMonShinyPalette_SleepySands,
        .iconSprite = gMonIcon_Sandslash,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 4, SHADOW_SIZE_L)
        FOOTPRINT(Sandslash)
        OVERWORLD(
            sPicTable_Sandslash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sandslash,
            gShinyOverworldPalette_Sandslash
        )
        .levelUpLearnset = sSandslashLevelUpLearnset,
        .teachableLearnset = sSandslashTeachableLearnset,
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable,
        .formChangeTable = sSandslashFormChangeTable,
    },
#endif //P_FAMILY_SANDSHREW && P_PARADOX_FORMS
*/

#if P_FAMILY_BULBASAUR && P_PARADOX_FORMS
    [SPECIES_IRON_TITAN] =
    { // add 100
        .baseHP        = 90,
        .baseAttack    = 72,
        .baseDefense   = 100,
        .baseSpeed     = 98,
        .baseSpAttack  = 122,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ELECTRIC),
        .catchRate = 10,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Iron Titan"),
//        .cryId = CRY_IRON_TITAN,
        .cryId = CRY_VENUSAUR,
        .natDexNum = NATIONAL_DEX_VENUSAUR,
        .categoryName = _("Paradox"),
        .height = 16,
        .weight = 1560,
        .description = COMPOUND_STRING(
            "Though it resembles a colossal plant,\n"
            "this POKéMON is a futuristic machine.\n"
            "It absorbs sunlight with its petals,\n"
            "storing it for later use."
        ),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_IronTitan,
        .frontPicSize = MON_COORDS_SIZE(96, 96),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronTitan,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronTitan,
        .shinyPalette = gMonShinyPalette_IronTitan,
        .iconSprite = gMonIcon_IronTitan,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(IronTitan)
        OVERWORLD(
            sPicTable_IronTitan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronTitan,
            gShinyOverworldPalette_IronTitan
        )
        .isParadox = TRUE,
//        .levelUpLearnset = sIronTitanLevelUpLearnset,
//        .teachableLearnset = sIronTitanTeachableLearnset,
        .levelUpLearnset = sVenusaurLevelUpLearnset,
        .teachableLearnset = sVenusaurTeachableLearnset,
        .formChangeTable = sVenusaurFormChangeTable,
    },
#endif //P_FAMILY_BULBASAUR && P_PARADOX_FORMS

#if P_FAMILY_TRAPINCH && P_MEGA_EVOLUTIONS
    [SPECIES_FLYGON_MEGA] =
    { // added 100
        .baseHP        = 90,
        .baseAttack    = 110,
        .baseDefense   = 85,
        .baseSpeed     = 200,
        .baseSpAttack  = 50,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_BUG, TYPE_DRAGON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 260,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 234,
    #else
        .expYield = 197,
    #endif
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = TRAPINCH_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_MEGA_BURST_FLYGON, ABILITY_MEGA_BURST_FLYGON, ABILITY_MEGA_BURST_FLYGON }, // ABILITY_MEGA_BURST_FLYGON to come (LEVITATE + SAND_VEIL + ROTOTILL)
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flygon"),
        .cryId = CRY_FLYGON,
        .natDexNum = NATIONAL_DEX_FLYGON,
        .categoryName = _("Supersonic"),
        .height = 25,
        .weight = 800,
        .description = COMPOUND_STRING(
            "The power of MEGA ENERGY brings Flygon's\n"
            "power to an entirely new level. It now\n"
            "flies at super-sonic speed, easily able\n"
            "to overtake any prey."
        ),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_FlygonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_FlygonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_FlygonMega,
        .shinyPalette = gMonShinyPalette_FlygonMega,
        .iconSprite = gMonIcon_FlygonMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_M)
        FOOTPRINT(FlygonMega)
        OVERWORLD(
            sPicTable_FlygonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_FlygonMega,
            gShinyOverworldPalette_FlygonMega
        )
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sFlygonLevelUpLearnset,
        .teachableLearnset = sFlygonTeachableLearnset,
        .formChangeTable = sFlygonFormChangeTable,
    },
#endif //P_FAMILY_TRAPINCH && P_MEGA_EVOLUTIONS

#if P_FAMILY_KABUTO
    [SPECIES_KABUTOPS_BONE] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 125,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
        .expYield = 201,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR }, // Temporary until custom ability added
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("BoneKabutops"),
        .cryId = CRY_KABUTOPS,
        .natDexNum = NATIONAL_DEX_KABUTOPS,
        .categoryName = _("Living Bone"),
        .height = 13,
        .weight = 405,
        .description = COMPOUND_STRING(
        //  "being a water dweller to living on land as\n"
            "Formerly extinct and brought back again,\n"
            "KABUTOPS is once again vanishing from the\n"
            "wild. Now, these twisted abominations can\n"
            "sometimes be found in their place."
        ),
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KabutopsBone,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_KabutopsBone,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_KabutopsBone,
        .shinyPalette = gMonShinyPalette_KabutopsBone,
        .iconSprite = gMonIcon_KabutopsBone,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(KabutopsBone)
        OVERWORLD(
            sPicTable_KabutopsBone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_KabutopsBone,
            gShinyOverworldPalette_KabutopsBone
        )
      //.levelUpLearnset = sKabutopsBoneLevelUpLearnset,
      //.teachableLearnset = sKabutopsBoneTeachableLearnset,
      .levelUpLearnset = sKabutopsLevelUpLearnset,
      .teachableLearnset = sKabutopsTeachableLearnset,
    },
#endif //P_FAMILY_KABUTO

#ifdef __INTELLISENSE__
};
#endif

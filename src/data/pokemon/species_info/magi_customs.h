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

#ifdef __INTELLISENSE__
};
#endif

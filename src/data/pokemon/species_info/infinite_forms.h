#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoInfiniteForms[] =
{
#endif

#if P_FAMILY_EKANS
    [SPECIES_EKANS_INFINITE] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 54,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 62,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_RUSH, ABILITY_ROTOTILL, ABILITY_WATER_COMPACTION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ekans"),
        .cryId = CRY_EKANS,
        .natDexNum = NATIONAL_DEX_EKANS,
        .categoryName = _("Snake"),
        .height = 17,
        .weight = 72,
        .description = COMPOUND_STRING(
            "It buries itself in the sand, exposing\n"
            "only its bifurcated tail. By wiggling it\n"
            "to and fro, it lures in unsuspecting\n"
            "desert POKeMON for its meals."
        ),
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_EkansInfinite,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_EkansInfinite,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_EkansInfinite,
        .shinyPalette = gMonShinyPalette_EkansInfinite,
        .iconSprite = gMonIcon_EkansInfinite,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Ekans)
        OVERWORLD(
            sPicTable_EkansInfinite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_EkansInfinite,
            gShinyOverworldPalette_EkansInfinite
        )
        .levelUpLearnset = sSilicobraLevelUpLearnset,   // Temporary until bespoke moveset is created
        .teachableLearnset = sSilicobraTeachableLearnset,   // Temporary until bespoke moveset is created
        .eggMoveLearnset = sSilicobraEggMoveLearnset,   // Temporary until bespoke moveset is created
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARBOK_INFINITE}),
    },

    [SPECIES_ARBOK_INFINITE] =
    {
        .baseHP        = 80,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 157,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 153,
    #else
        .expYield = 147,
    #endif
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_RUSH, ABILITY_ROTOTILL, ABILITY_WATER_COMPACTION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Arbok"),
        .cryId = CRY_ARBOK,
        .natDexNum = NATIONAL_DEX_ARBOK,
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 660,
        .description = COMPOUND_STRING(
          //"steel oil drums. Once it wraps its body\n"
          "By burrowing through the desert sands, it\n"
          "silently stalks its prey and ambushes them,\n"
          "crushing the life out of them with its\n"
          "tremendous coil strength."
        ),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_ArbokInfinite,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ArbokInfinite,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_ArbokInfinite,
        .shinyPalette = gMonShinyPalette_ArbokInfinite,
        .iconSprite = gMonIcon_ArbokInfinite,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Arbok)
        OVERWORLD(
            sPicTable_ArbokInfinite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_ArbokInfinite,
            gShinyOverworldPalette_ArbokInfinite
        )
        .levelUpLearnset = sSandacondaLevelUpLearnset,  // Temporary until bespoke moveset is created
        .teachableLearnset = sSandacondaTeachableLearnset,  // Temporary until bespoke moveset is created
    },
#endif //P_FAMILY_EKANS


#ifdef __INTELLISENSE__
};
#endif

#if !(OW_GFX_COMPRESS)
#define INCGFX_COMP INCGFX_U32
#endif

// Begin Magiya's Custom Additions
#if P_FAMILY_WAILMER
#if !P_GBA_STYLE_SPECIES_GFX
    const u32 gMonFrontPic_WailordMega[] = INCGFX_U32("graphics/pokemon/wailord_mega/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_WailordMega[] = INCGFX_U16("graphics/pokemon/wailord_mega/normal.pal", ".gbapal");
    const u32 gMonBackPic_WailordMega[] = INCGFX_U32("graphics/pokemon/wailord_mega/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_WailordMega[] = INCGFX_U16("graphics/pokemon/wailord_mega/shiny.pal", ".gbapal");
#else
    const u32 gMonFrontPic_WailordMega[] = INCGFX_U32("graphics/pokemon/wailord_mega/anim_front_gba.png", ".4bpp.smol");
    const u16 gMonPalette_WailordMega[] = INCGFX_U16("graphics/pokemon/wailord_mega/normal_gba.pal", ".gbapal");
    const u32 gMonBackPic_WailordMega[] = INCGFX_U32("graphics/pokemon/wailord_mega/back_gba.png", ".4bpp.smol");
    const u16 gMonShinyPalette_WailordMega[] = INCGFX_U16("graphics/pokemon/wailord_mega/shiny_gba.pal", ".gbapal");
#endif //P_GBA_STYLE_SPECIES_GFX
#if !P_GBA_STYLE_SPECIES_ICONS
    const u8 gMonIcon_WailordMega[] = INCGFX_U8("graphics/pokemon/wailord_mega/icon.png", ".4bpp");
#else
    const u8 gMonIcon_WailordMega[] = INCGFX_U8("graphics/pokemon/wailord_mega/icon_gba.png", ".4bpp");
#endif //P_GBA_STYLE_SPECIES_ICONS
#if P_FOOTPRINTS
    const u8 gMonFootprint_WailordMega[] = INCGFX_U8("graphics/pokemon/wailord_mega/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_WailordMega[] = INCGFX_COMP("graphics/pokemon/wailord/overworld.png", ".4bpp", "-mwidth 8 -mheight 8");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_WailordMega[] = INCGFX_U16("graphics/pokemon/wailord/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_WailordMega[] = INCGFX_U16("graphics/pokemon/wailord/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_FAMILY_WAILMER

/* // SLEEPY_SANDS indefinitely on hold until human-created art is created or sourced.
#if P_FAMILY_SANDSHREW
    const u32 gMonFrontPic_SleepySands[] = INCGFX_U32("graphics/pokemon/sleepy_sands/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SleepySands[] = INCGFX_U16("graphics/pokemon/sleepy_sands/normal.pal", ".gbapal");
    const u32 gMonBackPic_SleepySands[] = INCGFX_U32("graphics/pokemon/sleepy_sands/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SleepySands[] = INCGFX_U16("graphics/pokemon/sleepy_sands/shiny.pal", ".gbapal");

//    const u8 gMonIcon_SleepySands[] = INCGFX_U8("graphics/pokemon/sandslash/icon.png", ".4bpp");     // Temporarily uses Sandslash until bespoke sprite is created
//    const u8 gMonIcon_SleepySands[] = INCGFX_U8("graphics/pokemon/sandslash/icon_gba.png", ".4bpp"); // Temporarily uses Sandslash until bespoke sprite is created
#endif //P_FAMILY_SANDSHREW
*/

#if P_FAMILY_BULBASAUR
    const u32 gMonFrontPic_IronTitan[] = INCGFX_U32("graphics/pokemon/iron_titan/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_IronTitan[] = INCGFX_U16("graphics/pokemon/iron_titan/normal.pal", ".gbapal");
    const u32 gMonBackPic_IronTitan[] = INCGFX_U32("graphics/pokemon/iron_titan/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_IronTitan[] = INCGFX_U16("graphics/pokemon/iron_titan/shiny.pal", ".gbapal");

    const u8 gMonIcon_IronTitan[] = INCGFX_U8("graphics/pokemon/iron_titan/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_IronTitan[] = INCGFX_U8("graphics/pokemon/iron_titan/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_IronTitan[] = INCGFX_COMP("graphics/pokemon/iron_titan/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_IronTitan[] = INCGFX_U16("graphics/pokemon/iron_titan/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_IronTitan[] = INCGFX_U16("graphics/pokemon/iron_titan/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_TRAPINCH
    const u32 gMonFrontPic_FlygonMega[] = INCGFX_U32("graphics/pokemon/flygon_mega/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_FlygonMega[] = INCGFX_U16("graphics/pokemon/flygon_mega/normal.pal", ".gbapal");
    const u32 gMonBackPic_FlygonMega[] = INCGFX_U32("graphics/pokemon/flygon_mega/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_FlygonMega[] = INCGFX_U16("graphics/pokemon/flygon_mega/shiny.pal", ".gbapal");

    const u8 gMonIcon_FlygonMega[] = INCGFX_U8("graphics/pokemon/flygon_mega/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_FlygonMega[] = INCGFX_U8("graphics/pokemon/flygon_mega/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_FlygonMega[] = INCGFX_COMP("graphics/pokemon/flygon_mega/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_FlygonMega[] = INCGFX_U16("graphics/pokemon/flygon_mega/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_FlygonMega[] = INCGFX_U16("graphics/pokemon/flygon_mega/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_KABUTO
    const u32 gMonFrontPic_KabutopsBone[] = INCGFX_U32("graphics/pokemon/kabutops_bone/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_KabutopsBone[] = INCGFX_U16("graphics/pokemon/kabutops_bone/normal.pal", ".gbapal");
    const u32 gMonBackPic_KabutopsBone[] = INCGFX_U32("graphics/pokemon/kabutops_bone/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_KabutopsBone[] = INCGFX_U16("graphics/pokemon/kabutops_bone/shiny.pal", ".gbapal");

    const u8 gMonIcon_KabutopsBone[] = INCGFX_U8("graphics/pokemon/kabutops_bone/icon.png", ".4bpp");

#if P_FOOTPRINTS
    const u8 gMonFootprint_KabutopsBone[] = INCGFX_U8("graphics/pokemon/kabutops_bone/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_KabutopsBone[] = INCGFX_COMP("graphics/pokemon/kabutops_bone/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_KabutopsBone[] = INCGFX_U16("graphics/pokemon/kabutops_bone/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_KabutopsBone[] = INCGFX_U16("graphics/pokemon/kabutops_bone/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_FAMILY_KABUTO

// End Magiya's Custom Additions
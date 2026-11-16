// #undef WHEN_LEARNED      // may be useful later, not needed at present
// #undef WHEN_FORGOTTEN

// Mega Wailord
#if P_FAMILY_WAILMER
static const struct FormChange sWailordFormChangeTable[] =
{
#if P_MEGA_EVOLUTIONS
    {FORM_CHANGE_ITEM_HOLD,     SPECIES_WAILORD_MEGA,   ITEM_AIR_BALLOON},
#endif //P_MEGA_EVOLUTIONS
    {FORM_CHANGE_TERMINATOR},
};
#endif //P_FAMILY_WAILMER

/* // SLEEPY_SANDS indefinitely on hold until human-created art is created or sourced.
// Sleepy Sands / Paradox Reversion Sandslash
#if P_FAMILY_SANDSHREW
static const struct FormChange sSandslashFormChangeTable[] =
{
#if P_MEGA_EVOLUTIONS
    {FORM_CHANGE_ITEM_USE,      SPECIES_SLEEPY_SANDS, ITEM_REVERSION_STONE},
#endif //P_MEGA_EVOLUTIONS
    {FORM_CHANGE_TERMINATOR},
};
#endif //P_FAMILY_SANDSHREW
*/
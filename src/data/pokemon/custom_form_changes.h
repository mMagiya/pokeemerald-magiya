// #undef WHEN_LEARNED      // may be useful later, not needed at present
// #undef WHEN_FORGOTTEN

// Mega Wailord
#if P_FAMILY_WAILMER
static const struct FormChange sWailordFormChangeTable[] =
{
#if P_MEGA_EVOLUTIONS
    {FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM,     SPECIES_WAILORD_MEGA,   ITEM_WAILORDITE},
#endif //P_MEGA_EVOLUTIONS
    {FORM_CHANGE_FAINT,                         SPECIES_WAILORD},
    {FORM_CHANGE_END_BATTLE,                    SPECIES_WAILORD},
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

#if P_FAMILY_TRAPINCH
static const struct FormChange sFlygonFormChangeTable[] =
{
#if P_MEGA_EVOLUTIONS
    {FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM,    SPECIES_FLYGON_MEGA,   ITEM_FLYGONITE},
#endif //P_MEGA_EVOLUTIONS
    {FORM_CHANGE_FAINT,                         SPECIES_FLYGON},
    {FORM_CHANGE_END_BATTLE,                    SPECIES_FLYGON},
    {FORM_CHANGE_TERMINATOR},
};
#endif //P_FAMILY_TRAPINCH
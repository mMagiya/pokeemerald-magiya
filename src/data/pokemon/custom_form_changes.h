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
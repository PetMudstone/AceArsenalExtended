class rhs_pbb_m99t
{
    options[] = { "camo", "loadout" };
    label="PBB M-99T";
    class camo
    {
        values[] = { "MDU02", "MDU10", "WDL_SAF" };
        alwaysSelectable=1;
    };
    class loadout
    {
        values[] = { "EMPTY", "RADIO", "RIFL", "RIFL_RADIO" };
        alwaysSelectable=1;

        class RIFL_RADIO
        {
            label = "RIFL/Radio";
            description = "Rifleman/Radio";
        };
    };
};

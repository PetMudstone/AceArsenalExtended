class rhs_pbb_m98
{
    options[] = { "camo", "loadout" };
    label="PBB M-98";
    class camo
    {
        values[] = { "MDU02", "MDU10", "WDL_SAF" };
        alwaysSelectable=1;
    };
    class loadout : rhs_loadout
    {
        values[] = { "EMPTY", "RIFL" };
        alwaysSelectable=1;
    };
};

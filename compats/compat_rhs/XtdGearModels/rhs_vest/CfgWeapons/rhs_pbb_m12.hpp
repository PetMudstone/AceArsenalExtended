class rhs_pbb_m12
{
    options[] = { "camo", "loadout" };
    label="PBB M-12";
    class camo
    {
        values[] = { "MDU10", "MDU10_DES" };
        alwaysSelectable=1;
    };
    class loadout : rhs_loadout
    {
        values[] = { "EMPTY", "RIFL" };
        alwaysSelectable=1;
    };
};

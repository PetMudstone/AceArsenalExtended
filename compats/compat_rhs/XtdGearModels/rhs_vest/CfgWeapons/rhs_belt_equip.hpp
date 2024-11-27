class rhs_belt_equip
{
    options[] = { "loadout" };
    label="Belt Equipment";
    class loadout : rhs_loadout
    {
        values[] = { "6sh46", "6sh46_alt", "AR", "GL", "holster", "RIFL", "RIFL_ALT", "sks", "DMR" };
        alwaysSelectable=1;
        class 6sh46
        {
            label = "6Sh46";
        };
        class 6sh46_alt
        {
            label = "6Sh46/Alt";
        };
        class holster
        {
            label = "Holster";
        };
        class sks
        {
            label = "SKS";
        };
    };
};

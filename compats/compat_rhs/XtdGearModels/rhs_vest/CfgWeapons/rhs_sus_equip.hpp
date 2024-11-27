class rhs_sus_equip
{
    options[] = { "loadout" };
    label="Suspender Equip.";
    class loadout : rhs_loadout
    {
        values[] = { "ak", "RIFL", "RIFL_LIGHT", "sks" };
        alwaysSelectable=1;
        class ak
        {
            label = "AK Chest.";
            description = "AK Chestrig";
        };
        class RIFL_LIGHT
        {
            label = "RIFL Light";
            description = "Rifleman Light";
        };
        class sks
        {
            label = "SKS";
        };
    };
};

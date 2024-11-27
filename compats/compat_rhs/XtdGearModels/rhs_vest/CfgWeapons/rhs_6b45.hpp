class rhs_6b45
{
    options[] = { "camo", "loadout" };
    label="6B45";
    class camo
    {
        values[] = { "EMR_SUM", "DESPNK" };
    };
    class loadout
    {
        values[] = { "EMPTY", "holster", "LIGHT", "MG", "OFC", "RIFL", "RIFL_ALT", "GL" };
        alwaysSelectable=1;
        class holster
        {
            label = "Holster";
        };
        class RIFL_ALT
        {
            label = "RIFL Alt";
            description = "Rifleman Alt";
        };
    };
};

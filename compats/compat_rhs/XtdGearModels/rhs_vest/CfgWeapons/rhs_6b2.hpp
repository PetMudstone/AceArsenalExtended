class rhs_6b2
{
    options[] = { "loadout" };
    label="6B2";
    class loadout : rhs_loadout
    {
        values[] = { "EMPTY", "6sh92", "chicom", "holster", "lifchik", "AR", "DMR" };
        alwaysSelectable=1;
        class 6sh92
        {
            label = "6Sh92";
        };
        class chicom
        {
            label = "Chicom";
            description = "Chicom Chest Rig";
        };
        class holster
        {
            label = "Holster";
        };
        class lifchik
        {
            label = "Lifchik Chest Rig";
        };
    };
};

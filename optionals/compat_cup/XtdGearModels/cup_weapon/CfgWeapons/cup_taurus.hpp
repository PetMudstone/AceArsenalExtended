class cup_taurus
{
    options[] = { "camo" };
    label="Taurus Tracker";
    class camo
    {
        values[] = { "steel", "gold" };
        alwaysSelectable=1;

        class steel
        {
            label = "Steel";
            image = QPATHTOF(data\camo\weapons\cup_taurus_steel.paa);
        };

        class gold
        {
            label = "Steel";
            image = QPATHTOF(data\camo\weapons\cup_taurus_gold.paa);
        };
    };
};

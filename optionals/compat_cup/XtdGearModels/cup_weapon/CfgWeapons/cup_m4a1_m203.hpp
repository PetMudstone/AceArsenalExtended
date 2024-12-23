class cup_m4a1_m203
{
    options[] = { "camo", "carryhandle" };
    label="M4A1 M203";
    class camo
    {
        values[] = { "BLK", "DES", "WDL" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = QPATHTOF(data\camo\weapons\cup_m4a1_des.paa);
        };

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\weapons\cup_m4a1_wdl.paa);
        };
    };

    class carryhandle
    {
        label = "Carryhandle";
        values[] = { "no", "yes" };
        alwaysSelectable=1;
        class no
        {
            label = "No";
        };

        class yes
        {
            label = "Yes";
        };
    };
};

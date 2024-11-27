class rhs_6b13
{
    options[] = { "camo", "loadout" };
    label="6B13";
    class camo
    {
        values[] = { "EMR_SUM", "FLRA", "VSR" };
        alwaysSelectable=1;
    };
    class loadout
    {
        values[] = { "None", "6sh92", "6sh92_headset_map", "6sh92_RADIO", "6sh92_GL", "CREW_OFC" };
        alwaysSelectable=1;
        class 6sh92
        {
            label = "6Sh92";
        };
        class 6sh92_headset_map
        {
            label = "6Sh92/Hdst./Map";
            description = "6Sh92/Headset/Mapcase";
        };
        class 6sh92_radio
        {
            label = "6Sh92/Radio";
        };
        class 6sh92_GL
        {
            label = "6Sh92/GL";
        };
        class CREW_OFC
        {
            label = "Crew/OFC";
            description = "Crew/Officer";
        };
    };
};

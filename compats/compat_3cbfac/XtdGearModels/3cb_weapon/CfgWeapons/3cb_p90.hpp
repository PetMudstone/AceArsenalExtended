class 3cb_p90
{
    options[] = { "camo", "optic" };
    label="P90";
    class camo
    {
        values[] = { "BLK", "camo", "hex", "KHK" };
        alwaysSelectable=1;
        class camo
        {
            label = "$STR_ACEAX_compat_3cbfac_p90_camo";
        };

        class hex
        {
            label = "$STR_ACEAX_compat_3cbfac_p90_hex";
        };
    };

    class optic : 3cb_attachsys
    {
        label = "$STR_ACEAX_compat_3cbfac_optic";
        values[] = { "mc1080", "picatinny" };
        alwaysSelectable=1;
        class mc1080
        {
            label = "MC-10-80";
        };
    };
};

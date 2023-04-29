class 3cb_kneepad
{
    options[] = { "camo", "coverage", "shemagh" };
    label = "$STR_ACEAX_compat_3cbfac_kneepads";
    class camo
    {
        values[] = { "BLK", "OLI", "TAN" };
        alwaysSelectable=1;
    };

    class coverage
    {
        label = "$STR_ACEAX_compat_3cbfac_coverage";
        values[] = { "both", "left", "right" };
        alwaysSelectable=1;

        class both
        {
            label = "$STR_ACEAX_compat_3cbfac_both";
        };

        class left
        {
            label = "$STR_ACEAX_compat_3cbfac_left";
        };

        class right
        {
            label = "$STR_ACEAX_compat_3cbfac_right";
        };
    };

    class shemagh
    {
        label = "$STR_ACEAX_compat_3cbfac_shemagh_neck";
        values[] = { "no", "yes" };
        alwaysSelectable=1;

        class no
        {
            label = "$STR_ACEAX_compat_3cbfac_no";
        };

        class yes
        {
            label = "$STR_ACEAX_compat_3cbfac_yes";
        };
    };
};

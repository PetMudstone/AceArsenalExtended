class 3cb_gear_combo
{
    options[] = { "eyewear", "eyewear_color", "gloves", "gloves_color", "headset", "shemagh" };
    label = "$STR_ACEAX_compat_3cbfac_gear_combo";
    class eyewear
    {
        label = "$STR_ACEAX_compat_3cbfac_eyewear";
        values[] = { "none", "ballistic", "tactical" };
        alwaysSelectable=1;

        class none
        {
           label = "$STR_ACEAX_compat_3cbfac_none";
        };

        class ballistic
        {
           label = "$STR_ACEAX_compat_3cbfac_ballistic_glasses_label";
           description = "$STR_ACEAX_compat_3cbfac_ballistic_glasses_desc";
        };

        class tactical
        {
           label = "$STR_ACEAX_compat_3cbfac_tactical_glasses_label";
           description = "$STR_ACEAX_compat_3cbfac_tactical_glasses_desc";
        };
    };

    class eyewear_color : CamoBase
    {
        label = "$STR_ACEAX_compat_3cbfac_eyewear_color";
        values[] = { "BLK", "CLR" };
        alwaysSelectable=0;
    };

    class gloves
    {
        label = "$STR_ACEAX_compat_3cbfac_gloves";
        values[] = { "none", "work", "tactical" };
        alwaysSelectable=1;

        class none
        {
           label = "$STR_ACEAX_compat_3cbfac_none";
        };

        class work
        {
            label = "$STR_ACEAX_compat_3cbfac_work";
        };

        class tactical
        {
            label = "$STR_ACEAX_compat_3cbfac_tactical";
        };
    };

    class gloves_color : CamoBase
    {
        label = "$STR_ACEAX_compat_3cbfac_gloves_color";
        values[] = { "BLK", "GRN", "TAN" };
        alwaysSelectable=0;
    };

    class headset
    {
        label = "$STR_ACEAX_compat_3cbfac_headset";
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

    class shemagh : CamoBase
    {
        label = "$STR_ACEAX_compat_3cbfac_shemagh_neck";
        values[] = { "none", "GRN", "TAN", "WHT" };
        alwaysSelectable=1;

        class none
        {
            label = "$STR_ACEAX_compat_3cbfac_none";
        };
    };
};

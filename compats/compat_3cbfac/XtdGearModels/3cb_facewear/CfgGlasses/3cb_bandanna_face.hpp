class 3cb_bandanna_face
{
    options[] = { "camo", "eyewear" };
    label = "$STR_ACEAX_compat_3cbfac_bandanna";
    class camo
    {
        values[] = { "BRN_CHK", "FLRA_ALT", "GRN_CHK", "RED_CHK", "WHT_CHK", "WIN_FLRA", "WIN" };
        alwaysSelectable=1;

        class WIN
        {
          label = "$STR_ACEAX_compat_3cbfac_winter_label";
          description = "$STR_ACEAX_compat_3cbfac_winter_desc";
        };
    };

    class eyewear
    {
        label = "$STR_ACEAX_compat_3cbfac_eyewear";
        values[] = { "none", "aviators", "shades", "sport" };
        alwaysSelectable=1;

        class none
        {
            label = "$STR_ACEAX_compat_3cbfac_none";
        };

        class aviators
        {
            label = "$STR_ACEAX_compat_3cbfac_aviators";
        };

        class shades
        {
            label = "$STR_ACEAX_compat_3cbfac_shades";
        };

        class sport
        {
            label = "$STR_ACEAX_compat_3cbfac_sport";
        };
    };
};

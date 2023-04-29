class 3cb_balaclava
{
    options[] = { "camo", "shemagh", "variant" };
    label = "$STR_ACEAX_compat_3cbfac_balaclava";
    class camo
    {
        values[] = { "BLK", "DES", "DWP", "FLRA_ALT", "KLMK_WIN_GRN", "KLMK_WIN_GRY", "WHT", "WIN", "MEE" };
        alwaysSelectable=1;

        class DES
        {
            label = "$STR_ACEAX_compat_3cbfac_desert";
            image = "#(rgb,8,8,3)color(0.66,0.58,0.38,1)";
        };

        class WIN
        {
          label = "$STR_ACEAX_compat_3cbfac_winter_label";
          description = "$STR_ACEAX_compat_3cbfac_winter_desc";
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

    class variant
    {
        label = "$STR_ACEAX_compat_3cbfac_variant";
        values[] = { "1", "2" };
        alwaysSelectable=1;
    };
};

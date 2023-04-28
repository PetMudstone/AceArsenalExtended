class 3cb_afr_turban_wrap
{
    options[] = { "camo", "wrap", "variant" };
    label = "$STR_ACEAX_compat_3cbfac_afr_turban_wrap";
    class camo
    {
        values[] = { "BLK", "BLU", "OLI", "RED", "TAN", "TRQ", "WHT", "YLW" };
        alwaysSelectable=1;

        class TRQ
        {
            label = "$STR_ACEAX_compat_3cbfac_turquoise";
        };
    };

    class wrap
    {
        label = "$STR_ACEAX_compat_3cbfac_wrap_pos";
        values[] = { "neck", "mouth" };

        class neck
        {
            label = "$STR_ACEAX_compat_3cbfac_neck";
        };

        class mouth
        {
            label = "$STR_ACEAX_compat_3cbfac_mouth";
        }
    };

    class variant
    {
        label = "$STR_ACEAX_compat_3cbfac_variant";
        values[] = { "A", "B", "C" };
        alwaysSelectable=1;
    };
};

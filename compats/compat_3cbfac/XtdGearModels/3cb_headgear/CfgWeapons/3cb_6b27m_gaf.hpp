class 3cb_6b27m_gaf
{
    options[] = { "camo", "goggles", "flag" };
    label = "$STR_ACEAX_compat_3cbfac_6b27m_gaf";
    class camo
    {
        values[] = { "GAF_DIGI", "GRN" };
        alwaysSelectable=1;
    };

    class goggles
    {
        label = "$STR_ACEAX_compat_3cbfac_goggles";
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

    class flag
    {
        label = "$STR_ACEAX_compat_3cbfac_flag";
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

class 3cb_g3a3
{
    options[] = { "attachsys", "widegrip" };
    label="G3A3";
    class attachsys : 3cb_attachsys
    {
        values[] = { "none", "ris" };
        alwaysSelectable=1;
    };

    class widegrip
    {
        label = "$STR_ACEAX_compat_3cbfac_widegrip";
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
    }
};

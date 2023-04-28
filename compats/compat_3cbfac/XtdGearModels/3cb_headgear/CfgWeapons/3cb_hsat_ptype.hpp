class 3cb_hsat_ptype
{
    options[] = { "marking" };
    label = "$STR_ACEAX_compat_3cbfac_hsat_ptype";
    class marking
    {
        label = "$STR_ACEAX_compat_3cbfac_marking";
        values[] = { "none", "FIA_1", "FIA_2", "FIA_3" };
        alwaysSelectable=1;

        class none
        {
          label = "$STR_ACEAX_compat_3cbfac_none";
        };

        class FIA_1
        {
          label = "$STR_ACEAX_compat_3cbfac_marking_fia_1";
        };

        class FIA_2
        {
          label = "$STR_ACEAX_compat_3cbfac_marking_fia_2";
        };

        class FIA_3
        {
          label = "$STR_ACEAX_compat_3cbfac_marking_fia_3";
        };
    };
};

class 3cb_6b27m
{
    options[] = { "camo", "goggles", "balaclava" };
    label = "$STR_ACEAX_compat_3cbfac_6b27m";
    class camo
    {
        values[] = { "DPM_ARID", "DPM_NAVY", "BLK", "Desert", "DPP", "DPP_COV", "DPP_COV_ALT", "AAF", "AAF_BLK", "AAF_BRN", "GRY", "BLU_NAVY", "OLI", "OLI_COV", "SPEC4CE", "SURPAT", "TAN", "UN", "UN_COV", "M81", "CHOC_CHIP_URB" };
        alwaysSelectable=1;

        class Desert
        {
            label = "$STR_ACEAX_compat_3cbfac_desert";
            image = "#(rgb,8,8,3)color(0.66,0.58,0.38,1)";
        };

        class DPP_COV
        {
            label = "$STR_ACEAX_compat_3cbfac_dpp_cov_label";
            description = "$STR_ACEAX_compat_3cbfac_dpp_cov_desc";
        };

        class DPP_COV_ALT
        {
            label = "$STR_ACEAX_compat_3cbfac_dpp_cov_alt_label";
            description = "$STR_ACEAX_compat_3cbfac_dpp_cov_alt_desc";
        };

        class BLU_NAVY
        {
            label = "$STR_ACEAX_compat_3cbfac_navy_blue";
            image = "#(rgb,8,8,3)color(0.1,0.17,0.33,1)";
        };

        class OLI_COV
        {
            label = "$STR_ACEAX_compat_3cbfac_oli_cov_label";
            description = "$STR_ACEAX_compat_3cbfac_oli_cov_desc";
            image = "#(rgb,8,8,3)color(0.74,0.71,0.59,1)";
        };

        class UN_COV
        {
            label = "$STR_ACEAX_compat_3cbfac_un_cov_label";
            description = "$STR_ACEAX_compat_3cbfac_un_desc";
        };
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

    class balaclava
    {
        label = "$STR_ACEAX_compat_3cbfac_balaclava";
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

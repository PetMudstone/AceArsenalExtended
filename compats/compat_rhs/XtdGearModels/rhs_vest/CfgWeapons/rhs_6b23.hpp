class rhs_6b23
{
    options[] = { "camo", "loadout", "collar" };
    label="6B23";
    class camo
    {
        values[] = { "KHK", "EMR_SUM", "FLRA", "FLRA_EMR", "MTNLES", "OLI", "TTsKO_CDF_DIGI", "TTsKO_CDF_FRS", "TTsKO_CDF_MTN" };
        alwaysSelectable=1;

        class FLRA_EMR
	    {
            label = "Flora & EMR-S";
            description = "Flora and EMR-Summer";
            image = "z\aceax\compats\RHS\data\camo\flora_and_emr.paa";
	    };
    };
    class loadout : rhs_loadout
    {
        values[] = { "EMPTY", "6Sh116", "6Sh116_GL", "6Sh92", "6Sh92/Hdst.", "6Sh92/Hdst./Map", "6Sh92_RADIO", "6Sh92_GL", "6Sh92_GL_Hdst.", "6Sh92_GL_RADIO", "OFC", "NCO_CREW", "ENGI", "MED", "RIFL", "SNP", "Vydra-3M" };
        alwaysSelectable=1;

        class 6Sh116_GL
        {
            label = "6Sh116/GL";
            description = "6Sh116/GL";
        };

        class 6Sh92_RADIO
        {
            label = "6Sh92/Radio";
        };

        class 6Sh92_GL
        {
            label = "6Sh92/GL";
            description = "6Sh92/Grenadier";
        };

        class 6Sh92_GL_Hdst.
        {
            label = "6Sh92/GL/Hdst.";
            description = "6Sh92/Grenadier/Headset";
        };

        class 6Sh92_GL_RADIO
        {
            label = "6Sh92/GL/Radio.";
            description = "6Sh92/Grenadier/Radio";
        };

        class NCO_CREW
        {
            label = "NCO/Crew";
            description = "Non-Commissioned Officer/Crew";
        };
    };
     class collar
    {
        values[] = { "Standard", "Spetsnaz" };
        alwaysSelectable=1;
    };
};

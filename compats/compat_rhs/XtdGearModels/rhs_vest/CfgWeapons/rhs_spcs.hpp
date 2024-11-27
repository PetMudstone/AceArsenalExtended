class rhs_spcs
{
    options[] = { "camo", "loadout" };
    label="SPCS";
    class camo
    {
        values[] = { "OEF_CP", "UCP" };
        alwaysSelectable=1;
    };
    class loadout : rhs_loadout
    {
        values[] = { "EMPTY", "CREW", "GL", "MG", "MED", "RIFL_ALT", "RIFL", "AR", "SNP", "SL", "TL", "TL_ALT" };
        alwaysSelectable=1;

        class RIFL_ALT
        {
            label = "RIFL Alt";
            description = "Rifleman Alt";
        };

        class TL_ALT
        {
            label = "TL Alt";
            description = "Team Leader Alt";
        };
    };
};

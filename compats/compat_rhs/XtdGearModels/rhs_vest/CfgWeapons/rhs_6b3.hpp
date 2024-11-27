class rhs_6b3
{
    options[] = { "loadout" };
    label="6B3";
    class loadout : rhs_loadout
    {
        values[] = { "EMPTY", "holster", "OFC", "r148", "RIFL", "RIFL_2", "RIFL_3", "AR", "GL", "GL_2" };
        alwaysSelectable=1;
        class holster
        {
            label = "Holster";
        };
        class r148
        {
            label = "R-148";
        };
        class RIFL_2
        {
		    label = "RIFL 2";
		    description = "Rifleman 2";
	    };
        class RIFL_3
        {
		    label = "RIFL 3";
		    description = "Rifleman 3";
	    };
        class GL_2
        {
            label = "GL 2";
            description = "Grenadier 2";
        };
    };
};

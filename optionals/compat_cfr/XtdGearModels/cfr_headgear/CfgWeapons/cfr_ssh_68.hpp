class cup_ssh_68 { // We append to the CUP model for sake of simplicity.
    class camo
    {
        values[] += { "CFR_BUT_MTN", "CFR_BUT_WNTR", "CFR_BUT_URB", "CHDKZ_SPRAY", "CHDKZ_STAR", "CFR_KMY_URB", "CFR_KMY_WDL", "CFR_SMOG", "CFR_KMY_WDL_SMOG", "CFR_KMY_WDL_URB", "DPM", "FLCK", "M81", "CFR_M81_FLCK", "CFR_PEADOT_FLCK", "CFR_M81_DPM", "CFR_DPM_FLCK" };

        class CHDKZ_SPRAY
		{
			label = CSTRING(ChDKZ_Spray_Paint_Label);
			description = CSTRING(ChDKZ_Spray_Paint_Description);
			image = QPATHTOF(data\camo\chdkz\chdkz_helm_spray.paa);
		};

        class CHDKZ_STAR
		{
            centerImage = 1; // Image is 256x128 to make sure the star is centered.
			label = CSTRING(ChDKZ_Star_Label);
			description = CSTRING(ChDKZ_Star_Description);
			image = QPATHTOF(data\camo\chdkz\chdkz_helm_star.paa);
		};

		class CFR_PEADOT_FLCK
		{
			label = CSTRING(Flecktarn_Erbsenmuster_Label);
			description = CSTRING(Flecktarn_Erbsenmuster_Description);
			image = QPATHTOF(data\camo\napa\mixed\peadot_flck.paa);
		};
    };
};

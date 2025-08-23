class cfr_smock_napa {
	label = CSTRING(NAPA_Smock_Label);
	author = CSTRING(Nata);
	options[] = { "camo", "pantscamo" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "DPM", "FLCK", "M81" }; // Sadly no Peadot yet.
	};

	class pantscamo
	{
		alwaysSelectable = 1;
		values[] = { "DPM", "FLCK", "CFR_JGSW", "M81", "CFR_PEADOT"  };
		class CFR_JGSW
		{
			label = "Jigsaw";
			description = "Belgian Jigsaw";
			image = QPATHTOF(data\camo\napa\jgsw.paa);
		};
	};

};

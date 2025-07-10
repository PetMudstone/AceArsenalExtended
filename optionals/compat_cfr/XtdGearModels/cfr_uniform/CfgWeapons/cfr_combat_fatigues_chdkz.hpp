class cfr_combat_fatigues_chdkz {
	label = CSTRING(ChDKZ_Combat_Fatigues_Label);
	author = CSTRING(Nata);
	options[] = { "camo", "pantscamo" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "CFR_KMY_URB", "CFR_KMY_WDL", "CFR_SMOG", "CFR_TIGR_URB" };
	};

	class pantscamo 
	{
		alwaysSelectable = 1;
		values[] = { "BRN", "GRN", "CFR_KMY_URB", "CFR_KMY_WDL", "CFR_SMOG", "CFR_TIGR_URB" };
		class BRN
		{
			label = CSTRING(Brown_Label);
			image = "#(rgb,8,8,3)color(0.69,0.60,0.39,1)";
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.59,0.61,0.41,1)";
		};
	};
};

class cfr_smock_chdkz {
	label = CSTRING(ChDKZ_Smock_Label);
	author = CSTRING(Nata);
	options[] = { "camo", "pantscamo", "sleeves" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "CFR_FLRA", "CFR_KMY_URB", "CFR_KMY_WDL", "CFR_SMOG" };
	};

	class pantscamo
	{
		alwaysSelectable = 1;
		values[] = { "CFR_FLRA", "CFR_KMY_URB", "CFR_KMY_WDL", "CFR_SMOG" };
	};

	class sleeves
	{
		alwaysSelectable = 1;
		values[] = { "Full", "Quarter" };
	};

};

class cfr_cdf_fatigues { // We don't append to CUP's "CDF Camo" since we have different options here.
	label = CSTRING(CDF_Fatigues_Label);
	author = "Nata";
	options[] = { "camo", "sleeves", "gloves" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "CFR_BUT_ARID", "CFR_BUT_FRS", "CFR_BUT_MTN", "CFR_BUT_WNTR" };
	};

	class sleeves
	{
		alwaysSelectable = 1;
		values[] = { "Full", "Quarter" };
	};

	class gloves
	{
		alwaysSelectable = 1;
		label = CSTRING(Gloves);
		values[] = {"no", "yes"};
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};
};

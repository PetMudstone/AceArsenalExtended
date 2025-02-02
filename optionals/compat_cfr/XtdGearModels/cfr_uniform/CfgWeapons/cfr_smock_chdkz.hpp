class cfr_smock_chdkz {
	label = CSTRING(ChDKZ_Smock_Label);
	author = "Nata";
	options[] = { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "CFR_FLRA", "CFR_KMY_URB", "CFR_KMY_URB_WDL", "CFR_KMY_URB_SMOG", "CFR_KMY_WDL", "CFR_KMY_WDL_FLRA", "CFR_KMY_WDL_URB", "CFR_KMY_WDL_SMOG", "CFR_SMOG", "CFR_SMOG_FLRA" };

		class CFR_KMY_URB_SMOG
		{
			label = CSTRING(Kamysh_Urban_Smog_Label);
			description = CSTRING(Kamysh_Urban_Smog_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\kmy_urb_smog.paa);
		};
		class CFR_KMY_WDL_FLRA
		{
			label = CSTRING(Kamysh_Woodland_Flora_Label);
			description = CSTRING(Kamysh_Woodland_Flora_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\kmy_wdl_flora.paa);
		};
		class CFR_SMOG_FLRA
		{
			label = CSTRING(Smog_Flora_Label);
			description = CSTRING(Smog_Flora_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\smog_flora.paa);
		};
	};

};

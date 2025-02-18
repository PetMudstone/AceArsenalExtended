class cfr_combat_fatigues_chdkz {
	label = CSTRING(ChDKZ_Combat_Fatigues_Label);
	author = "Nata";
	options[] = { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "CFR_KMY_URB", "CFR_KMY_URB_BRN", "CFR_KMY_URB_GRN", "CFR_KMY_URB_TIGR_URB", "CFR_KMY_WDL", "CFR_KMY_WDL_BRN", "CFR_KMY_WDL_URB", "CFR_SMOG", "CFR_SMOG_KMY_WDL", "CFR_TIGR_URB", "CFR_TIGR_URB_BRN", "CFR_TIGR_URB_KMY_URB" };
		class CFR_KMY_URB_BRN
		{
			label = CSTRING(Kamysh_Urban_Brown_Label);
			description = CSTRING(Kamysh_Urban_Brown_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\kmy_urb_brn.paa);
		};

		class CFR_KMY_URB_GRN
		{
			label = CSTRING(Kamysh_Urban_Green_Label);
			description = CSTRING(Kamysh_Urban_Green_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\kmy_urb_grn.paa);
		};

		class CFR_KMY_URB_TIGR_URB
		{
			label = CSTRING(Kamysh_Urban_Tigr_Urban_Label);
			description = CSTRING(Kamysh_Urban_Tigr_Urban_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\kmy_urb_tigr_urb.paa);
		};

		class CFR_KMY_WDL_BRN
		{
			label = CSTRING(Kamysh_Woodland_Brown_Label);
			description = CSTRING(Kamysh_Woodland_Brown_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\kmy_wdl_brn.paa);
		};

		class CFR_SMOG_KMY_WDL
		{
			label = CSTRING(Smog_Kamysh_Woodland_Label);
			description = CSTRING(Smog_Kamysh_Woodland_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\smog_kmy_wdl.paa);
		};
		
		class CFR_TIGR_URB_BRN
		{
			label = CSTRING(Tigr_Urban_Brown_Label);
			description = CSTRING(Tigr_Urban_Brown_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\tigr_urb_brn.paa);
		};
		
		class CFR_TIGR_URB_KMY_URB
		{
			label = CSTRING(Tigr_Urban_Kamysh_Urban_Label);
			description = CSTRING(Tigr_Urban_Kamysh_Urban_Description);
			image = QPATHTOF(data\camo\chdkz\mixed\tigr_urb_kmy_urb.paa);
		};
	};
};

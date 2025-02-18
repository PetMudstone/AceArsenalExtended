class cfr_combat_fatigues_napa {
	label = CSTRING(NAPA_Combat_Fatigues_Label);
	author = "Nata";
	options[] = { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "FLCK", "CFR_BRN_FLCK", "CFR_DPM_BRN", "DPM", "CFR_DPM_FLCK", "CFR_FLCK_BRN", "CFR_FLCK_DPM", "CFR_FLCK_M81", "M81", "CFR_M81_DPM", "CFR_M81_FLCK", "CFR_M81_GRN"  };

		class CFR_BRN_FLCK
		{
			label = CSTRING(Brown_Flecktarn_Label);
			description = CSTRING(Brown_Flecktarn_Description);
			image = QPATHTOF(data\camo\napa\mixed\brn_flck.paa);
		};

		class CFR_DPM_BRN
		{
			label = CSTRING(DPM_Brown_Label);
			description = CSTRING(DPM_Brown_Description);
			image = QPATHTOF(data\camo\napa\mixed\dpm_brn.paa);
		};

		class CFR_FLCK_BRN
		{
			label = CSTRING(Flecktarn_Brown_Label);
			description = CSTRING(Flecktarn_Brown_Description);
			image = QPATHTOF(data\camo\napa\mixed\flck_brn.paa);
		};

		class CFR_FLCK_DPM
		{
			label = CSTRING(Flecktarn_DPM_Label);
			description = CSTRING(Flecktarn_DPM_Description);
			image = QPATHTOF(data\camo\napa\mixed\flck_dpm.paa);
		};

		class CFR_FLCK_M81
		{
			label = CSTRING(Flecktarn_M81_Label);
			description = CSTRING(Flecktarn_M81_Description);
			image = QPATHTOF(data\camo\napa\mixed\flck_m81.paa);
		};

		class CFR_M81_GRN
		{
			label = CSTRING(M81_Green_Label);
			description = CSTRING(M81_Green_Description);
			image = QPATHTOF(data\camo\napa\mixed\m81_grn.paa);
		};
	};
};

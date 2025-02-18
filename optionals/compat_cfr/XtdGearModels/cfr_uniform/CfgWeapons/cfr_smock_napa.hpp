class cfr_smock_napa {
	label = CSTRING(NAPA_Smock_Label);
	author = "Nata";
	options[] = { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "DPM", "FLCK", "CFR_FLCK_PEADOT", "M81" };

		class CFR_FLCK_PEADOT
		{
			label = CSTRING(Flecktarn_Erbsenmuster_Label);
			description = CSTRING(Flecktarn_Erbsenmuster_Description);
			image = QPATHTOF(data\camo\napa\mixed\flck_peadot.paa);
		};
	};

};

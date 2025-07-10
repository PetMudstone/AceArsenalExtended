class cfr_combat_fatigues_napa {
	label = CSTRING(NAPA_Combat_Fatigues_Label);
	author = CSTRING(Nata);
	options[] = { "camo", "pantscamo" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "BRN", "DPM", "FLCK", "M81"};

		class BRN
		{
			label = CSTRING(Brown_Label);
			image = "#(rgb,8,8,3)color(0.63,0.53,0.42,1)";
		};

	};

	class pantscamo
	{
		alwaysSelectable = 1;
		values[] = {"BRN", "DPM", "GRN", "FLCK", "M81"};

		class BRN
		{
			label = CSTRING(Brown_Label);
			image = "#(rgb,8,8,3)color(0.63,0.53,0.42,1)";
		};

		class GRN
		{
			label = CSTRING(Brown_Label);
			image = "#(rgb,8,8,3)color(0.59,0.61,0.41,1)";
		};
	};
};

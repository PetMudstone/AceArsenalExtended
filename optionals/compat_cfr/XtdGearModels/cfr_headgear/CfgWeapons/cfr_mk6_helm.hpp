class cfr_mk6_helm {
    label = "Mk6 Helmet [CDF]";
    author = CSTRING(Nata);
	options[]= { "camo", "accessory" };
    class camo
	{
		alwaysSelectable = 1;
		values[] += {"CFR_BUT_FRS", "CFR_BUT_MTN"};
	};

	class accessory
	{
		alwaysSelectable = 1;
		label = "Accessory";
		values[] = {"none", "prr", "prr_crew", "prr_glasses", "prr_goggles", "prr_netting" };
		class none
		{
			label = CSTRING(None_Label);
		};

		class prr
		{
			label = "PRR";
		};

		class prr_crew
		{
			label = "PRR/Crew";
		};

		class prr_glasses
		{
			label = "PRR/Glasses";
		};

		class prr_goggles
		{
			label = "PRR/Goggles";
		};

		class prr_netting
		{
			label = "PRR/Netting";
		};
	};
};

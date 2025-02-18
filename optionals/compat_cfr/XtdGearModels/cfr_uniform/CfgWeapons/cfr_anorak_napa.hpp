class cfr_anorak_napa {
	label="Anorak [NAPA]";
	author="Community Upgrade Project";
	options[]= { "camo", "pantscamo", "hood" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "DPM", "FLCK", "M81", "CFR_PEADOT" };
	};

	class pantscamo
	{
		alwaysSelectable = 1;
		values[]={ "JEAN", "KHK" };
		class JEAN
		{
			label = "Jeans";
			image = "#(rgb,8,8,3)color(0.31,0.35,0.41,1)";
		};
		class KHK
		{
			image = "#(rgb,8,8,3)color(0.31,0.33,0.24,1)";
		};

	};

	class hood
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Hood";
		values[] = {"down", "up" };
		class down
		{
			label = "Down";
			actionLabel = "Pull Hood Down";
		};

		class up
		{
			label = "Up";
			actionLabel = "Pull Hood Up";
		};
	};
};

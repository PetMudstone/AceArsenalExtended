class cfr_anorak_civ {
	label="Anorak [Civ]";
	author="Nata";
	options[]= { "pantscamo", "hood" };
	// No camo yet, since it only comes in woodland print for now.
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

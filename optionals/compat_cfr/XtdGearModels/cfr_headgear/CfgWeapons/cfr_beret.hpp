class cfr_beret {
	label = "Beret [CDF]";
	author = "Nata";
	options[]= { "camo" };
	class camo
	{
		values[] = {"OLI", "CFR_BUT_ARID", "CFR_BUT_FRS", "CFR_BUT_MTN", "CFR_BUT_WNTR" };

		class OLI
		{
			image = "#(rgb,8,8,3)color(0.49,0.47,0.22,1)";
		};
	};
};

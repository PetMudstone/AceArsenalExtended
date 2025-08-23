class sogpf_unif_udt {
	label="Uniform [UDT]";
	author="Savage Game Design";
	options[]= { "camo", "pantscamo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLU", "YLW", "WET" };
		class WET
		{
			label = "Wetsuit";
			description = "Beaver Wetsuit";
		};
	};

	class pantscamo
	{
		alwaysSelectable = 1;
		values[] = {"KHK", "TSW" };
	};
};

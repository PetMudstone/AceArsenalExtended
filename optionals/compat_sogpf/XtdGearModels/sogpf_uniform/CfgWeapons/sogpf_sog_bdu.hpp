class sogpf_sog_bdu {
	label="BDU [SOG]";
	author="Savage Game Design";
	options[]= { "camo", "variant" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "OLI", "SOGPF_SPRAY", "SOGPF_SPRAY_BLK", "TSW", "TSW_BLK" };
		class SOGPF_SPRAY_BLK
		{
			label = "Spray/Black";
		};
		class TSW_BLK
		{
			label = "TSW/Black";
			description = "Tigerstripe Woodland/Black";
		};
	};

	class variant
	{
		alwaysSelectable = 1;
		label = "Variant";
		values[] = {"1", "2" };
	};
};

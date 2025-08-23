class sogpf_k2b_usmc {
	label="K2B [USMC]";
	author="Savage Game Design";
	options[]= { "camo", "loadout" };

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
		values[] = {"HELI", "JET" };
		class HELI
		{
			label = "Heli";
			description = "Helicopter Crewman";
		};
		class JET
		{
			label = "Jet";
			description = "Jet Crewman";
		};
	};
};

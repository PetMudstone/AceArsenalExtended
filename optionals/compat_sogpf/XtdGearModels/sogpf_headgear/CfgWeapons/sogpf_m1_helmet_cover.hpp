class sogpf_m1_helmet_cover { // Doesn't include the basic bare M1 helmet.
	label="M1 Helmet (Cover)";
	author="Savage Game Design";
	options[]= { "camo", "variant" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"SOG_MIT_G", "SOG_MIT_B" };
		class SOG_MIT_G
		{
			label = "Mitch G";
			description = "USMC Mitchell Green";
		};

		class SOG_MIT_B
		{
			label = "Mitch B";
			description = "USMC Mitchell Brown";
		};
	};

	class variant
	{
		label = "Variant";
		alwaysSelectable = 1;
		// Variant numbers don't correspond to the actual names since that'd result in a very confusing numbering scheme. 
		// Users might think "why does it start at 2 and not 1?"
		values[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15" };
	};
};

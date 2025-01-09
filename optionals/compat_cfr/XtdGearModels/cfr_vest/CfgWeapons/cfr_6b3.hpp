class cfr_6b3 { // We aren't appending to the CUP CDF 6b3 since this one has vastly different options.
	label = CSTRING(6B3_Label);
	author = "Nata";
	options[]= { "camo", "loadout", "m23" };
	class camo
	{
		values[] = { "CFR_BUT_ARID", "CFR_BUT_FRS", "CFR_BUT_MTN", "CFR_BUT_WNTR", "GRN" };
		class GRN
		{
			image = "#(rgb,8,8,3)color(0.37,0.35,0.23,1)";
		};
	};
	class loadout : cfr_loadout
	{
		values[] = {"STD", "EMPTY", "GL", "LIGHT", "MG", "NCO"};
	};
	class m23
	{
		alwaysSelectable = 1;
		label = CSTRING(M23_Pioneer_Label);
		values[] = {"no", "yes"};
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};
};

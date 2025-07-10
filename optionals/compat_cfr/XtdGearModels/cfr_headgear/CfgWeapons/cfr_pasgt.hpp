class cfr_pasgt {
    label = "PASGT [CDF]";
    author = CSTRING(Nata);
	options[]= { "camo", "goggles", "nvg_mount" };
    class camo
	{
		alwaysSelectable = 1;
		values[] += { "CFR_BUT_ARID", "CFR_BUT_FRS", "CFR_BUT_MTN", "CFR_BUT_WNTR", "CFR_BUT_URB", "CFR_BUT_URB", "CFR_UN" };

	};

	class goggles : cfr_goggles
	{
		label = "Goggles";
		alwaysSelectable = 1;
		values[] = {"no", "yes", "yes_cover", "yes_cover_back" };
	};

	class nvg_mount
	{
		alwaysSelectable = 1;
		label = "NVG Mount";
		values[] = {"no", "yes" };
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

class cfr_beret {
	label = "Beret [CDF]";
	author = "Nata";
	options[]= { "camo", "branch" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = {"PLAIN", "CFR_BUT_ARID", "CFR_BUT_FRS", "CFR_BUT_MTN", "CFR_BUT_WNTR", "CFR_BUT_URB" };

		class PLAIN
		{
			label = CSTRING(Plain_Label);
		};
	};

	class branch : cfr_branch
	{
		alwaysSelectable = 1;
		values[] = { "CDF", "MVD" };
	};
};

class cfr_m92_helm {
    label = CSTRING(M92_Helmet_CDF_Label);
    author = CSTRING(Nata);
	options[]= { "camo", "goggles" };
    class camo
	{
		alwaysSelectable = 1;
		values[] += { "CFR_BUT_ARID", "CFR_BUT_FRS", "CFR_BUT_MTN", "CFR_UN" };

	};

	class goggles : cfr_goggles
	{
		label = "Goggles";
		alwaysSelectable = 1;
		values[] = {"no", "yes", "yes_cover", "yes_cover_back" };
	};
};

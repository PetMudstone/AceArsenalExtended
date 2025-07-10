class cfr_patrol_cap {
    label = "Patrol Cap [CDF]"; // While labeled "Patrol Cap" in CFR, it's actually based on the vanilla "Military Cap".
    author = CSTRING(Nata);
	options[]= { "camo"};
    class camo
	{
		alwaysSelectable = 1;
		values[] += { "CFR_DUNA", "CFR_LOVEC" };

	};

};

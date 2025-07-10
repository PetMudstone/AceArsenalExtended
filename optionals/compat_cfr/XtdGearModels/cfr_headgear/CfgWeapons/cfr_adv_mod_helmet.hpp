class cfr_adv_mod_helm {
    label = "Adv. Mod. Helm. [CDF]";
    author = CSTRING(Nata);
	options[]= { "camo", "accessory"};
    class camo
	{
		alwaysSelectable = 1;
		values[] += { "CFR_DUNA", "CFR_LOVEC" };

	};

	class accessory
    {
		label = "Accessory";
        values[] = { "Headset", "Chops", "Ear Prot.", "None" };
        alwaysSelectable=1;
    };

};

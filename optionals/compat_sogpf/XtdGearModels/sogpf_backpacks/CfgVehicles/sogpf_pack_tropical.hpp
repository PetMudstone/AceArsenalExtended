class sogpf_pack_tropical {
	label="Tropical Pack";
	author="Savage Game Design";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "SOGPF_SPRAY" };
	};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "DEMO", "MG", "RTO" };

	};
};

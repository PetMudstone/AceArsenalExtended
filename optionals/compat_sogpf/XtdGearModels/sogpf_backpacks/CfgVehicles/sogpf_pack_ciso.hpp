class sogpf_pack_ciso {
	label="CISO Pack";
	author="Savage Game Design";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"OLI", "SOGPF_SPRAY" };
	};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "DEMO", "MG", "RTO", "SCT" };
	};
};

class sogpf_pack_army {
	label="Army Pack";
	author="Savage Game Design";
	options[]= { "loadout" };

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"ENGI", "MED", "MG", "MG_AMMO", "RIFL", "SCT", "RTO" };
		class MG_AMMO
		{
			label = "MG Ammo";
			description = "Machine Gunner - Ammo";
		};
	};
};

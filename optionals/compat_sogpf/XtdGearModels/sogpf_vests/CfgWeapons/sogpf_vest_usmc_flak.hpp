class sogpf_vest_usmc_flak {
	label="USMC [M69 Flak Vest]";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"GL", "MED", "MG", "OFC", "RIFL", "RIFL_2" };
		class RIFL_2
		{
			label = "Rifleman 2";
		};
	};
};

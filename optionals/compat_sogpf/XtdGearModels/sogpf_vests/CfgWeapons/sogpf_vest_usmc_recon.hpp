class sogpf_vest_usmc_recon {
	label="USMC [Recon]";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"GL", "MG", "RIFL" };
	};
};

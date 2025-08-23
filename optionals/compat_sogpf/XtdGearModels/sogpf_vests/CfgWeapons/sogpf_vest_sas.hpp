class sogpf_vest_sas {
	label="SAS Vest";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"GL", "MG", "CMDR", "SCT" };
		class CMDR
		{
			label = "CMDR";
			description = "Patrol Commander";
		};
	};
};

class sogpf_vest_sog {
	label="SOG Vest";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"DEMO", "MG", "MED", "RTO", "SCT", "TL" };
	};
};

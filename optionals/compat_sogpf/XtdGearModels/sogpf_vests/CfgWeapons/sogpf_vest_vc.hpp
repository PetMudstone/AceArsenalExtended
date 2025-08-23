class sogpf_vest_vc {
	label="VC Vest";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"ASLT", "LEAD", "MG", "MED", "RIFL" };
		class ASLT
		{
			label = "Assault";
		};
		class LEAD
		{
			label = "Leader";
		};
	};
};

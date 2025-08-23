class sogpf_vest_nva {
	label="NVA Vest";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"ASLT", "MG", "MED", "OFC", "RIFL", "SAP" };
		class ASLT
		{
			label = "Assault";
		};
		class SAP
		{
			label = "Sapper";
		};
	};
};

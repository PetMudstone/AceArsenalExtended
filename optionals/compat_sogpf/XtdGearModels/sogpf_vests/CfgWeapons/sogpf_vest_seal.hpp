class sogpf_vest_seal {
	label="SEAL Vest";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"DIVER", "GL", "MG", "MED", "RIFL", "SCT", "TL" };
		class DIVER
		{
			label = "Diver";
		};
	};
};

class sogpf_vest_anzac {
	label="ANZAC Vest";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"CREW", "GL", "MG", "MED", "OFC", "RIFL", "RIFL_2", "SCT" };

		class RIFL_2
		{
			label = "Rifleman 2";
		};
	};
};

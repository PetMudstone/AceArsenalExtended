class sogpf_vest_army {
	label="Army Vest";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"CREW", "DMR", "GL", "MG", "MED", "OFC", "RIFL", "RIFL_2", "SCT", "SNT" };

		class DMR
		{
			label = "DMR";
			description = "Designated Marksman";
		};

		class RIFL_2
		{
			label = "Rifleman 2";
		};

		class SNT
		{
			label = "Sentry";
		};
	};
};

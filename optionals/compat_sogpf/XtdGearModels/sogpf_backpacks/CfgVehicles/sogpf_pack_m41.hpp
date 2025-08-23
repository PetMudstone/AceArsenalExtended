class sogpf_pack_m41 {
	label="M41 Pack";
	author="Savage Game Design";
	options[]= { "loadout" };

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "ETOOL", "BEDROLL", "BEDROLL_ETOOL", "RTO" };
		class BEDROLL
		{
			label = "Bedroll";
		};

		class BEDROLL_ETOOL
		{
			label = "Bdrl/E-Tool";
			description = "Bedroll/M51 E-Tool";
		};
	};
};

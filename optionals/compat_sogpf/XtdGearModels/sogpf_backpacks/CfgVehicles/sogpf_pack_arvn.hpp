class sogpf_pack_arvn {
	label="ARVN Pack";
	author="Savage Game Design";
	options[]= { "loadout" };

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "CTN", "BEDROLL", "ETOOL" };
		class CTN
		{
			label = "Canteen";
		};

		class BEDROLL
		{
			label = "Bedroll";
			description = "Bedroll/Canteen";
		};
	};
};

class sogpf_pack_anzac_p08 {
	label="ANZAC Pack [P08]";
	author="Savage Game Design";
	options[]= { "loadout" };

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "CTN_ETOOL", "SHOVEL" };
		class CTN_ETOOL
		{
			label = "Ctn/E-Tool";
			description = "Canteens/M51 E-Tool";
		};

		class SHOVEL
		{
			label = "Shovel";
		};
	};
};

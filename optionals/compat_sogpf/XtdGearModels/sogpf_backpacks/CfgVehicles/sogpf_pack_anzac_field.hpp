class sogpf_pack_anzac_field {
	label="ANZAC Pack [Field]";
	author="Savage Game Design";
	options[]= { "loadout" };

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "CTN_ETOOL"};
		class CTN_ETOOL
		{
			label = "Ctn/E-Tool";
			description = "Canteens/M51 E-Tool";
		};
	};
};

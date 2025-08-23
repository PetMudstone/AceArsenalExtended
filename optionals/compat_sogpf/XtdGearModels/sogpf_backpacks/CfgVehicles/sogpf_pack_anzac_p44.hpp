class sogpf_pack_anzac_p44 {
	label="ANZAC Pack [P44]";
	author="Savage Game Design";
	options[]= { "loadout" };

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "ETOOL", "SHOVEL" };

		class SHOVEL
		{
			label = "Shovel";
		};
	};
};

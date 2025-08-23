class sogpf_pack_nva {
	label="NVA Pack";
	author="Savage Game Design";
	options[]= { "loadout" };

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "ASLT", "CTN", "REC", "REC_RPG", "RPG","SAP" };

		class ASLT
		{
			label = "Assault";
		};
		class CTN
		{
			label = "Canteen";
		};
		class REC
		{
			label = "Recon";
		};
		class REC_RPG
		{
			label = "Recon/RPG";
		};
		class RPG
		{
			label = "RPG";
		};
		class SAP
		{
			label = "Sapper";
		};
	};
};

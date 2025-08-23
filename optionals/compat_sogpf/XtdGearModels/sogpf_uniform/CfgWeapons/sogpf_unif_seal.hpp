class sogpf_unif_seal {
	label="Uniform [SEAL]";
	author="Savage Game Design";
	options[]= { "camo", "variant" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"ERDL_H", "OLI", "OLI_DIRT", "SOGPF_TSG", "TSW", "BLU" };
		class OLI_DIRT
		{
			label = "Olive Dirty";
		};
	};

	class variant
	{
		alwaysSelectable = 1;
		label = "Variant";
		values[] = {"1", "2", "3", "4", "5", "6" };
	};
};

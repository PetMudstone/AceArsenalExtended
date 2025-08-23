class sogpf_m1_helmet_steel {
	label="M1 Helmet (Steel)";
	author="Savage Game Design";
	options[]= { "variant" };

	class variant
	{
		alwaysSelectable = 1;
		label = "Variant";
		values[] = {"STD", "NET_1", "NET_2" };
		class STD
		{
			label = "Standard";
		};

		class NET_1
		{
			label = "Net 1";
		};

		class NET_2
		{
			label = "Net 2";
		};
	};
};

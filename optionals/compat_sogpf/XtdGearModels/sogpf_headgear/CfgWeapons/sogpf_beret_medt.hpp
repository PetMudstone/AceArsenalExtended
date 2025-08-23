class sogpf_beret_medt {
	label="Beret [MEDT]"; // "Military Equipment Delivery Team", aka the US's advisors to Cambodia.
	author="Savage Game Design";
	options[]= { "flash" };

	class flash
	{
		alwaysSelectable = 1;
		label = "Flash Insignia";
		values[] = {"None", "1LT", "CPT" };
		class None
		{
			label = CSTRING(None);
		};

		class 1LT
		{
			label = "1LT";
			description = "First Lieutenant";
		};

		class CPT
		{
			label = "CPT";
			description = "Captain";
		};
	};
};

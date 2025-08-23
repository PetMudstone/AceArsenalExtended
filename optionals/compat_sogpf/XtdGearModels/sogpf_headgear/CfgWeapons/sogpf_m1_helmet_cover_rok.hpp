class sogpf_m1_helmet_cover_rok {
	label="M1 Helmet (Cover, ROK)";
	author="Savage Game Design";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"JNGL", "SND" };
		class JNGL
		{
			label = "Jungle";
			description = "Duckhunter 'Jungle'";
		};

		class SND
		{
			label = "Sand";
			description = "Duckhunter 'Sand'";
		};
	};
};

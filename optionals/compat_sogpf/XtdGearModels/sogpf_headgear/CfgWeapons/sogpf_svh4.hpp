class sogpf_svh4 {
	label="SVH4";
	author="Savage Game Design";
	options[]= { "camo", "visor"};

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"AIR_CAV", "ARMY", "ARVN", "ARVN_CUS", "SCREAM", "USAF" };
		class AIR_CAV
		{
			label = "Air Cav";
			description = "Air Cavalry";
		};

		class ARMY
		{
			label = "Army";
			description = "US Army";
		};

		class ARVN
		{
			label = "ARVN";
		};

		class ARVN_CUS
		{
			label = "ARVN Cus";
			description = "ARVN Custom";
		};

		class SCREAM
		{
			label = "Scream";
		};

		class USAF
		{
			label = "USAF";
		};
	};

	class visor : sogpf_visor
	{
		values[] = {"down", "up" };
	};
};

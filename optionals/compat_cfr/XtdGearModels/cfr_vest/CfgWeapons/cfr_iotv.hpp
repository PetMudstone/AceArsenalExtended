class cfr_iotv { // It is its own model since it has many different options.
	label = "IOTV [CDF]";
	author = CSTRING(Nata);
	options[]= { "camo", "loadout" };
	class camo
	{
		values[] = { "CFR_BUT_FRS", "CFR_BUT_MTN" };
	};

	class loadout : cfr_loadout
	{
		values[] = {"EMPTY", "AR", "GL", "GL_2", "MG", "MED", "PTRL", "RIFL", "RIFL_DEL", "SL", "TL", "TL_2" };

		class GL_2
		{
			label = "GL 2";
			description = "Grenadier 2";
		};

		class RIFL_DEL
		{
			label = "RIFL/Del";
			description = "Rifleman/Deltoid Protector";
		};

		class TL_2
		{
			label = "TL 2";
			description = "Team Leader 2";
		};
	};

};

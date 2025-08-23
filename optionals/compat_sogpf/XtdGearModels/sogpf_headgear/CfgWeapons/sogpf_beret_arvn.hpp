class sogpf_beret_arvn {
	label="Beret [ARVN]";
	author="Savage Game Design";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		label = "Branch/Color";
		values[] = {"AIR", "ARMOR", "BLK", "RNGR", "TAN" };
		class AIR
		{
			label = "Airborne";
		};
		class ARMOR
		{
			label = "Armor";
		};
		class RNGR
		{
			label = "Ranger";
		};
	};
};

class sogpf_t56 {
	label="T56";
	author="Savage Game Design";
	options[]= { "camo", "goggles"};

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "BUSH", "STREAK" };
		class BUSH
		{
			label = "Bushwacker";
		};

		class STREAK
		{
			label = "Streak";
		};

	};

	class goggles
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Goggles";
		values[] = {"No", "Yes" };
		class No
		{
			label = CSTRING(No);
			actionLabel = "Take M44 Goggles Off Helmet";
		};
		class Yes
		{
			label = CSTRING(Yes);
			actionLabel = "Place M44 Goggles On Helmet";
			itemingame = "vn_b_acc_goggles_01"; // Requires the M44 Goggles item in your inventory.
		};
	};
};

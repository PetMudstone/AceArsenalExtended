class sogpf_boonie_pavn {
	label="Boonie (PAVN)";
	author="Savage Game Design";
	options[]= { "camo", "branch" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "GRN" };
	};

	class branch : sogpf_branch
	{
		alwaysSelectable = 1;
		values[] = {"None", "PAVN", "VC" };
		class None
		{
			label = CSTRING(None);
		};
	};
};

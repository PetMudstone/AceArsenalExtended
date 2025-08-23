class sogpf_field_cap_pavn {
	label="Field Cap (PAVN)";
	author="Savage Game Design";
	options[]= { "branch"};

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

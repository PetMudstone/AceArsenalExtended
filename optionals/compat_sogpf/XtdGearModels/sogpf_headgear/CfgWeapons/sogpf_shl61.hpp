class sogpf_shl61 {
	label="SHL61";
	author="Savage Game Design";
	options[]= { "goggles"};

	class goggles
	{
		alwaysSelectable = 1;
		label = "Goggles";
		values[] = {"No", "Yes" };
		class No
		{
			label = CSTRING(No);
		};
		class Yes
		{
			label = CSTRING(Yes);
		};
	};
};

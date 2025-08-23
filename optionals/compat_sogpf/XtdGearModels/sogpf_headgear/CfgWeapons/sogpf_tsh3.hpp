class sogpf_tsh3 {
	label="TSH3";
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

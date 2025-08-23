class sogpf_non_la {
	label="Non La";
	author="Savage Game Design";
	options[]= { "strap"};

	class strap
	{
		alwaysSelectable = 1;
		label = "Strap";
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

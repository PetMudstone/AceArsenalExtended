class sogpf_vest_army_m1952a {
	label="Army Vest [M1952A]";
	author="Savage Game Design";
	options[]= { "holster" };

	class holster
	{
		alwaysSelectable = 1;
		label = "Holster";
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

class sogpf_vest_army_m69 {
	label="Army Vest [M69]";
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

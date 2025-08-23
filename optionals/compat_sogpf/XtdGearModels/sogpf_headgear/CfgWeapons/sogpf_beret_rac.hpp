class sogpf_beret_rac {
	label="Beret [RAC]";
	author="Savage Game Design";
	options[]= { "headset" };

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
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

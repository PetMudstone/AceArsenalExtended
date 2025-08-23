class sogpf_vest_usaf_pilot {
	label="USAF Pilot Vest";
	author="Savage Game Design";
	options[]= { "camo", "holster" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "SOGPF_LPRD" };
	};

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

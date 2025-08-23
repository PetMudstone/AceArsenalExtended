class sogpf_vest_vpn {
	label="VPN Belt";
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

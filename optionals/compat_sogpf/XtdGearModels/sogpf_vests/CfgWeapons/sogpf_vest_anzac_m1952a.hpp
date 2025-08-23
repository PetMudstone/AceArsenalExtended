class sogpf_vest_anzac_m1952a {
	label="ANZAC Vest [M1952A]";
	author="Savage Game Design";
	options[]= { "loadout"};

	class loadout : sogpf_loadout
	{
		alwaysSelectable = 1;
		values[] = {"CREW", "PILOT" };

		class PILOT
		{
			label = "Pilot";
		};
	};
};

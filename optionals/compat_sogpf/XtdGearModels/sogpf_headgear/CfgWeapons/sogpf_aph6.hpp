class sogpf_aph6 {
	label="APH6";
	author="Savage Game Design";
	options[]= { "camo", "visor"};

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"WOLF", "VM121", "SUNDOWN", "VA196", "WHT" };
		class WOLF
		{
			label = "Wolfpack";
			description = "USAF Wolfpack";
		};

		class VM121
		{
			label = "VM121";
			description = "USMC VMFA-121 'Green Knights'";
		};

		class SUNDOWN
		{
			label = "Sundowners";
			description = "USN VF-111 'Sundowners'";
		};

		class VA196
		{
			label = "VA196";
			description = "USN VA-196 'Main Battery'";
		};

	};

	class visor : sogpf_visor
	{
		values[] = {"down", "up" };
	};
};

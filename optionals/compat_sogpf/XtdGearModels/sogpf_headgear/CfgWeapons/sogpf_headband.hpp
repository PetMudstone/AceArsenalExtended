class sogpf_headband {
	label="Headband";
	author="Savage Game Design";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "BW_CHK", "BLU_CHK", "ERDL_H", "ERDL_L", "GRN", "GRN_CHK", "RED_CHK", "SOGPF_SPRAY", "TSW" };
		class BW_CHK
		{
			label = "B/W CHK";
			description = "Black and White Checkboard";
		};
		class BLU_CHK
		{
			label = "BLU CHK";
			description = "Blue Checkboard";
		};
		class GRN_CHK
		{
			label = "GRN CHK";
			description = "Green Checkboard";
		};
		class RED_CHK
		{
			label = "Red CHK";
			description = "Red Checkboard";
		};
	};
};

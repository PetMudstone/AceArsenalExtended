class sogpf_boonie {
	label="Boonie";
	author="Savage Game Design";
	options[]= { "camo", "folding", "patch" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "ERDL_H", "ERDL_L", "GRN", "GRY", "SOGPF_LPRD", "SOGPF_SPRAY", "SOGPF_TSG", "TSW" };
	};

	class folding
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = CSTRING(Folding_Label);
		values[] = {"NONE", "FRONT", "LEFT", "RIGHT", "SIDES"};
		class NONE
		{
			label = CSTRING(NONE);
			actionlabel = "Unfold Sides";
		};
		class FRONT
		{
			label = "Front";
			actionlabel = "Fold Front Side";
		};
		class LEFT
		{
			label = "Left";
			actionlabel = "Fold Left Side";
		};
		class RIGHT
		{
			label = "Right";
			actionlabel = "Fold Right Side";
		};
		class SIDES
		{
			label = "Sides";
			actionlabel = "Fold Both Sides";
		};
	};

	class patch
	{
		alwaysSelectable = 1;
		label = CSTRING(Patch_Label);
		values[] = {"NONE", "REBEL"};
		class NONE
		{
			label = CSTRING(NONE);
		};
		class REBEL // If you want to pay tribute to the slavers on the losing side of the American Civil War.
		{
			label = CSTRING(Rebel_Label);
			description = CSTRING(Rebel_Description);
			//image = placeholder;
		};
	};
};

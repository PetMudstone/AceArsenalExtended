class cfr_combat_helmet {
	label = CSTRING(Combat_Helmet_CDF_Label);
	author = "Nata";
	options[]= {"camo", "accessory"};
	class camo
	{
		alwaysSelectable = 0;
		values[] = {"CFR_DUNA", "CFR_LOVEC"};
	};

	class accessory
	{
		alwaysSelectable = 0;
		label = CSTRING(Accessory_Label);
		values[] = {"none", "scrim", "shapebreaker", "faceshield", "enhanced", "uwu"};
		class none
		{
			label = CSTRING(None_Label);
		};
		class scrim
		{
			label = CSTRING(Scrim_Label);
		};
		class shapebreaker
		{
			label = CSTRING(Shapebreaker_Label);
			description = CSTRING(Shapebreaker_Description);
		};
		class faceshield
		{
			label = CSTRING(Faceshield_Label);
			description = CSTRING(Faceshield_Description);
		};
		class enhanced
		{
			label = CSTRING(Enhanced_Label);
			description = CSTRING(Enhanced_Description);
		};
		class uwu
		{
			label = ":3";
		};
	};
};

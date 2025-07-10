class cfr_cdf_combat_fatigues {
	label = CSTRING(CDF_Combat_Fatigues_Label);
	author = CSTRING(Nata);
	options[] = { "camo", "top", "sleeves" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "CFR_DUNA", "CFR_LOVEC" };
	};

	class top
    {
        label = CSTRING(Top_Label);
        values[] = { "standard", "coat", "coat_alt", "sweater_grn", "sweater_blk", "tshirt" };
        alwaysSelectable=1;
		class standard
		{
			label = CSTRING(Standard_Label);
		};

		class coat // For Contact coats.
		{
			label = CSTRING(Coat_Label);
		};

		class coat_alt // For RF coats.
		{
			label = CSTRING(Coat_Alternate_Label);
			description = CSTRING(Coat_Alternate_Description);
		};

		class sweater_grn
		{
			label = CSTRING(Sweater_Green_Label);
			description = CSTRING(Sweater_Green_Description);
		};

		class sweater_blk
		{
			label = CSTRING(Sweater_Black_Label);
			description = CSTRING(Sweater_Black_Description);
		};

		class tshirt
		{
			label = CSTRING(TShirt_Label);
		};
    };

	class sleeves
	{
		alwaysSelectable = 1;
		values[] = { "Full", "Quarter" };
	};
};

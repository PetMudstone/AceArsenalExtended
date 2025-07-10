class cfr_kitbag {
	label = "Kitbag [CDF]";
	author = CSTRING(Nata);
	options[]= { "camo", "loadout" };
	class camo
	{
		values[] = {"CFR_BUT_ARID", "CFR_BUT_FRS", "CFR_BUT_MTN", "CFR_BUT_WNTR", "CFR_DUNA", "CFR_LOVEC" };
	};

	class loadout
	{
		label = "Loadout";
		values[] = {"STD", "MED"};

		class STD
		{
			label = CSTRING(Standard_Label);
		};

		class MED
		{
			label = CSTRING(Medic_Label);
			description = CSTRING(Medic_Description);
		};
	};
};

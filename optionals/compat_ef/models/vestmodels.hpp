class AAV_EF
{
	label = "Amphibious Assault Vest";
	options[] = {"loadout","camo"};
	class loadout
	{
		label = "Loadout";
		values[] = {"Standard","Rifleman","Sailor","Scout","Support","TL","Diver"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class camo
	{
		values[] = {"CYT","OLI","BLK"};
		alwaysSelectable=1;
	};
};

class CCR_EF
{
	label = "Commando Chest Rig";
	options[] = {"loadout","camo"};
	class loadout
	{
		label = "Loadout";
		values[] = {"Rifleman","Scout","Support","TL"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class camo
	{
		values[] = {"CYT","OLI","BLK"};
		alwaysSelectable=1;
	};
};
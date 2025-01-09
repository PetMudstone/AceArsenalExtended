class MCU_EF
{
	label = "Marine Combat Uniform";
	options[] = {
		"camo",
		"sleeves",
		"gloves",
		"pads"
	};
	class camo
	{
		values[] = {"EF_MPTD","EF_MPTW"};
		alwaysSelectable=1;
	};
	class sleeves
	{
		label="Sleeves";
		values[]={"Standard","Rolled"};
		alwaysSelectable=1;
		changeingame=1;
	};
	class gloves
	{
		label="Gloves";
		values[]={"On","Off"};
		alwaysSelectable=1;
		changeingame=1;
	};
	class pads
	{
		label="Knee Pads";
		values[]={"On","Off"};
		alwaysSelectable=1;
		changeingame=0;
	};
};

class Diver_EF
{
	label="Marine Diver Uniform";
	options[]={"camo"};
	class camo
	{
		values[] = {"EF_MPTD","EF_MPTW"};
		alwaysSelectable=1;
	};
};

class acebi_heli_cover
{
	class faction
	{
		values[] += {"MJTF"};
	};
};
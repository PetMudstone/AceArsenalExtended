class CoveredHelm_RF
{
	label = "Helmet (Shape Breaker)";
	options[] = {"camo"};
	class camo
	{
		values[] = {
			"THEX",
			"Geometric",
			"BIHELM_SNK",
			"KHK",
			"MTP",
			"Tropic",
			"M81",
			"Arid",
			"AAF",
			"HEX",
			"UHEX"
		};
		alwaysSelectable=1;
		changeingame=0;
	};
};

class HardHat_RF
{
	label = "Full Brim Hard Hat";
	options[] = {"camo"};
	class camo
	{
		values[] = {"BLK","BLU","GRN","ORN","RED","WHT","YLW"};
		alwaysSelectable=1;
		changeingame=0;
	};
};

class HeavyHelm_RF
{
	label = "Heavy Combat Helmet";
	options[] = {"camo","visor"};
	class camo
	{
		values[] = {"BLK","OLI","WHT","SND","HEX","GHEX"};
		alwaysSelectable=1;
		changeingame=0;
	};
	class visor
	{
		label = "Visor";
		values[] = {"None","Down","Up"};
		alwaysSelectable=1;
		changeingame=1;
	};
};

class HeliHelm_RF
{
	label = "Heli Pilot Helmet";
	options[] = {"camo"};
	class camo
	{
		values[] = {"BLK","BLU","GRN","OLI","ORN","RED","WHT","YLW"};
		alwaysSelectable=1;
		changeingame=0;
	};
};

class marshcap_RF
{
	label = "Marshal Cap";
	options[] = {"camo"};
	class camo
	{
		values[] = {"RED","BLU"};
		alwaysSelectable=1;
		changeingame=0;
	};
};
class Duffel_RF
{
	label = "Duffel Bag";
	options[] = {"make","camo"};
	class make
	{
		label = "Logo";
		values[] = {"None","Logo"};
		alwaysSelectable=1;
		changeingame=0;
	};
	class camo
	{
		values[] = {"BLK","CYT","MTP","OLI","BLU","RED","VRANA"};
		alwaysSelectable=1;
		changeingame=0;
	};
};

class Mortar_RF
{
	label = "Folded Commando Mortar";
	options[] = {"faction"};
	class faction
	{
		values[] = {"NATO","CTRG","CSAT","AAF","LDF"};
		alwaysSelectable=1;
	};
};

class Parachute_RF
{
	label = "Steerable Parachute";
	options[] = {"camo"};
	class camo
	{
		values[] = {"None","BLU","GRN","ORN","WHT","YLW"};
		alwaysSelectable=1;
	};
};
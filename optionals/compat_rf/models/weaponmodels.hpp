class ash12_RF
{
	label = "ASh-12";
	options[] = {"camo","attachment"};
	class camo
	{
		values[] = {"BLK","Desert","Urban","Woodland"};
		alwaysSelectable=1;
		changeingame=0;
	};
	class attachment
	{
		label = "Attachment";
		values[] = {"None","UBGL","Ext. Barrel"};
		alwaysSelectable=1;
		changeingame=0;
	};
};
class h6_RF
{
	label = "HERA H6";
	options[] = {"camo"};
	class camo
	{
		values[] = {"BLK","AAF","Gold","OLI","TAN"};
		alwaysSelectable=1;
		changeingame=0;
	};
};
class smg01_RF
{
	label = "Vector SMG";
	options[] = {"camo"};
	class camo
	{
		values[] = {"TAN","BLK"};
		alwaysSelectable=1;
		changeingame=0;
	};
};
class vs121_RF
{
	label="VS-121";
	options[] = {"camo"};
	class camo
	{
		values[] = {"HEX","BLK","TAN"};
		alwaysSelectable=1;
		changeingame=0;
	};
};
class DEagle_RF
{
	label = "Desert Eagle Mark XIX L5";
	options[] = {"camo"};
	class camo
	{
		values[] = {"BLK","Bronze","Classic","Copper","Gold","Stripes"};
		alwaysSelectable=1;
		changeingame=0;
	};
};
class Glock19_RF
{
	label = "Glock 19";
	options[] = {"camo","auto"};
	class camo
	{
		values[] = {"BLK","KHK","TAN"};
		alwaysSelectable=1;
		changeingame=0;
	};
	class auto
	{
		label="Full Auto";
		values[] = {"Yes","No"};
		alwaysSelectable=1;
		changeingame=0;
	};
};

class RPG_RF
{
	label = "PSRL-1";
	options[] = {"camo","optic"};
	class camo
	{
		label = "Paintjob";
		values[] = {"BLK","AAF","Geometric","OLI","SND"};
		changeingame=0;
	};
	class optic
	{
		label="Optic";
		values[] = {"Rail","PWS"};
		alwaysSelectable=1;
		changeingame=0;
	};
};
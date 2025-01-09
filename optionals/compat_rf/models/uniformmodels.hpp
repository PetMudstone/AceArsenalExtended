class FireFighter_RF
{
	label="Firefighter Fatigues";
	options[] = {"sleeves"};
	class sleeves
	{
		label = "Sleeves";
		values[] = {"Normal","Rolled"};
		alwaysSelectable=1;
		changeingame=1;
	};
};

class Guerilla_RF
{
	label = "Guerilla Apparel";
	options[] = {"sleeves"};
	class sleeves
	{
		label = "Sleeves";
		values[] = {"Normal","Rolled"};
		alwaysSelectable=1;
		changeingame=1;
	};
};

class GuerillaUni_RF
{
	label = "Guerilla Uniform";
	options[] = {"style"};
	class style
	{
		label = "Style";
		values[] = {"Normal","Combat"};
		alwaysSelectable=1;
		changeingame=0;
	};
};

class acebi_heli_cover
{
	options[] += { "camo" };
	class faction
    {
        values[] += { "CIV" };
        alwaysSelectable=1;
    };
	class camo
	{
		values[] = {"BLK","BLU","GRN","MTP","RED","YLW"};
		alwaysSelectable=0;
		changeingame=0;
	};
};

class BomberJacket_RF
{
	label = "Leather Jacket";
	options[] = {"camo","style"};
	class camo
	{
		label = "Colour";
		values[] = {"BLK","BRN","LBRN"};
		alwaysSelectable=1;
		changeingame=0;
	};
	class style
	{
		label="Zip";
		values[] = {"Open","Zipped"};
		alwaysSelectable=1;
		changeingame=1;
	};
};
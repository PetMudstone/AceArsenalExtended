class acebi_assaultpack
{
	class camo
    {
        values[] += { "Desert" }; // Always computed, do not acebi
    };
};

class acebi_carryall
{
	class camo
    {
        values[] += { "Desert" }; // Always computed, do not acebi
	};
};

class acebi_kitbag
{
	class camo
    {
        values[] += { "Desert" }; // Always computed, do not acebi
    };
};

class B_shield_lxWS
{
	label = "Shield Backpack";
	options[] = {"camo"};
	class camo
	{
		label="Paintjob";
		values[] = {"AAF","Black","Green Hex","Hex"};
		alwaysSelectable=1;
	};
};

class acebi_ar2
{
	class faction
    {
        values[] += { "ION" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
};

class AP5_lxWS
{
	label="UAV Bag (AP-5)";
	options[]={"faction"};
	class faction
	{
		label="Faction";
		values[]={"AAF","CSAT","NATO","ION"};
		alwaysSelectable=1;
	};
};

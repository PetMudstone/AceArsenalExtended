class Bandit_lxWS
{
	label = "Bandit Rags";
	options[] = {"camo"};
	class camo
	{
		label = "Camo";
		values[] = {"Brown","Gray","Green","Sand"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class acebi_fatigues_nato
{
	class camo
    {
        values[] = { "MTP", "Tropic", "M81", "Desert" };
        alwaysSelectable=1;
    };
};

class Fatigues_lxWS
{
	label = "Combat Fatigues";
	options[] = {"faction","camo"};
	class faction
	{
		label="Faction";
		values[] = {"SFIA","UNA"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class camo
	{
		label="Style";
		values[] = {"Soldier","Soldier Rolled","Officer"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Commoner_lxWS
{
	label="Commoner Clothes";
	options[] = {"camo","style"};
	class camo
	{
		label="Camo";
		values[] = {"Black","Black Simple","Blue","Blue Simple","Green","White","Wine","Yellow","Gray","Brown","Dark"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class style
	{
		label="Style";
		values[] = {"Djellaba","Jacket","Nomad","Villager"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Contractor_lxWS
{
	label = "Contractor Outfit";
	options[] = {"camo"};
	class camo
	{
		label="Camo";
		values[] = {"Black","Camo","Peace","Red","White"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class acebi_ctrg_combat_uniform
{
	class top
    {
        label = "Top";
        values[] = { "Standard", "Tee", "Djellaba" };
        alwaysSelectable=1;
    };
};

class acebi_ctrg_stealth_uniform
{
	class top
    {
        label = "Top";
        values[] = { "Standard", "Tee", "Djellaba" };
        alwaysSelectable=1;
    };
};

class acebi_deserter_clothes
{
	options[] += { "faction" };
	class faction
	{
		label="Faction";
		values[]= { "LDF", "SFIA" };
		changeingame = 0;
		alwaysSelectable=1;
	};
};

class acebi_heli_cover
{
    class faction
    {
        values[] += { "SFIA", "UNA" };
        alwaysSelectable=1;
    };
};

class tanker_lxWS
{
	label="Tanker Coveralls";
	options[]={"faction"};
	class faction
	{
		label="Faction";
		values[] = {"AAF","SFIA"};
		alwaysSelectable=1;
	};
};

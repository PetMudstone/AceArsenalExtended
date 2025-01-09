class bmask_lxWS
{
	options[]={"colour","turban"};
	label = "Ballistic Mask";
	class colour
	{
		label = "Paintjob";
		values[] = {"Black","Green Hex","Hex","Rocky","Snake","White","Woodland","Yellow"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class turban
	{
		label = "Turban";
		values[] = {"None","Turban"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class acebi_basic_helm
{
    options[] += { "goggles" };
    class camo
    {
        values[] += { "UNA" };
        alwaysSelectable=1;
    };
	class goggles
	{
		label="Goggles";
		values[] = {"No","Yes"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class beret_lxWS
{
	options[]={"headset"};
	label="Beret";
	class headset
	{
		label="headset";
		values[] = {"No","Yes"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class acebi_beret_faction
{
	class faction
    {
        values[] += { "UNA" };
        alwaysSelectable=1;
    };
};

class acebi_booniehat
{
	class camo
    {
        values[] += { "Desert" };
        alwaysSelectable=1;
    };
};

class acebi_crew_helm
{
	class camo
    {
        values[] += { "BLU", "BLKk" };
        alwaysSelectable=0;
    };
};

class acebi_crew_helm_soft
{
	class faction
    {
        values[] += { "SFIA" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
};

class acebi_mil_cap
{
	class camo
    {
        values[] += { "Desert" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
};

class ssh40_lxWS
{
	options[] = {"camo"};
	label="Old Helmet";
	class camo
	{
		label="Paintjob";
		values[] = {"Black","Blue","Green","Sand","White","UNA"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class cloth_lxWS
{
	options[] = {"camo"};
	label="Taqiyah";
	class camo
	{
		label="Style";
		values[] = {"Black","Pattern","White"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class turban_lxWS
{
	options[]={"camo","style"};
	label="Turban";
	class camo
	{
		label="Colour";
		values[] = {"Black","Blue","UNA","Green","Green Pattern","Orange","Red","Sand","White","Yellow"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class style
	{
		label="Style";
		values[] = {"Full","Loose","Open","Simple"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};
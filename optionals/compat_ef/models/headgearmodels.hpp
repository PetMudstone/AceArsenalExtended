class MCH_EF
{
	label = "Marine Combat Helmet";
	options[] = {"camo","style","headset"};
	class camo
	{
		values[] = {"TAN","EF_MPTD","EF_MPTW","CYT","OLI","BLK"};
		alwaysSelectable=1;
	};
	class style
	{
		label = "Style";
		values[] = {"Basic","Full"};
		alwaysSelectable=0;
		changeingame=0;
	};
	class headset
	{
		label = "Headset";
		values[] = {"Yes","No"};
		alwaysSelectable=0;
		changeInGame=0;
	};
};

class H_Slick_EF
{
	label = "Light Combat Helmet (Slick)";
	options[] = {"camo"};
	class camo
	{
		values[] = {"Default","BIHELM_GRS","BIHELM_SNK","BIHELM_DES","TAN","Tropic","M81"};
		alwaysSelectable=1;
	};
};

class acebi_crew_helm
{
	class faction
	{
		values[] += {"MJTF"};
	};
	class camo
	{
		values[] += {"CYT","YLW","WHT"};
	};
};

class UtilityCap_EF
{
	label = "Utility Cap";
	options[] = {"camo"};
	class camo
	{
		values[] = {"EF_MPTD","EF_MPTW"};
		alwaysSelectable=1;
	};
};

class acebi_booniehat
{
	class camo
	{
		values[] += {"EF_MPTD","EF_MPTW"};
	};
};

class acebi_cap
{
    class camo
    {
        values[] += { "NAV","Takmyr" };
    };
};
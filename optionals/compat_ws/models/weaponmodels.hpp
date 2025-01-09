class sgun_lxWS
{
	options[] = {"colour"};
	label = "AA12";
	class colour
	{
		label = "Paintjob";
		values[] = {"Black","Tan","Snake"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};
class SLR_lxWS
{
	options[] = {"colour","attachment"};
	label = "FN FAL 50.00";
	class colour
	{
		label = "Paintjob";
		values[] = {"Black","Wood","Desert","Jungle"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class attachment
	{
		label = "Attachment";
		values[] = {"None","Rifle Grenade"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};
class SLR_para_lxWS
{
	options[] = {"colour"};
	label = "FN FAL OSW Para";
	class colour
	{
		label = "Paintjob";
		values[] = {"Black", "Snake"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Galat_lxWS
{
	options[] = {"style"};
	label = "Galil ARM";
	class style
	{
		label = "Style";
		values[] = {"New", "Old"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class GLX_lxWS
{
	options[] = {"colour"};
	label = "GLX 160";
	class colour
	{
		label = "Paintjob";
		values[] = {"Black", "Camo", "Green Hex", "Hex", "Sand", "Snake"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class acebi_gm6_lynx
{
	class camo
	{
		label = "Paintjob";
		values[] += { "Snake" }; // Always computed, do not acebi
		changeingame = 0;
		alwaysSelectable=1;
	};
};

class EBR_lxWS
{
	options[] = {"camo"};
	label="Mk14 Mod 1 EBR";
	class camo
	{
		label = "Paintjob";
		values[] = {"White", "Black", "Snake"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Velko_lxWS
{
	options[] = {"camo","attachment"};
	label = "R5 Carbine";
	class camo
	{
		label = "Paintjob";
		values[] = {"Black", "Snake"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class attachment
	{
		label = "Attachment";
		values[] = {"None", "UBGL"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class SS77_lxWS
{
	options[] = {"camo","barrel"};
	label = "Vektor SS-77";
	class camo
	{
		label = "Paintjob";
		values[] = {"Black", "Camo", "Desert", "Green Hex", "Hex", "Snake"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class barrel
	{
		label = "Length";
		values[] = {"Standard", "Compact"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class XMS_lxWS
{
	options[] = {"camo","attachment","barrel"};
	label = "XMS";
	class camo
	{
		label = "Paintjob";
		values[] = {"Black", "Khaki", "Sand","Gray","Stripes"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class attachment
	{
		label = "Attachment";
		values[] = {"None", "UBGL", "UBSG"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class barrel
	{
		label = "barrel";
		values[] = {"Standard", "Extended"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	
};

class acebi_rpg32
{
	class camo
	{
		values[] += { "Sand" }; // Always computed, do not acebi
		alwaysSelectable=1;
	};
};

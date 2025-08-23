class CamoBase
{

	// Beo Gam "Leopard", based off Duckhunter camo.
	class SOGPF_LPRD
	{
		label = CSTRING(Leopard_Label);
		description = CSTRING(Leopard_Description);
	};

	// Spray Paint
	class SOGPF_SPRAY
	{
		label = CSTRING(Spray_Label);
		description = CSTRING(Spray_Description);
	};	

	// Tigerstripe Green
	class SOGPF_TSG
	{
		label = CSTRING(Tigerstripe_Green_Label);
		description = CSTRING(Tigerstripe_Green_Description);
	};
};

class sogpf_branch // Used mainly for PAVN boonies and helmets.
{
	label = "Branch";
	changeingame = 0;
	values[] = {};

	class MACV_SOG
	{
		label = CSTRING(MACV_SOG_Label);
		description = CSTRING(MACV_SOG_Description);
	};

	class PAVN
	{
		label = CSTRING(PAVN_Label);
		description = CSTRING(PAVN_Description);
	};

	class VC
	{
		label = CSTRING(VC_Label);
		description = CSTRING(VC_Description);
	};

	class VPN
	{
		label = CSTRING(VPN_Label);
		description = CSTRING(VPN_Description);
	};
};

class sogpf_loadout
{
	label = "Loadout";
	changeingame = 0;
	values[] = {};

	class CREW
	{
		label = "Crew";
		description = "Crewman";
	};

	class DEMO
	{
		label = "Demo";
		description = "Demolitions";
	};

	class ENGI
	{
		label = "Engineer";
	};

	class ETOOL
	{
		label = "E-Tool";
		description = "M51 E-Tool";
	};

	class GL
	{
		label = "GL";
		description = "Grenadier";
	};

	class MED
	{
		label = "Medic";
	};

	class MG
	{
		label = "MG";
		description = "Machine Gunner";
	};

	class OFC
	{
		label = "Officer";
	};

	class RIFL
	{
		label = "Rifleman";
	};

	class RTO
	{
		label = "RTO";
		description = "Radio Telephone Operator";
	};

	class SCT
	{
		label = "Scout";
	};

	class STD
	{
		label = "Standard";
	};

	class TL
	{
		label = "TL";
		description = "Team Leader";
	};
};

class sogpf_visor
{
	changeingame = 1;
	changedelay = 1;
	label = "Visor";
	values[] = {"down", "up" };
	class down
	{
		label = "Down";
		actionLabel = "Flip Visor Down";
	};

	class up
	{
		label = "Up";
		actionLabel = "Flip Visor Up";
	};
};

class CamoBase
{
	// CDF Camos
	class CFR_BUT_ARID
	{
		label = CSTRING(Butan_Arid_Label);
		description = CSTRING(Butan_Arid_Description);
		image = QPATHTOF(data\camo\but_arid.paa);
	};
	class CFR_BUT_FRS
	{
		label = CSTRING(Butan_Forest_Label);
		description = CSTRING(Butan_Forest_Description);
		image = QPATHTOF(data\camo\but_frs.paa);
	};
	class CFR_BUT_MTN
	{
		label = CSTRING(Butan_Mountain_Label);
		description = CSTRING(Butan_Mountain_Description);
		image = QPATHTOF(data\camo\but_mtn.paa);
	};
	class CFR_BUT_WNTR
	{
		label = CSTRING(Butan_Winter_Label);
		description = CSTRING(Butan_Winter_Description);
		image = QPATHTOF(data\camo\but_wntr.paa);
	};
	class CFR_DUNA
	{
		label = CSTRING(Duna_Label);
		description = CSTRING(Duna_Description);
		image = QPATHTOF(data\camo\digi_duna.paa);
	};
	class CFR_LOVEC
	{
		label = CSTRING(Lovec_Label);
		description = CSTRING(Lovec_Description);
		image = QPATHTOF(data\camo\digi_lovec.paa);
	};
};


class cfr_loadout // Based on the loadout common option found in the CUP patch.
{
	label = "Loadout";
	changeingame = 0;
	values[] = {};

	class EMPTY
	{
		label = "Empty";
	};

	class STD
	{
		label = "Standard";
	};

	class AR
	{
		label = "AR";
		description = "Automatic Rifleman";
	};

	class AT
	{
		label = "AT";
		description = "Anti-Tank";
	};

	class CREW
	{
		label = "Crew";
	};

	class ENGI
	{
		label = "Engineer";
	};

	class LIGHT
	{
		label = "Light";
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

	class DMR
	{
		label = "DMR";
		description = "Designated Marksman";
	};

	class MG
	{
		label = "MG";
		description = "Machine Gunner";
	};

	class NCO
	{
		label = "NCO";
		description = "Non-Commissioned Officer";
	};

	class OFC
	{
		label = "Officer";
	};

	class PTRL
	{
		label = "Patrol";
	};

	class RIFL
	{
		label = "RIFL";
		description = "Rifleman";
	};

	class RADIO // Not to be confused with RTOs. This is just for if the loadout has a standard radio.
	{
		label = "Radio";
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

	class SL
	{
		label = "SL";
		description = "Squad Leader";
	};

	class TL
	{
		label = "TL";
		description = "Team Leader";
	};
};

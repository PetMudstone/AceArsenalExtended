class CamoBase
{
	// CDF Camos
	class CFR_BUT_ARID
	{
		label = CSTRING(Butan_Arid_Label);
		description = CSTRING(Butan_Arid_Description);
		image = QPATHTOF(data\camo\cdf\but_arid.paa);
	};
	class CFR_BUT_FRS
	{
		label = CSTRING(Butan_Forest_Label);
		description = CSTRING(Butan_Forest_Description);
		image = QPATHTOF(data\camo\cdf\but_frs.paa);
	};
	class CFR_BUT_MTN
	{
		label = CSTRING(Butan_Mountain_Label);
		description = CSTRING(Butan_Mountain_Description);
		image = QPATHTOF(data\camo\cdf\but_mtn.paa);
	};
	class CFR_BUT_WNTR
	{
		label = CSTRING(Butan_Winter_Label);
		description = CSTRING(Butan_Winter_Description);
		image = QPATHTOF(data\camo\cdf\but_wntr.paa);
	};
	class CFR_BUT_URB // Used by the Chernarusian MVD.
	{
		label = CSTRING(Butan_Urban_Label);
		description = CSTRING(Butan_Urban_Description);
		image = QPATHTOF(data\camo\cdf\but_urb.paa);
	};
	class CFR_DUNA
	{
		label = CSTRING(Duna_Label);
		description = CSTRING(Duna_Description);
		image = QPATHTOF(data\camo\cdf\digi_duna.paa);
	};
	class CFR_LOVEC
	{
		label = CSTRING(Lovec_Label);
		description = CSTRING(Lovec_Description);
		image = QPATHTOF(data\camo\cdf\digi_lovec.paa);
	};
	class CFR_UN // For CDF equipment in United Nations colors.
	{
		label = CSTRING(UN_Label);
		description = CSTRING(UN_Description);
		image = "#(rgb,8,8,3)color(0.21,0.44,0.66,1)";
	};

	// ChDKZ Camos
	class CFR_FLRA // Noticeably much more saturated than standard VSR-98 Flora.
	{
		label = CSTRING(Flora_Label);
		description = CSTRING(Flora_Description);
		image = QPATHTOF(data\camo\chdkz\flora.paa);
	};

	class CFR_KMY_URB // Referred to as "Kamysh Grey" by CFR but using CUP label for consistency's sake.
	{
		label = CSTRING(Kamysh_Urban_Label);
		description = CSTRING(Kamysh_Urban_Description);
		image = QPATHTOF(data\camo\chdkz\kmy_urb.paa);
	};

	class CFR_KMY_WDL // Referred to as "Kamysh Green" by CFR but using CUP label for consistency's sake.
	{
		label = CSTRING(Kamysh_Woodland_Label);
		description = CSTRING(Kamysh_Woodland_Description);
		image = QPATHTOF(data\camo\chdkz\kmy_wdl.paa);
	};

	class CFR_SMOG
	{
		label = CSTRING(Smog_Label);
		image = QPATHTOF(data\camo\chdkz\smog.paa);
	};

	class CFR_TIGR_URB
	{
		label = CSTRING(Tigr_Urban_Label);
		description = CSTRING(Tigr_Urban_Description);
		image = QPATHTOF(data\camo\chdkz\tigr_urb.paa);
	};

	// These are ChDKZ combination camos that show up across multiple models.
	class CFR_KMY_WDL_SMOG
	{
		label = CSTRING(Kamysh_Woodland_Smog_Label);
		description = CSTRING(Kamysh_Woodland_Smog_Description);
		image = QPATHTOF(data\camo\chdkz\mixed\kmy_wdl_smog.paa);
	};
	
	class CFR_KMY_WDL_URB
	{
		label = CSTRING(Kamysh_Woodland_Urban_Label);
		description = CSTRING(Kamysh_Woodland_Urban_Description);
		image = QPATHTOF(data\camo\chdkz\mixed\kmy_wdl_urb.paa);
	};

	class CFR_KMY_URB_WDL
	{
		label = CSTRING(Kamysh_Urban_Woodland_Label);
		description = CSTRING(Kamysh_Urban_Woodland_Description);
		image = QPATHTOF(data\camo\chdkz\mixed\kmy_urb_wdl.paa);
	};

	// NAPA Camo
	class CFR_PEADOT // Erbsenmuster, also informally called "Peadot"
	{
		label = CSTRING(Erbsenmuster_Label);
		description = CSTRING(Erbsenmuster_Description);
		image = QPATHTOF(data\camo\napa\peadot.paa);
	};

	class CFR_SUMPFMUSTER // BGS Sumpfmuster, used by the West German Bundesgrenzschutz (English: Federal Border Protection)
	{
		label = CSTRING(BGS_Sumpfmuster_Label);
		description = CSTRING(BGS_Sumpfmuster_Description);
		image = QPATHTOF(data\camo\napa\sumpfmuster.paa);
	};

	// These are NAPA combination camos that show up across multiple models.
	class CFR_DPM_FLCK
	{
		label = CSTRING(DPM_Flecktarn_Label);
		description = CSTRING(DPM_Flecktarn_Description);
		image = QPATHTOF(data\camo\napa\mixed\dpm_flck.paa);
	};

	class CFR_M81_DPM
	{
		label = CSTRING(M81_DPM_Label);
		description = CSTRING(M81_DPM_Description);
		image = QPATHTOF(data\camo\napa\mixed\m81_dpm.paa);
	};

	class CFR_M81_FLCK
	{
		label = CSTRING(M81_Flecktarn_Label);
		description = CSTRING(M81_Flecktarn_Description);
		image = QPATHTOF(data\camo\napa\mixed\m81_dpm.paa);
	};

};

class cfr_branch // Used to disambiguate between CDF and MVD where necesary.
{
	label = CSTRING(Branch_Label);
	changeingame = 0;
	values[] = {};

	class CDF // Chernarusian Defence Forces
	{
		label = CSTRING(CDF_Label);
		description = CSTRING(CDF_Description);
	};

	class MVD // Ministry of Internal Affairs (I think). See relevant stringtable.xml key for more details.
	{
		label = CSTRING(MVD_Label);
		description = CSTRING(MVD_Description);
	};
};

class cfr_attachsys // This is what kind of attachments a gun can accept, roughly. Based on the attachment system common option found in the CUP patch.
{
	label = CSTRING(Attachment_System_Label);
	changeingame = 0;
	values[] = {};

	class none
	{
		label = CSTRING(None);
	};

	class ris // Used when a gun's attachment system affects its optic AND side attachments (flashlights, lasers).
	{
		label = CSTRING(RIS_Label);
		description = CSTRING(RIS_Description);
	};

	class warsaw
	{
		label = CSTRING(WarsawRail_Label);
		description = CSTRING(WarsawRail_Description);
	};

	class zenit_pica
	{
		label = CSTRING(Zenitco_Railed_Handguard_Picatinny_Label);
		description = CSTRING(Zenitco_Railed_Handguard_Picatinny_Description);
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

class cfr_goggles
{
	label = CSTRING(Goggles);
	changeingame = 1;
	values[] = {};

	class no
	{
		label = CSTRING(No);
		changeingame = -1;
	};

	class yes
	{
		label = CSTRING(Yes);
		changeingame = -1;
	};

	class yes_cover
	{
		label = "Yes/Cov";
		description = "Yes (Covered)";
		changeingame = -1;
	};

	class yes_cover_back
	{
		label = "Yes/CovBck";
		description = "Yes (Cover on Back)";
		changeingame = -1;
	};
};

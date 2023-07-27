class CamoBase
{
	class FDE
	{
		label = "FDE";
		description = "Flat Dark Earth";
		image = "#(rgb,8,8,3)color(0.56,0.48,0.38,1)";
	};

	class CEU // I think it's Camouflage Central-Europe (CCE) but I can't be sure.
	{
		label = "CEU";
		image = QPATHTOF(data\camo\ceu.paa);
	};

	class DDPM
	{
		label = "DDPM";
		description = "Desert Disruptive Pattern Material";
		image = QPATHTOF(data\camo\ddpm.paa);
	};

	class CUP_URB // Looks like a Greyscale M81.
	{
		label = "Urban";
		image = QPATHTOF(data\camo\urb.paa);
	};

	class TPAT
	{
		label = "T-Pattern";
		image = QPATHTOF(data\camo\tpat.paa);
	};

	// Weapon Only camo

	class CUP_URB_HEX
	{
		label = "Urban Hex";
		image = QPATHTOF(data\camo\weapons\cup_urb_hex.paa);
	};

	class AK_WOOD
	{
		label = "Wood";
		description = "Laminated Wood";
		image = "#(rgb,8,8,3)color(0.60,0.31,0.14,1)";
	};

	class AK_BLK
	{
		label = "Black";
		description = "Black Polymer";
		image="#(rgb,8,8,3)color(0.12,0.12,0.11,1)";
	};

	class CUP_ACR_SNW
	{
		label = "Snow";
		image = QPATHTOF(data\camo\weapons\cup_acr_snw.paa);
	};

	class CUP_ACR_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_acr_wdl.paa);
	};

	class CUP_ACR_TAN
	{
		label = "Tan";
		image = QPATHTOF(data\camo\weapons\cup_acr_tan.paa);
	};

	class CUP_FAL_DES
	{
		label = "Desert";
		image = QPATHTOF(data\camo\weapons\cup_fal_des.paa);
	};

	class CUP_FAL_RHD
	{
		label = "Rhodesian";
		image = QPATHTOF(data\camo\weapons\cup_fal_rhd.paa);
	};

	class CUP_FAL_SND
	{
		label = "Sand";
		image = QPATHTOF(data\camo\weapons\cup_fal_snd.paa);
	};

	class CUP_FAL_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_fal_wdl.paa);
	};
		
	class CUP_G36_DES
	{
		label = "Desert";
		image = QPATHTOF(data\camo\weapons\cup_g36_des.paa);
	};

	class CUP_G36_HEX
	{
		label = "Hex";
		image = QPATHTOF(data\camo\weapons\cup_g36_hex.paa);
	};

	class CUP_G36_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_g36_wdl.paa);
	};

	class CUP_HK416_DES
	{
		label = "Desert";
		image = QPATHTOF(data\camo\weapons\cup_hk416_des.paa);
	};

	class CUP_HK416_WDL
	{
		label = "Woodland";
		image = QPATHTOF(data\camo\weapons\cup_hk416_wdl.paa);
	};

	class CUP_SCAR_WDL
	{
		label = "Woodland";
		image = "#(rgb,8,8,3)color(0.36,0.37,0.30,1)";
	};

	class CUP_SAVZ_58_COMP
	{
		label = "Composite";
		image = QPATHTOF(data\camo\weapons\cup_savz_58_comp.paa);
	};

	class CUP_SAVZ_58_DES
	{
		label = "Desert";
		image = "#(rgb,8,8,3)color(0.66,0.58,0.43,1)";
	};

	class CUP_SAVZ_58_WDL
	{
		label = "Woodland";
		image = "#(rgb,8,8,3)color(0.42,0.42,0.31,1)";
	};

	class CUP_SAVZ_58_WOOD
	{
		label = "Wood";
		image = QPATHTOF(data\camo\weapons\cup_savz_58_wood.paa);
	};
};

class cup_attachsys // This is what kind of attachments a gun can accept, roughly.
{
	label = "Attachment System";
	changeingame = 0;
	values[] = {};

	class none
	{
		label = "None";
	};

	class carryhandle // Used only for the G36 and XM8.
	{
		label = "Carryhandle";
	};

	class picatinny // Used when a gun's attachment system only affects its optic. Side attachments (flashlights, lasers) aren't included.
	{
		label = "Picatinny";
		description = "Picatinny Rail";
	};

	class ris // Used when a gun's attachment system affects its optic AND side attachments (flashlights, lasers).
	{
		label = "RIS";
		description = "Rail Integration System";
	};

	class warsaw
	{
		label = "Warsaw";
		description = "Warsaw Pact Rail";
	};

	class zenit
	{
		label = "Zenitco";
		description = "Zenitco Railed Handguard";
	};

	class zenit_pica
	{
		label = "Zenit/Pica";
		description = "Zenitco Railed Handguard and Picatinny Rail";
	};
};

class cup_grip
{
	label = "Grip";
	changeingame = 0;
	values[] = {};

	class none
	{
		label = "None";
	};

	class angled
	{
		label = "Angled";
		description = "Angled Foregrip";
	};

	class vertical
	{
		label = "Vertical";
		description = "Vertical Foregrip";
	};
};

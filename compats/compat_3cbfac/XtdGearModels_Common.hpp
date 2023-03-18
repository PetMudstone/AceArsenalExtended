class CamoBase
{
	// Weapon camos.
	class Beech
	{
		label = "$STR_ACEAX_compat_3cbfac_beech";
	};

	class Walnut
	{
		label = "$STR_ACEAX_compat_3cbfac_walnut";
	};
};

class 3cb_attachsys // This is what kind of optic attachments a gun can accept, roughly.
{
	label = "$STR_ACEAX_compat_3cbfac_attachsys";
	changeingame = 0;
	values[] = {};

	class none
	{
		label = "$STR_ACEAX_compat_3cbfac_none";
	};

	class picatinny
	{
		label = "$STR_ACEAX_compat_3cbfac_picatinny_label";
		description = "$STR_ACEAX_compat_3cbfac_picatinny_description";
	};

	class ris
	{
		label = "$STR_ACEAX_compat_3cbfac_ris_label";
		description = "$STR_ACEAX_compat_3cbfac_ris_description";
	};

	class warsaw
	{
		label = "$STR_ACEAX_compat_3cbfac_warsaw_label";
		description = "$STR_ACEAX_compat_3cbfac_warsaw_description";
	};
};

class 3cb_enfield_scope
{
	label = "$STR_ACEAX_compat_3cbfac_enfield_scope";
	changeingame = 0;
	values[] = {};

	class no
	{
		label = "$STR_ACEAX_compat_3cbfac_no";
	};

	class yes
	{
		label = "$STR_ACEAX_compat_3cbfac_yes";
	};
};

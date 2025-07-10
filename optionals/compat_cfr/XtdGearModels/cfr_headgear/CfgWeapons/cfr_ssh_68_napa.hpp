class cfr_ssh_68_napa {
	label = CSTRING(SSh68_NAPA_Label);
    author = CSTRING(Nata);
	options[]= { "camo"};
    class camo
    {
		alwaysSelectable = 1;
        values[] += { "DPM", "FLCK", "M81", "CFR_M81_FLCK", "CFR_PEADOT_FLCK", "CFR_M81_DPM", "CFR_DPM_FLCK" };

		class CFR_PEADOT_FLCK
		{
			label = CSTRING(Flecktarn_Erbsenmuster_Label);
			description = CSTRING(Flecktarn_Erbsenmuster_Description);
			image = QPATHTOF(data\camo\napa\mixed\peadot_flck.paa);
		};
    };
};

class cfr_ssh_68_cdf { // We append to the CUP model for sake of simplicity.
	label = CSTRING(SSh68_CDF_Label);
    author = CSTRING(Nata);
	options[]= { "camo"};
    class camo
    {
		alwaysSelectable = 1;
        values[] += { "CFR_BUT_MTN", "CFR_BUT_WNTR", "CFR_BUT_URB" };

    };
};

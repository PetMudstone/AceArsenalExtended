class cfr_ga_carrier_gl // For now, making the CDF version its own model while I figure out how to deal with the vanilla GA Carriers as a whole.
{
    label = "GA Carrier GL Rig [CDF]";
    author = CSTRING(Nata);
    options[] = { "camo" };
    class camo
    {
        values[] = { "CFR_DUNA", "CFR_LOVEC" };
        alwaysSelectable=1;
    };
};

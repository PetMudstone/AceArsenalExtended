class 3cb_m14_dmr
{
    options[] = { "camo", "attachsys" };
    label="M14 DMR";
    class camo
    {
        values[] = { "GRN", "BLK" };
    };

    class attachsys : 3cb_attachsys
    {
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};

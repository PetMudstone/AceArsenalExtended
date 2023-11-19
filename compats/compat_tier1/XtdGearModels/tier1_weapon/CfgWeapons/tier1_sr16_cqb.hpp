class tier1_sr16_cqb
{
    options[] = { "camo", "stock" };
    label="SR-16 CQB";
    class camo
    {
        values[] = { "BLK", "FDE" };
        alwaysSelectable=1;
    };

    class stock
    {
        label = "Stock";
        values[] = { "CTR", "IMOD", "LMT", "MFT" };
        alwaysSelectable=1;

        class CTR
        {
            label = "CTR";
        };

        class IMOD
        {
            label = "IMOD";
        };

        class LMT
        {
            label = "LMT";
        };

        class MFT
        {
            label = "MFT";
        };
    };
};

class cup_xm8_compact
{
    options[] = { "camo", "optic", "grip" };
    label="XM8 Compact";

    class camo
    {
        values[] = {"BLK", "GRN", "OD", "TAN"};
        alwaysSelectable=1;
        class BLK
        {
            image = "#(rgb,8,8,3)color(0.23,0.22,0.23,1)";
        };
        class GRN
        {
            image = "#(rgb,8,8,3)color(0.40,0.45,0.29,1)";
        };
        class OD
        {
            image = "#(rgb,8,8,3)color(0.80,0.77,0.62,1)";
        };
        class TAN
        {
            image = "#(rgb,8,8,3)color(0.93,0.90,0.76,1)";
        };
    };

    class optic : cup_attachsys
    {
        values[] = { "carryhandle", "picatinny" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };
};

class acebi_nvg_gen4
{
    options[] = { "camo", "phos" }; // Always computed, do not acebi
    label="NVG (Gen4)";
    class camo
    {
        values[] = { "BLK", "SND", "OLI" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class phos: PhosphorBase{};
};

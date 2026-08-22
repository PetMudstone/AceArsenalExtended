class acebi_nvg_wide
{
    options[] = { "camo", "phos" }; // Always computed, do not acebi
    label="NVG (Wide)";
    class camo
    {
        values[] = { "BLK", "SND", "OLI" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class phos: PhosphorBase{};
};

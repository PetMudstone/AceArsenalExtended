class acebi_nvg_gen3
{
    options[] = { "camo", "phos" }; // Always computed, do not acebi
    label="NVG (Gen3)";
    class camo
    {
        values[] = { "BLK", "SND", "OLI" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class phos: PhosphorBase{};
};

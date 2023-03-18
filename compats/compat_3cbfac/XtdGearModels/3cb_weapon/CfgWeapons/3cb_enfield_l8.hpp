class 3cb_enfield_l8
{
    options[] = { "camo", "scope" };
    label="Enfield L8";
    class camo
    {
        values[] = { "Beech", "Walnut" };
        alwaysSelectable=1;
    };

    class scope : 3cb_enfield_scope
    {
        values[] = { "no", "yes" };
        alwaysSelectable=1;
    }
};

class 3cb_enfield_no4
{
    options[] = { "camo", "scope" };
    label="Enfield No. 4";
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

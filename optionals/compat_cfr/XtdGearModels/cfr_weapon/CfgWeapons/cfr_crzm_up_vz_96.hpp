class cfr_crzm_up_vz_96
{
    label = CSTRING(CrZM_UP_vz_96_Label);
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

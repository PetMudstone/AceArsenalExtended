class cfr_crzm_lk_vz_11
{
    label = CSTRING(CrZM_LK_vz_11_Label);
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

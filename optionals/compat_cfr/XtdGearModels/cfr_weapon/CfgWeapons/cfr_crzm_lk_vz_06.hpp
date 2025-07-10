class cfr_crzm_lk_vz_06
{
    label = CSTRING(CrZM_LK_vz_06_Label);
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

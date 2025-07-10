class cfr_crzm_up_vz_96_gp25
{
    label = CSTRING(CrZM_UP_vz_96_GP25_Label);
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

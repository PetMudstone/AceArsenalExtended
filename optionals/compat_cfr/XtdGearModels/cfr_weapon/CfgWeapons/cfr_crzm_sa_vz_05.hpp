class cfr_crzm_sa_vz_05
{
    label = "CrZM Sa vz. 05";
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

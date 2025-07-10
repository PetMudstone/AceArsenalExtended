class cfr_crzm_up_vz_05
{
    label = "CrZM UP vz. 05";
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

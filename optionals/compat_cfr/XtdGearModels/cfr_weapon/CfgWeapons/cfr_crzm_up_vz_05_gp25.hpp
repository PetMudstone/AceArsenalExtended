class cfr_crzm_up_vz_05_gp25
{
    label = "CrZM UP vz. 05 GP-25";
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

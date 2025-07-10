class cfr_crzm_up_vz_12_gp25
{
    label = "CrZM UP vz. 12 GP-25";
    author = CSTRING(Nata);
    options[] = { "attachsys" };
    class attachsys : cfr_attachsys
    {
        values[] = { "warsaw", "ris", "zenit_pica" };
        alwaysSelectable=1;
    };
};

class rhs_asval
{
    options[] = { "attachsys", "grip" };
    label="AS Val";
    class attachsys : rhs_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
    class grip
    {
        label = "Grip Mounts";
        values[] = { "no", "yes" };
        alwaysSelectable=1;
        class no
        {
            label = "No";
        };

        class yes
        {
            label = "Yes";
            description = "Allows you to mount a flashlight or laser point as well as a grip";
        };
    };
};

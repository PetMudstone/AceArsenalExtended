class XtdGearModels
{
    class CamoBase
    {
        class EF_MPTD
        {
            label="Desert";
            description="Marine FROG Desert";
            image="\ef_aceaxcompat\src\US_Marines_FROG_CO.paa";
        };
        class EF_MPTW
        {
            label="Woodland";
            description="Marine FROG Woodland";
            image="\ef_aceaxcompat\src\US_Marines_FROG_wdl_co.paa";
        };
        class YLW
        {
            label = "Yellow";
            image = "#(rgb,8,8,3)color(0.8,0.8,0,1)";
        };
    };
    class CfgWeapons
    {
        #include "models\weaponmodels.hpp"
        #include "models\headgearmodels.hpp"
        #include "models\uniformmodels.hpp"
        #include "models\vestmodels.hpp"
    };
    class CfgVehicles
    {
        #include "models\backpackmodels.hpp"
    };
};
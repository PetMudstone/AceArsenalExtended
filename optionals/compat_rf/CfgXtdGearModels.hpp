class XtdGearModels
{
    class CamoBase
    {
        class YLW
        {
            label = "Yellow";
            image = "#(rgb,8,8,3)color(0.8,0.8,0,1)";
        };
        class CIV
        {
            label = "Civilian";
            image = "#(rgb,8,8,3)color(0.4,0,0.5,1)";
        };
        class RED
        {
            label = "Red";
            image = "#(rgb,8,8,3)color(0.9,0,0,1)";
        };
        class BRN
        {
            label = "Brown";
            image = "#(rgb,8,8,3)color(0.08,0.05,0.04,1)";
        };
        class LBRN
        {
            label = "Light Brown";
            image = "#(rgb,8,8,3)color(0.34,0.22,0.12,1)";
        };
        class ORN
        {
            label = "Orange";
            image = "#(rgb,8,8,3)color(1,0.6,0,1)";
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

#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"aceax_gearinfo", "aceax_acebi_compat", "aceax_compat_cup"};
    author = "Pet Mudstone";
    VERSION_CONFIG;
  };
};

#include "XtdGearModels.hpp"

#include "XtdGearInfos.hpp"

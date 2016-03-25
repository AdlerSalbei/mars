#define COMPONENT editor
#include "\z\mars\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_EDITOR
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_EDITOR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_EDITOR
#endif

#include "\z\mars\addons\main\script_macros.hpp"

#define MENU_Y (0 * safeZoneH + safeZoneY)
#define MENU_HEIGHT (0.025 * safeZoneH)
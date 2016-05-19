/*
 * Author: Kingsley
 * Handles tree selection changes of the asset browser
 *
 * Arguments:
 * See UI EH
 *
 * Return Value:
 * None
 *
 * Example:
 * N/A
 *
 * Public: No
 */

#include "script_component.hpp"

disableSerialization;

params ["_control","_path"];

private _selected = call compile (_control tvData _path);

if (count _selected == 0) exitWith {
    GVAR(abSelectedObject) = [];
};

_selected params ["_type","_classname"];

switch (_type) do {
    case "unit": {
        _cfg = (configFile >> "CfgVehicles" >> _classname);
        _icon = getText (_cfg >> "icon");
        _side = getNumber (_cfg >> "side");
        _color = [_side] call EFUNC(common,getSideColorByInt);
        _iconTex = if (_icon find "\a3\" > -1 || _icon find "\A3\" > -1) then {_icon} else {getText (configFile >> "CfgVehicleIcons" >> _icon)};
        GVAR(abSelectedObject) = [_type, _classname, _iconTex, _color];
    };
    case "group": {};
};
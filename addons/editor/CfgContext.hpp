class GVARMAIN(context) {
    class ADDON {
        /*class Attributes {
            displayName = "Attributes";
            requiresPosition = 0;
            condition = QUOTE('CAManBase' countType GVAR(selection) == count GVAR(selection));
            action = QUOTE([ARR_2('__objects', 'CAManBase')] call AFUNC(openAttributes));
            order = 100;
        };*/
        class RemoteControl {
            displayName = "Remote Control";
            condition = QUOTE(!isPlayer _this && {count GVAR(selection) == 1} && {count crew vehicle _this > 0});
            action = QFUNC(remoteControl);
        };
    };
};
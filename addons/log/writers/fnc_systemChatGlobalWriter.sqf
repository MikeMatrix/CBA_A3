/* ----------------------------------------------------------------------------
Function: CBA_fnc_systemChatGlobalWriter

Description:
    Writes supplied message to systemChat on every connected client and server.

    This is intended to be used in combination with CBA_fnc_logDynamic.

Parameters:
    _message - Log message [String]

Returns:
    nil

Author:
    MikeMatrix
---------------------------------------------------------------------------- */
#include "script_component.hpp"

SCRIPT(systemChatGlobalWriter);

params ["_message"];

[-2, {systemChat _this}, _message] call CBA_fnc_globalExecute;

nil

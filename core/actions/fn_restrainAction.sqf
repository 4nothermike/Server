#include "..\..\script_macros.hpp"
/*
 File: fn_restrainAction.sqf
 Author: Bryan "Tonic" Boardwine
 Modified by: blackfisch
 Description:
 Retrains the target.
*/
private["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
if (side _unit isEqualTo west) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};
if (playerSide isEqualTo civilian) then {
 if !(license_civ_rebel) exitWith { hint "Du benötigst das Rebellentraining um jemanden zu fesseln"; };
 if (ITEM_VALUE("zipties") isEqualTo 0) exitWith { hint "Du hast keine Kabelbinder."; };
 [false,"zipties",1] call life_fnc_handleInv;
 hint "Sie entfuehren einen Zivilisten";
 _unit setVariable["restrained",true,true];
 [player,"cuff"] call life_fnc_globalSound;
 [player] remoteExec ["life_fnc_restrain",_unit];
} else {
 //Broadcast!
 _unit setVariable["restrained",true,true];
 [player,"cuff"] call life_fnc_globalSound;
 [player] remoteExec ["life_fnc_restrain",_unit];
 [0,"STR_NOTF_Restrained",true,[_unit getVariable["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
};
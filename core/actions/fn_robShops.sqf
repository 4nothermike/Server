/*
file: fn_robShops.sqf
Author: MrKraken
Description:
Executes the rob shob action!
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name
if(side _robber != civilian) exitWith { hint "Du kannst diese Tankstelle nicht ausrauben!" };
if(_robber distance _shop > 5) exitWith { hint "Du musst innerhalb von 5m von der Kasse sein, um Ihn auszurauben!" };
if !(_kassa) then { _kassa = 1000; };
if (_rip) exitWith { hint "Raub ist bereits im Gange!" };
if (vehicle player != _robber) exitWith { hint "Du kannst im Fahrzeug nicht ausrauben!" };
if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, Du machst mir keine Angst! Geh raus hier du Noob!" };
if (_kassa == 0) exitWith { hint "Es gibt kein Bargeld in der Kasse!" };
_rip = true;
_kassa = 13500 + round(random 50000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 50) then {[1,format["ALARM! - Gas Station: %1 is being robbed!", _shop]] remoteExec ["life_fnc_broadcast",west]; };
_cops = (west countSide playableUnits);
if(_cops < 3) exitWith{[_vault,-1] remoteExec ["disableSerialization;",2]; hint "Es sind nicht genug Polizisten, um die Tankstelle ausrauben zu können!";};
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Überfall ist in Arbeit... (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;
if(_rip) then
{
while{true} do
{
sleep 3;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Robbery in Progress, stay close (10m) (%1%2)...",round(_cP * 100),"%"];
_Pos = position player; // by ehno: get player pos
 _marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
 "Marker200" setMarkerColor "ColorRed";
 "Marker200" setMarkerText "!ACHTUNG! Überfall! ACHTUNG!";
 "Marker200" setMarkerType "mil_warning";
if(_cP >= 1) exitWith {};
if(_robber distance _shop > 10.5) exitWith { };
if!(alive _robber) exitWith {};
};
if!(alive _robber) exitWith { _rip = false; };
if(_robber distance _shop > 10.5) exitWith { deleteMarker "Marker200"; _shop switchMove ""; hint "Du musst innerhalb von 10m sein! - Jetzt ist die Kasse geschlossen."; 5 cutText ["","PLAIN"]; _rip = false; };
5 cutText ["","PLAIN"];
titleText[format["Du hast $%1 gestohlen, hau ab bevor die Polizei eintrifft!",[_kassa] call life_fnc_numberText],"PLAIN"];
deleteMarker "Marker200"; // by ehno delete maker
life_cash = life_cash + _kassa;
_rip = false;
life_use_atm = false;
sleep (30 + random(180));
life_use_atm = true;
if!(alive _robber) exitWith {};
[getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};
sleep 300;
_action = _shop addAction["Rob the Gas Station",life_fnc_robstore];
_shop switchMove "";
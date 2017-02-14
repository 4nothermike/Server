#include "..\..\script_macros.hpp"
/*
	File: fn_ticketGive.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives a ticket to the targeted player.
*/
private["_val"];
if(isNil {life_ticketadac_unit}) exitWith {hint localize "STR_Cop_TicketNil"};
if(isNull life_ticketadac_unit) exitWith {hint localize "STR_Cop_TicketExist"};

_val = ctrlText 2652;

if(!([_val] call TON_fnc_isnumber)) exitWith {hint localize "STR_Cop_TicketNum"};
if((parseNumber _val) > 200000) exitWith {hint localize "STR_Cop_TicketOver100"};

[player,(parseNumber _val)] remoteExec ["life_fnc_servicefeePrompt",life_ticketadac_unit];
closeDialog 0;
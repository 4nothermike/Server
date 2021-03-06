#include "..\..\script_macros.hpp"
/*
	File: fn_ticketPrompt
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Prompts the player that he is being ticketed.
*/
private["_east","_val"];
if(!isNull (findDisplay 2600)) exitWith {}; //Already at the ticket menu, block for abuse?
_east = SEL(_this,0);
if(isNull _east) exitWith {};
_val = SEL(_this,1);

createDialog "life_servicefee_pay";
disableSerialization;
waitUntil {!isNull (findDisplay 2600)};

life_ticket_paid = false;
life_ticket_val = _val;
life_ticket_adac = _east;
CONTROL(2600,2601) ctrlSetStructuredText parseText format["<t align='center'><t size='.8px'>" +(localize "STR_Adac_Ticket_GUI_Given"),_east GVAR ["realname",name _east],_val];

[] spawn {
	disableSerialization;
	waitUntil {life_ticket_paid OR (isNull (findDisplay 2600))};
	if(isNull (findDisplay 2600) && !life_ticket_paid) then {
		[0,"STR_Adac_Ticket_Refuse",true,[profileName]] remoteExecCall ["life_fnc_broadcast",east];
		[1,"STR_Adac_Ticket_Refuse",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_adac];
	};
};
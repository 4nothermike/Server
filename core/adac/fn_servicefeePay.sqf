#include "..\..\script_macros.hpp"
/*
	File: fn_ticketPay.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Pays the ticket.
*/
if(isNil "life_ticket_val" OR isNil "life_ticket_adac") exitWith {};
if(CASH < life_ticket_val) exitWith {
	if(BANK < life_ticket_val) exitWith {
		hint localize "STR_Adac_Ticket_NotEnough";
		[1,"STR_Adac_Ticket_NotEnoughNOTF",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_adac];
		closeDialog 0;
	};
	
	hint format[localize "STR_Adac_Ticket_Paid",[life_ticket_val] call life_fnc_numberText];
	BANK = BANK - life_ticket_val;
    [1] call SOCK_fnc_updatePartial;
    life_ticket_paid = true;
	
	[1,"STR_Adac_Ticket_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_adac];
	[life_ticket_val,player,life_ticket_adac] remoteExecCall ["life_fnc_servicefeePaid",life_ticket_adac];
	closeDialog 0;
};

SUB(CASH,life_ticket_val);
life_ticket_paid = true;

closeDialog 0;
[1,"STR_Adac_Ticket_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_adac];
[life_ticket_val,player,life_ticket_adac] remoteExecCall ["life_fnc_servicefeePaid",life_ticket_adac];
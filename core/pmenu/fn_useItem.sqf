#include "..\..\script_macros.hpp"
/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
    case (_item in ["waterBottle","coffee","redgull"]): {
        if ([false,_item,1] call life_fnc_handleInv) then {
            life_thirst = 100;
            if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 0;};
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1}) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    case (_item isEqualTo "boltcutter"): {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };

    case (_item isEqualTo "blastingcharge"): {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

    case (_item isEqualTo "defusekit"): {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"): {
        [false] call life_fnc_storageBox;
    };

    case (_item isEqualTo "storagebig"): {
        [true] call life_fnc_storageBox;
    };
	
	case (_item == "painkillers"):
	{
		if(vehicle player != player) exitWith {hintSilent "Du kannst dich nicht in einem Fahrzeug heilen..."};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
			player setDamage 0;
			player setFatigue 0;
			player allowDamage true;
			player enableSimulation true;
			closeDialog 0;
			hintSilent "Die Schmerzmittel haben gewirkt! Du hast nun wieder volles Leben."
		};
	};
	
	case (_item == "morphium"):
	{
		if(playerSide in [west,independent]) exitWith {hintSilent "Du bist im Dienst !"};
		if(vehicle player != player) exitWith {hintSilent "Du kannst dich nicht in einem Fahrzeug heilen..."};
		if(([false,_item,1]call life_fnc_handleInv)) then
		{
			player setFatigue 1;
			player setDamage 0;
			if(isNil "life_drink") then {life_drink = 0;};
			life_drink = life_drink + 0.1;
			life_thirst = life_thirst - 65;
			life_hunger = life_hunger - 75;
			if (life_drink < 0.08) exitWith {};
			[] spawn life_fnc_drinkwhiskey;
			closeDialog 0;
		};
	};
	
	case (_item == "mauer"):
	{
		if(!isNull life_mauer) exitWith {hintSilent "Du stellst schon eine Mauer!"};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
			[] spawn life_fnc_mauer;
		};
};

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if !(isNull objectParent player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn life_fnc_jerryCanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"): {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };
	
	case (_item =="wine"): {
		if(playerSide in [west,independent]) exitWith {hint localize "STR_MISC_WestIndNoNo";};
		if((player getVariable ["inDrink",FALSE])) exitWith {hint localize "STR_MISC_AlreadyDrinking";};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
		if(isNil "life_drink") then {life_drink = 0;};
		//Wenn ihr das Bier trinkt, dann habe ihr also 0.15 Promille
		life_drink = life_drink + 0.15;
		if (life_drink < 0.2) exitWith {};
		[] spawn life_fnc_drinkwine;
	};
}; 

	case (_item in ["heroin_processed"]): { 
		if(playerSide in [west,independent]) exitWith {hint "Hallo Sie sind im Dienst!!";};
		if((player getVariable ["Druged",FALSE])) exitWith {hint "Du nimmst bereits geiles Zeug";};
		if(([false,_item,1] call life_fnc_handleInv)) then 
		{
		if(isNil "life_drug") then {life_drug = 0;};
		//Wenn er Drogen nimmt
		life_drug = life_drug + 0.08;
		if (life_drug < 0.00) exitWith {};
		[] spawn life_fnc_Heroinnimm;
	};
};

	case (_item in ["marijuana"]): {
		if(playerSide in [west,independent]) exitWith {hint "Hallo Sie sind im Dienst!!";};
		if((player getVariable ["Druged",FALSE])) exitWith {hint "Du nimmst bereits geiles Zeug";};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
		if(isNil "life_drug") then {life_drug = 0;};
		//Wenn er Drogen nimmt
		life_drug = life_drug + 0.08;
		if (life_drug < 0.00) exitWith {};
		[] spawn life_fnc_Weednimm;
	};
};

	case (_item in ["cocaine_processed"]): {
		if(playerSide in [west,independent]) exitWith {hint "Hallo Sie sind im Dienst!!";};
		if((player getVariable ["Druged",FALSE])) exitWith {hint "Du nimmst bereits geiles Zeug";};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
		if(isNil "life_drug") then {life_drug = 0;};
		//Wenn er Drogen nimmt
		life_drug = life_drug + 0.08;
		if (life_drug < 0.00) exitWith {};
		[] spawn life_fnc_Cocainenimm;
	};
};

	case (_item in ["meth_processed"]): {
		if(playerSide in [west,independent]) exitWith {hint "Hallo Sie sind im Dienst!!";};
		if((player getVariable ["Druged",FALSE])) exitWith {hint "Du nimmst bereits geiles Zeug";};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
		if(isNil "life_drug") then {life_drug = 0;};
		//Wenn er Drogen nimmt
		life_drug = life_drug + 0.08;
		if (life_drug < 0.00) exitWith {};
		[] spawn life_fnc_Methnimm;
	};
};

	case (_item in ["lsd_processed"]): {
		if(playerSide in [west,independent]) exitWith {hint "Hallo Sie sind im Dienst!!";};
		if((player getVariable ["Druged",FALSE])) exitWith {hint "Du nimmst bereits geiles Zeug";};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
		if(isNil "life_drug") then {life_drug = 0;};
		//Wenn er Drogen nimmt
		life_drug = life_drug + 0.08;
		if (life_drug < 0.00) exitWith {};
		[] spawn life_fnc_Lsdnimm;
	};
};

    case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach"]): {
        if (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then {
            if ([false,_item,1] call life_fnc_handleInv) then {
                _val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
                _sum = life_hunger + _val;
                switch (true) do {
                    case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
                    case (_sum > 100): {life_hunger = 100;};
                    default {life_hunger = _sum;};
                };
            };
        };
    };

    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;
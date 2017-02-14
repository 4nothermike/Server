/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Personalausweis ansehen
		life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];
		//Personalausweis zeigen
		life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];
		//Tuningshop
		life_actions = life_actions + [player addAction ["Fahrzeug Pimpen",mav_tuning_fnc_start,vehicle player,0,false,false,"",'!isNull objectParent player && {player distance (getMarkerPos "Tuningshop") < 5 }']];
	};
	case west:
	{
		//Personalausweis ansehen
		life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];
		//Personalausweis zeigen
		life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];
		//seize Objects
        life_actions = life_actions + [player addAction["Beschlagnahmen",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'count(nearestObjects [player,["weaponholder"],3])>0']];
		//Warner's barriers
		life_actions = life_actions + [player addAction ["Barriere",life_fnc_barriers]];
		//Straßensperren aufheben
		life_actions = life_actions + [player addAction["Block Pick-up",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
		//Nagelbänder aufheben
		life_actions = life_actions + [player addAction["SpikeStrip Pick-up",life_fnc_packupSpikes,"",0,false,false,"",' _spikes = nearestObjects[getPos player,["Land_Razorwire_F"],8] select 0; !isNil "_spikes" && !isNil {(_spikes getVariable "item")}']];
	};
	case independent:
	{
		//Personalausweis ansehen
		life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];
		//Personalausweis zeigen
		life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];
		//Warner's barriers
		life_actions = life_actions + [player addAction ["Barriere",life_fnc_barriers]];
		//Straßensperren aufheben
		life_actions = life_actions + [player addAction["Block Pick-up",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
	};
	case east:
	{
		//Personalausweis ansehen
		life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];
		//Personalausweis zeigen
		life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
		isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];
		//Warner's barriers
		life_actions = life_actions + [player addAction ["Barriere",life_fnc_barriers]];
		//Straßensperren aufheben
		life_actions = life_actions + [player addAction["Block Pick-up",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
	};
};

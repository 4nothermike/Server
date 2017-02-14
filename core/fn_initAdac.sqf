#include "..\script_macros.hpp"

private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_adaclevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
sleep 35;
};

if (LIFE_SETTINGS(getNumber,"restrict_adac_weapons") isEqualTo 1) then {
[] spawn {
for "_i" from 0 to 1 step 0 do {
waitUntil {sleep 3; currentWeapon player != ""};
removeAllWeapons player;
};
};
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn
{
while {true} do
    {
        waitUntil {backpack player == "B_Kitbag_cbr"};
        (unitBackpack player) setObjectTextureGlobal [0,"textures\Adac\Uniform\tcs_backpack.jpg"];
        waitUntil {backpack player != "B_Kitbag_cbr"};
    };
};

//Introcam
[] spawn life_fnc_IntroCam;

[] execVM "IgiLoad\IgiLoadInit.sqf"; //wenn ihr kein IgiLoad wollt, einfach mit 2 Strichen vor der Zeile ignorieren Bsp. //_igiload = execVM.......


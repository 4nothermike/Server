/*
Player Status Bar with Icons v 1.36
Author: Dart_Rogue
Mod: Epoch
https://github.com/DarthRogue/Status_Bar
Transfered to Altis Life + add SBUserhy
*/
waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*_rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["osefStatusBar","PLAIN"];
*/
4 cutRsc ["osefStatusBar","PLAIN"];
//systemChat format["Willkommen auf dem Server", _rscLayer];
[] spawn {
 sleep 2;
 _counter = 360;
 _timeSinceLastUpdate = 0;
 _colourDefault = parseText "#ADADAD"; //set your default colour here
 _colour100 = parseText "#33FF00";
 _colour90 = parseText "#33FF00";
 _colour80 = parseText "#33FF00";
 _colour70 = parseText "#33FF00";
 _colour60 = parseText "#66FF00";
 _colour50 = parseText "#CCFF00";
 _colour40 = parseText "#FFFF00";
 _colour30 = parseText "#FFFF00";
 _colour20 = parseText "#CC0000";
 _colour10 = parseText "#CC0000";
 _colour0 = parseText "#CC0000";
 _colourDead = parseText "#000000";
 _colourUpTimeHUD = parseText "#CCCCCC";
while {true} do 
 {
 sleep 1;
 //moved the creation of the status bar inside the loop and create it if it is null,
 //this is to handle instance where the status bar is disappearing 
 if(isNull ((uiNamespace getVariable "statusBar")displayCtrl 55555)) then
 {
 diag_log "statusbar is null create";
 disableSerialization;
 _rscLayer = "statusBar" call BIS_fnc_rscLayer;
 _rscLayer cutRsc["statusBar","PLAIN"];
 };
 //initialize variables and set values
 //neu
 _CivplayHUD = civilian countSide playableUnits; //1
 _WestplayHUD = west countSide playableUnits; //2
 _IndepplayHUD = independent countSide playableUnits; //3
 _EastplayHUD = east countSide playableUnits; //4
 _grid = mapGridPosition player; //5
 _xx = (format[_grid]) select [0,3]; //6
 _yy = (format[_grid]) select [3,3]; //7
 _hunger = round(life_hunger); //8
 _thirst = round(life_thirst); //9
 _damage = round ((1 - (damage player)) * 100); //10
 _FpsHud = round (diag_fps); //11
 _stamina = round(getFatigue player * 100) / 100; //12
 _barcash = [life_cash] call life_fnc_numberText; //14
 _bankcash = [life_atmbank] call life_fnc_numberText; //15
 //neu ende
 _toxPercent = round(life_thirst);
 _energy = round(life_thirst);
 _energyPercent = floor((_energy / 2500 ) * 100);
 _players = (count playableUnits -1);
 //Colour coding
 //Hunger
 _colourHunger = _colourDefault;
 switch true do {
 case(_hunger >= 100) : {_colourHunger = _colour70;};
 case((_hunger >= 90) && (_hunger < 100)) : {_colourHunger = _colour70;};
 case((_hunger >= 80) && (_hunger < 90)) : {_colourHunger = _colour70;};
 case((_hunger >= 70) && (_hunger < 80)) : {_colourHunger = _colour70;};
 case((_hunger >= 60) && (_hunger < 70)) : {_colourHunger = _colour60;};
 case((_hunger >= 50) && (_hunger < 60)) : {_colourHunger = _colour50;};
 case((_hunger >= 40) && (_hunger < 50)) : {_colourHunger = _colour40;};
 case((_hunger >= 30) && (_hunger < 40)) : {_colourHunger = _colour30;};
 case((_hunger >= 20) && (_hunger < 30)) : {_colourHunger = _colour20;};
 case((_hunger >= 10) && (_hunger < 20)) : {_colourHunger = _colour10;};
 case((_hunger >= 1) && (_hunger < 10)) : {_colourHunger = _colour0;};
 case(_hunger < 1) : {_colourHunger = _colourDead;};
 };
 //Thirst
 _colourThirst = _colourDefault; 
 switch true do{
 case(_thirst >= 100) : {_colourThirst = _colour70;};
 case((_thirst >= 90) && (_thirst < 100)) : {_colourThirst = _colour70;};
 case((_thirst >= 80) && (_thirst < 90)) : {_colourThirst = _colour70;};
 case((_thirst >= 70) && (_thirst < 80)) : {_colourThirst = _colour70;};
 case((_thirst >= 60) && (_thirst < 70)) : {_colourThirst = _colour60;};
 case((_thirst >= 50) && (_thirst < 60)) : {_colourThirst = _colour50;};
 case((_thirst >= 40) && (_thirst < 50)) : {_colourThirst = _colour40;};
 case((_thirst >= 30) && (_thirst < 40)) : {_colourThirst = _colour30;};
 case((_thirst >= 20) && (_thirst < 30)) : {_colourThirst = _colour20;};
 case((_thirst >= 10) && (_thirst < 20)) : {_colourThirst = _colour10;};
 case((_thirst >= 1) && (_thirst < 10)) : {_colourThirst = _colour0;};
 case(_thirst < 1) : {_colourThirst = _colourDead;};
 };
 //Damage
 _colourDamage = _colourDefault;
 switch true do {
 case(_damage >= 100) : {_colourDamage = _colour70;};
 case((_damage >= 90) && (_damage < 100)) : {_colourDamage = _colour70;};
 case((_damage >= 80) && (_damage < 90)) : {_colourDamage = _colour70;};
 case((_damage >= 70) && (_damage < 80)) : {_colourDamage = _colour70;};
 case((_damage >= 60) && (_damage < 70)) : {_colourDamage = _colour60;};
 case((_damage >= 50) && (_damage < 60)) : {_colourDamage = _colour50;};
 case((_damage >= 40) && (_damage < 50)) : {_colourDamage = _colour40;};
 case((_damage >= 30) && (_damage < 40)) : {_colourDamage = _colour30;};
 case((_damage >= 20) && (_damage < 30)) : {_colourDamage = _colour20;};
 case((_damage >= 10) && (_damage < 20)) : {_colourDamage = _colour10;};
 case((_damage >= 1) && (_damage < 10)) : {_colourDamage = _colour0;};
 case(_damage < 1) : {_colourDamage = _colourDead;};
 };
 //Stamina
 _colourStamina = _colourDefault;
 switch true do{
 case(_Stamina < 0.01) : {_colourStamina = _colour70;};
 case((_Stamina >= 0.01) && (_Stamina < 0.3)) : {_colourStamina = _colour70;};
 case((_Stamina >= 0.3) && (_Stamina < 0.6)) : {_colourStamina = _colour30;};
 case(_Stamina >= 0.6) : {_colourStamina = _colour0;};
 };
 //FPS
 _colourFps = _colourDefault;
 switch true do {
 case(_FpsHud >= 50) : {_colourFps = _colour70;};
 case((_FpsHud >= 30) && (_FpsHud < 50)) : {_colourFps = _colour30;};
 case((_FpsHud >= 1) && (_FpsHud < 30)) : {_colourFps = _colour0;};
 case(_FpsHud < 1) : {_colourFps = _colourDead;};
 };
 // Kompass im Hud //////////////////////////////////////////
 _compass = "";
 _mydir = getDirVisual player;
 switch (true) do {
 case ((_mydir >= 348.75) || (_mydir < 11.25)) : {_compass = "N"};
 case ((_mydir >= 11.25) && (_mydir < 33.75)) : {_compass = "NNO"};
 case ((_mydir >= 33.75) && (_mydir < 56.25)) : {_compass = "NO"};
 case ((_mydir >= 56.25) && (_mydir < 78.75)) : {_compass = "ONO"};
 case ((_mydir >= 78.75) && (_mydir < 101.25)) : {_compass = "O"};
 case ((_mydir >= 101.25) && (_mydir < 123.75)) : {_compass = "OSO"};
 case ((_mydir >= 123.75) && (_mydir < 146.25)) : {_compass = "SO"};
 case ((_mydir >= 146.25) && (_mydir < 168.75)) : {_compass = "SSO"};
 case ((_mydir >= 168.75) && (_mydir < 191.25)) : {_compass = "S"};
 case ((_mydir >= 191.25) && (_mydir < 213.75)) : {_compass = "SSW"};
 case ((_mydir >= 213.75) && (_mydir < 236.25)) : {_compass = "SW"};
 case ((_mydir >= 236.25) && (_mydir < 258.75)) : {_compass = "WSW"};
 case ((_mydir >= 258.75) && (_mydir < 281.25)) : {_compass = "W"};
 case ((_mydir >= 281.25) && (_mydir < 303.75)) : {_compass = "WNW"};
 case ((_mydir >= 303.75) && (_mydir < 326.25)) : {_compass = "NW"};
 case ((_mydir >= 326.25) && (_mydir < 348.75)) : {_compass = "NNW"};
 default {_compass = ""};
 };
 ((uiNamespace getVariable "osefStatusBar")displayCtrl 555556)ctrlSetStructuredText parseText 
 format["<t shadow='1' shadowColor='#000000'><img size='1.6' shadowColor='#000000' image='icons\Statusbar\players.paa' color='#FFFFFF'/>%1 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\players.paa' color='#3399FF'/>%2 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\players.paa' color='#009933'/>%3 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\players.paa' color='#CC0000'/>%4 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\ico_map.paa'/>%5 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\hunger.paa' color='%7'/>%6 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\thirst.paa' color='%9'/>%8 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\damage.paa' color='%11'/>%10 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\stamina.paa' color='%13'/>%12
<img size='1.6' shadowColor='#000000' image='icons\Statusbar\money.paa' />%14
<img size='1.6' shadowColor='#000000' image='icons\Statusbar\bank.paa' />%15 
 <img size='1.6' shadowColor='#000000' image='icons\Statusbar\monitor_fps.paa' color='%17'/>%16 
 </t>",_CivplayHUD,_WestplayHUD,_IndepplayHUD,_EastplayHUD, format["%1/%2",_xx,_yy], _hunger, _colourHunger, _thirst, _colourThirst, _damage, _colourDamage, _stamina, _colourStamina, _barcash, _bankcash, _FpsHud, _colourFps, _players,_energyPercent,_colourDefault];
 }; 
};


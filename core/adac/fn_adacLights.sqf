/*
	File: fn_adaclights.sqf
	Author: mindstorm, modified by Adanteh
	Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-adaclights-and-underglow
	
	Description:
	Adds the light effect to cop vehicles, specifically the offroad.
*/
Private ["_vehicle","_adaclightYellow","_adaclightleft","_adaclightright","_adacleftRed","_attach","_brightness"];
_vehicle = _this select 0;
	
if(isNil "_vehicle" OR isNull _vehicle OR !(_vehicle getVariable "adaclights")) exitWith {};

if (sunOrMoon < 0.5) then {
	_brightness = 2;
} else {
	_brightness = 15;
};

switch (typeOf _vehicle) do
{

	case "C_Offroad_01_F": {_attach = [[0.37, 0.0, 0.56], [-0.37, 0.0, 0.56]];	};
	case "C_SUV_01_F": {_attach = [[0.4, 2.3, -0.55], [-0.4, 2.3, -0.55]]; };	
	case "B_Truck_01_transport_F":{_attach = [[-0.74, 4.9, -0.5],[0.74, 4.9, -0.5]]; };
		
};

_adaclightYellow = [255, 174, 7];

_adaclightleft = "#lightpoint" createVehicle getpos _vehicle;   
sleep 0.2;
_adaclightleft setLightColor _adaclightYellow;
_adaclightleft setLightBrightness 0;
_adaclightleft setLightAmbient [0.1,0.1,1];
_adaclightleft lightAttachObject [_vehicle, _attach select 0];
_adaclightleft setLightAttenuation [0.181, 0, 1000, 130];
_adaclightleft setLightIntensity 10;
_adaclightleft setLightFlareSize 0.0005;
_adaclightleft setLightFlareMaxDistance 0.9;
_adaclightleft setLightUseFlare true;
_adaclightleft setLightDayLight true;

_adaclightright = "#lightpoint" createVehicle getpos _vehicle;   
sleep 0.2;
_adaclightright setLightColor _adaclightYellow;
_adaclightright setLightBrightness 0;
_adaclightright setLightAmbient [0.1,0.1,1]; 
_adaclightright lightAttachObject [_vehicle, _attach select 1];
_adaclightright setLightAttenuation [0.181, 0, 1000, 130];
_adaclightright setLightIntensity 10;
_adaclightright setLightFlareSize 0.0005;
_adaclightright setLightFlareMaxDistance 0.9;
_adaclightright setLightUseFlare true;
_adaclightright setLightDayLight true;

_adacleftRed = true;  
while{ (alive _vehicle)} do  
{  
	if(!(_vehicle getVariable "adaclights")) exitWith {};
	if(_adacleftRed) then  
	{  
		_adacleftRed = false;  
		_adaclightright setLightBrightness 0.0;  
		sleep 0.08;
		_adaclightleft setLightBrightness _brightness;
		sleep 0.08;
		_adaclightleft setLightBrightness 0; 
		sleep 0.08;	
		_adaclightleft setLightBrightness _brightness;		
	}  
		else  
	{  
		_adacleftRed = true;  
		_adaclightleft setLightBrightness 0.0;  
		sleep 0.08;
		_adaclightright setLightBrightness _brightness;
		sleep 0.08;
		_adaclightright setLightBrightness 0; 
		sleep 0.08;	
		_adaclightright setLightBrightness _brightness;  
	};  
	sleep 0.1;
};  
deleteVehicle _adaclightleft;
deleteVehicle _adaclightright;
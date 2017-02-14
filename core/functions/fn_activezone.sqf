
[] spawn
{
 while {true} do
 {
 private["_damage"];
 sleep 1;
 while {((player distance (getMarkerPos "Warm_Marker") < 150) && (player getVariable["Revive",TRUE]))} do
 {
 if(uniform player == "U_C_Scientist") then
 {
 hint "!!! Du betrittst die Radioaktive Sperrzone !!! Aber dein Schutzanzug schützt dich";
 sleep 5;
 }else
 {
 hint "!!! ACHTUNG RADIOAKTIVE ZONE !!! DU KANNST STERBEN, WENN DU KEINEN SCHUTZANZUG AN HAST";
 _damage = damage player;
 _damage = _damage + 0.1;
 player setDamage (_damage);
 [] call life_fnc_hudUpdate;
 sleep 5;
 };
 };
 };
};
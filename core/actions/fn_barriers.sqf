/*
 File: fn_barrier.sqf
 Author: Warnerm14
 Desc: Everytime this is ran, it will open the menu.
 */
 //Incase you run the menu again, this removes the old entrys so it doesnt double.
 player removeAction placebargate;
 player removeAction placebarrier;
 player removeAction placecone;
 player removeAction dropitem;
 player removeAction remove; 
 player removeaction cancelBarrier;
 player removeAction headerBarrier;
 //The header so make the list stand out.
 headerBarrier = player addaction [("<t color=""#FF3300"">" + ("### BARRIERS ###") +"</t>"),""];
 //Bargate Action
 placebargate = player addaction [("<t color=""#0101DF"">" + ("Place Bargate") +"</t>"),{ //Defines what you see on the menu.
 detach placeable; //If you try to place another item while holding an object it will drop the first item.
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]); //Makes it level with terrain.
 placeable = "Land_BarGate_F" createVehicle position player; //Spawns the object ontop of the player.
 placeable attachTo [player, [0, 5, 4]]; //Attaches to the player and allows them to move it around.
 //placeable allowdamage false; //Remove the // infront of placeable to make the bargate indestructable. 
 }];
 placebarrier = player addaction [("<t color=""#0101DF"">" + ("Place Barrier") +"</t>"),{ //SAME AS THE TOP
 detach placeable; 
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "Land_CncBarrier_F" createVehicle position player; 
 placeable attachTo [player, [0, 3, 0.4]]; 
 }];
 placecone = player addaction [("<t color=""#0101DF"">" + ("Place Cone") +"</t>"),{ //SAME AS THE TOP
 detach placeable; 
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "RoadCone_L_F" createVehicle position player; 
 placeable attachTo [player, [0, 2, 0.4]];
 }];
 dropitem = player addaction [("<t color=""#0101DF"">" + ("Drop") +"</t>"),{ //The drop item entry.
 detach placeable; //Detaches the object from the player.
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]); //Makes it level with the ground.
 placeable = apple; //Clears the varible to prevent bugs.
 }]; 
 remove = player addaction [("<t color=""#0101DF"">" + ("Remove") +"</t>"),{ //The remove item entry.
 _barrier = position player nearObjects ["Land_CncBarrier_F", 10]; //Detects concrete barriers within 2 meters.
 _cone = position player nearObjects ["RoadCone_L_F", 10]; //Detects cones within 1 meters.
 _bargate = position player nearObjects ["Land_BarGate_F", 10]; //Detects bargates within 4 meters.
 _remove = (_barrier select 0); //Selects barrier
 deleteVehicle _remove; //Deletes barrier
 _remove1 = (_cone select 0); //Selects cone
 deleteVehicle _remove1; //Deletes cone
 _remove2 = (_bargate select 0); //Selects bargate
 deleteVehicle _remove2; //Deletes bargate
 barrier = apple;
 }];
 // When ran this entry will remove all the barrier options from the action menu.
 cancelBarrier = player addaction [("<t color=""#FF3300"">" + ("### Close ###") +"</t>"),{
 player removeAction placebargate;
 player removeAction placebarrier;
 player removeAction placecone;
 player removeAction dropitem;
 player removeAction remove; 
 player removeaction cancelBarrier;
 player removeAction headerBarrier;
 placeable = apple;
 }];
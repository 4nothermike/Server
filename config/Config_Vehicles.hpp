class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
			{ "I_C_Offroad_02_unarmed_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" },
			{ "C_Van_01_box_F", "" },
			{ "C_Van_01_fuel_F", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "license_civ_trucking";
        vehicles[] = {
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
			{ "O_Truck_03_fuel_F", "" },
			{ "O_Truck_03_device_F", "" }, 
			{ "B_Truck_01_transport_F", "" },
			{ "B_Truck_01_covered_F", "" }, 
            { "B_Truck_01_box_F", "" },
            { "B_Truck_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "license_civ_pilot";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_Light_03_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "C_Plane_civil_01_F", "" }
        };
    };
	
	class reb_air {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "i_Heli_Light_03_unarmed_F", "" },
			{ "O_Heli_Transport_04_box_F", "" },
			{ "B_Heli_Transport_03_unarmed_F", "" }
        };
    };
	
	class sol_air {
        side = "civ";
        conditions = "license_civ_soldner";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", "" },
            { "I_Heli_light_03_F", "" },
            { "B_Heli_Transport_01_F", "" },
			{ "B_Heli_Transport_03_F", "" },
			{ "O_T_VTOL_02_vehicle_grey_F", "" },
			{ "B_T_VTOL_01_vehicle_olive_F", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
			{ "C_Scooter_Transport_01_F", "" },
			{ "C_Boat_transport_02_F", "" },
            { "B_SDV_01_F", "" },
			{ "C_Scoooter_Transport_01_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "I_G_Offroad_01_F", "" },
            { "O_T_LSV_02_unarmed_F", "" },
            { "B_T_LSV_01_unarmed_F", "" },
            { "O_MRAP_02_F", "" },
			{ "B_MRAP_01_F", "" }
        };
    };
	
	class sol_car {
        side = "civ";
        conditions = "license_civ_soldner";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
			{ "I_G_Offroad_01_armed_F", "" },
			{ "O_T_LSV_02_armed_F", "" },
			{ "B_T_LSV_01_armed_F", "" },
			{ "I_MRAP_03_F", "" },
            { "O_MRAP_02_F", "" },
			{ "B_MRAP_01_F", "" },
			{ "B_MRAP_01_hmg_F", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "license_med_driver";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_Van_01_box_F", "" },
			{ "O_Truck_02_Ammo_F", "" }
        };
    };
	
	class adac_shop {
        side = "adac";
        conditions = "license_adac_driver";
        vehicles[] = {
			{ "C_SUV_01_F", "" },
            { "C_Offroad_01_repair_F", "" },
            { "B_Truck_01_mover_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "B_Truck_01_covered_F", "" }
        };
    };

    class med_air {
        side = "med";
        conditions = "license_med_mAir";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
			{ "B_Heli_Light_01_F", "" },
            { "I_Heli_Light_03_unarmed_F", "" },
			{ "O_Heli_Transport_04_medevac_F", "" }
        };
    };
	
	class adac_air {
        side = "adac";
        conditions = "license_adac_aAir";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "license_cop_driver";
        vehicles[] = {
            { "C_SUV_01_F", "" },
			{ "C_Offroad_01_F", "" },
            { "C_Hatchback_01_F", "" },
			{ "B_T_LSV_01_unarmed_F", "" },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 3" },
            { "B_MRAP_01_F", "call life_coplevel >= 4" },
			{ "I_MRAP_03_F", "call life_coplevel >= 5" },
			{ "O_MRAP_02_F", "call life_coplevel >= 5" },
            { "B_MRAP_01_hmg_F", "call life_coplevel >= 7" },
			{ "I_Truck_02_covered_F", "call life_coplevel >= 7" },
			{ "B_MBT_01_cannon_F", "call life_coplevel >= 7" },
			{ "B_MBT_01_arty_F", "call life_coplevel >= 7" },
			{ "B_APC_Tracked_01_rcws_F", "call life_coplevel >= 7" },
			{ "B_APC_Tracked_01_AA_F", "call life_coplevel >= 7" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "license_cop_cAir";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "call life_coplevel >= 2" },
			{ "B_Heli_Light_01_F", "call life_coplevel >= 2" },
			{ "I_Heli_Light_03_unarmed_F", "call life_coplevel >= 3" },
			{ "B_Heli_Light_01_armed_F", "call life_coplevel >= 7" },
			{ "B_Heli_Transport_01_F", "call life_coplevel >= 5" },
			{ "B_Heli_Transport_03_unarmed_F", "call life_coplevel >= 5" },
			{ "B_Heli_Transport_03_F", "call life_coplevel >= 7" },
			{ "O_Heli_Transport_04_bench_F", "call life_coplevel >= 7" },
			{ "B_T_VTOL_01_armed_olive_F", "call life_coplevel >= 7" },
			{ "B_Plane_CAS_01_F", "call life_coplevel >= 7" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "license_cop_cg";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class O_Truck_02_Ammo_F {
        vItemSpace = 250;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Feuerwehr", "med", {
                "textures\Medic\LKW\fwzamakfront.jpg",
                "textures\Medic\LKW\fwzamakbox.jpg"
            }, "" }
        };
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_civ_soldner || {license_cop_cAir}";
        price = 7250000;
         textures[] = {
            { "Polizei", "cop", {
                "textures\Cop\Air\swat_ghosthawk.jpg",
                "textures\Cop\Air\swat_ghosthawk_1.jpg"
            }, "" },
			{ "Schwarz", "sol", {
                "textures\Civ\Air\heli_transport_01_ext01_co.jpg",
                "textures\Civ\Air\heli_transport_01_ext02_co.jpg"
            }, "" }
        };
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 7500000;
        textures[] = {
            { "Swiss Army", "cop", {
                "textures\Cop\Car\mrap_base_main.jpg",
                "textures\Cop\Car\mrap_adds_main.jpg"
            }, "" },
			{ "Camo Grün", "sol", {
                "textures\Civ\Car\mrap_01_base_co.jpg",
                "textures\Civ\Car\mrap_01_adds_co.jpg"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 666666;
        textures[] = {
			{ "Schwarz", "civ", {
                "textures\Civ\LKW\CIV_tempest_grey_0.paa",
                "textures\Civ\LKW\CIV_tempest_grey_1.paa",
                "textures\Civ\LKW\CIV_tempest_grey_2.paa"
            }, "" },
			{ "Hex Tarn Grün", "civ", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa"
            }, "" }
        };
    };

    class O_Truck_03_device_F {
        vItemSpace = 650;
        conditions = "license_civ_trucking";
        price = 4000000;
        textures[] = {
			{ "Schwarz", "civ", {
                "textures\Civ\LKW\CIV_tempest_grey_0.paa",
                "textures\Civ\LKW\CIV_tempest_grey_1.paa",
                "textures\Civ\LKW\CIV_tempest_grey_2.paa"
            }, "" },
			{ "Hex Tarn Grün", "civ", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa"
            }, "" }
        };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class I_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 60000;
        textures[] = { };
    };
	
	class I_G_Offroad_01_armed_F {
        vItemSpace = 45;
        conditions = "";
        price = 2800000;
        textures[] = { };
    };
	
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 80;
        conditions = "license_civ_rebel || {license_cop_driver} || {license_med_driver}";
        price = 530000;
        textures[] = {
            { "Camo Braun", "reb", {
                "textures\Civ\Car\csat_browncamo_1.paa",
				"textures\Civ\Car\csat_browncamo_2.paa"
            }, "" },
			{ "Camo Grün", "reb", {
                "textures\Civ\Car\csat_greencamo_1.jpg",
				"textures\Civ\Car\csat_greencamo_2.jpg"
            }, "" }
        };
    };
	
	class B_T_LSV_01_unarmed_F {
        vItemSpace = 80;
        conditions = "license_civ_rebel || {license_cop_driver} || {license_med_driver}";
        price = 590000;
        textures[] = {
            { "Sand", "reb", {
                "textures\Civ\Car\NATO_LSV_01_sand_CO.paa",
                "textures\Civ\Car\NATO_LSV_02_sand_CO.paa",
				"textures\Civ\Car\NATO_LSV_03_sand_CO.paa",
				"textures\Civ\Car\NATO_LSV_Adds_sand_CO.paa"
            }, "" },
			{ "Nato Grün", "reb", {
                "textures\Civ\Car\nato_green_1.jpg",
                "textures\Civ\Car\nato_green_2.jpg",
				"textures\Civ\Car\nato_green_3.jpg",
				"textures\Civ\Car\nato_green_4.jpg"
            }, "" },
			{ "Polizei", "cop", {
                "textures\Cop\Car\cop_prowler.jpg"
            }, "" },
			{ "SEK", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_black_co.paa",
				"a3\soft_f_exp\lsv_01\data\nato_lsv_02_black_co.paa",
				"a3\soft_f_exp\lsv_01\data\nato_lsv_03_black_co.paa",
				"a3\soft_f_exp\lsv_01\data\nato_lsv_adds_black_co.paa"
            }, "" }
        };
    };
	
	class O_T_LSV_02_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_soldner || {license_cop_driver} || {license_med_driver}";
        price = 7000000;
         textures[] = {
            { "Camo Braun", "sol", {
                "textures\Civ\Car\csat_browncamo_1.paa",
				"textures\Civ\Car\csat_browncamo_2.paa"
            }, "" },
			{ "Camo Grün", "sol", {
                "textures\Civ\Car\csat_greencamo_1.jpg",
				"textures\Civ\Car\csat_greencamo_2.jpg"
            }, "" }
        };
    };
	
	class B_T_LSV_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_soldner || {license_cop_driver} || {license_med_driver}";
        price = 7200000;
        textures[] = {
            { "Sand", "sol", {
                "textures\Civ\Car\NATO_LSV_01_sand_CO.paa",
                "textures\Civ\Car\NATO_LSV_02_sand_CO.paa",
				"textures\Civ\Car\NATO_LSV_03_sand_CO.paa",
				"textures\Civ\Car\NATO_LSV_Adds_sand_CO.paa"
            }, "" },
			{ "Nato Grün", "sol", {
                "textures\Civ\Car\nato_green_1.jpg",
                "textures\Civ\Car\nato_green_2.jpg",
				"textures\Civ\Car\nato_green_3.jpg",
				"textures\Civ\Car\nato_green_4.jpg"
            }, "" }
        };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat";
        price = 22000;
        textures[] = { };
    };
	
	class C_Scooter_Transport_01_F {
        vItemSpace = 25;
        conditions = "license_civ_boat";
        price = 10000;
       textures[] = {	
			{ "Flammen", "civ", {
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_red_co.paa",
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_co.paa"
			}, ""  };
			{ "Rot (Streifen)",  "civ", {
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_co.paa",
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_co.paa"
			}, ""  };
			{ "Blau (Streifen)", "civ", {
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_blue_co.paa",
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_blue_co.paa"
			}, ""  };
			{ "Gelb", "civ", {
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_yellow_co.paa",
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_yellow_co.paa"
			}, ""  };
			{ "Grau", "civ", {
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_grey_co.paa",
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_grey_co.paa"
			}, ""  };
			{ "Schwarz", "civ", {
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_black_co.paa",
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_black_co.paa"
			}, ""  };
			{ "Limette", "civ", {
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_lime_co.paa",
				"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_lime_co.paa"
			}, ""  }
		};
	};	
	
	class C_Boat_transport_02_F {
        vItemSpace = 145;
        conditions = "license_civ_boat";
        price = 80000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg";
        price = 20000;
       textures[] = {
            { "Schwarz", "cop", {
                "textures\Cop\Boot\COP_Speedboot.paa"
            }, "" }
        };
    };

    class B_Truck_01_box_F {
        vItemSpace = 750;
        conditions = "license_civ_trucking";
        price = 2400000;
		textures[] = {
            { "Schwarz", "civ", {
                "textures\Civ\LKW\hemettschwarz1.jpg",
                "textures\Civ\LKW\hemettschwarz2.jpg"
            }, "" },
			{ "Weiss", "civ", {
                "textures\Civ\LKW\hemettweiss1.jpg",
                "textures\Civ\LKW\hemettweiss2.jpg"
            }, "" }
        };
    };
	
	class B_Truck_01_mover_F {
        vItemSpace = 350;
        conditions = "license_adac_trucking";
        price = 1100000;
        textures[] = {
            { "TCS", "adac", {
                "textures\Adac\LKW\adac_abschlepper.paa"
            }, "" }
        };
    };
	
	class B_Truck_01_covered_F {
        vItemSpace = 490;
        conditions = "license_civ_trucking || {license_cop_trucking} || {license_adac_trucking}";
        price = 1100000;
        textures[] = {
            { "Schwarz", "civ", {
                "textures\Civ\LKW\hemettschwarz1.jpg",
                "textures\Civ\LKW\hemettschwarz2.jpg"
            }, "" },
			{ "Weiss", "civ", {
                "textures\Civ\LKW\hemettweiss1.jpg",
                "textures\Civ\LKW\hemettweiss2.jpg"
            }, "" },
			 { "TCS", "adac", {
                "textures\Adac\LKW\adac_abschlepper.paa"
            }, "" }
        };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {license_cop_trucking} || {license_adac_trucking}";
        price = 1000000;
        textures[] = {
            { "Schwarz", "civ", {
                "textures\Civ\LKW\hemettschwarz1.jpg",
                "textures\Civ\LKW\hemettschwarz2.jpg"
            }, "" },
			{ "Weiss", "civ", {
                "textures\Civ\LKW\hemettweiss1.jpg",
                "textures\Civ\LKW\hemettweiss2.jpg"
            }, "" },
			 { "TCS", "adac", {
                "textures\Adac\LKW\adac_abschlepper.paa"
            }, "" }
        };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 1700000;
        textures[] = {
            { "Schwarz", "sol", {
                "textures\Civ\Car\Ifrit_black_front.jpg",
				"textures\Civ\Car\Ifrit_black_hinten.jpg"
            }, "" },
			{ "Schwarz", "reb", {
                "textures\Civ\Car\Ifrit_black_front.jpg",
				"textures\Civ\Car\Ifrit_black_hinten.jpg"
            }, "" },
			{ "SEK", "cop", {
                "textures\Cop\Car\Ifrit_sek_Front.jpg",
				"textures\Cop\Car\Ifrit_sek_hinten.jpg"
            }, "" }
        };
    };
	
	class I_MRAP_03_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 2500000;
        textures[] = {
            { "Camo", "sol", {
                "textures\Civ\Car\strider.jpg"
            }, "" },
			{ "Nato Grün", "sol", {
	            "\A3\Soft_F_beta\MRAP_03\Data\mrap_03_ext_co.paa"
	        }, ""  },
			{ "SEK", "cop", {
                "textures\Cop\Car\strider_sek.jpg"
            }, "" }
        };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 50000;
        textures[] = {
            /* { "Rot", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Gelb", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
             */
			{ "Weiss", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            /* { "Blau", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dunkel Rot", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blau / Weiss", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Rockstar Gelb", "civ", {
                "textures\Civ\Car\civ_offroad_rockstargelb.jpg"
            }, "" },
			{ "Rockstar Lila", "civ", {
               "textures\Civ\Car\civ_offroad_rockstarlila.jpg"
            }, "" },
			{ "Monster Energy", "civ", {
               "textures\Civ\Car\monsterenergy_off.jpg"
            }, "" },
			{ "Mustang Blau", "civ", {
               "textures\Civ\Car\Z_F_Fordblue.jpg"
            }, "" },
			{ "Mustang Rot", "civ", {
               "textures\Civ\Car\Z_F_Fordred.jpg"
            }, "" },
			 */{ "Polizei", "cop", {
               "textures\Cop\Car\offroad_01_ext_base01_co.jpg"
            }, "" },
            { "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" },
			{ "Notarzt", "med", {
                "textures\Medic\Car\medic_offroad.jpg"
            }, "" }
        };
    };
	
	class C_Offroad_01_repair_F {
        vItemSpace = 65;
        conditions = "license_adac_driver";
        price = 50000;
       textures[] = {
            { "TCS", "adac", {
                "textures\Adac\Car\adac_offroad.jpg"
            }, "" }
        };
    };
	
	class I_C_Offroad_02_unarmed_F {
        vItemSpace = 55;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 55000;
        textures[] = {
            { "Weiß", "civ", {
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
			}, ""  }/* ,
			{ "Rot", "civ", {
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa"	
			}, ""  },
			{ "Grün", "civ", {
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa"
			}, ""  },
			{ "Schwarz", "civ", {
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa"	
			}, ""  },
			{ "Blau", "civ", {
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa"
			}, ""  },
			{ "Orange", "civ", {
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa",
				"a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa"
			}, ""  },
			{ "Syndikat Grün", "civ", {
                "textures\Civ\Car\mb_syndikat_green.jpg"
            }, "" },
			{ "Mustang Blau", "civ", {
                "textures\Civ\Car\MB-4WD_Mustang.paa"
            }, "" } */
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 35;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 500000;
        textures[] = {
            { "Rot", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dunkel Blau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Schwarz / Weiss", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Grün", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
			{ "Ken Block", "civ", {
                "textures\Civ\Car\hatchback_sport_ken_block.jpg"
            }, "" },
			{ "Polizei", "cop", {
                "textures\Cop\Car\police_hatchback.jpg"
            }, "" },
            { "Schwarz", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 5000;
        textures[] = {
            /* { "Braun", "civ", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
             */
			{ "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            /* { "Schwarz", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blau", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Rot", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
             */
			{ "Weiss", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            /* { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
             */
			{ "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
			{ "Swiss Army", "cop", {
                "textures\Cop\Car\quadbike_co.jpg"
            }, "" },
			{ "Notarzt", "med", {
                "textures\Medic\Car\Medicquad.jpg"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 260;
        conditions = "license_civ_trucking || {license_cop_trucking} || {license_med_trucking}";
        price = 250000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
			{ "Red Bull", "civ", {
                "textures\Civ\LKW\civ_zamak_redbull_0.jpg",
                "textures\Civ\LKW\civ_zamak_redbull_1.jpg"
            }, "" },
			{ "Swiss Army", "cop", {
                "textures\Cop\LKW\truck_kab_co.jpg",
                "textures\Cop\LKW\truck_kuz_co.jpg"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 220;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 340;
        conditions = "license_civ_trucking";
        price = 736000;
        textures[] = {
			{ "Schwarz", "civ", {
                "textures\Civ\LKW\CIV_tempest_grey_0.paa",
                "textures\Civ\LKW\CIV_tempest_grey_1.paa",
                "textures\Civ\LKW\CIV_tempest_grey_2.paa",
				"textures\civ\CIV_tempest_grey_burg.paa"
            }, "" },
			{ "Hex Tarn Grün", "civ", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_cover_ghex_co.paa"
            }, "" }
        };
    };
	
	class O_Truck_03_fuel_F {
        vItemSpace = 70;
		vFuelSpace = 38000;
        conditions = "license_civ_trucking";
        price = 500000;
        textures[] = {
			{ "Schwarz", "civ", {
                "textures\civ\LKW\CIV_tempest_grey_0.paa",
                "textures\civ\LKW\CIV_tempest_grey_1.paa",
                "textures\civ\LKW\CIV_tempest_grey_fuel.paa"
            }, "" },
			{ "Hex Tarn Grün", "civ", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
				"a3\soft_f_exp\truck_03\data\truck_03_fuel_ghex_co.paa",
            }, "" }
        };
    };
	
	class O_T_VTOL_02_vehicle_grey_F {
        vItemSpace = 1000;
        conditions = "license_civ_soldner";
        price = 20000000;
        textures[] = {};
    };
	
	class B_T_VTOL_01_vehicle_olive_F {
        vItemSpace = 1200;
        conditions = "license_civ_soldner";
        price = 25000000;
        textures[] = {};
    };
	
	class B_T_VTOL_01_armed_olive_F {
        vItemSpace = 1200;
        conditions = "license_cop_cAir";
        price = 25000000;
        textures[] = {};
    };
	
	class B_Plane_CAS_01_F {
        vItemSpace = 20;
        conditions = "license_cop_cAir";
        price = 3000000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 40000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Grün", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dunkel Blau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Gelb", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "Weiss", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Schwarz", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" },
			{ "Polizei", "cop", {
                "textures\Cop\Car\police_hatchback.jpg"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver} || {license_adac_driver}";
        price = 65000;
        textures[] = {
            /* { "Dunkel Rot", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silber", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" }, */
			{ "Schwarz", "civ", {
                "textures\Civ\Car\metalschwarz_suv.jpg"
            }, "" },
			/* { "Camo", "civ", {
                "textures\Civ\Car\camo_suv.jpg"
            }, "" },
			{ "Ken Block", "civ", {
                "textures\Civ\Car\civ_suv_monster.jpg"
            }, "" },
			{ "Totenkopf", "civ", {
                "textures\Civ\Car\civ_suv_skull.jpg"
            }, "" },
			{ "Killer", "civ", {
                "textures\Civ\Car\SUV_Killer_1.jpg"
            }, "" },
			{ "Joker", "civ", {
                "textures\Civ\Car\Joker_Suv.paa"
            }, "" },
			{ "Sport", "civ", {
                "textures\Civ\Car\suvsport.jpg"
            }, "" }, */
			{ "Notarzt", "med", {
                "textures\Medic\Car\medic_suv.jpg"
            }, "" },
            { "Polizei", "cop", {
                "textures\Cop\Car\Zurich_Polizei_SUV.jpg"
            }, "" },
			{ "TCS", "adac", {
                "textures\Adac\Car\adac_suv.jpg"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 115;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" }/* ,
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" },
			{ "Schwarz", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_black_co.paa"
            }, "" } */
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 135;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 90000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" },
			{ "Schwarz", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_black_co.paa"
            }, "" },
			{ "Notarzt", "med", {
                "textures\Medic\Car\RTW_1.jpg",
				"textures\Medic\Car\RTW_2.jpg"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {license_cop_driver} || {license_med_driver}";
        price = 1800000;
        textures[] = {
            { "Schwarz", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
			{ "Camo Grau", "reb", {
                "textures\Civ\Car\rebell_hunter_typ1_teil1.jpg",
                "textures\Civ\Car\rebell_hunter_typ1_teil2.jpg"
            }, "" },
			{ "Camo Grün", "sol", {
                "textures\Civ\Car\mrap_01_base_co.jpg",
                "textures\Civ\Car\mrap_01_adds_co.jpg"
            }, "" }
        };
    };
	
	class C_Plane_civil_01_F {
        vItemSpace = 25;
        conditions = "license_civ_pilot";
        price = 660000;
        textures[] = {
            { "Rennen (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
			{ "Rennen", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
			{ "Rote Linie (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
			{ "Rote Linie", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
			{ "Tribal (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
			{ "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
			{ "Blaue Welle (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
			{ "Blaue Welle", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 35;
        conditions = "license_civ_rebel || {license_civ_soldner}";
        price = 620000;
        textures[] = {
            { "Rebel Digital", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 45;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir} || {license_adac_aAir}";
        price = 600000;
        textures[] = {
            { "Polizei", "cop", {
                "textures\Cop\Air\Polizei_Hummingbird.jpg"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Red Bull", "civ", {
                "textures\Civ\Air\civ_hummingbird_redbull.jpg"
            }, "" },
            { "Ken Block", "civ", {
                "textures\Civ\Air\hummingbird_moster_energy_block.jpg"
            }, "" },
			{ "Magnum", "civ", {
                "textures\Civ\Air\heli_light_01_ext_magnum_co.paa"
            }, "" },
            { "Notarzt", "med", {
                "textures\Medic\Air\medic_littlebird.jpg"
            }, "" },
			{ "TCS", "adac", {
                "textures\Adac\Air\adac_heli.paa"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 50;
        price = 650000;
    };
	
	class B_Heli_Light_01_armed_F {
        vItemSpace = 250;
        conditions = "license_cop_cAir";
        price = 2700000;
        textures[] = {
            { "Swiss Army", "cop", {
                "textures\Cop\Air\Hummingbird_co.jpg"
            }, "" }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 350;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_civ_rebel} || {license_civ_soldner} || {license_med_mAir} || {license_adac_aAir}";
        price = 2200000;
        textures[] = {
            { "Schwarz", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "Weiss / Blau", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
			{ "Digital Grün", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
			{ "TCS", "adac", {
                "textures\Adac\Air\adac_orca.jpg"
            }, "" }
        };
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 450;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_civ_rebel} || {license_civ_soldner} || {license_med_mAir} || {license_adac_aAir}";
        price = 3300000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            }, "" },
			{ "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            }, "" },
			{ "Schwarz", "civ", {
                "textures\Civ\Air\RAF_1_co.jpg",
                "textures\Civ\Air\RAF_2_co.jpg",
                "textures\Civ\Air\RAF_3_co.jpg"
            }, "" },
			{ "TCS", "adac", {
                "textures\Adac\Air\adac_schleppheli_1.paa",
                "textures\Adac\Air\adac_schleppheli_2.paa",
                "textures\Adac\Air\adac_schleppheli_3.paa"
            }, "" }
        };
    };
	
	class I_Heli_Light_03_unarmed_F {
        vItemSpace = 400;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_civ_rebel} || {license_civ_soldner} || {license_med_mAir}";
        price = 2700000;
        textures[] = {
            { "Standart", "civ", {
                "textures\Civ\Air\heli_light_03_base_co.jpg"
            }, "" },
            { "Schwarz", "reb", {
                "textures\Civ\Air\HC_black.jpg"
            }, "" },
			{ "Grau Camo", "reb", {
                "textures\Civ\Air\HC_camo.jpg"
            }, "" },
			{ "Notarzt", "med", {
                "textures\Medic\Air\Notarzt_hellcat.jpg"
            }, "" },
			{ "Polizei", "cop", {
                "textures\Cop\Air\hellcat.jpg"
            }, "" }
        };
    };
	
	class I_Heli_light_03_F {
        vItemSpace = 230;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_civ_rebel} || {license_civ_soldner} || {license_med_mAir}";
        price = 11500000;
        textures[] = {
            { "Schwarz", "sol", {
                "textures\Civ\Air\HC_black.jpg"
            }, "" },
			{ "Grau Camo", "sol", {
                "textures\Civ\Air\HC_camo.jpg"
            }, "" }
        };
    };
	
	class O_Heli_Transport_04_box_F {
        vItemSpace = 600;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_civ_rebel} || {license_civ_soldner} || {license_med_mAir}";
        price = 3500000;
        textures[] = {
			{ "Hex Tarn", "reb", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_co.paa",
				"a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_co.paa",
				"a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_co.paa"
			}, ""  },
            { "Grau", "reb", {
                "textures\civ\Air\CIV_Taru_Grau_0.paa",
                "textures\civ\Air\CIV_Taru_Grau_1.paa",
				"#(rgb,8,8,3)color(0.1,0.1,0.1,1)",
				"#(rgb,8,8,3)color(0.1,0.1,0.1,1)"
            }, ""  },
            { "Schwarz", "reb", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_black_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_black_co.paa",
				"a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_black_co.paa",
				"a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_black_co.paa"
            }, ""  }
		};
    };
	
	class O_Heli_Transport_04_bench_F {
        vItemSpace = 350;
        conditions = "license_cop_cAir";
        price = 3000000;
        textures[] = {
            { "Swiss Army", "cop", {
                "textures\Cop\Air\Heli_Transport_04_Base_01_jf.jpg",
                "textures\Cop\Air\Heli_Transport_04_Base_02_jf.jpg"
            }, "" }
        };
    };
	
	class O_Heli_Transport_04_medevac_F {
        vItemSpace = 350;
        conditions = "license_med_mAir";
        price = 2800000;
        textures[] = {
            { "Notarzt", "med", {
                "textures\Medic\Air\sar_taru.jpg",
				"textures\Medic\Air\sar_taru_adds.jpg",
				"textures\Medic\Air\sar_taru_pod.jpg",
				"textures\Medic\Air\sar_taru_pod_adds.jpg"
            }, "" }
        };
    };
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 650;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_civ_rebel} || {license_civ_soldner} || {license_med_mAir}";
        price = 3750000;
        textures[] = {
            { "Schwarz", "reb", {
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_black_co.paa",
				"a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
            }, "" },
			{ "Grün", "reb", {
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
				"a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
            }, ""  },
			{ "Polizei", "cop", {
                "textures\Cop\Air\polizeihuron_vorne.jpg",
                "textures\Cop\Air\polizeihuron_hinten.jpg"
            }, "" }
        };
    };
	
	class B_Heli_Transport_03_F {
        vItemSpace = 200;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_civ_rebel} || {license_civ_soldner} || {license_med_mAir}";
        price = 4500000;
        textures[] = {
            { "Schwarz", "reb", {
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_black_co.paa",
				"a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
            }, "" },
			{ "Grün", "reb", {
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
				"a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
            }, ""  },
			{ "Swiss Army", "cop", {
                "textures\Cop\Air\Heli_Transport_03_ext01_jf.jpg",
                "textures\Cop\Air\Heli_Transport_03_ext02_jf.jpg"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg}";
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 90;
        vFuelSpace = 19500;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" },
			{ "Schwarz", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_black_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 125;
        vFuelSpace = 52000;
        conditions = "license_civ_trucking";
        price = 2400000;
        textures[] = {};
    };
	
	class B_MBT_01_cannon_F {
        vItemSpace = 50;
        conditions = "license_cop_trucking";
        price = 1500000;
        textures[] = {
            { "Swiss Army", "cop", {
                "textures\Cop\Panzer\mbt_ext02_co.jpg",
                "textures\Cop\Panzer\mbt_ext01_co.jpg"
            }, "" }
        };
    };
	
	class B_MBT_01_arty_F {
        vItemSpace = 50;
        conditions = "license_cop_trucking";
        price = 1800000;
        textures[] = {
            { "Swiss Army", "cop", {
                "textures\Cop\Panzer\mbt_ext02_co.jpg",
                "textures\Cop\Panzer\mbt_ext01_co.jpg"
            }, "" }
        };
    };
	
	class B_APC_Tracked_01_rcws_F {
        vItemSpace = 50;
        conditions = "license_cop_trucking";
        price = 1000000;
        textures[] = {
            { "Swiss Army", "cop", {
                "textures\Cop\Panzer\apc_tracked_01_body_jf.jpg",
                "textures\Cop\Panzer\apc_tracked_01_aa_tower_jf.jpg"
            }, "" }
        };
    };
	
	class B_APC_Tracked_01_AA_F {
        vItemSpace = 50;
        conditions = "license_cop_trucking";
        price = 1200000;
        textures[] = {
            { "Swiss Army", "cop", {
                "textures\Cop\Panzer\apc_tracked_01_body_jf.jpg",
                "textures\Cop\Panzer\apc_tracked_01_aa_tower_jf.jpg"
            }, "" }
        };
    };
};

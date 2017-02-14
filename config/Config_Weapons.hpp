/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 10000, 5000, "" },
            { "hgun_ACPC2_F", "", 13000, 6500, "" },
            { "SMG_02_F", "", 25000, 12500, "" },
            { "hgun_PDW2000_F", "", 30000, 15000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, 100, "" },
            { "9Rnd_45ACP_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag", "", 1000, 500, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 3000, 1500, "" },
			{ "muzzle_snds_L", "", 3500, 1750, "" },
			{ "optic_Aco_smg", "", 2000, 1000, "" },
			{ "optic_Holosight_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "hgun_Rook40_F", "", 10000, 5000, "" },
            { "hgun_Pistol_heavy_02_F", "", 15000, 7500, "" },
            { "hgun_ACPC2_F", "", 13000, 6500, "" },
            { "SMG_02_F", "", 25000, 12500, "" },
			{ "hgun_PDW2000_F", "", 30000, 15000, "" },
			{ "SMG_01_F", "", 35000, 17500, "" },
			{ "arifle_Mk20_F", "", 130000, 65000, "" },
			{ "arifle_Mk20C_F", "", 135000, 67500, "" },
			{ "arifle_TRG20_F", "", 135000, 67500, "" },
			{ "arifle_SDAR_F", "", 132000, 66000, "" },
			{ "arifle_MX_F", "", 150000, 75000, "" },
			{ "arifle_MXC_F", "", 155000, 77500, "" },
			{ "arifle_MX_SW_F", "", 184000, 92000, "" },
			{ "arifle_Katiba_F", "", 210000, 105000, "" },
			{ "srifle_EBR_F", "", 350000, 175000, "" },
			{ "arifle_AKM_F", "", 325000, 162500, "" },
			{ "LMG_Mk200_F", "", 558000, 279000, "" },
			{ "srifle_DMR_01_F", "", 533000, 266500, "" },
			{ "SmokeShell", "Rauchgranate", 2000, 1000, "" },
			{ "HandGrenade_Stone", "Blendgranate", 4000, 2000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 300, 150, "" },
            { "9Rnd_45ACP_Mag", "", 250, 175, "" },
            { "30Rnd_9x21_Mag", "", 1000, 500, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 1200, 600, "" },
			{ "30Rnd_556x45_Stanag", "", 2000, 1000, "" },
			{ "30Rnd_65x39_caseless_mag", "", 2500, 1250, "" },
			{ "100Rnd_580x42_Mag_F", "", 22000, 11000, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 2800, 1400, "" },
			{ "30Rnd_65x39_caseless_green", "", 3000, 1500, "" },
			{ "20Rnd_762x51_Mag", "", 3300, 1650, "" },
			{ "30Rnd_762x39_Mag_F", "", 3100, 1550, "" },
			{ "10Rnd_762x54_Mag", "", 3500, 1750, "" },
			{ "200Rnd_65x39_cased_Box", "", 52000, 26000, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 3000, 1500, "" },
            { "muzzle_snds_M", "", 3100, 1550, "" },
            { "muzzle_snds_H", "", 3200, 1600, "" },
            { "muzzle_snds_H_MG", "", 3800, 1900, "" },
			{ "muzzle_snds_B", "", 3600, 1800, "" },
			{ "muzzle_snds_L", "", 3500, 1750, "" },
			{ "optic_Aco_smg", "", 2000, 1000, "" },
			{ "optic_Holosight_smg", "", 2500, 1250, "" },
			{ "optic_Arco", "", 8000, 4000, "" },
			{ "optic_MRCO", "", 8200, 4100, "" },
			{ "optic_Hamr", "", 8500, 4250, "" },
			{ "optic_NVS", "", 11000, 5500, "" },
			{ "optic_SOS", "", 11000, 5500, "" },
			{ "optic_DMS", "", 13000, 6500, "" },
			{ "optic_AMS", "", 15000, 7500, "" },
			{ "bipod_01_F_blk", "", 4000, 200, "" },
			{ "acc_flashlight", "", 2000, 1000, "" },
			{ "acc_pointer_IR", "", 3500, 1750, "" }
        };
    };
	
	class soldner {
        name = "Achmed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_soldner";
        items[] = {
            { "hgun_Rook40_F", "", 10000, 5000, "" },
            { "hgun_Pistol_heavy_02_F", "", 15000, 7500, "" },
            { "hgun_ACPC2_F", "", 13000, 6500, "" },
			{ "hgun_PDW2000_F", "", 30000, 15000, "" },
			{ "SMG_01_F", "", 35000, 17500, "" },
            { "SMG_02_F", "", 25000, 12500, "" },
			{ "arifle_AKS_F", "", 43000, 21500, "" },
			{ "arifle_Mk20_F", "", 30000, 15000, "" },
			{ "arifle_Mk20C_F", "", 135000, 67500, "" },
			{ "arifle_Mk20_GL_F", "", 180000, 90000, "" },
			{ "arifle_TRG20_F", "", 135000, 67500, "" },
			{ "arifle_SDAR_F", "", 132000, 66000, "" },
			{ "arifle_MX_F", "", 150000, 75000, "" },
			{ "arifle_MX_GL_F", "", 190000, 95000, "" },
			{ "arifle_MXC_F", "", 155000, 77500, "" },
			{ "arifle_MXM_F", "", 162000, 131000, "" },
			{ "arifle_MX_SW_F", "", 184000, 92000, "" },
			{ "arifle_ARX_blk_F", "", 374000, 187000, "" },
			{ "arifle_Katiba_F", "", 210000, 105000, "" },
			{ "arifle_Katiba_GL_F", "", 275000, 137500, "" },
			{ "arifle_AKM_F", "", 325000, 162500, "" },
			{ "arifle_AK12_F", "", 352000, 176000, "" },
			{ "arifle_SPAR_01_khk_F", "", 410000, 205000, "" },
			{ "arifle_ARX_Viper_F", "", 495000, 247500, "" },
			{ "arifle_CTAR_blk_F", "", 380000, 190000, "" },
			{ "srifle_EBR_F", "", 350000, 175000, "" },
			{ "srifle_DMR_03_F", "", 510000, 255000, "" },
			{ "srifle_DMR_03_multicam_F", "", 530000, 265000, "" },
			{ "srifle_DMR_03_woodland_F", "", 530000, 265000, "" },
			{ "srifle_DMR_01_F", "", 533000, 266500, "" },
			{ "srifle_LRR_F", "", 910000, 455000, "" },
			{ "srifle_LRR_tna_F", "", 920000, 460000, "" },
			{ "srifle_DMR_05_blk_F", "", 937000, 468500, "" },
			{ "srifle_DMR_05_hex_F", "", 945000, 472500, "" },
			{ "srifle_DMR_05_tan_F", "", 945000, 472500, "" },
			{ "srifle_DMR_02_F", "", 975000, 487500, "" },
			{ "srifle_DMR_02_camo_F", "", 983000, 491500, "" },
			{ "LMG_Mk200_F", "", 558000, 279000, "" },
			{ "LMG_Zafir_F", "", 792000, 396000, "" },
			{ "LMG_03_F", "", 829000, 414500, "" },
			{ "MMG_02_black_F", "", 862000, 431000, "" },
			{ "MMG_01_hex_F", "", 872000, 436000, "" },
			{ "launch_RPG7_F", "", 1700000, 850000, "" },
			{ "SmokeShell", "Rauchgranate", 2000, 1000, "" },
			{ "HandGrenade_Stone", "Blendgranate", 4000, 2000, "" },
			{ "MiniGrenade", "", 9000, 4500, "" },
			{ "HandGrenade", "", 14000, 7000, "" },
			{ "UGL_FlareWhite_F", "", 2000, 1000, "" },
			{ "UGL_FlareGreen_F", "", 2000, 1000, "" },
			{ "UGL_FlareRed_F", "", 2000, 1000, "" },
			{ "UGL_FlareYellow_F", "", 2000, 1000, "" },
			{ "1Rnd_Smoke_Grenade_shell", "", 2000, 1000, "" },
			{ "1Rnd_SmokeRed_Grenade_shell", "", 2000, 1000, "" },
			{ "1Rnd_SmokeGreen_Grenade_shell", "", 2000, 1000, "" },
			{ "1Rnd_SmokeYellow_Grenade_shell", "", 2000, 1000, "" },
			{ "1Rnd_SmokePurple_Grenade_shell", "", 2000, 1000, "" },
			{ "1Rnd_SmokeBlue_Grenade_shell", "", 2000, 1000, "" },
			{ "1Rnd_SmokeOrange_Grenade_shell", "", 2000, 1000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 300, 150, "" },
            { "9Rnd_45ACP_Mag", "", 250, 175, "" },
            { "30Rnd_9x21_Mag", "", 1000, 500, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 1200, 600, "" },
			{ "30Rnd_556x45_Stanag", "", 2000, 1000, "" },
			{ "30Rnd_545x39_Mag_F", "", 2500, 1250, "" },
			{ "30Rnd_580x42_Mag_F", "", 2500, 1125, "" },
			{ "100Rnd_580x42_Mag_F", "", 22000, 11000, "" },
			{ "30Rnd_65x39_caseless_mag", "", 2500, 1250, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 2800, 1400, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2700, 1350, "" },
			{ "30Rnd_65x39_caseless_green", "", 3000, 1500, "" },
			{ "10Rnd_50BW_Mag_F", "", 800, 400, "" },
			{ "20Rnd_762x51_Mag", "", 3300, 1650, "" },
			{ "30Rnd_762x39_Mag_F", "", 3100, 1550, "" },
			{ "10Rnd_762x54_Mag", "", 3500, 1750, "" },
			{ "100Rnd_65x39_caseless_mag", "", 11000, 5500, "" },
			{ "150Rnd_762x54_Box", "", 15000, 7500, "" },
			{ "130Rnd_338_Mag", "", 13000, 6500, "" },
			{ "150Rnd_93x64_Mag", "", 16000, 8000, "" },
			{ "200Rnd_556x45_Box_F", "", 18000, 9000, "" },
			{ "200Rnd_65x39_cased_Box", "", 52000, 26000, "" },
			{ "7Rnd_408_Mag", "", 5000, 2500, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 5200, 2600, "" },
			{ "10Rnd_338_Mag", "", 5500, 2750, "" },
			{ "RPG7_F", "", 300000, 150000, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 3000, 1500, "" },
            { "muzzle_snds_M", "", 3100, 1550, "" },
			{ "muzzle_snds_m_khk_F", "", 3500, 1750, "" },
            { "muzzle_snds_H", "", 3200, 1600, "" },
            { "muzzle_snds_H_MG", "", 3800, 1900, "" },
			{ "muzzle_snds_B", "", 3600, 1800, "" },
			{ "muzzle_snds_B_khk_F", "", 3800, 1900, "" },
			{ "muzzle_snds_L", "", 3500, 1750, "" },
			{ "muzzle_snds_338_black", "", 3500, 1750, "" },
			{ "muzzle_snds_338_green", "", 3800, 1900, "" },
			{ "muzzle_snds_93mmg", "", 5100, 2600, "" },
			{ "muzzle_snds_93mmg_tan", "", 5500, 2750, "" },
			{ "optic_Aco_smg", "", 2000, 1000, "" },
			{ "optic_Holosight_smg", "", 2500, 1250, "" },
			{ "optic_Arco", "", 8000, 4000, "" },
			{ "optic_Arco_ghex_F", "", 8500, 4250, "" },
			{ "optic_MRCO", "", 8200, 4100, "" },
			{ "optic_Hamr", "", 8500, 4250, "" },
			{ "optic_Hamr_khk_F", "", 9000, 4500, "" },
			{ "optic_NVS", "", 11000, 5500, "" },
			{ "optic_SOS", "", 11000, 5500, "" },
			{ "optic_DMS", "", 13000, 6500, "" },
			{ "optic_DMS_ghex_F", "", 14000, 7000, "" },
			{ "optic_AMS", "", 15000, 7500, "" },
			{ "optic_AMS_khk", "", 16000, 8000, "" },
			{ "optic_LRPS", "", 20000, 10000, "" },
			{ "optic_LRPS_tna_F", "", 21000, 10500, "" },
			{ "optic_LRPS_ghex_F", "", 21000, 10500, "" },
			{ "bipod_01_F_blk", "", 4000, 200, "" },
			{ "bipod_01_F_khk", "", 4000, 200, "" },
			{ "bipod_01_F_snd", "", 4000, 200, "" },
			{ "acc_flashlight", "", 2000, 1000, "" },
			{ "acc_pointer_IR", "", 3500, 1750, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 7000, 3500, "" },
            { "hgun_ACPC2_F", "", 10000, 5000, "" },
            { "SMG_02_F", "", 21000, 10500, "" },
            { "hgun_PDW2000_F", "", 25000, 12500, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 100, 50, "" },
            { "9Rnd_45ACP_Mag", "", 150, 75, "" },
            { "30Rnd_9x21_Mag", "", 800, 400, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 2000, 1000, "" },
			{ "muzzle_snds_L", "", 3000, 1500, "" },
			{ "optic_Aco_smg", "", 1500, 750, "" },
			{ "optic_Holosight_smg", "", 1800, 900, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Tanoa General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
			{ "Rangefinder", "", 1000, 500, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
			{ "NVGoggles_OPFOR", "", 2000, 1000, "" },
			{ "NVGoggles_INDEP", "", 2000, 1000, "" },
			{ "O_NVGoggles_urb_F", "", 2000, 1000, "" },
			{ "O_NVGoggles_ghex_F", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tanoa Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
			{ "Rangefinder", "", 1000, 500, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
			{ "NVGoggles_OPFOR", "", 2000, 1000, "" },
			{ "NVGoggles_INDEP", "", 2000, 1000, "" },
			{ "O_NVGoggles_urb_F", "", 2000, 1000, "" },
			{ "O_NVGoggles_ghex_F", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
     class cop_basic {
        name = "Generalstore";
        side = "cop";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 50, 25, "" },
            { "Binocular", "", 300, 50, "" },
			{ "MineDetector", "", 150, 75, "" },
			{ "Rangefinder", "", 500, 250, "" },
            { "FirstAidKit", "", 120, 60, "" },
			{ "Medikit", "", 250, 125, "" },
            { "NVGoggles", "", 1200, 600, "" },
			{ "NVGoggles_OPFOR", "", 1200, 600, "" },
			{ "NVGoggles_INDEP", "", 1200, 600, "" },
			{ "B_UavTerminal", "", 5000, 2500, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
	 //Cop Shops
    class cop_patrol {
        name = "Polizei Waffen Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "hgun_P07_snds_F", "Taser Pistole", 2500, 1250, "call life_coplevel >= 1" },
			{ "arifle_sdar_F", "Taser Gewehr", 5000, 2500, "call life_coplevel >= 1" },
			{ "hgun_P07_F", "", 3600, 1800, "call life_coplevel >= 2" },
			{ "SMG_05_F", "", 6000, 3000, "call life_coplevel >= 2" },
			{ "arifle_MXC_Black_F", "", 9000, 4500, "call life_coplevel >= 3" },
			{ "arifle_MX_Black_F", "", 10000, 5000, "call life_coplevel >= 3" },
			{ "srifle_EBR_F", "", 12000, 6000, "call life_coplevel >= 3" },
			{ "srifle_DMR_03_F", "", 15000, 7500, "call life_coplevel >= 3" },
			{ "LMG_Mk200_F", "", 18000, 9000, "call life_coplevel >= 3" },
			{ "LMG_Zafir_F", "", 21000, 20500, "call life_coplevel >= 4" },
			{ "arifle_SPAR_01_blk_F", "", 16000, 8000, "call life_coplevel >= 4" },
			{ "arifle_SPAR_02_blk_F", "", 16000, 8000, "call life_coplevel >= 4" },
			{ "arifle_SPAR_03_blk_F", "", 16000, 8000, "call life_coplevel >= 4" },
			{ "srifle_LRR_F", "", 25000, 12500, "call life_coplevel >= 5" },
			{ "srifle_DMR_02_F", "", 24000, 12000, "call life_coplevel >= 5" },
			{ "srifle_DMR_05_blk_F", "", 24000, 12000, "call life_coplevel >= 6" },
			{ "srifle_GM6_F", "", 28000, 14999, "call life_coplevel >= 7" },
			{ "MMG_02_black_F", "", 28000, 14000, "call life_coplevel >= 7" },
			{ "launch_B_Titan_F", "", 45000, 22500, "call life_coplevel >= 7" },
			{ "launch_B_Titan_short_F", "", 40000, 20000, "call life_coplevel >= 7" },
			{ "SmokeShell", "Rauchgranate", 1000, 500, "call life_coplevel >= 2" },
			{ "HandGrenade_Stone", "Blendgranate", 2000, 1000, "call life_coplevel >= 3" },
			{ "MiniGrenade", "", 4000, 2000, "call life_coplevel >= 5" },
			{ "HandGrenade", "", 5000, 2500, "call life_coplevel >= 6" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Taser/9mm", 40, 20, "" },
            { "20Rnd_556x45_UW_mag", "Taser Magazine", 50, 25, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 60, 30, "" },
			{ "30Rnd_65x39_caseless_mag", "", 70, 35, "" },
			{ "20Rnd_762x51_Mag", "", 70, 35, "" },
			{ "200Rnd_65x39_cased_Box", "", 400, 200, "" },
			{ "150Rnd_762x54_Box", "", 350, 175, "" },
			{ "10Rnd_338_Mag", "", 250, 125, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 250, 125, "" },
			{ "30Rnd_556x45_Stanag", "", 50, 25, "" },
			{ "150Rnd_556x45_Drum_Mag_F", "", 260, 130, "" },
			{ "7Rnd_408_Mag", "", 270, 135, "" },
			{ "5Rnd_127x108_Mag", "", 250, 125, "" },
			{ "130Rnd_338_Mag", "", 280, 140, "" },
			{ "Titan_AA", "", 8000, 4000, "" },
			{ "Titan_AT", "", 6000, 3000, "" },
			{ "Titan_Ap", "", 5000, 2500, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 650, 100, "" },
			{ "muzzle_snds_M", "", 650, 100, "" },
			{ "muzzle_snds_H", "", 650, 100, "" },
			{ "muzzle_snds_H_MG", "", 650, 100, "" },
			{ "muzzle_snds_B", "", 650, 100, "" },
			{ "muzzle_snds_L", "", 650, 100, "" },
			{ "muzzle_snds_338_black", "", 650, 100, "" },
			{ "muzzle_snds_93mmg", "", 650, 100, "" },
			{ "optic_Aco_smg", "", 650, 100, "" },
			{ "optic_Holosight_smg", "", 650, 100, "" },
			{ "optic_Arco_blk_F", "", 650, 100, "" },
			{ "optic_ERCO_blk_F", "", 650, 100, "" },
			{ "optic_MRCO", "", 650, 100, "" },
			{ "optic_Hamr", "", 650, 100, "" },
			{ "optic_NVS", "", 650, 100, "" },
			{ "optic_SOS", "", 650, 100, "" },
			{ "optic_DMS", "", 650, 100, "" },
			{ "optic_AMS", "", 650, 100, "" },
			{ "optic_LRPS", "", 650, 100, "" },
			{ "bipod_01_F_blk", "", 650, 100, "" },
			{ "acc_flashlight", "", 650, 100, "" },
			{ "acc_pointer_IR", "", 650, 100, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "Generalstore";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
			{ "Medikit", "", 250, 125, "" },
            { "NVGoggles", "", 1200, 980, "" },
			{ "NVGoggles_OPFOR", "", 1200, 600, "" },
			{ "NVGoggles_INDEP", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
	//Adac Shops
    class adac_basic {
        name = "Generalstore";
        side = "";
        conditions = "license_adac_abschlepp";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
			{ "Medikit", "", 250, 125, "" },
            { "NVGoggles", "", 1200, 980, "" },
			{ "NVGoggles_OPFOR", "", 1200, 600, "" },
			{ "NVGoggles_INDEP", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};

/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt Streifen", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Rot/Weiss", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blau", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgunder", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
			{ "U_C_Poor_2", "Blaues Shirt & Jeans", 250, "" },
			{ "U_NikosBody", "Hemd gestreift & Jeans", 400, "" },
			{ "U_C_man_sport_1_F", "", 1250, "" },
			{ "U_C_man_sport_2_F", "", 1250, "" },
			{ "U_C_man_sport_3_F", "", 1250, "" },
			{ "U_C_Man_casual_1_F", "", 1250, "" },
			{ "U_C_Man_casual_2_F", "", 1250, "" },
			{ "U_C_Man_casual_3_F", "", 1250, "" },
			{ "U_C_Man_casual_4_F", "", 1250, "" },
			{ "U_C_Man_casual_5_F", "", 1250, "" },
			{ "U_C_Man_casual_6_F", "", 1250, "" },
			{ "U_C_Journalist", "", 1300, "" },
            { "U_IG_Guerilla2_2", "Grünes Hemd & Hosen", 650, "" },
            { "U_IG_Guerilla3_1", "Braune Jacke & Hosen", 735, "" },
			{ "U_IG_Guerilla2_3", "The Outback", 1200, "" },
            { "U_OrestesBody", "Surfer an Land", 1100, "" },
            { "U_C_HunterBody_grn", "Jäger", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechaniker", 2500, "" },
            { "U_NikosAgedBody", "Anzug", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
			{ "H_StrawHat", "Straw Fedora", 225, "" },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, "" },
			{ "H_Booniehat_tan", "", 425, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "V_Press_F", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
			{ "B_ViperLightHarness_ghex_F", "", 4000, "" },
			{ "B_ViperLightHarness_khk_F", "", 4000, "" },
			{ "B_ViperLightHarness_oli_F", "", 4000, "" },
			{ "B_ViperLightHarness_hex_F", "", 4000, "" },
			{ "B_ViperLightHarness_blk_F", "", 4000, "" },
			{ "B_ViperHarness_ghex_F", "", 4000, "" },
			{ "B_ViperHarness_khk_F", "", 4000, "" },
			{ "B_ViperHarness_oli_F", "", 4000, "" },
			{ "B_ViperHarness_hex_F", "", 4000, "" },
			{ "B_ViperHarness_blk_F", "", 4000, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
			{ "B_FieldPack_ghex_F", "", 5000, "" },
            { "B_Carryall_ocamo", "", 6000, "" },
            { "B_Carryall_oucamo", "", 6000, "" },
            { "B_Carryall_mcamo", "", 6000, "" },
            { "B_Carryall_oli", "", 6000, "" },
            { "B_Carryall_khk", "", 6000, "" },
			{ "B_Carryall_ghex_F", "", 6000, "" },
            { "B_Carryall_cbr", "", 6000, "" },
			{ "B_Bergen_dgtl_F", "", 7500, "" },
            { "B_Bergen_hex_F", "", 7500, "" },
            { "B_Bergen_mcamo_F", "", 7500, "" },
            { "B_Bergen_tna_F", "", 7500, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "Praktikanten Uniform", 125, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_vest", "Beamten Uniform", 350, "call life_coplevel >= 2" },
            { "U_B_SpecopsUniform_sgg", "Polizei Uniform", 825, "call life_coplevel >= 3" },
            { "U_B_CombatUniform_mcam", "SEK Uniform", 1250, "call life_coplevel >= 5" },
			{ "U_B_CombatUniform_mcam_worn", "GSG-9 Uniform", 1350, "call life_coplevel >= 6" },
			{ "U_I_CombatUniform", "Schweizer Armee", 1500, "call life_coplevel >= 7" },
			{ "U_B_GhillieSuit", "Halber Ghillie Anzug", 2475, "call life_coplevel >= 5" },
			{ "U_B_FullGhillie_lsh", "Ghillie Anzug 1", 4950, "call life_coplevel >= 5" },
			{ "U_B_FullGhillie_sard", "Ghillie Anzug 2", 4950, "call life_coplevel >= 5" },
			{ "U_B_FullGhillie_ard", "Ghillie Anzug 3", 4950, "call life_coplevel >= 5" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_Beret_02", "", 75, "call life_coplevel >= 3" },
            { "H_Beret_Colonel", "", 100, "call life_coplevel >= 4" },
            { "H_Watchcap_blk", "", 120, "call life_coplevel >= 3" },
			{ "H_Cap_blk", "", 120, "call life_coplevel >= 3" },
			{ "H_MilCap_mcamo", "", 120, "call life_coplevel >= 4" },
			{ "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 4" },
			{ "H_HelmetB_plain_mcamo", "", 500, "call life_coplevel >= 4" },
			{ "H_HelmetIA", "Standart", 500, "call life_coplevel >= 4" },
			{ "H_PilotHelmetHeli_B", "Pilot", 625, "call life_coplevel >= 4" },
			{ "H_HelmetB_camo", "Tarn", 720, "call life_coplevel >= 5" },
			{ "H_HelmetB_black", "SEK Helm", 800, "call life_coplevel >= 5" },
			{ "H_CrewHelmetHeli_B", "GSG-9 Helm", 800, "call life_coplevel >= 6" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 800, "call life_coplevel >= 1" },
			{ "V_TacVest_blk", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 2" },
            { "V_PlateCarrierGL_blk", "", 1250, "call life_coplevel >= 3" },
			{ "V_PlateCarrierSpec_blk", "", 1350, "call life_coplevel >= 4" },
			{ "V_RebreatherB", "", 1400, "call life_coplevel >= 4" },
			{ "V_PlateCarrier1_blk", "", 1500, "call life_coplevel >= 5" },
			{ "V_PlateCarrier2_blk", "", 1500, "call life_coplevel >= 5" },
			{ "V_TacVest_camo", "Schweizer Armee", 1750, "call life_coplevel >= 7" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
			{ "B_FieldPack_blk", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
			{ "B_AssaultPack_blk", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
			{ "B_Bergen_blk", "", 2500, "" },
			{ "B_OutdoorPack_blk", "", 2800, "" },
			{ "B_ViperHarness_blk_F", "", 3000, "" },
            { "B_Carryall_cbr", "", 3500, "" },
			{ "B_UAV_01_backpack_F", "", 15000, "call life_coplevel >= 5" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_O_OfficerUniform_ocamo", "Arzt Uniform", 50, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_red", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 10, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Kitbag_sgg", "Arzt Rucksack", 3000, "" }
        };
    };
	
	class adac_clothing {
        title = "STR_MAR_ADAC_Clothing_Shop";
        conditions = "license_adac_abschlepp";
        side = "";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_HeliPilotCoveralls", "TCS Uniform", 50, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_red", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 10, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Kitbag_cbr", "TCS Rucksack", 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_IG_Guerilla1_1", "", 5150, "" },
            { "U_BG_leader", "", 6730, "" },
            { "U_I_OfficerUniform", "", 8270, "" },
            { "U_B_CTRG_Soldier_F", "", 12390, "" },
            { "U_B_CTRG_Soldier_2_F", "", 15610, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 13590, "" },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 14540, "" },
			{ "U_I_C_Soldier_Para_1_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_2_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_3_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_4_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_5_F", "", 11375, "" },
			{ "U_I_G_Story_Protagonist_F", "", 7380, "" },
			{ "U_I_G_resistanceLeader_F", "", 11725, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 16930, "" },
			{ "U_O_PilotCoveralls", "", 15610, "" },
			{ "U_IG_leader", "Guerilla Leader", 15340, "" },
            { "U_O_GhillieSuit", "", 50000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "", 645, "" },
            { "H_ShemagOpen_khk", "", 825, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
			{ "H_Shemag_khk", "", 850, "" },
			{ "H_Cap_blk_Raven", "", 915, "" },
			{ "H_Cap_blk_Syndikat_F", "", 1235, "" },
			{ "H_Cap_grn_Syndikat_F", "", 1235, "" },
			{ "H_MilCap_oucamo", "", 1250, "" },
			{ "H_Cap_grn_Syndikat_F", "", 1200, "" },
			{ "H_BandMask_khk", "", 1810, "" },
			{ "H_BandMask_reaper", "", 1830, "" },
			{ "H_BandMask_demon", "", 1850, "" },
			{ "H_HelmetB_plain_mcamo", "", 2125, "" },
			{ "H_HelmetB_plain_blk", "", 2150, "" },
            { "H_HelmetO_ocamo", "", 2310, "" },
            { "H_PilotHelmetHeli_I", "", 2790, "" },
			{ "H_CrewHelmetHeli_I", "", 2570, "" },
			{ "H_HelmetIA", "", 2490, "" },
			{ "H_HelmetB_camo", "", 2930, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
			{ "V_PlateCarrier_Kerry", "", 15500, "" },
			{ "V_PlateCarrierIA1_dgtl", "", 15720, "" },
			{ "V_PlateCarrierH_CTRG", "", 16640, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };
	
	class sol {
        title = "STR_Shops_C_Soldner";
        conditions = "license_civ_soldner";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_IG_Guerilla1_1", "", 5150, "" },
            { "U_BG_leader", "", 6730, "" },
            { "U_I_OfficerUniform", "", 8270, "" },
            { "U_B_CTRG_Soldier_F", "", 12390, "" },
            { "U_B_CTRG_Soldier_2_F", "", 15610, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 13590, "" },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 14540, "" },
			{ "U_I_C_Soldier_Para_1_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_2_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_3_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_4_F", "", 11375, "" },
			{ "U_I_C_Soldier_Para_5_F", "", 11375, "" },
			{ "U_B_T_Soldier_F", "", 19840, "" },
			{ "U_O_T_Soldier_F", "", 19840, "" },
			{ "U_B_T_Soldier_AR_F", "", 17825, "" },
			{ "U_B_T_Sniper_F", "", 29760, "" },
			{ "U_O_T_Sniper_F", "", 29760, "" },
			{ "U_O_T_Officer_F", "", 19980, "" },
			{ "U_I_G_Story_Protagonist_F", "", 7380, "" },
			{ "U_I_G_resistanceLeader_F", "", 11725, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 16930, "" },
			{ "U_O_PilotCoveralls", "", 15610, "" },
			{ "U_B_PilotCoveralls", "", 15610, "" },
			{ "U_IG_leader", "Guerilla Leader", 15340, "" },
            { "U_I_FullGhillie_lsh", "", 45850, "" },
			{ "U_I_FullGhillie_sard", "", 45850, "" },
			{ "U_I_FullGhillie_ard", "", 45850, "" },
			{ "U_B_T_FullGhillie_tna_F", "", 50000, "" },
			{ "U_O_T_FullGhillie_tna_F", "", 50000, "" },
			{ "U_O_GhillieSuit", "", 50000, "" },
			{ "U_C_Scientist", "Strahlenanzug", 580000, ""}			
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "", 645, "" },
            { "H_ShemagOpen_khk", "", 825, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
			{ "H_Shemag_khk", "", 850, "" },
			{ "H_Cap_blk_Raven", "", 915, "" },
			{ "H_Cap_blk_Syndikat_F", "", 1235, "" },
			{ "H_Cap_grn_Syndikat_F", "", 1235, "" },
			{ "H_MilCap_oucamo", "", 1250, "" },
			{ "H_BandMask_khk", "", 1810, "" },
			{ "H_BandMask_reaper", "", 1830, "" },
			{ "H_BandMask_demon", "", 1850, "" },
			{ "H_HelmetB_light_sand", "", 2050, "" },
			{ "H_HelmetB_light_black", "", 2030, "" },
            { "H_HelmetB_plain_mcamo", "", 2125, "" },
			{ "H_HelmetB_plain_blk", "", 2150, "" },
			{ "H_HelmetB_tna_F", "", 2280, "" },
            { "H_HelmetO_ocamo", "", 2310, "" },
			{ "H_HelmetCrew_B", "", 2295, "" },
            { "H_PilotHelmetHeli_I", "", 2790, "" },
			{ "H_CrewHelmetHeli_I", "", 2570, "" },
			{ "H_HelmetIA", "", 2490, "" },
			{ "H_HelmetB_camo", "", 2930, "" },
			{ "H_HelmetSpecO_blk", "", 3175, "" },
			{ "H_HelmetSpecO_ocamo", "", 3190, "" },
			{ "H_PilotHelmetFighter_B", "Atemschutz", 12000, ""}
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
			{ "V_BandollierB_ghex_F", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
			{ "V_HarnessO_ghex_F", "", 7500, "" },
			{ "V_HarnessOGL_ghex_F", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
			{ "V_PlateCarrier_Kerry", "", 15500, "" },
			{ "V_PlateCarrier1_tna_F", "", 17520, "" },
			{ "V_PlateCarrier2_tna_F", "", 17520, "" },
			{ "V_PlateCarrierSpec_tna_F", "", 18370, "" },
			{ "V_PlateCarrierSpec_rgr", "", 18370, "" },
			{ "V_PlateCarrierSpec_mtp", "", 18370, "" },
			{ "V_PlateCarrierGL_tna_F", "", 19490, "" },
			{ "V_PlateCarrierIA1_dgtl", "", 15720, "" },
			{ "V_PlateCarrierH_CTRG", "", 16640, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_hex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 4000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 4000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 4000, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 4000, { "", "", -1 } },
            { "B_ViperHarness_hex_F", "", 4000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 4000, { "", "", -1 } },
            { "B_FieldPack_blk", "", 4000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 4000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 4000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 4000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 5000, { "", "", -1 } },
            { "B_Carryall_ghex_F", "", 5000, { "", "", -1 } },
            { "B_Bergen_dgtl_F", "", 7500, { "", "", -1 } },
            { "B_Bergen_hex_F", "", 7500, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 7500, { "", "", -1 } },
            { "B_Bergen_tna_F", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};

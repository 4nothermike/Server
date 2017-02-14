/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "peach", "redgull", "tbacon", "pickaxe", "fuelFull", "toolkit", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "peach", "redgull", "tbacon", "lockpick", "zipties", "pickaxe", "fuelFull", "toolkit", "boltcutter", "blastingcharge" };
    };
	
	class soldner {
        name = "STR_Shops_Soldner";
        side = "civ";
        conditions = "license_civ_soldner";
        items[] = { "waterBottle", "rabbit", "apple", "peach", "redgull", "tbacon", "lockpick", "zipties", "pickaxe", "fuelFull", "toolkit", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "peach", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "toolkit", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffeebeansrost" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "meth_processed", "lsd_processed" };
    };
	
	class schwarzmarkt {
		name = "STR_Shops_Schwarzmarkt";
		side = "civ";
		conditions = "";
		items[] = { "yellowcake","reinesuran"};
	};
    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "waterBottle", "coffee", "donuts", "rabbit", "apple", "peach", "tbacon", "redgull", "spikeStrip", "mauer", "lockpick", "fuelFull", "toolkit", "defusekit", "defibrillator" };
    };
	
	class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "coffee", "donuts", "rabbit", "apple", "peach", "tbacon", "redgull", "mauer", "lockpick", "fuelFull", "toolkit", "defibrillator" };
    };
	
	class adac_market {
        name = "STR_Shops_Market";
        side = "";
        conditions = "license_adac_abschlepp";
        items[] = { "waterBottle", "coffee", "donuts", "rabbit", "apple", "peach", "tbacon", "redgull", "mauer", "lockpick", "fuelFull", "toolkit" };
    };
	
	class apotheke {
        name = "STR_Shops_Apotheke";
        side = "civ";
        conditions = "";
        items[] = { "painkiller", "morphium" };
    };
	
	class wine {
        name = "STR_Shops_Wine";
        side = "civ";
        conditions = "";
        items[] = { "wine" };
    };
	
	class cigarettes {
        name = "STR_Shops_Cigarettes";
        side = "civ";
        conditions = "";
        items[] = { "cigarettes" };
    };
	
	class sextoy {
        name = "STR_Shops_Sextoy";
        side = "civ";
        conditions = "";
        items[] = { "sextoy" };
    };
	
	class furniture {
        name = "STR_Shops_Furniture";
        side = "civ";
        conditions = "";
        items[] = { "furniture" };
    };
	
	class woodplank {
        name = "STR_Shops_Woodplank";
        side = "civ";
        conditions = "";
        items[] = { "woodplank" };
    };
	
	class sugar {
        name = "STR_Shops_Sugar";
        side = "civ";
        conditions = "";
        items[] = { "sugar" };
    };
	
	class migros {
        name = "STR_Shops_Migros";
        side = "civ";
        conditions = "";
        items[] = { "ricola", "toblerone", "ovomaltine" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };
	
	class zipties {
		variable = "zipties";
		displayName = "STR_Item_Zipties";
		weight = 2;
		buyPrice = 5000;
		sellPrice = 4000;
		illegal = false;
		edible = -1;
		icon = "icons\ico_kabelbinder.paa";
	};

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelempty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_spikestrip.paa";
    };
	
	class mauer {
        variable = "mauer";
        displayName = "STR_Item_Mauer";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mauer.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_goldbar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 3500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 750;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltcutters.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defusekit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper_unrefined.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2850;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper_refined.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron_refined.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron_unrefined.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 2800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 2250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4850;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2400;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class rye {
        variable = "rye";
        displayName = "STR_Item_Rye";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rye.paa";
    };
	
	class hops {
        variable = "hops";
        displayName = "STR_Item_Hops";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_hops.paa";
    };
	
	class yeast {
        variable = "yeast";
        displayName = "STR_Item_Yeast";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_yeast.paa";
    };
	
	class tobacco {
        variable = "tobacco";
        displayName = "STR_Item_Tobacco";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tobacco.paa";
    };
	
	class cigarettes {
        variable = "cigarettes";
        displayName = "STR_Item_Cigarettes";
        weight = 1;
        buyPrice = -1;
        sellPrice = 2450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cigarettes.paa";
    };
	
	class grapes {
        variable = "grapes";
        displayName = "STR_Item_Grapes";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_grapes.paa";
    };
	
	class wine {
        variable = "wine";
        displayName = "STR_Item_Wine";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1600;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wine.paa";
    };
	
	class gum {
        variable = "gum";
        displayName = "STR_Item_Gum";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_gum.paa";
    };
	
	class sextoy {
        variable = "sextoy";
        displayName = "STR_Item_Sextoy";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sextoy.paa";
    };
	
	class coffeebeans {
        variable = "coffeebeans";
        displayName = "STR_Item_Coffeebeans";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_coffeebeans.paa";
    };
	
	class coffeebeansrost {
        variable = "coffeebeansrost";
        displayName = "STR_Item_Coffeebeansrost";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_coffeebeans.paa";
    };
	
	class peppermint {
        variable = "peppermint";
        displayName = "STR_Item_Peppermint";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_peppermint.paa";
    };
	
	class ricola {
        variable = "ricola";
        displayName = "STR_Item_Ricola";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ricola.paa";
    };
	
	class kakao {
        variable = "kakao";
        displayName = "STR_Item_Kakao";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kakao.paa";
    };
	
	class toblerone {
        variable = "toblerone";
        displayName = "STR_Item_Toblerone";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_toblerone.paa";
    };
	
	class ovomaltine {
        variable = "ovomaltine";
        displayName = "STR_Item_Ovomaltine";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ovomaltine.paa";
    };
	
	class woodlog {
        variable = "woodlog";
        displayName = "STR_Item_Woodlog";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_woodlog.paa";
    };
	
	class woodplank {
        variable = "woodplank";
        displayName = "STR_Item_Woodplank";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_woodplank.paa";
    };
	
	class sugarraw {
        variable = "sugarraw";
        displayName = "STR_Item_Sugarraw";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sugarraw.paa";
    };
	
	class sugar {
        variable = "sugar";
        displayName = "STR_Item_Sugar";
        weight = 1;
        buyPrice = -1;
        sellPrice = 2900;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sugar.paa";
    };
	
	class furniture {
        variable = "furniture";
        displayName = "STR_Item_Furniture";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_furniture.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 2;
        buyPrice = 8500;
        sellPrice = 7000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 7000;
        sellPrice = 6600;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 7400;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };
	
	class meth_unprocessed {
        variable = "methUnprocessed";
        displayName = "STR_Item_MethU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_methUnprocessed.paa";
        processedItem = "meth_processed";
    };

    class meth_processed {
        variable = "methProcessed";
        displayName = "STR_Item_MethP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 6200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_methProcessed.paa";
    };
	
	class lsd_unprocessed {
        variable = "lsdUnprocessed";
        displayName = "STR_Item_LsdU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lsdUnprocessed.paa";
        processedItem = "lsd_processed";
    };

    class lsd_processed {
        variable = "lsdProcessed";
        displayName = "STR_Item_LsdP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 8200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lsdProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 250;
        sellPrice = 150;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 110;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tbacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_cookedMeat.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fish.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedMeat.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fish.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedMeat.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fish.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedMeat.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fish.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 900;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fish.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedMeat.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 3;
        buyPrice = -1;
        sellPrice = 950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fish.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 3;
        buyPrice = -1;
        sellPrice = 12000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtle.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_soup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_cookedMeat.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_cookedMeat.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };
	
	class painkiller {
        variable = "painkiller";
        displayName = "STR_Item_Painkiller";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_painkiller.paa";
    };
	
	class morphium {
        variable = "morphium";
        displayName = "STR_Item_Morphium";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_morphium.paa";
    };
	//Uran Bestandteil
	class yellowcake {
		variable = "yellowcake";
		displayName = "STR_Item_Yellowcake";
		weight = 12;
		buyPrice = 244000;
		sellPrice = 48900;
		illegal = true;
		edible = -99;
		icon = "icons\yellowcake.paa";
	};
	//Uran Bestandteil
	class uranerz {
		variable = "uranerz";
		displayName = "STR_Item_UranErz";
		weight = 6;
		buyPrice = 44000;
		sellPrice = 2434;
		illegal = true;
		edible = -1;
		icon = "icons\uranerz.paa";
	};
	//Uran Bestandteil
	class soda {
		variable = "soda";
		displayName = "STR_Item_Soda";
		weight =  4;
		buyPrice = 44000;
		sellPrice = 2434;
		illegal = true;
		edible = -1;
		icon = "icons\soda.paa";
	};
	//Uran Bestandteil
	class wasserstoff {
		variable = "wasserstoff";
		displayName = "STR_Item_Wasserstoff";
		weight = 4;
		buyPrice = 44000;
		sellPrice = 2434;
		illegal = true;
		edible = -1;
		icon = "icons\wasserstoff.paa";
	};
	//Uran Bestandteil
	class reinesuran {
		variable = "reinesuran";
		displayName = "STR_Item_ReinesUran";
		weight = 14;
		buyPrice = 369000;
		sellPrice = 75800;
		illegal = true;
		edible = -1;
		icon = "icons\uran.paa";
	};
};

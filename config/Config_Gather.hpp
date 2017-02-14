class CfgGather {
    class Resources {
        class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
            zoneSize = 30;
        };
		
		class grapes {
            amount = 5;
            zones[] = { "grapes_1" };
            item = "";
            zoneSize = 30;
        };
		
		class tobacco {
            amount = 5;
            zones[] = { "tobacco_1" };
            item = "";
            zoneSize = 30;
        };
		
		class gum {
            amount = 4;
            zones[] = { "gum_1" };
            item = "";
            zoneSize = 30;
        };
		
		class woodlog {
            amount = 4;
            zones[] = { "wood_1" };
            item = "";
            zoneSize = 30;
        };
		
		class sugarraw {
            amount = 4;
            zones[] = { "sugar_1" };
            item = "";
            zoneSize = 30;
        };
		
		class coffeebeans {
            amount = 4;
            zones[] = { "coffee_1" };
            item = "";
            zoneSize = 30;
        };
		
		class peppermint {
            amount = 4;
            zones[] = { "peppermint_1" };
            item = "";
            zoneSize = 30;
        };
		
		class kakao {
            amount = 4;
            zones[] = { "kakao_1" };
            item = "";
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 30;
        };
		
		class meth_unprocessed {
            amount = 3;
            zones[] = { "meth_1" };
            item = "";
            zoneSize = 30;
        };
		
		class lsd_unprocessed {
            amount = 3;
            zones[] = { "lsd_1" };
            item = "";
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = { {"copper_unrefined",0,99},{"diamond_uncut",99,100} };
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { {"iron_unrefined",0,99},{"diamond_uncut",99,100} };
            zoneSize = 30;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 1;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
		
		class uranerz {
			amount = 2;
			zones[] = { "uranerz_1" };
			item = "pickaxe";
			mined[] = { {"rock",0,75},{"uranerz",75,100} };
			zoneSize = 4;
		};
		
		class soda {
			amount = 2;
			zones[] = { "soda_1" };
			item = "boltcutter";
			mined[] = { "soda" };
			zoneSize = 6;
		};
	
		class wasserstoff {
			amount = 2;
			zones[] = { "wasserstoff_1", "wasserstoff_2", "wasserstoff_3", "wasserstoff_4" };
			item = "boltcutter";
			mined[] = { "wasserstoff" };
			zoneSize = 6;
		};
    };
};
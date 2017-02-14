/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 500;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
	
	class meth {
        MaterialsReq[] = {{"meth_unprocessed",1}};
        MaterialsGive[] = {{"meth_processed",1}};
        Text = "STR_Process_Meth";
        //ScrollText = "Process Meth";
        NoLicenseCost = 1325;
    };
	
	class lsd {
        MaterialsReq[] = {{"lsd_unprocessed",1}};
        MaterialsGive[] = {{"lsd_processed",1}};
        Text = "STR_Process_Lsd";
        //ScrollText = "Process Lsd";
        NoLicenseCost = 1650;
    };
	
	class wine {
        MaterialsReq[] = {{"grapes",1}};
        MaterialsGive[] = {{"wine",1}};
        Text = "STR_Process_Wine";
        //ScrollText = "Process Wine";
        NoLicenseCost = 685;
    };
	
	class cigarettes {
        MaterialsReq[] = {{"tobacco",1}};
        MaterialsGive[] = {{"cigarettes",1}};
        Text = "STR_Process_Cigarettes";
        //ScrollText = "Process Cigarettes";
        NoLicenseCost = 450;
    };
	
	class sextoy {
        MaterialsReq[] = {{"gum",1}};
        MaterialsGive[] = {{"sextoy",1}};
        Text = "STR_Process_Sextoy";
        //ScrollText = "Process Sextoy";
        NoLicenseCost = 575;
    };
	
	class sawmill {
        MaterialsReq[] = {{"woodlog",1}};
        MaterialsGive[] = {{"woodplank",1}};
        Text = "STR_Process_Woodlog";
        //ScrollText = "Process Woodlog";
        NoLicenseCost = 520;
    };
	
	class furniture {
        MaterialsReq[] = {{"woodplank",1}};
        MaterialsGive[] = {{"furniture",1}};
        Text = "STR_Process_Woodplank";
        //ScrollText = "Process Woodplank";
        NoLicenseCost = 580;
    };
	
	class sugar {
        MaterialsReq[] = {{"sugarraw",1}};
        MaterialsGive[] = {{"sugar",1}};
        Text = "STR_Process_Sugar";
        //ScrollText = "Process Sugar";
        NoLicenseCost = 430;
    };
	
	class coffeebeansrost {
        MaterialsReq[] = {{"coffeebeans",1}};
        MaterialsGive[] = {{"coffeebeansrost",1}};
        Text = "STR_Process_Coffee";
        //ScrollText = "Process Coffee";
        NoLicenseCost = 375;
    };
	
	class peppermint {
        MaterialsReq[] = {{"peppermint",1}};
        MaterialsGive[] = {{"ricola",1}};
        Text = "STR_Process_Peppermint";
        //ScrollText = "Process Peppermint";
        NoLicenseCost = 495;
    };
	
	class toblerone {
        MaterialsReq[] = {{"kakao",1}};
        MaterialsGive[] = {{"toblerone",1}};
        Text = "STR_Process_Kakao";
        //ScrollText = "Process Kakao";
        NoLicenseCost = 620;
    };
	
	class ovomaltine {
        MaterialsReq[] = {{"kakao",1}};
        MaterialsGive[] = {{"ovomaltine",1}};
        Text = "STR_Process_Kakao";
        //ScrollText = "Process Kakao";
        NoLicenseCost = 635;
    };
	
	class yellowcake {
		MaterialsReq[] = {{"uranerz",1},{"soda",1}};
		MaterialsGive[] = {{"yellowcake",1}};
		Text = "STR_Process_Yellowcake";
		//ScrollText = "Uranerz aufschliessen";
		NoLicenseCost = 4560;
	};
	
	class reinuran {
		MaterialsReq[] = {{"yellowcake",1},{"wasserstoff",1}};
		MaterialsGive[] = {{"reinesuran",1}};
		Text = "STR_Process_ReinesUran";
		//ScrollText = "Yellowcake reduzieren";
		NoLicenseCost = 6540;
	};
};
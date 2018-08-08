#include "lxo5628_Controller.h"


void Controller::cli()
{
	int cmd = -1;//3 exits program
	while (cmd != 3)
	{
		view.get_menu();
		cin >> cmd;
		execute_cmd(cmd);
	}
}

void Controller::execute_cmd(int cmd)//(1) View pea plant (2) Change/add trait (3) Exit)
{
	switch (cmd) 
	{
	case 1:
	{
		view.view_all_traits();
		break;
	}
	case 2:
	{
		add_trait();
		break;
	}
	case 3:
	{
		cmd = 3;
		break;
	}
	default:
		cout << "Invalid entry. Try again.\n";
	}
}

void Controller::add_trait()
{
	int trait_name_int = view.prompt_for_trait_name();
	//int trait_name_int = stoi(trait_name_string);
	//cin >> trait_name_int;
	vector<string> trait_name_list = { "seed_shape", "seed_color", "pod_shape", "pod_color", "flower_color",
		"flower_position", "plant_height" };
	string trait_name = trait_name_list[trait_name_int - 1];
	char letter1 = view.prompt_for_allele_letter();
	
	//cin >> letter1;
	char dom1 = view.prompt_for_allele_dominance();
	
	//cin >> dom1;
	bool dominance;
	if (dom1 == 't')
		dominance = true;
	else
		dominance = false;
	Allele a_1 = { letter1, dominance };

	letter1 = view.prompt_for_allele_letter();
	//cin >> letter1;
	dom1 = view.prompt_for_allele_dominance();
	//cin >> dom1;
	if (dom1 == 't')
		dominance = true;
	else
		dominance = false;
	Allele a_2 = { letter1, dominance };

	Genotype g{ a_1, a_2 };
	string phenotype;
	switch (trait_name_int)						/*  (1) seed_shape (2) seed_color	 (3) pod_shape	(4) pod_color
												(5) flower_color (6) flower_position 	(7) plant_height*/
	{
	case 1:
	{
		phenotype = pptm.get_seed_shape_phenotype(g);
		Trait new_trait = { trait_name, g, phenotype };
		pea_plant.set_seed_shape(new_trait);
		break;
	}
	case 2:
	{
		phenotype = pptm.get_seed_color_phenotype(g);
		Trait new_trait = { trait_name, g, phenotype };
		pea_plant.set_seed_color(new_trait);
		break;
	}
	case 3:
	{
		phenotype = pptm.get_pod_shape_phenotype(g);
		Trait new_trait = { trait_name, g, phenotype };
		pea_plant.set_pod_shape(new_trait);
		break;
	}
	case 4:
	{
		phenotype = pptm.get_pod_color_phenotype(g);
		Trait new_trait = { trait_name, g, phenotype };
		pea_plant.set_pod_color(new_trait);
		break;
	}
	case 5:
	{
		phenotype = pptm.get_flower_color_phenotype(g);
		Trait new_trait = { trait_name, g, phenotype };
		pea_plant.set_flower_color(new_trait);
		break;
	}
	case 6:
	{
		phenotype = pptm.get_flower_position_phenotype(g);
		Trait new_trait = { trait_name, g, phenotype };
		pea_plant.set_flower_position(new_trait);
		break;
	}
	case 7:
	{
		phenotype = pptm.get_plant_height_phenotype(g);
		Trait new_trait = { trait_name, g, phenotype };
		pea_plant.set_plant_height(new_trait);
		break;
	}
	default:
		Dialogs::message("invalid entry. Try again.", "Trait Name Menu" );
	}
}

void Controller::gui()
{
    int cmd = -1;
    while (cmd != 3)
    {
        cmd = view.get_menu();
        execute_cmd(cmd);
    }
}
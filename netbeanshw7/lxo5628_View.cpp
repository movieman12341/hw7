#include "lxo5628_View.h"
#include "Dialogs.h"


//View::View()
//{
//}
//
//View::~View()
//{
//}
//
//
////mine
//View::View(Pea_Plant& pp)
//{
//	//pea_plant = pp;????????????????????????????????????????????????????
//}

int View::get_menu()
{
	string menu = R"(
	Please choose one of the following:

	(1) View pea plant
	(2) Change trait
	(3) Exit)";

	string result = Dialogs::input(menu, "main menu");//if hit ok, 1 will be returned as string.
        int return_int = 3;
        if (result != "CANCEL")
        {
            return_int = stoi(result);
        }
        return return_int;
        
}

char View::prompt_for_allele_letter()//work in progress!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!11
{
    string input = Dialogs::input("Enter a letter for allele:", "prompt_for_allele_letter");
    return input[0];
}

char View::prompt_for_allele_dominance()
{
    string input = Dialogs::input("Enter dominance for allele: [t/f] ", "prompt_for_allele_dominance");
    return input[0];
}

int View::prompt_for_trait_name()
{
	string menu = R"(
Select trait name:
	(1) seed_shape;
	(2) seed_color
        (3) pod_shape;
	(4) pod_color
        (5) flower_color;
	(6) flower_position;
	(7) plant_height)";
	string input = Dialogs::input(menu, "prompt_for_trait_name" );
        
        if (input != "CANCEL")
            return stoi(input);
        else
        {
            cerr << "invalid input. Try again.\n";
            exit(1);
        }
}

void View::view_all_traits()//??????????????
{
	string msg = pea_plant.view_all_traits();
        Dialogs::message(msg, "View All Traits");
        //cout << msg << endl;
}

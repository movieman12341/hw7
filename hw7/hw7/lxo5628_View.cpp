#include "lxo5628_View.h"


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

void View::get_menu()
{
	string menu = R"(
	Please choose one of the following:

	(1) View pea plant
	(2) Change trait
	(3) Exit)";

	cout << menu << endl;
}

void View::prompt_for_allele_letter()
{
	cout << "Enter a letter for allele: ";
}

void View::prompt_for_allele_dominance()
{
	cout << "Enter dominance for allele: [t/f] ";
}

void View::prompt_for_trait_name()
{
	string menu = R"(
Select trait name:
	
	(2) seed_color
	(4) pod_color
	(7) plant_height)";
	cout << menu << endl;
}

void View::view_all_traits()
{
	cout << pea_plant.view_all_traits() << endl;
}

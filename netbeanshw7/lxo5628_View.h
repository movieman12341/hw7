#pragma once
#include "lxo5628_Pea_Plant.h"
#include "Dialogs.h"
class View
{
public:
	/*View();
	~View();*/

	View(Pea_Plant& pp) : pea_plant(pp) {};
	int get_menu();
	char prompt_for_allele_letter();
	char prompt_for_allele_dominance();
	int prompt_for_trait_name();
	void view_all_traits();


private:
	Pea_Plant& pea_plant;//not reference only works?????????????	I think fixed????????check later
};


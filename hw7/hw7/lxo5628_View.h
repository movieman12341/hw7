#pragma once
#include "lxo5628_Pea_Plant.h"
class View
{
public:
	/*View();
	~View();*/

	View(Pea_Plant& pp) : pea_plant(pp) {};
	void get_menu();
	void prompt_for_allele_letter();
	void prompt_for_allele_dominance();
	void prompt_for_trait_name();
	void view_all_traits();


private:
	Pea_Plant& pea_plant;//not reference only works?????????????	I think fixed????????check later
};


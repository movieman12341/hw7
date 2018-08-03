#pragma once
#include "lxo5628_Pea_Plant.h"
#include "lxo5628_View.h"
#include "lxo5628_Pea_Plant_Trait_Maps.h"
#include<vector>

class Controller
{
public:
	/*Controller();
	~Controller();*/

	Controller(Pea_Plant& pp, View& v) : pea_plant(pp), view(v)
	{
		//???????????????pptm to default values???????
	};
	void cli();
	void execute_cmd(int cmd);
	void add_trait();
private:
	Pea_Plant& pea_plant;
	View& view;
	Pea_Plant_Trait_Maps pptm;
};


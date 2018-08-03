#include "lxo5628_Pea_Plant.h"
#include "lxo5628_Pea_Plant_Trait_Maps.h"

Pea_Plant::Pea_Plant()
{
	seed_color = {};
	//seed_shape = {};
	pod_color = {};
	/*pod_shape = {};
	flower_color = {};
	flower_position = {};*/
	plant_height = {};

}


Pea_Plant::~Pea_Plant()
{
}

void Pea_Plant::set_seed_color(Trait t)
{
	seed_color = t;
}

//void Pea_Plant::set_seed_shape(Trait t)
//{
//	seed_shape = t;
//}

void Pea_Plant::set_pod_color(Trait t)
{
	pod_color = t;
}

//void Pea_Plant::set_pod_shape(Trait t)
//{
//	pod_shape = t;
//}
//
//void Pea_Plant::set_flower_color(Trait t)
//{
//	flower_color = t;
//}
//
//void Pea_Plant::set_flower_position(Trait t)
//{
//	flower_position = t;
//}

void Pea_Plant::set_plant_height(Trait t)
{
	plant_height = t;
}

string Pea_Plant::view_all_traits()
{
	stringstream oss;
	//oss << seed_shape << endl;
	oss << seed_color << endl;
	//oss << pod_shape << endl;
	oss << pod_color << endl;
	/*oss << flower_color << endl;
	oss << flower_position << endl;*/
	oss << plant_height << endl;
	string traits = oss.str();
	return traits;
}

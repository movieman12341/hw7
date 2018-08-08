#include "lxo5628_Pea_Plant.h"
#include "lxo5628_Pea_Plant_Trait_Maps.h"

Pea_Plant::Pea_Plant()
{
    Pea_Plant_Trait_Maps pptm;
	seed_color = {"Seed Color",pptm.YY, "Yellow"};
	seed_shape = {"Seed Shape",pptm.RR , "Round"};//guessed
	pod_color = {"Pod Color", pptm.GG, "Green"};
	pod_shape = {"Pod Shape", pptm.II, "Inflated"};//guessed
	flower_color = {"Flower Color", pptm.PP, "Purple"};//guessed
	flower_position = {"Flower Position", pptm.AA, "Axial"};//guessed
	plant_height = {"Plant Height", pptm.TT, "Tall"};

}


Pea_Plant::~Pea_Plant()
{
}

void Pea_Plant::set_seed_color(Trait t)
{
	seed_color = t;
}

void Pea_Plant::set_seed_shape(Trait t)
{
	seed_shape = t;
}

void Pea_Plant::set_pod_color(Trait t)
{
	pod_color = t;
}

void Pea_Plant::set_pod_shape(Trait t)
{
	pod_shape = t;
}

void Pea_Plant::set_flower_color(Trait t)
{
	flower_color = t;
}

void Pea_Plant::set_flower_position(Trait t)
{
	flower_position = t;
}

void Pea_Plant::set_plant_height(Trait t)
{
	plant_height = t;
}

string Pea_Plant::view_all_traits()
{
	stringstream oss;
	oss << seed_shape << endl;
	oss << seed_color << endl;
	oss << pod_shape << endl;
	oss << pod_color << endl;
	oss << flower_color << endl;
	oss << flower_position << endl;
	oss << plant_height << endl;
	string traits = oss.str();
	return traits;
}

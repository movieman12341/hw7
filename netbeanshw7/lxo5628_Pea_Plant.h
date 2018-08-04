#pragma once
#include "lxo5628_Trait.h"
#include<sstream>

class Pea_Plant
{
public:
	Pea_Plant();
	~Pea_Plant();

	void set_seed_color(Trait t);
	void set_seed_shape(Trait t);
	void set_pod_color(Trait t);
	void set_pod_shape(Trait t);
	void set_flower_color(Trait t);
	void set_flower_position(Trait t);
	void set_plant_height(Trait t);
	string view_all_traits();
private:
	Trait seed_color;
	Trait seed_shape;
	Trait pod_color;
	Trait pod_shape;
	Trait flower_color;
	Trait flower_position;
	Trait plant_height;
};


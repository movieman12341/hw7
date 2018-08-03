#include "lxo5628_Pea_Plant_Trait_Maps.h"
#include<iostream>

map<Genotype, string> traitMap;

Pea_Plant_Trait_Maps::Pea_Plant_Trait_Maps()
{
	/*traitMap.insert(make_pair(RR, "Round"));
	traitMap.insert(make_pair(Rr, "Round"));
	traitMap.insert(make_pair(rr, "Wrinkled"));*/
	traitMap.insert(make_pair(YY, "Yellow"));
	traitMap.insert(make_pair(Yy, "Yellow"));
	traitMap.insert(make_pair(yy, "Green"));
	/*traitMap.insert(make_pair(II, "Inflated"));
	traitMap.insert(make_pair(Ii, "Inflated"));
	traitMap.insert(make_pair(ii, "Constricted"));*/
	traitMap.insert(make_pair(GG, "Green"));
	traitMap.insert(make_pair(Gg, "Green"));
	traitMap.insert(make_pair(gg, "Yellow"));
	/*traitMap.insert(make_pair(PP, "Purple"));
	traitMap.insert(make_pair(Pp, "Purple"));
	traitMap.insert(make_pair(pp, "White"));
	traitMap.insert(make_pair(AA, "Axial"));
	traitMap.insert(make_pair(AA, "Axial"));
	traitMap.insert(make_pair(aa, "Terminal"));*/
	traitMap.insert(make_pair(TT, "Tall"));
	traitMap.insert(make_pair(Tt, "Tall"));
	traitMap.insert(make_pair(tt, "Short"));
	

}


Pea_Plant_Trait_Maps::~Pea_Plant_Trait_Maps()
{
}

//string Pea_Plant_Trait_Maps::get_seed_shape_phenotype(Genotype genotype)
//{
//	return traitMap[genotype];
//}

string Pea_Plant_Trait_Maps::get_seed_color_phenotype(Genotype genotype) 
{
	return traitMap[genotype];
}

//string Pea_Plant_Trait_Maps::get_pod_shape_phenotype(Genotype genotype) 
//{
//	return traitMap[genotype];
//}

string Pea_Plant_Trait_Maps::get_pod_color_phenotype(Genotype genotype) 
{
	return traitMap[genotype];

}

//string Pea_Plant_Trait_Maps::get_flower_color_phenotype(Genotype genotype) 
//{
//	return traitMap[genotype];
//}
//
//string Pea_Plant_Trait_Maps::get_flower_position_phenotype(Genotype genotype) 
//{
//	return traitMap[genotype];
//}

string Pea_Plant_Trait_Maps::get_plant_height_phenotype(Genotype genotype) 
{
	return traitMap[genotype];
}

#pragma once
#include<map>
#include "lxo5628_Genotype.h"
#include<string>
#include<map>
using namespace std;

class Pea_Plant_Trait_Maps
{
public:
	Pea_Plant_Trait_Maps();
	~Pea_Plant_Trait_Maps();

	//other get methods
	//string get_seed_shape_phenotype(Genotype genotype);
	string get_seed_color_phenotype(Genotype genotype) ;
	//string get_pod_shape_phenotype(Genotype genotype) ;
	string get_pod_color_phenotype(Genotype genotype) ;
	/*string get_flower_color_phenotype(Genotype genotype) ;
	string get_flower_position_phenotype(Genotype genotype) ;*/
	string get_plant_height_phenotype(Genotype genotype) ;

	/*Allele allele_R = { 'R', true };
	Allele allele_r = { 'r', false };*/
	Allele allele_Y = { 'Y', true };
	Allele allele_y = { 'y', false };
	/*Allele allele_I = { 'I', true };
	Allele allele_i = { 'i', false };*/
	Allele allele_G = { 'G', true };
	Allele allele_g = { 'g', false };
	/*Allele allele_P = { 'P', true };
	Allele allele_p = { 'p', false };
	Allele allele_A = { 'A', true };
	Allele allele_a = { 'a', false };*/
	Allele allele_T = { 'T', true };
	Allele allele_t = { 't', false };

	/*Genotype RR = { allele_R, allele_R };
	Genotype Rr = { allele_R, allele_r };
	Genotype rr = { allele_r, allele_r };*/
	Genotype YY = { allele_Y, allele_Y };
	Genotype Yy = { allele_Y, allele_y };
	Genotype yy = { allele_y, allele_y };
	/*Genotype II = { allele_I, allele_I };
	Genotype Ii = { allele_I, allele_i };
	Genotype ii = { allele_i, allele_i };*/
	Genotype GG = { allele_G, allele_G };
	Genotype Gg = { allele_G, allele_g };
	Genotype gg = { allele_g, allele_g };
	/*Genotype PP = { allele_P, allele_P };
	Genotype Pp = { allele_P, allele_p };
	Genotype pp = { allele_p, allele_P };
	Genotype AA = { allele_A, allele_A };
	Genotype Aa = { allele_A, allele_a };
	Genotype aa = { allele_a, allele_a };*/
	Genotype TT = { allele_T, allele_T };
	Genotype Tt = { allele_T, allele_t };
	Genotype tt = { allele_t, allele_t };

private:
	//map<Genotype, string> seed_shape;
	map<Genotype, string> seed_color;
	//map<Genotype, string> pod_shape;
	map<Genotype, string> pod_color;
	/*map<Genotype, string> flower_color;
	map<Genotype, string> flower_position;*/
	map<Genotype, string> plant_height;
};


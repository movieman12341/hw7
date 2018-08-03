#pragma once
#include "lxo5628_Genotype.h"
#include <iostream>
#include <string>
using namespace std;

class Trait
{
public:
	Trait();
	~Trait();

	Trait(string n, Genotype g, string p);
	string get_name();
	Genotype get_genotype();
	string get_phenotype();
	friend ostream& operator<<(ostream& ost, Trait& trait);



private:
	string name;// what trait is being represented, such as “seed color”
	Genotype genotype;// genotype for the trait
	string phenotype;// phenotype for the trait 
};


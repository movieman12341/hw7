#include "lxo5628_Trait.h"



Trait::Trait()
{
}


Trait::~Trait()
{
}



Trait::Trait(string n, Genotype g, string p)//done
{
	name = n;
	genotype = g;
	phenotype = p;
}

string Trait::get_name()//done
{
	return name;
}

Genotype Trait::get_genotype()//done
{
	return genotype;
}

string Trait::get_phenotype()//done
{
	return phenotype;
}

ostream& operator<<(ostream& ost, Trait& t)
{
	char allele_1 = t.get_genotype().get_allele_one().get_letter();
	char allele_2 = t.get_genotype().get_allele_two().get_letter();
	ost << "Name: " << t.name << "\nGenotype: " << allele_1 << allele_2 << "\nPhenotype: " << t.get_phenotype() << endl;
	return ost;
}
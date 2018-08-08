#pragma once
#include "lxo5628_Allele.h"

class Genotype
{
public:
	//VS default
	Genotype();
	~Genotype();

	//mine
	Genotype(Allele a_one, Allele a_two);
	Allele get_allele_one() const;
	Allele get_allele_two() const;
	bool operator<(const Genotype& rhs) const;




private:
	Allele allele_one;
	Allele allele_two;


};


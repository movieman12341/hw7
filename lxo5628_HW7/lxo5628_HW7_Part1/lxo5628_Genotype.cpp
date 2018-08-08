#include "lxo5628_Genotype.h"

//VS default
Genotype::Genotype()
{
}

Genotype::~Genotype()
{
}

//mine
Genotype::Genotype(Allele a_one, Allele a_two)//done
{
	if (a_one.get_dominance() == true && a_two.get_dominance() == true)
	{//both are dominant
		allele_one = a_one;
		allele_two = a_two;
	}
	else if (a_one.get_dominance() == false && a_two.get_dominance() == false)
	{//both recessive
		allele_one = a_one;
		allele_two = a_two;
	}
	else if (a_one.get_dominance() == true && a_two.get_dominance() == false)//1st Dom. 2nd recessive
	{
		allele_one = a_one;
		allele_two = a_two;
	}
	else//1st ressive. 2nd dominant
	{
		allele_one = a_two;
		allele_two = a_one;
	}
}

Allele Genotype::get_allele_one() const//done
{
	return allele_one;
}

Allele Genotype::get_allele_two() const//done
{
	return allele_two;
}

bool Genotype::operator<(const Genotype& rhs) const//??????????????????????????????
{
	//Genotype g = rhs;
	//int a = allele_one.get_letter() + allele_two.get_letter();
	//int a = (int)this->allele_one.get_letter() + (int)this->allele_two.get_letter();//I thought "this" will reference
	//the lhs genotype, so the logic is get the lhs ascii value and put in a. then do comparison below.
	//int b = (int)g.allele_one.get_letter() + (int)g.allele_two.get_letter();

	//Can you also explain why I have to have      Genotype g = rhs     code? if I don't, and do rhs.allele_one.get_letter(), I get error.

		//g.get_allele_one().get_letter() + g.get_allele_two().get_letter();
	/*if (a < b)
		return true;
	return false;*/

	//return a < b;
	char lhs_a_one = allele_one.get_letter();
	char lhs_a_two = allele_two.get_letter();
	char rhs_a_one = rhs.get_allele_one().get_letter();
	char rhs_a_two = rhs.get_allele_two().get_letter();
	return lhs_a_one + lhs_a_two < rhs_a_one + rhs_a_two;

}//true means 1st geno is smaller than 2nd

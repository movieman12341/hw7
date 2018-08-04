#include "lxo5628_Allele.h"

Allele::Allele()
{
}

Allele::~Allele()
{
}



//current functions
Allele::Allele(char l, bool d)//done
{
	letter = l;
	dominance = d;
}

char Allele::get_letter() const
{
	return letter;
}

bool Allele::get_dominance() const
{
	return dominance;//If it is true, it is dominate. 
					//If it is false, it is recessive.
}

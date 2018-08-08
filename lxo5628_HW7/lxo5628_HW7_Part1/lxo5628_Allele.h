#pragma once
class Allele
{
public:
	//default constructor/destructor
	Allele();
	~Allele();

	Allele(char l, bool d);
	char get_letter() const;
	bool get_dominance() const;

private:
	char letter;// store the individual letter.
	bool dominance;//tells us whether or not that allele is dominate or recessive.
					//If it is true, it is dominate. 
					//If it is false, it is recessive.
};


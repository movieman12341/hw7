#include<iostream>
#include "lxo5628_Allele.h"
#include "lxo5628_Genotype.h"
#include "lxo5628_Controller.h"

using namespace std;


int main(int argc, char* argv[])
{
    Gtk::Main kit(argc, argv);
    
    
    
	Pea_Plant pea_plant;
	View view{pea_plant};
	Controller controller{ pea_plant, view };
	controller.gui();


	return 0;
}



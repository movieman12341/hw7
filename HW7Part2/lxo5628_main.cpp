#include<iostream>
#include "lxo5628_Allele.h"
#include "lxo5628_Genotype.h"
#include "lxo5628_Controller.h"
#include "MainWindow.h"

using namespace std;


int main(int argc, char* argv[])
{
    //Gtk::Main kit(argc, argv);
    auto app = Gtk::Application::create(argc, argv, "testApplication.test");
    
    
	Pea_Plant pea_plant;
	View view{pea_plant};
	Controller controller{ pea_plant, view };
	//controller.gui();

        MainWindow win;
        win.set_title("test");
        return app->run(win);

	return 0;
}



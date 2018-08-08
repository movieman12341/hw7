CXXFLAGS = -std=c++11

GTKFLAGS = `pkg-config --cflags --libs gtkmm-3.0`

all: test

test: lxo5628_main.o lxo5628_Allele.o lxo5628_Genotype.o lxo5628_Trait.o lxo5628_Pea_Plant_Trait_Maps.o lxo5628_View.o lxo5628_Controller.o lxo5628_Pea_Plant.o  Dialogs.o MainWindow.o
	$(CXX) $(CXXFLAGS) -o test lxo5628_main.o lxo5628_Allele.o lxo5628_Genotype.o lxo5628_Trait.o lxo5628_Pea_Plant_Trait_Maps.o lxo5628_View.o lxo5628_Controller.o lxo5628_Pea_Plant.o Dialogs.o MainWindow.o $(GTKFLAGS)
	


lxo5628_main.o: lxo5628_main.cpp lxo5628_Controller.h lxo5628_Genotype.h lxo5628_Allele.h MainWindow.h
	$(CXX) $(CXXFLAGS) -c lxo5628_main.cpp $(GTKFLAGS)


lxo5628_Allele.o: lxo5628_Allele.cpp lxo5628_Allele.h
	$(CXX) $(CXXFLAGS) -c lxo5628_Allele.cpp $(GTKFLAGS)


lxo5628_Genotype.o: lxo5628_Genotype.cpp lxo5628_Genotype.h lxo5628_Allele.h
	$(CXX) $(CXXFLAGS) -c lxo5628_Genotype.cpp $(GTKFLAGS)


lxo5628_Trait.o: lxo5628_Trait.cpp lxo5628_Trait.h lxo5628_Genotype.h
	$(CXX) $(CXXFLAGS) -c lxo5628_Trait.cpp $(GTKFLAGS)


lxo5628_Pea_Plant_Trait_Maps.o: lxo5628_Pea_Plant_Trait_Maps.cpp lxo5628_Pea_Plant_Trait_Maps.h lxo5628_Genotype.h
	$(CXX) $(CXXFLAGS) -c lxo5628_Pea_Plant_Trait_Maps.cpp $(GTKFLAGS)

lxo5628_View.o: lxo5628_View.cpp lxo5628_View.h lxo5628_Pea_Plant.h Dialogs.h
	$(CXX) $(CXXFLAGS) -c lxo5628_View.cpp $(GTKFLAGS)

lxo5628_Controller.o: lxo5628_Controller.cpp lxo5628_Controller.h lxo5628_Pea_Plant_Trait_Maps.h lxo5628_Pea_Plant.h lxo5628_View.h
	$(CXX) $(CXXFLAGS) -c lxo5628_Controller.cpp $(GTKFLAGS)


lxo5628_Pea_Plant.o: lxo5628_Pea_Plant.cpp lxo5628_Pea_Plant.h lxo5628_Trait.h lxo5628_Pea_Plant_Trait_Maps.h
	$(CXX) $(CXXFLAGS) -c lxo5628_Pea_Plant.cpp $(GTKFLAGS)


Dialogs.o: Dialogs.cpp Dialogs.h
	$(CXX) $(CXXFLAGS) -c Dialogs.cpp $(GTKFLAGS)


MainWindow.o: MainWindow.cpp MainWindow.h lxo5628_View.h lxo5628_Controller.h
	$(CXX) $(CXXFLAGS) -c MainWindow.cpp $(GTKFLAGS)


clean:
	rm -f *.o test

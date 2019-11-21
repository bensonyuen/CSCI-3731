#include "Angle.h"
#include "Fish.h"
#include "DrunkenFish.h"
#include "FlippyFish.h"
#include <typeinfo>
#include <vector>

int main() {
	// Population p(1000);
	std::vector<Fish*> pop;
	FlippyFish* flippy;
	DrunkenFish* drunken;
	for (int i = 0; i < 300; i++){
		flippy = new FlippyFish(0, 0, 1, 0, 0);
		drunken = new DrunkenFish(0, 0, 1);
		pop.push_back(flippy);
		pop.push_back(drunken);
	}

	while (pop.size() != 1){
		for (int i = 0; i < (pop.size() - 1); i++){
			pop[i]->swim();
			// std::cout << "X: " << pop[i]->getX() << "  Y:"<< pop[i]->getY() << std::endl;
			if ((pop[i]->getX() > 100) || (pop[i]->getY() > 100) || (pop[i]->getX() < -100) || (pop[i]->getY() < -100)){
				
				pop.erase(pop.begin() + i);
				std::cout << "size: " << pop.size() << std::endl;
			}
		}
	}

	std::cout << "Size: " << pop.size() << std::endl;

	return 0;

} // end of main
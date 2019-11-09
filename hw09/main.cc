#include "Angle.h"
#include "Fish.h"
#include "Population.h"
#include "DrunkenFish.h"
#include "FlippyFish.h"
#include <typeinfo>

int main() {

	Population p(1000);
	FlippyFish* flippy;
	DrunkenFish* drunken;
	for (int i = 0; i < 300; i++){
		flippy = new FlippyFish(0, 0, 0, 0, 0, p);
		drunken = new DrunkenFish(0, 0, 0, p);
	}

	while (p.size() != 1){
		for (int i = 0; i < (p.size() - 1); i++){
			Fish* tempFish = p.get(i);
			tempFish->swim();
			if ((tempFish->getX() > 100) || (tempFish->getX()> 100)){
				p.remove(tempFish);
				std::cout << "size: " << p.size() << std::endl;
			}
		}
	}
	std::string s = typeid(p.get(0)).name();

	std::cout << "Last Fish type: " << s << std::endl;

	return 0;

} // end of main

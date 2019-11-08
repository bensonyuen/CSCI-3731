#include "Angle.h"
#include "Fish.h"
#include "Population.h"
#include "DrunkenFish.h"
#include "FlippyFish.h"

int main() {

	Population p(1000);
	FlippyFish* flippy;
	DrunkenFish* drunken;
	for (int i = 0; i < 300; i++){
		flippy = new FlippyFish(0, 0, 0, 0, 0, p);
		drunken = new DrunkenFish(0, 0, 0, p);
	}

	while (p.size() != 1){
		for (int i = 0; i < p.size(); i++){
			p.get(i)->swim();
		}
	}

	
	// std::cout << "index 7: " << p.get(598) << std::endl; 
	// for (int i = 0; i < 400; i++){
	// 	DrunkenFish drunken (0, 0, 0, p);	//find a way to initialize each object
	// 	drunken.swim();
	// }
	// FlippyFish* f1 = new FlippyFish(1.0, 2.0, 5.0, 6.0, 7.0, p);  //x, y, speed, Population p
	// FlippyFish* f2 = new FlippyFish(1.0, 2.0, 5.0, 6.0, 7.0, p);  //x, y, speed, Population p
	// FlippyFish f0 (1.0, 2.0, 5.0, 6.0, 7.0, p);  //x, y, speed, Population p
	// FlippyFish f1 (1.0, 2.0, 5.0, 6.0, 7.0, p);  //x, y, speed, Population p
	// DrunkenFish* d1 = new DrunkenFish(1.0, 2.0, 5.0, p); //x, y, speed, Population p
 //    p.add(f1);
 //    p.remove(f1);
    // std::cout << "size: " << p.size() << std::endl;
	
	// f1->swim();
	// f2->swim(); 
	// d1->swim();
	// std::cout << "fish x: " << f1->getX() << "\nfish y: " << f1->getY() << std::endl;
	// std::cout << "fish2 x: " << f2->getX() << "\nfish2 y: " << f2->getY() << std::endl;
	// std::cout << "drunk fish x: " << d1->getX() << "\ndrunk fish y: " << d1->getY() << std::endl;
	// << "\nfish speed: " << f1->getSpeed() << "\nfish direction: " << f1->getDirection() 
	// << "\nfish turn rate: " << f1->getTurnRate() << std::endl;

 //    std::cout << "get: " << p.get(0) << std::endl;
 //    std::cout << "get: " << p.get(2) << std::endl;

	return 0;

} // end of main

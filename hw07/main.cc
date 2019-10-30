#include "Angle.h"
#include "Fish.h"
#include "Population.h"

int main() {

	Angle a(50.0); //degrees
	Angle b(30.0);
	std::cout << "sin rad a: " << a.getSin() << ", sin rad b: " << b.getSin() << std::endl;
	std::cout << "cos rad a: " << a.getCos() << ", cos rad b: " << b.getCos() << std::endl;

	Population p(1000);
	Fish* f1 = new Fish(1.0, 2.0, 5.0, 6.0, 7.0, p); //x, y, speed, direction,turn_rate
    p.add(f1);
    std::cout << "size: " << p.getSize() << std::endl;
    std::cout << "get: " << p.get(0) << std::endl;
    p.remove(f1);
    std::cout << "size: " << p.getSize() << std::endl;
	
	f1->swim();
	std::cout << "fish x: " << f1->getX() << "\nfish y: " << f1->getY() 
	<< "\nfish speed: " << f1->getSpeed() << "\nfish direction: " << f1->getDirection() 
	<< "\nfish turn rate: " << f1->getTurnRate() << std::endl;

    
	return 0;

    
} // end of main

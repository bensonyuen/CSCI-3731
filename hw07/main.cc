#include "Angle.h"
#include "Fish.h"
#include "Population.h"

int main() {

	Angle a(50.0); //degrees
	Angle b(30.0);
	std::cout << "sin rad a: " << a.getSin() << ", sin rad b: " << b.getSin() << std::endl;
	std::cout << "cos rad a: " << a.getCos() << ", cos rad b: " << b.getCos() << std::endl;


	Fish f1(1.0, 2.0, 5.0, 6.0, 7.0); //x, y, speed, direction,turn_rate
	f1.swim();
	std::cout << "fish x: " << f1.getX() << "\nfish y: " << f1.getY() 
	<< "\nfish speed: " << f1.getSpeed() << "\nfish direction: " << f1.getDirection() 
	<< "\nfish turn rate: " << f1.getTurnRate() << std::endl;

    Population p(1000);
    p.add(f1);
    std::cout << "size: " << p.size() << std::endl;

	return 0;

    
} // end of main

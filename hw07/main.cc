#include "Angle.h"

int main() {

	Angle a(50.0);
	Angle b(30.0);
	std::cout << "sin rad a: " << a.getSin() << ", sin rad b: " << b.getSin() << std::endl;
	std::cout << "cos rad a: " << a.getCos() << ", cos rad b: " << b.getCos() << std::endl;


	Fish f1(1.0, 2.0, 5.0, a, b);
	f1.swim();











	// std::cout << a << " + " << b << " = " << a.getDegrees() + b.getDegrees() << std::endl;
	// std::cout << a << " - " << b << " = " << a.getDegrees() - b.getDegrees() << std::endl;
	// std::cout << a << " == " << b << " = " << (a == b) << std::endl << std::endl;
	// std::cout << a << " += " << b << " = " << (a += b) << std::endl;
	// std::cout << a << " -= " << b << " = " << (a -= b) << std::endl;

	// std::cout << a << " * " << b << " = " << a.getDegrees() * b.getDegrees() << std::endl;
	// std::cout << a << " / " << b << " = " << a.getDegrees() / b.getDegrees() << std::endl;
	// std::cout << a << " *= " << b << " = " << (a *= b) << std::endl;
	// std::cout << a << " /= " << b << " = " << (a /= b) << std::endl << std::endl;
	
	// std::cout << "a = b " << (a = b) << std::endl;
	// std::cout << "Value a: " << a << std::endl;
	// std::cout << "Value b: " << b << std::endl << std::endl;

	// std::cout << a << " == " << b << " = " << (a == b) << std::endl;


	return 0;

    
} // end of main

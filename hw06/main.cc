#include "Angle.h"

int main() {

	Angle a(50.0);
	Angle b(30.0);
	std::cout << a << " + " << b << " = " << a.getDegrees() + b.getDegrees() << std::endl;
	std::cout << a << " - " << b << " = " << a.getDegrees() - b.getDegrees() << std::endl;
	std::cout << a << " == " << b << " = " << (a == b) << std::endl << std::endl;
	std::cout << a << " += " << b << " = " << (a += b) << std::endl;
	std::cout << a << " -= " << b << " = " << (a -= b) << std::endl;

	std::cout << a << " * " << b << " = " << a.getDegrees() * b.getDegrees() << std::endl;
	std::cout << a << " / " << b << " = " << a.getDegrees() / b.getDegrees() << std::endl;
	std::cout << a << " *= " << b << " = " << (a *= b) << std::endl;
	std::cout << a << " /= " << b << " = " << (a /= b) << std::endl << std::endl;
	
	std::cout << "a = b " << (a = b) << std::endl;
	std::cout << "Value a: " << a << std::endl;
	std::cout << "Value b: " << b << std::endl << std::endl;

	std::cout << a << " == " << b << " = " << (a == b) << std::endl;


	return 0;

    
} // end of main

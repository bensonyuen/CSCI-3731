#include "Fish.h"
#include "Angle.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"
#include <cmath>
#include <string>
#include <cstdlib>

Fish::Fish(double x, double y, double speed) { 
    this->x = x;
    this->y = y;
    this->speed = speed;
} //end of constructor

Fish::~Fish() {
    
}

double Fish::getX() const { 
    return x;
}

double Fish::getY() const { 
    return y;
}

double Fish::getSpeed() const { 
    return speed;
}

void Fish::swim() { 
	std::cout << "This is the superclass " << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Fish& f) { 
    out << f.x;
    out << f.y;
    return out;
}

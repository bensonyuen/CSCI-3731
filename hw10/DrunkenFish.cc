#include "Fish.h"
#include "Angle.h"
#include "DrunkenFish.h"
#include <cmath>
#include <string>
#include <cstdlib>

DrunkenFish::DrunkenFish(double x, double y, double speed)
    : Fish(x, y, speed)
    { 

} //end of constructor

DrunkenFish::~DrunkenFish() {
}

double DrunkenFish::getX() const { 
    return x;
}

double DrunkenFish::getY() const { 
    return y;
}

void DrunkenFish::swim() {
    int choice = rand() % 4;
    if(choice == 0) x += speed;
    else if(choice == 1) y += speed;
    else if(choice == 2) x -= speed;
    else                 y -= speed;
    std::cout << "rand choice: " << rand() << std::endl;
} // end of swim method


std::ostream& operator<<(std::ostream &out, const DrunkenFish& f) { 
    out << f.x;
    out << f.y;
    return out;
}

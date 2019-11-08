#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include "DrunkenFish.h"
#include <cmath>
#include <string>
#include <cstdlib>

DrunkenFish::DrunkenFish(double x, double y, double speed, Population& p)
    : Fish(x, y, speed, p)
    { 

} //end of constructor

DrunkenFish::~DrunkenFish() {
  p.remove(this);
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
    // std::cout << "rand choice: " << rand() << std::endl;
} // end of swim method


std::ostream& operator<<(std::ostream &out, const DrunkenFish& f) { 
    out << f.x;
    out << f.y;
    return out;
}

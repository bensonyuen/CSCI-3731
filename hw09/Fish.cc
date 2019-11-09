#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"
#include <cmath>
#include <string>
#include <cstdlib>

Fish::Fish(double x, double y, double speed, Population& p)
    : p(p){ 
    this->x = x;
    this->y = y;
    this->speed = speed;
    p.add(this);
} //end of constructor

Fish::~Fish() {
    p.remove(this);
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

}

std::ostream& operator<<(std::ostream &out, const Fish& f) { 
    out << f.x;
    out << f.y;
    return out;
}

#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include "FlippyFish.h"
#include <cmath>
#include <string>
#include <cstdlib>

FlippyFish::FlippyFish(double x, double y, double speed, double direction, double turn_rate, Population& p) 
    : Fish(x, y, speed, p), 
    direction(direction), 
    turn_rate(turn_rate)
    { 
    this->direction = direction;
    this->turn_rate = turn_rate;
} //end of constructor

FlippyFish::~FlippyFish() {
  p.remove(this);
}

Angle FlippyFish::getDirection() const { 
    return direction;
}

Angle FlippyFish::getTurnRate() const { 
    return turn_rate;
}

void FlippyFish::swim() {
  int choice = rand() % 3;
  if(choice == 0){
    direction -= turn_rate;
  } else if(choice == 2) {
    direction += turn_rate;
  }
   x += speed * direction.getCos();
   y += speed * direction.getSin();
   // std::cout << "rand choice: " << rand() << std::endl;
}


std::ostream& operator<<(std::ostream &out, const FlippyFish& f) { 
    out << f.x;
    out << f.y;
    return out;
}
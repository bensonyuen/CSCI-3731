#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include "FlippyFish.h"
#include <cmath>
#include <string>
#include <cstdlib>

FlippyFish::FlippyFish(double x, double y, double speed, double direction, double turn_rate) 
    : direction(direction), 
    turn_rate(turn_rate),
    p(p) { 
    this->x = x;
    this->y = y;
    this->speed = speed;
    this->direction = direction;
    this->turn_rate = turn_rate;
    p.add(this);
} //end of constructor

FlippyFish::~FlippyFish() {
  p.remove(this);
}

double FlippyFish::getX() const { 
    return x;
}

double FlippyFish::getY() const { 
    return y;
}

double FlippyFish::getSpeed() const { 
    return speed;
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
}


std::ostream& operator<<(std::ostream &out, const Fish& f) { 
    out << f.x;
    out << f.y;
    return out;
}
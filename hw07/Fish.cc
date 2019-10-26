#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include <cmath>
#include <string>
#include <cstdlib>

Fish::Fish(double x, double y, double speed, double direction, double turn_rate) 
    : direction(direction), 
    turn_rate(turn_rate) { 
    this->x = x;
    this->y = y;
    this->speed = speed;
    this->direction = direction;
    this->turn_rate = turn_rate;
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

Angle Fish::getDirection() const { 
    return direction;
}

Angle Fish::getTurnRate() const { 
    return turn_rate;
}

void Fish::swim() {
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

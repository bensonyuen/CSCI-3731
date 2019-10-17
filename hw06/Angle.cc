#include "Angle.h"
#include <string>

Angle::Angle(double degrees) { 
    this->degrees = degrees;
}   //end of constructor

Angle::~Angle() {
}

double Angle::getDegrees() const { 
    return degrees;
}


std::ostream &operator<<(std::ostream &out, const Angle& c) { 
    out << c.degrees;
    return out;
}

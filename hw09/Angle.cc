#include "Angle.h"
#include <cmath>
#include <string>

Angle::Angle(double degrees) { 
    if(degrees >= 360.0){
      degrees -= 360.0;
    }
    if(degrees < 0.0) {
      degrees += 360.0;
    }
    this->degrees = degrees;
}   //end of constructor

Angle::~Angle() {
}

double Angle::getDegrees() const { 
    return degrees;
}

double Angle::getSin() const {
	return sin(degrees * M_PI/180.0);
}

double Angle::getCos() const {
	return cos(degrees * M_PI/180.0);
}


Angle Angle::operator+(const Angle& angle) const{
	return Angle(angle.getDegrees() + angle.getDegrees());
}

Angle Angle::operator-(const Angle& angle) const{
	return Angle(angle.getDegrees() - angle.getDegrees());
}

Angle& Angle::operator+=(const Angle& angle){
  degrees += angle.getDegrees();
  return *this;
}

Angle& Angle::operator-=(const Angle& angle) {
  degrees -= angle.getDegrees();
  return *this;
}

Angle Angle::operator*(const Angle& angle) const{
  return Angle(angle.getDegrees() * angle.getDegrees());
}

Angle Angle::operator/(const Angle& angle) const{
  return Angle(angle.getDegrees() / angle.getDegrees());
}

Angle& Angle::operator*=(const Angle& angle){
  degrees *= angle.getDegrees();
  return *this;
}

Angle& Angle::operator/=(const Angle& angle) {
  degrees /= angle.getDegrees();
  return *this;
}

Angle& Angle::operator=(const Angle& angle) {
  degrees = angle.getDegrees();
  return *this;
}

bool Angle::operator==(const Angle& angle) const {
  return degrees == angle.getDegrees();
}

std::ostream& operator<<(std::ostream &out, const Angle& c) { 
    out << c.degrees;
    return out;
}

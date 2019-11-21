#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
#include <cmath>
#include <string>

template <class T> class Angle{

	private:
		T degrees;

	public:
		Angle(T degrees) { 
		    if(degrees >= 360.0){
		      degrees -= 360.0;
		    }
		    if(degrees < 0.0) {
		      degrees += 360.0;
		    }
		    this->degrees = degrees;
		}   //end of constructor

		virtual ~Angle() {

		}

		T getDegrees() const { 
		    return degrees;
		}

		T getSin() const {
			return sin(degrees * M_PI/180.0);
		}

		T getCos() const {
			return cos(degrees * M_PI/180.0);
		}


		Angle operator+(const Angle& angle) const{
			return Angle(angle.getDegrees() + angle.getDegrees());
		}

		Angle operator-(const Angle& angle) const{
			return Angle(angle.getDegrees() - angle.getDegrees());
		}

		Angle& operator+=(const Angle& angle){
		  degrees += angle.getDegrees();
		  return *this;
		}

		Angle& operator-=(const Angle& angle) {
		  degrees -= angle.getDegrees();
		  return *this;
		}

		Angle operator*(const Angle& angle) const{
		  return Angle(angle.getDegrees() * angle.getDegrees());
		}

		Angle operator/(const Angle& angle) const{
		  return Angle(angle.getDegrees() / angle.getDegrees());
		}

		Angle& operator*=(const Angle& angle){
		  degrees *= angle.getDegrees();
		  return *this;
		}

		Angle& operator/=(const Angle& angle) {
		  degrees /= angle.getDegrees();
		  return *this;
		}

		Angle& operator=(const Angle& angle) {
		  degrees = angle.getDegrees();
		  return *this;
		}

		bool operator==(const Angle& angle) const {
		  return degrees == angle.getDegrees();
		}

		// std::ostream& operator<<(std::ostream &out, const Angle& c) { 
		//     out << c.degrees;
		//     return out;
		// }

};

#endif

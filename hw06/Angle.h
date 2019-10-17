
#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>

class Angle{
	private: 
		double degrees;

	public: 
		Angle(double degrees); 
		virtual ~Angle();

		// double getDegrees() const;

		void set (double degrees);
		double getDegrees() const;
		friend std::ostream& operator<<(std::ostream& out, const Angle& c);

	};

#endif
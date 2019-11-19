
#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>

class Angle{
	private: 
		double degrees;

	public: 
		Angle(double degrees); 
		Angle operator+(const Angle& angle) const;
		Angle operator-(const Angle& angle) const;
		Angle& operator+=(const Angle& angle);
		Angle& operator-=(const Angle& angle);
		Angle operator*(const Angle& angle) const;
		Angle operator/(const Angle& angle) const;
		Angle& operator*=(const Angle& angle);
		Angle& operator/=(const Angle& angle);
		Angle& operator=(const Angle& angle);
		bool operator==(const Angle& angle) const;


		virtual ~Angle();

		void set (double degrees);
		double getDegrees() const;
		double getSin() const;
		double getCos() const;
		friend std::ostream& operator<<(std::ostream& out, const Angle& c);

	};

#endif

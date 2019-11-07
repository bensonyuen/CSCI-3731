#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H
#include "Angle.h"
class Population;
#include <iostream>

class DrunkenFish : public Fish{
	private: 
		double x;
		double y;
		double speed;
		Angle direction;
		Angle turn_rate;
		Population& p;

	public: 
		Fish(double x, double y, double speed, double direction, double turn_rate, Population& p);

		virtual ~Fish();

		void set (double x, double y, double speed, Angle direction, Angle turn_rate);
		double getX() const;
		double getY() const;
		double getSpeed() const;
		Angle getDirection() const;
		Angle getTurnRate() const;
		void swim();
		friend std::ostream& operator<<(std::ostream& out, const Fish& f);

	};

#endif

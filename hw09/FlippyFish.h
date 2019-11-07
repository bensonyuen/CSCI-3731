#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H
#include "Angle.h"
class Population;
#include <iostream>

class FlippyFish : public Fish{
	private: 
		double x;
		double y;
		double speed;
		Angle direction;
		Angle turn_rate;

	public: 
		FlippyFish(double x, double y, double speed, double direction, double turn_rate, Population& p);

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

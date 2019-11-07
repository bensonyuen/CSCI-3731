#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H
#include "Angle.h"
#include "Fish.h"
class Population;
#include <iostream>


class FlippyFish : public Fish{
	private: 
		Angle direction;
		Angle turn_rate;

	public: 
		FlippyFish(double x, double y, double speed, double direction, double turn_rate, Population& p);

		virtual ~FlippyFish();

		void set (Angle direction, Angle turn_rate);
		Angle getDirection() const;
		Angle getTurnRate() const;
		void swim();
		friend std::ostream& operator<<(std::ostream& out, const FlippyFish& f);

	};

#endif

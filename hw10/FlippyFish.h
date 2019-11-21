#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H
#include "Angle.h"
#include "Fish.h"
#include <iostream>


class FlippyFish : public Fish{
	private: 
		Angle<double> direction;
		Angle<double> turn_rate;

	public: 
		FlippyFish(double x, double y, double speed, double direction, double turn_rate);

		virtual ~FlippyFish();

		void set (Angle<double> direction, Angle<double> turn_rate);
		Angle<double> getDirection() const;
		Angle<double> getTurnRate() const;
		void swim();
		friend std::ostream& operator<<(std::ostream& out, const FlippyFish& f);

	};

#endif

#ifndef FISH_H
#define FISH_H
#include "Angle.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"
class Population;
#include <iostream>

class Fish{
	private: 
		double x;
		double y;
		double speed;

	public: 
		Fish(double x, double y, double speed);

		virtual ~Fish();

		void set (double x, double y, double speed);
		double getX() const;
		double getY() const;
		double getSpeed() const;
		friend std::ostream& operator<<(std::ostream& out, const Fish& f);

	};

#endif

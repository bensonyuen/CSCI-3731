#ifndef FISH_H
#define FISH_H
#include "Angle.h"
class Population;
#include <iostream>

class Fish{
	protected: 
		double x;
		double y;
		double speed;
		Population& p;

	public: 
		Fish(double x, double y, double speed, Population& p);

		virtual ~Fish();

		void set (double x, double y, double speed);
		double getX() const;
		double getY() const;
		double getSpeed() const;
		friend std::ostream& operator<<(std::ostream& out, const Fish& f);

	};

#endif

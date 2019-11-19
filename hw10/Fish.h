#ifndef FISH_H
#define FISH_H
#include "Angle.h"
#include <iostream>

class Fish{
	protected: 
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
		void swim();
		friend std::ostream& operator<<(std::ostream& out, const Fish& f);

	};

#endif

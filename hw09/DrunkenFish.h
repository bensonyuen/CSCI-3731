#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H
#include "Angle.h"
#include "Fish.h"
class Population;
#include <iostream>

class DrunkenFish : public Fish{
	// private: 
	// 	double x;
	// 	double y;
	// 	double speed;

	public: 
		DrunkenFish(double x, double y, double speed, Population& p);

		virtual ~DrunkenFish();

		// void set (double x, double y, double speed, Angle direction, Angle turn_rate);
		double getX() const;
		double getY() const;
		double getSpeed() const;
		void swim();
		friend std::ostream& operator<<(std::ostream& out, const DrunkenFish& f);

	};

#endif

#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H
#include "Angle.h"
#include "Fish.h"
#include <iostream>

class DrunkenFish : public Fish{

	public: 
		DrunkenFish(double x, double y, double speed);
		virtual ~DrunkenFish();
		double getX() const;
		double getY() const;
		double getSpeed() const;
		void swim();
		friend std::ostream& operator<<(std::ostream& out, const DrunkenFish& f);
		
	};

#endif

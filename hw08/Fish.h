#ifndef FISH_H
#define FISH_H
#include "Angle.h"

#include <iostream>
#include <cstdlib>
class Fish{
	friend class Population;
	private:
		double x, y, speed;
		Angle direction;
		Angle turn_rate;
		
					
	public:
	Fish();	
	Fish(double x, double y,double speed, Angle& direction,Angle& turn_rate);	
	virtual~ Fish();
	
	void swim();
	
	friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};

#endif

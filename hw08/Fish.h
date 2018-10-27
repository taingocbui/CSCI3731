#ifndef FISH_H
#define FISH_H
#include "Angle.h"

#include <iostream>
#include <cstdlib>
class Fish{
	private:
		double x, y, speed;
		Angle direction;
		Angle turn_rate;
		
			
	public:
	Fish();	
	Fish(double x, double y,double speed, Angle& direction,Angle& turn_rate);	
	virtual~ Fish();
	
	double getX() const;
	double getY() const;
	double getSpeed() const;
	const Angle& getDirection() const;
	const Angle& getTurn() const;
	bool operator!=(const Fish& a) const;
	
	void swim();
	
	friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};

#endif

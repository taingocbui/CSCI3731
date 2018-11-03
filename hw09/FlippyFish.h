#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H

#include "Fish.h"

class FlippyFish: public Fish{
private:
	bool race;
	Angle* direction;
	Angle* turn_rate;
public:
	FlippyFish();
	FlippyFish(double x, double y,double speed, bool race, Angle direction,Angle turn_rate, Population* p);
	virtual~ FlippyFish();
	
	virtual void swim(); 
	
	bool getRace();
};

#endif
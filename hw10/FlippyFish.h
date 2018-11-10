#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H

#include "Fish.h"
#include "Angle.h"
class FlippyFish: public Fish{
private:
	bool race;
	Angle<double>* direction;
	Angle<double>* turn_rate;
public:
	FlippyFish();
	FlippyFish(double x, double y,double speed, bool race, Angle<double> direction,Angle<double> turn_rate, std::vector<Fish*>* p);
	virtual~ FlippyFish();
	
	virtual void swim(); 
	
	bool getRace();
};

#endif
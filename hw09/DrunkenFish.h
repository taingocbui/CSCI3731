#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H
#include "Fish.h"

class DrunkenFish: public Fish{
private:
	bool race;
public:
	DrunkenFish();
	DrunkenFish(double x, double y,double speed,bool race, Population* p);
	virtual~ DrunkenFish();
	
	virtual void swim();
	
	bool getRace();
};

#endif
#include "FlippyFish.h"
#include "Angle.h"
#include <cstdlib>
FlippyFish::FlippyFish()
		: Fish(){	
}

FlippyFish::FlippyFish(double x, double y,double speed,bool race, Angle direction,Angle turn_rate, Population* p)
		:Fish(x, y, speed, p){
		this->race = race;
		this->direction = &direction;
		this->turn_rate = &turn_rate;
}

FlippyFish::~FlippyFish(){}

void FlippyFish::swim(){
	double x = this->getX();
	double y = this->getY();
	double speed = this->getSpeed();
	int choice = rand() % 3;
	if(		choice == 0) *direction -= *turn_rate;
	else if(choice == 2) *direction += *turn_rate;
	x += speed * (direction->getCos());
	this->setX(x);
	y += speed * (direction->getSin());
	this->setY(y);
}

bool FlippyFish::getRace(){
	return this->race;
}
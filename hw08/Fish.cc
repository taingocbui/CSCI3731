#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>

Fish::Fish(){}

Fish::Fish(double x, double y, double speed, Angle* direction, Angle* turn_rate, Population* p ){
	this->x = x;
	this->y = y;
	this->speed = speed;
	this->direction = direction;
	this->turn_rate = turn_rate;
	p->add(this);
}

Fish::~Fish(){	
	std::cout<<"delete fish ("<<this->x<<" , "<<this->y<<")"<<std::endl;
	//p->remove(this);
}

void Fish::swim(){
	int choice = rand() % 3;
	if(		choice == 0) *direction -= *turn_rate;
	else if(choice == 2) *direction += *turn_rate;
	x += speed * (direction->getCos());
	y += speed * (direction->getSin());
}

std::ostream& operator<<(std::ostream& out, const Fish& f){
	out<<"("<<f.x<<" , "<<f.y<<")";
	return out;
}
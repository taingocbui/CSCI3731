#include "DrunkenFish.h"
#include "Angle.h"
#include <cstdlib>
DrunkenFish::DrunkenFish()
		: Fish(){	
}

DrunkenFish::DrunkenFish(double x, double y,double speed,bool race, std::vector<Fish*>* p)
		:Fish(x, y, speed, p){
		this->race = race;
}

DrunkenFish::~DrunkenFish(){}

void DrunkenFish::swim(){
	double x = this->getX();
	double y = this->getY();
	double speed = this->getSpeed();
	int choice = rand() % 4;
	if( 	choice == 0) x += speed;
	else if(choice == 1) y += speed;
	else if(choice == 2) x -= speed;
	else				 y -= speed;
	
	this->setX(x);
	this->setY(y);
}

bool DrunkenFish::getRace(){
	return this->race;
}
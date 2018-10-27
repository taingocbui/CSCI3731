#include "Fish.h"
#include "Angle.h"

#include <cstdlib>
#include <cstdio>
#include <iostream>

Fish::Fish(){}

Fish::Fish(double x, double y, double speed, Angle& direction, Angle& turn_rate ){
	this->x = x;
	this->y = y;
	this->speed = speed;
	this->direction = direction;
	this->turn_rate = turn_rate;
	
		
}

Fish::~Fish(){	
}

double Fish::getX() const{
	return x;
}

double Fish::getY() const{
	return y;
}

double Fish::getSpeed() const{
	return speed;
}

const Angle& Fish::getDirection() const{
	return direction;
}

const Angle& Fish::getTurn() const{
	return turn_rate;
}

bool Fish::operator!=(const Fish& a) const {
	return ((x != a.getX()) || (y != a.getY()) || (speed != a.getSpeed()) || (direction != a.getDirection()) || (turn_rate != a.getTurn()));
}

void Fish::swim(){
	int choice = rand() % 3;
	if(		choice == 0) direction -= turn_rate;
	else if(choice == 2) direction += turn_rate;
	x += speed * direction.getCos();
	y += speed * direction.getSin();
}

std::ostream& operator<<(std::ostream& out, const Fish& f){
	out<<"("<<f.x<<" , "<<f.y<<")";
	return out;
}
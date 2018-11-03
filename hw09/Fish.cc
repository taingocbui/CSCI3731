#include "Fish.h"
#include "Population.h"
#include <cstdio>
#include <iostream>

Fish::Fish(){}

Fish::Fish(double x, double y, double speed, Population* p ){
	this->x = x;
	this->y = y;
	this->speed = speed;	
	this->p = p;
	p->add(this);
}

Fish::~Fish(){	
	std::cout<<"delete fish ("<<this->x<<" , "<<this->y<<")"<<std::endl;
	p->remove(this);
}


double Fish::getX(){
	return this->x;
}

double Fish::getY(){
	return this->y;
}

double Fish::getSpeed(){
	return this->speed;
}

void Fish::setX(double ans){
	this->x = ans;
}

void Fish::setY(double ans){
	this->y = ans;
}

Population* Fish::getPop(){
	return this->p;
}

std::ostream& operator<<(std::ostream& out, const Fish& f){
	out<<"("<<f.x<<" , "<<f.y<<")";
	return out;
}
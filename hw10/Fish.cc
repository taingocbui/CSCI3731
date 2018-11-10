#include "Fish.h"

#include <cstdio>


Fish::Fish(){}

Fish::Fish(double x, double y, double speed, std::vector<Fish*>* p ){
	this->x = x;
	this->y = y;
	this->speed = speed;	
	this->p = p;
	p->push_back(this);
}

Fish::~Fish(){	
	std::cout<<"delete fish ("<<this->x<<" , "<<this->y<<")"<<std::endl;
 	for(std::vector<Fish*>::iterator it = (*p).begin(); it!= (*p).end(); ++it){
		if(*it == this){
			(*p).erase(it);
			break;
		}
	} 
//	p->erase(std::find(p->begin(), p->end(), this) - p->begin());
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

std::vector<Fish*>* Fish::getPop(){
	return this->p;
}

std::ostream& operator<<(std::ostream& out, const Fish& f){
	out<<"("<<f.x<<" , "<<f.y<<")";
	return out;
}
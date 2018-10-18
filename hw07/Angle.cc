#include "Angle.h"
#include <cstdio>

Angle::Angle (double x) throw(){
	this->x = x; 
}

Angle::~Angle() throw(){
	printf("destructing %lf\n", x);
}

double Angle::getAngle() const throw(){
	return x;
}

void Angle::setAngle(double x) throw(){
	this->x = x; 
}


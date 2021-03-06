#include "Angle.h"
#include <cstdio>
#include <cmath>
#include <iostream>
#define  PI 3.14159265
Angle::Angle(){}

Angle::Angle (double x){
	this->x = x; 
	have_sin = false;
	have_cos = false;
}

Angle::~Angle(){
	printf("destructing %lf\n", x);
}

double Angle::getAngle() const{
	return x;
}

void Angle::setAngle(double x){
	this->x = x; 
}

void Angle::CorrectAngle(double d){
	if (d > 360) d = std::fmod(d, 360);
	if (d < 0) d = std::fmod(d, 360) + 360;
	this->x = d;
}	

Angle Angle::operator+(const Angle& a) const{
	Angle answer;
	answer.CorrectAngle( x + a.getAngle());	
	return answer;
}

const Angle& Angle::operator+=(const Angle& a){
	x += a.getAngle();
	CorrectAngle(this->x);
	return *this;
} 

Angle Angle::operator-(const Angle& a) const{
	Angle answer;
	double d = x - a.getAngle();
	answer.CorrectAngle(d);	
	return answer;
}
const Angle& Angle::operator-=(const Angle& a){
	x -= a.getAngle();
	CorrectAngle(this->x);
	return *this;
} 

Angle Angle::operator*(double a) const{
	Angle answer;
	double d = x * a;
	answer.CorrectAngle(d);	
	return answer;
}

const Angle& Angle::operator*=(double a){
	x *= a;
	CorrectAngle(this->x);
	return *this;
} 

Angle Angle::operator/(double a) const{
	Angle answer;
	if (a == 0) throw "Division by zero angle";
	else{
		double d = x / a;
		answer.CorrectAngle(d);	
		return answer;
	}
}

const Angle& Angle::operator/=(double a){
	if(a == 0) throw "Division by zero angle";
	else{
		x /= a;
		CorrectAngle(this->x);
		return *this;
	}
}

bool Angle::operator==(const Angle& a) const {
	return x == a.getAngle();
}

bool Angle::operator!=(const Angle& a) const {
	return x != a.getAngle();
}

const Angle& Angle::operator=( const Angle& a){
	this->x = a.getAngle();
	return *this;
}

const Angle& Angle::operator=(const double d){
	this->x = d;
	return *this;
}

double Angle::getSin() const{
	if(!have_sin){
		sinValue = std::sin(x*PI/180.0);
		have_sin = true;
	}
	return sinValue;
}

double Angle::getCos() const{
	if(!have_cos){
		cosValue = std::cos(x*PI/180.0);
		have_cos = true;
	}
	return cosValue;
}

std::ostream& operator<<(std::ostream& out, const Angle& a){
	out<<a.x<<" degree";
	return out;
}

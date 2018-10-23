#include "Angle.h"
#include <cstdio>
#include <cmath>

Angle::Angle (double x){
	this->x = x; 
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

void Angle::setRightAngle(Angle& a){
	if (a.getAngle() > 360) a.setAngle( std::fmod(a.getAngle(),360));
	if (a.getAngle() < 0) a.setAngle(std::fmod(a.getAngle(),360) + 360);
}

void Angle::CorrectAngle(double d){
	if (d > 360) this->x = std::fmod(d, 360);
	if (d < 0) this->x = std::fmod(d, 360) + 360;
}	

Angle Angle::operator+(const Angle& a) const{
	Angle answer(0);
	double d = x + a.getAngle();
	answer.CorrectAngle(d);	
	return answer;
}

const Angle& Angle::operator+=(const Angle& a){
	x += a.getAngle();
	CorrectAngle(this->x);
	return *this;
} 

Angle Angle::operator-(const Angle& a) const{
	Angle answer(0);
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
	Angle answer(0);
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
	Angle answer(0);
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

const Angle& Angle::operator=( const Angle& a){
	this->x = a.getAngle();
	return *this;
}

const Angle& Angle::operator=(const double d){
	this->x = d;
	return *this;
}

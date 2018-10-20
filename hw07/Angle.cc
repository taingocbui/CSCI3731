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

Angle Angle::operator+(const Angle& a) const{
	double answer = x+a.getAngle();
	if (answer > 360) return Angle(std::fmod(answer,360));
	if (answer < 0) return Angle(std::fmod(answer,360) + 360);
	return Angle(answer);
}

const Angle& Angle::operator+=(const Angle& a){
	x += a.getAngle();
	setRightAngle(*this);
	return *this;
} 

Angle Angle::operator-(const Angle& a) const{
	double answer = (x - a.getAngle());
	if (answer > 360) return Angle(std::fmod(answer,360));
	if (answer < 0) return Angle(std::fmod(answer,360) + 360);
	return Angle(answer);
}
const Angle& Angle::operator-=(const Angle& a){
	x -= a.getAngle();
	setRightAngle(*this);
	return *this;
} 

Angle Angle::operator*(const Angle& a) const{
	double answer = x*a.getAngle();
	if (answer > 360) return Angle(std::fmod(answer,360));
	if (answer < 0) return Angle(std::fmod(answer,360) + 360);
	else return Angle(answer);
}

const Angle& Angle::operator*=(const Angle& a){
	x *= a.getAngle();
	setRightAngle(*this);
	return *this;
} 

Angle Angle::operator/(const Angle& a) const{
	double answer;
	if (a.getAngle() == 0) throw "Division by zero angle";
	else{
		answer = x / a.getAngle();
		if (answer > 360) return Angle(std::fmod(answer,360));
		if (answer < 0) return Angle(std::fmod(answer,360) + 360);
		else return Angle(answer);
	}
}

const Angle& Angle::operator/=(const Angle& a){
	if(a.getAngle() == 0) throw "Division by zero angle";
	else{
		x /= a.getAngle();
		setRightAngle(*this);
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

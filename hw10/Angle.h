#ifndef ANGLE_H
#define ANGLE_H

#include <iostream>
#include <cstdio>
#include <cmath>
#define  PI 3.14159265
template<class T> class Angle{
	
private:
	T x;
	mutable double sinValue, cosValue;
	mutable bool have_sin, have_cos;
	
public:
	Angle(){}
	Angle(T x){this->x = x;}
	virtual ~Angle(){}
	
	T getAngle() const{return x;}
	
	void setAngle(T x){this->x = x;}
	
	void CorrectAngle(T d){
	if (d > 360) d = std::fmod(d, 360);
	if (d < 0) d = std::fmod(d, 360) + 360;
	this->x = d;
	}	
	
	Angle operator+(const Angle& a) const{
	Angle answer;
	answer.CorrectAngle( x + a.getAngle());	
	return answer;
	}
	
	const Angle& operator+=(const Angle& a){
	x += a.getAngle();
	CorrectAngle(this->x);
	return *this;
	} 
	
	Angle operator-(const Angle& a) const{
	Angle answer;
	double d = x - a.getAngle();
	answer.CorrectAngle(d);	
	return answer;
	}
	
	const Angle& operator-=(const Angle& a){
	x -= a.getAngle();
	CorrectAngle(this->x);
	return *this;
	} 
	
	Angle operator*(T a) const{
	Angle answer;
	double d = x * a;
	answer.CorrectAngle(d);	
	return answer;
	}
	
	const Angle& operator*=(T a){
	x *= a;
	CorrectAngle(this->x);
	return *this;
	} 
	
	Angle operator/(T a) const{
	Angle answer;
	if (a == 0) throw "Division by zero angle";
	else{
		double d = x / a;
		answer.CorrectAngle(d);	
		return answer;
		}
	}
	
	const Angle& operator/=(T a){
	if(a == 0) throw "Division by zero angle";
	else{
		x /= a;
		CorrectAngle(this->x);
		return *this;
		}
	}
	
	bool operator==(const Angle& a) const{
	return x == a.getAngle();
	} 
	
	bool operator!=(const Angle& a) const{
	return x != a.getAngle();
	}
	
	const Angle& operator=( const Angle& a){
	this->x = a.getAngle();
	return *this;
	}
	
	const Angle& operator=(const T d){
	this->x = d;
	return *this;
	}
	
	double getSin() const{
		if(!have_sin){
			sinValue = std::sin(x*PI/180.0);
			have_sin = true;
		}
	return sinValue;
	}
	
	double getCos() const{
		if(!have_cos){
			cosValue = std::cos(x*PI/180.0);
			have_cos = true;
		}
		return cosValue;
	}
	
	friend std::ostream& operator<<(std::ostream& out, const Angle& a){
		out<<a.x<<" degree";
		return out;
	}
};


#endif
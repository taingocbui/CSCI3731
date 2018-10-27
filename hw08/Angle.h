#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
class Angle{
	
private:
	double x;
	mutable double sinValue, cosValue;
	mutable bool have_sin, have_cos;
	
public:
	Angle();
	Angle(double x);
	virtual ~Angle();
	
	double getAngle() const;
	
	void setAngle(double x);
	
	void CorrectAngle(double d);
	
	Angle operator+(const Angle& a) const;
	
	const Angle& operator+=(const Angle& a);
	
	Angle operator-(const Angle& a) const;
	
	const Angle& operator-=(const Angle& a);
	
	Angle operator*(double a) const;
	
	const Angle& operator*=(double a);
	
	Angle operator/(double a) const;
	
	const Angle& operator/=(double a);
	
	bool operator==(const Angle& a) const; 
	
	bool operator!=(const Angle& a) const;
	
	const Angle& operator=( const Angle& a);
	
	const Angle& operator=(const double d);
	
	double getSin() const;
	
	double getCos() const;
	
	friend std::ostream& operator<<(std::ostream& out, const Angle& a);
};


#endif
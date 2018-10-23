#ifndef ANGLE_H
#define ANGLE_H

class Angle{
	
private:
	double x;
	
public:
	Angle(double x);
	virtual ~Angle();
	
	double getAngle() const;
	
	void setAngle(double x);
	
	void setRightAngle(Angle& a);
	
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
	
	const Angle& operator=( const Angle& a);
	
	const Angle& operator=(const double d);
};

#endif
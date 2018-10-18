#ifndef ANGLE_H
#define ANGLE_H

class Angle{
	
private:
	double x;
	
public:
	Angle(double x) throw();
	virtual ~Angle() throw();
	
	double getAngle() const throw();
	
	void setAngle(double x) throw();
};

#endif
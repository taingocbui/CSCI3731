#ifndef FISH_H
#define FISH_H

#include <iostream>

class Angle;
class Population;

class Fish{
	friend class Population;
	private:
		double x, y, speed;		
		Population* p;
		
					
	public:
	Fish();	
	Fish(double x, double y,double speed, Population* p);	
	virtual~ Fish();
	
	virtual void swim() =0;
	
	virtual bool getRace() =0;
	
	double getX();
	
	double getY();
	
	double getSpeed();
	
	void setX(double ans);
	
	void setY(double ans);
	
	Population* getPop();
	
	friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};

#endif

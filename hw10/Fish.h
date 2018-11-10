#ifndef FISH_H
#define FISH_H
#include <vector>
#include <iostream>


class Fish{
	
	private:
		double x, y, speed;		
		std::vector<Fish*>* p;
		
	public:
	Fish();	
	Fish(double x, double y,double speed, std::vector<Fish*>* p);	
	virtual~ Fish();
	
	virtual void swim() =0;
	
	virtual bool getRace() =0;
	
	double getX();
	
	double getY();
	
	double getSpeed();
	
	void setX(double ans);
	
	void setY(double ans);
	
	std::vector<Fish*>* getPop();
	
	friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};

#endif

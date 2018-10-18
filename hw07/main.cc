#include "Angle.h"
#include <cstdio>

int main(){
	Angle x(150);
	double y = x.getAngle();
	printf("The initial angle is %f\n", y);
	x.setAngle(120);
	printf("The new angle is %f\n", x.getAngle());
	
	
}
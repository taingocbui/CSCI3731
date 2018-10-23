#include "Angle.h"
#include <cstdio>
#include <iostream> 

int main(){
	Angle x(-350);
	Angle y(350);
	
	Angle z = x+y;
	
	Angle a = x-y;
	printf("The sum angle is %f\n", z.getAngle());
	printf("The sub angle is %f\n", a.getAngle());
	x += y;
	y -= x;
	printf("The += angle is %f\n", z.getAngle());
	printf("The -= angle is %f\n", a.getAngle());
	Angle f(350);
	
	Angle d = f*3;
	printf("The mul angle is %f\n", d.getAngle());
	d*= 5;	
	printf("The *= angle is %f\n", d.getAngle());
	
	try{
	Angle e = y/5;
	y/= 5;
	printf("The division angle is %f\n", e.getAngle());
	printf("The /= angle is %f\n", y.getAngle());
	} catch (const char* msg)
		{
		std::cout<<msg<<std::endl;
		}
	
	printf("Angle %f == Angle %f is %s\n", f.getAngle(), y.getAngle(), f==y ? "true" : "false");
	printf("Angle x is %f\n", x.getAngle());
	x = y;
	printf("Angle x is after assign %f\n",x.getAngle());
	x = 40;
	printf("Angle x is after assign %f\n",x.getAngle());
}
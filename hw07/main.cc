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
	Angle b(-3);
	Angle c(450);
	Angle d = b*c;
	printf("The mul angle is %f\n", d.getAngle());
	d*= b;	
	printf("The *= angle is %f\n", d.getAngle());
	
	try{
	Angle e = c/b;
	c/= b;
	printf("The division angle is %f\n", e.getAngle());
	printf("The /= angle is %f\n", c.getAngle());
	} catch (const char* msg)
		{
		std::cout<<msg<<std::endl;
		}
	
	printf("Angle %f == Angle %f is %s\n", f.getAngle(), y.getAngle(), f==y ? "true" : "false");
	printf("Angle x is %f\n", x.getAngle());
	x = b;
	printf("Angle x is after assign %f\n",x.getAngle());
	x = 40;
	printf("Angle x is after assign %f\n",x.getAngle());
}
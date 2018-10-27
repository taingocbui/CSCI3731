#include <string>
#include <iostream>

#include "Log.h"
#include "Angle.h"
#include "Fish.h"
#include "Population.h"

int main(){
	Log& log = Log::getInstance(); 
	log.print("Hello Fish");
	
	Angle a(30);
	Angle b(60);
	a = b;
	std::cout<<a<<std::endl;
	Population p;
	Fish f(1,2,5,&a,&b,&p);
	Fish g(2,3,6,&a,&b,&p);
	Fish n(1,3,5,&a,&b,&p);
	Fish k(2,1,4,&a,&b,&p);
	std::cout<<"The fish coordinate is "<<f<< std::endl;
	f.swim();
	std::cout<<"The fish new coordinate after swim is "<<f<<std::endl;
	f.swim();
	std::cout<<"The fish new coordinate after swim is "<<f<<std::endl;
	f.swim();
	std::cout<<"The fish new coordinate after swim is "<<f<<std::endl;
	
		
	std::cout<<"The fish index 1 is "<<*p.get(1)<<std::endl;
	std::cout<<"The size of population is "<<p.getSize()<<std::endl;
	
	p.remove(p.get(1));
	std::cout<<"The size of population is "<<p.getSize()<<std::endl;
	std::cout<<"The fish index 1 is "<<*p.get(1)<<std::endl;
}
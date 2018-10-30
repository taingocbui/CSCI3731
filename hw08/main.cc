#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h>
#include "Log.h"
#include "Angle.h"
#include "Fish.h"
#include "Population.h"

int main(){
	Log& log = Log::getInstance(); 
	log.print("Welcome to the Fish World! There is plenty of Fish here\n");
	
	Population p;
	Fish f(0,0,5,Angle(30),Angle(60),&p);
	Fish g(0,0,6,Angle(45),Angle(45),&p);
	Fish n(0,0,5,Angle(-30),Angle(120),&p);
	Fish k(0,0,4,Angle(-45),Angle(-120),&p);
	
	int time = 0;
	std::cout<<"Fishes in the pool at time 0 are:"<<std::endl;
	for(int i=0; i<p.getSize(); i++){
            std::cout<<"\t"<< *(p.get(i)) <<std::endl;			
	}
	
	while(p.getSize()>0){
		time++;		
		std::cout<<" "<<std::endl;
		std::cout<<"Current time is: "<<time<<std::endl;
		std::cout<<"The fishes' positions:"<<std::endl;
		for (int i = 0; i < p.getSize(); i++){
			p.get(i)->swim();
			std::cout<<"\t"<<*(p.get(i))<<std::endl;
			double distance = sqrt(pow(p.get(i)->getX(),2) + (pow(p.get(i)->getY(), 2)));
			std::cout<<"The distance is "<<distance<<std::endl;
			if(distance>=100){
				std::cout<<"\t"<< *(p.get(i))<<" HAS DIED"<<std::endl;
				Fish* fnew = p.get(i);
				fnew->~Fish();
				std::cout<<"The current size of the pool is "<<p.getSize()<<std::endl;
			}
			if((p.get(i)->getX() == 0) && (p.get(i)->getY() == 0)){
				std::cout<<"\t New fishes have been born"<<std::endl;
				new Fish(0,0,(rand() * 10),Angle(30), Angle(120), &p);
			}
		}
	}
	
	std::cout<<"All Fishes have died"<<std::endl;
	return 0;
}
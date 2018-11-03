#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h>
#include "Log.h"
#include "Angle.h"
#include "Fish.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"
#include "Population.h"

int main(){
	Log& log = Log::getInstance(); 
	log.print("Welcome to the Fish World! There is plenty of Fish here\n");
	
	Population p;
	FlippyFish* a = new FlippyFish(0,0,1,true, Angle(30),Angle(60),&p);
	FlippyFish* b = new FlippyFish(0,0,2,true, Angle(45),Angle(45),&p);
	FlippyFish* c = new FlippyFish(0,0,3,true, Angle(30),Angle(60),&p);
	FlippyFish* d = new FlippyFish(0,0,4,true, Angle(45),Angle(45),&p);
	DrunkenFish* e = new DrunkenFish(0,0,15,false,&p);
	DrunkenFish* f = new DrunkenFish(0,0,16,false,&p);
	DrunkenFish* g = new DrunkenFish(0,0,17,false,&p);
	DrunkenFish* h = new DrunkenFish(0,0,18,false,&p);
	
	int time = 0;
	std::cout<<"Fishes in the pool at time 0 are:"<<std::endl;
	for(int i=0; i<p.getSize(); i++){
            std::cout<<"\t"<< *(p.get(i)) <<std::endl;			
	}
	bool ans;
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
				delete p.get(i);
				std::cout<<"The current size of the pool is "<<p.getSize()<<std::endl;
			}
		}
		if (p.getSize() == 1) 
			ans = p.get(0)->getRace();		
	}
	
	std::cout<<"All Fishes have died"<<std::endl;
	if (ans == true)
			std::cout<<"The last fish survive is a Flippy fish"<<std::endl;
	else
		std::cout<<"The last fish survive is a Drunken fish"<<std::endl;
	return 0;
}
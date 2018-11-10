#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h>
#include "Log.h"
#include "Angle.h"
#include "Fish.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"


int main(){
	typedef std::vector<Fish*> Population;
	Log& log = Log::getInstance(); 
	log.print("Welcome to the Fish World! There is plenty of Fish here\n");
	
	Population p;
	FlippyFish* a = new FlippyFish(0,0,1,true, Angle<double>(30),Angle<double>(60),&p);
/* 	FlippyFish* b = new FlippyFish(0,0,2,true, Angle<double>(45),Angle<double>(45),&p);
	FlippyFish* c = new FlippyFish(0,0,3,true, Angle<double>(30),Angle<double>(60),&p);
	FlippyFish* d = new FlippyFish(0,0,4,true, Angle<double>(45),Angle<double>(45),&p);
	DrunkenFish* e = new DrunkenFish(0,0,15,false,&p);
	DrunkenFish* f = new DrunkenFish(0,0,16,false,&p);
	DrunkenFish* g = new DrunkenFish(0,0,17,false,&p); */
	DrunkenFish* h = new DrunkenFish(0,0,18,false,&p);
	int size;
	int time = 0;
	std::cout<<"Fishes in the pool at time 0 are:"<<std::endl;
	for(Population::const_iterator it = p.begin(); it!= p.end(); ++it){
		std::cout<<"\t"<<*(*it)<<std::endl;
	}
	
	bool ans;
	while(!p.empty()){
		time++;		
		std::cout<<" "<<std::endl;
		std::cout<<"Current time is: "<<time<<std::endl;
		std::cout<<"The fishes' positions:"<<std::endl;
		for(std::vector<Fish*>::iterator it = p.begin(); it!=p.end(); ++it){
			(*it)->swim();
			std::cout<<"\t"<<*(*it)<<std::endl;
			double distance = sqrt(pow((*it)->getX(),2) + pow((*it)->getY(),2));
			std::cout<<"The distance is "<<distance<<std::endl;
			if(distance>=100){
				std::cout<<"\t"<<*(*it)<<" HAS DIED"<<std::endl;
				delete (*it);
				size = p.size();
				std::cout<<"The current size of the pool is "<<size<<std::endl;
			}
		}
		if (size == 1) 
			ans = p[0]->getRace();		
	}
	
	std::cout<<"All Fishes have died"<<std::endl;
	if (ans == true)
			std::cout<<"The last fish survive is a Flippy fish"<<std::endl;
	else
		std::cout<<"The last fish survive is a Drunken fish"<<std::endl;
	return 0;
}
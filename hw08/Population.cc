#include "Fish.h"
#include "Population.h"
#include <cstdio>

Population::Population(){
	this->fishes = new Fish*[30];
	
	this->numf = 0;
}

Population::Population(int max_fishes){
	this->fishes = new Fish*[max_fishes];
	this->numf = 0;
}

Population::~Population(){
	delete [] *fishes;
	delete [] fishes;
}

void Population::add(Fish& f){
	*fishes[numf] = f;
	numf++;
}

Fish* Population::get(int index){
	return fishes[index];
}

void Population::remove(Fish& f){
	int index = 0;
	while((index < numf) && (f != *fishes[numf]) )
		index++;
	
	if (index == numf) printf("The population does not have such fish");
	else
	{
		numf--;
		*fishes[index] = *fishes[numf];
	}
}

int Population::size(){
	return numf;
}



#include "Fish.h"
#include "Population.h"
#include <cstdio>
#include <iostream>

Population::Population(){}

Population::Population(int max_fishes){
	fishes = new Fish*[max_fishes];
	this->size = 0;	
}

Population::~Population(){
	printf("delete population");
	delete [] fishes;
	fishes = NULL;
}

void Population::add(Fish* f){
	fishes[size] = f;
	size++;
}

int Population::getSize(){
	return size;
}

Fish* Population::get(int index){
	return fishes[index];
}

void Population::remove(Fish* f){
	int index = 0;
	while((index < size) && (f!= fishes[index]))
		index++;
	
	if(index == size)
		printf("The fish is not in the list");
	
	else
	{
		size--;
		fishes[index] = fishes[size];
	}
}



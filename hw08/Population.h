#ifndef POPULATION_H
#define POPULATION_H
#include "Fish.h"

class Population{
	private:
		Fish** fishes;
		int size;
		
	public:
		Population();
		Population(int max_fishes);
		virtual ~Population();
		
		void add(Fish* f);
		
		int getSize();
		
		Fish* get(int index);
		
		void remove(Fish* f);
};

#endif
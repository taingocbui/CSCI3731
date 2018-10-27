#ifndef POPULATION_H
#define POPULATION_H
#include "Fish.h"

class Population{
	private:
		Fish** fishes;
		int numf;
		
	public:
		Population();
		Population(int max_fishes);		
		virtual ~Population();
		
		void add(Fish& f);
		
		Fish* get(int index);
		
		void remove(Fish& f);
		
		int size();
};

#endif
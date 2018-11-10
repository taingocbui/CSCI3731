#include <string>
#include "Log.h"
#include <iostream>
Log::Log(){}

Log::~Log(){}

Log& Log::getInstance(){
	static Log instance;
	return instance;
}

void Log::print(const std::string& message){
	std::cout<<message<<std::endl;
}
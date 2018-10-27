all: main

main.o: main.cc Log.h Angle.h Fish.h Population.h
	g++ -c -Werror main.cc

Log.o: Log.cc Log.h
	g++ -c -Werror Log.cc
	
Angle.o: Angle.cc Angle.h
	g++ -c -Werror Angle.cc
	
Fish.o: Fish.cc Fish.h
	g++ -c -Werror Fish.cc 
	
Population.o: Population.cc Population.h
	g++ -c -Werror Population.cc
	
main: main.o Log.o Angle.o Fish.o Population.o
	g++ -o main main.o Log.o Angle.o Fish.o Population.o
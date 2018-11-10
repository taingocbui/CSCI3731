all: main

main.o: main.cc Log.h Angle.h Fish.h FlippyFish.o DrunkenFish.o
	g++ -c -Werror main.cc

Log.o: Log.cc Log.h
	g++ -c -Werror Log.cc
	
Fish.o: Fish.cc Fish.h
	g++ -c -Werror Fish.cc 
	
FlippyFish.o: FlippyFish.cc FlippyFish.h Angle.h
	g++ -c -Werror FlippyFish.cc
	
Drunkenfish.o: DrunkenFish.cc DrunkenFish.h
	g++ -c -Werror DrunkenFish.cc
	
main: main.o Log.o Fish.o FlippyFish.o DrunkenFish.o
	g++ -o main main.o Log.o Fish.o FlippyFish.o DrunkenFish.o
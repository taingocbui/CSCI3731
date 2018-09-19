all: main

readPPM.o: readPPM.cc readPPM.h
	g++ -c -Werror readPPM.cc

main.o: main.cc readPPM.h
	g++ -c -Werror main.cc
	
main: main.o readPPM.o
	g++ -o main main.o readPPM.o
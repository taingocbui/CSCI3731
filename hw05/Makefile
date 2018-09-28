all: main

readPPM.o: readPPM.cc readPPM.h
	g++ -c -Werror readPPM.cc
	
writePPM.o: writePPM.cc writePPM.h
	g++ -c -Werror writePPM.cc

main.o: main.cc readPPM.h
	g++ -c -Werror main.cc
	
main: main.o readPPM.o writePPM.o
	g++ -o main main.o readPPM.o writePPM.o
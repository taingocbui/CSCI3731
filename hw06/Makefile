all: main

readPPM.o: readPPM.cc readPPM.h
	g++ -c -Werror readPPM.cc
	
writeJPEG.o: writeJPEG.cc writeJPEG.h
	g++ -c -Werror writeJPEG.cc

main.o: main.cc readPPM.h writeJPEG.h
	g++ -c -Werror main.cc
	
main: main.o readPPM.o writeJPEG.o 
	g++ -o main main.o readPPM.o writeJPEG.o -l libjpeg
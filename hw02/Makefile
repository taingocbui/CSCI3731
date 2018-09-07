all: main

insertionSort.o: insertionSort.cc insertionSort.h
	g++ -c -Werror insertionSort.cc

main.o: main.cc insertionSort.h
	g++ -c -Werror main.cc
	
main: main.o insertionSort.o
	g++ -o main main.o insertionSort.o
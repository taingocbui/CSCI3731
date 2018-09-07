#include <cstdio>
#include "insertionSort.h"
void insertionSort(int A[], int n){
	int i, key, j;
	for (j = 1; j < n; j++){
		key = A[j];
		i = j-1;
		while (i>=0 && A[i] > key){
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = key;
	}
}

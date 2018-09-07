#include <cstdio>
#include "insertionSort.h"
int main(){
	int A[] = {23, 31, 45, 9, 3, 11};
	int n = sizeof(A)/sizeof(A[0]);
	insertionSort(A, n);
	int i;
	for (i = 0; i < n; i++)
		printf(" %d ", A[i]);
	
	printf("\n");
	
	return 0;
}
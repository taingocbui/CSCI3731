#include <cstdio>
#include "swap.h"
int main(){
printf("Enter two integer numbers\n");
	fflush(stdout);
	int a,b,c;	
	scanf("%d %d", &a, &b);
	printf("a = %d, b = %d\n", a, b);
	swap(&a , &b);
	printf("After swap\na = %d, b = %d\n",a, b);
}
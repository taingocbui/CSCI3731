#include <cstdio>
#include "fib.h"
int fib(int f) {
	long c[100];
	c[0] = 0;
	c[1] = 1;
	for (int i = 2; i < 100; i++)
	{
		c[i] = c[i-1] + c[i-2];
	}
	return c[f];
}

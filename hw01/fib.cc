#include <cstdio>
int main() {
	long c[100];
	c[0] = 0;
	c[1] = 1;
	for (int i = 2; i < 100; i++)
	{
		c[i] = c[i-1] + c[i-2];
	}
	int f = 75;
	printf("Fib( %d ) = %d + \n", f, c[f]);
}

#include "../main.h"
#include <limits.h>

/**
 * main - tests for swap_int function
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	a = 1024;
	b = -4096;
	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);

	a = INT_MAX;
	b = INT_MIN;
	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);

	return (0);
}

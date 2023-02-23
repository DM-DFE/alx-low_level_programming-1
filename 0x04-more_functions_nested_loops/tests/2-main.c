#include "../main.h"
#include <stdio.h>

void test_mul(int a, int b)
{
	printf("%d * %d = %d\t| Your result: %d\t| [%s]\n", a, b, a * b, mul(a, b), (a * b == mul(a, b)) ? "OK" : "KO");
}

int main(void)
{
	/* Tests for mul */
	test_mul(98, 1024);
	test_mul(-402, 4096);
	test_mul(1024, -98);
	test_mul(-1024, -98);

	return (0);
}

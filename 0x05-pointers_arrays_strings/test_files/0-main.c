#include "../main.h"

/**
 * main - check the function reset_to_98
 * return: 0 (success)
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);

	n = -4096;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);

	n = INT_MAX;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);

	n = INT_MIN;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);

	return (0);
}

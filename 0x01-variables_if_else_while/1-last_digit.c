#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints the last digit of the number stored
 * in the variable n and if it is greater than 5, less than 6 and not 0.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int	n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (!n)
		printf("%d is zero\n", n);
	else
	{
		char *sign = (n % 10 > 5) ? "is greater than 5"
				: "is less than 6";
		char *is_zero = (n % 10 == 0) ? "is 0" : "not 0";
		printf("Last digit of %d is %d and %s and %s\n", n, n % 10, sign , is_zero);
	}
	return (0);
}

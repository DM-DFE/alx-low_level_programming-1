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
		int last_digit = n % 10;

		char *sign = (n % 10 > 5) ? "and is greater than 5"
				: "and is less than 6";

		char *is_zero = (n % 10 == 0) ? "and is 0" : "and not 0";

		printf("Last digit of %d is %d %s %s \n", n, last_digit,
		(last_digit) ? sign : "", (last_digit < 6) ? is_zero : "");

	}
	return (0);
}

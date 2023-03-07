#include <limits.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * check_task - check the code for alx School students.
 * @param n
 * @param expected
 */
void check_task(int n, int expected) {
	int r = print_last_digit(n);

	if (r != expected) {
		printf("\nFAIL: print_last_digit(%d) returned %d but expected %d\n", n, r, expected);
		exit(1);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	write(1, "print_last_digit: ", 18);

	check_task(98, 8);
	check_task(0, 0);
	check_task(-1024, 4);
	check_task(INT_MAX, 7);
	check_task(INT_MIN, 8);
	check_task(1, 1);

	printf("\nAll good!\n");

	return (0);
}

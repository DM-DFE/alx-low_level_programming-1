#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * check_task - check the code for Holberton School students.
 * @param n
 * @param expected
 */
void check_task(int n, int expected)
{
	int r = _abs(n);

	if (r != expected) {
		printf("FAIL: _abs(%d) returned %d instead of %d\n", n, r, expected);
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
	check_task(-1, 1);
	check_task(0, 0);
	check_task(1, 1);
	check_task(-98, 98);
	check_task(INT_MIN, INT_MIN);
	check_task(INT_MAX, INT_MAX);
	check_task(12, 12);
	check_task(0x0F02, 0x0F02);

	printf("All good!\n");

	return (0);
}

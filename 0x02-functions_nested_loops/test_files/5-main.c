#include <limits.h>
#include "main.h"
#include <stdio.h>

#define POSITIVE 1
#define NEGATIVE -1
#define ZERO 0

/**
 * check_sign - Check if the task is correct
 *
 * @param i
 * @param expected
 */
void check_task(int i, int expected)
{
	char *tab= (i == INT_MAX || i == INT_MIN) ? "\t" : "\t\t";

	printf(" | Testing with '%i' %s- [%s]\n", i, tab, print_sign(i) == expected ? "OK" : "KO");
}


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{

	check_task(98, POSITIVE);
	check_task(0, ZERO);
	check_task(0xff, POSITIVE);
	check_task(-1, NEGATIVE);
	check_task(99, POSITIVE);
	check_task(INT_MAX, POSITIVE);
	check_task(INT_MIN, NEGATIVE);
	check_task(-4, NEGATIVE);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("times table of 2:\n");
	print_times_table(2);

	printf("times table of 10:\n");
	print_times_table(10);

	printf("times table of 13:\n");
	print_times_table(13);

	printf("times table of -2:\n");
	print_times_table(-2);

	printf("times table of 0:\n");
	print_times_table(0);

	printf("times table of 100:\n");
	print_times_table(100);

	return (0);
}

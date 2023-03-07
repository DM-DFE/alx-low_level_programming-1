#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
 * check_task - check the code for alx School students.
 *
 * @param num1
 * @param num2
 * @param expected
 */
void check_task(int num1, int num2, int expected)
{
	int actual = add(num1, num2);

	if (actual == expected)
		printf("OK: %d\t+ %d\t= %d\n", num1, num2, actual);
	else
		printf("FAILED: %d + %d should be %d but was %d\n", num1, num2, expected, actual);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{

	check_task(89, 9, 98);
	check_task(0, 9, 9);
	check_task(0, 0, 0);
	check_task(89, 0, 89);
	check_task(-89, 12, -77);
	check_task(12, 12, 24);
	check_task(-89, -98, -187);

	return (0);
}

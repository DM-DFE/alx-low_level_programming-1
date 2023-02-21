#include "main.h"
#include <stdio.h>

#define TRUE 1
#define FALSE 0

/**
 * check_task - Check if the task is correct
 *
 * @param c
 * @param got
 * @param expected
 */
void check_task(char c, int got, int expected)
{
	printf("Testing with c = '%c' \t- [%s]\n", c, got == expected ? "OK" : "KO");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	check_task('A', _islower('A'), FALSE);
	check_task('o', _islower('o'), TRUE);
	check_task('H', _islower('H'), FALSE);
	check_task(108, _islower(108), TRUE);
	check_task('c', _islower('c'), TRUE);
	check_task('I', _islower('I'), FALSE);
	check_task('s', _islower('s'), TRUE);
	check_task(70, _islower(70), FALSE);
	check_task(20, _islower(20), FALSE);
	check_task('U', _islower('U'), FALSE);
	check_task('n', _islower('n'), TRUE);
	check_task(0, _islower(0), FALSE);

	return (0);
}

#include "main.h"
#include <stdio.h>

#define TRUE 1
#define FALSE 0

/**
 * test_isalpha - Test the _isalpha function
 *
 * @n: Number to pass to _isalpha function
 */
void test_isalpha(int n)
{
	int r;

	r = _isalpha(n);
	_putchar(r + '0');
	_putchar('\n');
}

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
	check_task('A', _isalpha('A'), TRUE);
	check_task('o', _isalpha('o'), TRUE);
	check_task(108, _isalpha(108), TRUE);
	check_task(';', _isalpha(';'), FALSE);
	check_task('C', _isalpha('C'), TRUE);
	check_task('i', _isalpha('i'), TRUE);
	check_task('s', _isalpha('s'), TRUE);
	check_task('F', _isalpha('F'), TRUE);
	check_task('9', _isalpha('9'), FALSE);
	check_task('M', _isalpha('M'), TRUE);
	check_task('&', _isalpha('&'), FALSE);
	check_task('H', _isalpha('H'), TRUE);

	return (0);
}

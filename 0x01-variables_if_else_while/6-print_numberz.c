#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0 using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{

	for (char i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

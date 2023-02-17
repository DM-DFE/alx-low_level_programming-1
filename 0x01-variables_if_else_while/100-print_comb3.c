#include <stdio.h>

/**
 * main - A program prints all possible
 * different combinations of two digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			char *comma = (i < 8) ? ", " : "\n";

			while (*comma)
				putchar(*(comma++));
		}
	}

	return (0);
}

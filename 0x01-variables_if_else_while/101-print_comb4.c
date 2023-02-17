#include <stdio.h>

/**
 * main - A program that  prints all possible different
 * combinations of three digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			for (int k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				char *comma = (i < 7) ? ", " : "\n";

				while (*comma)
					putchar(*(comma++));
			}
		}
	}

	return (0);
}

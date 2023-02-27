#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int i = 0;
	int str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	while (str[i])
	{
		if (i < str_len / 2)
			i++;
		else
			_putchar(str[i++]);
	}

	_putchar('\n');
}

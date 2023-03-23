#include "variadic_functions.h"
#include <stdio.h>

/**
 * is_format - checks if a character is a valid format specifier
 *
 * @c: character to check
 */
int is_format(char c)
{
	return (c == 'c' || c == 'i' || c == 'f' || c == 's');
}

/**
 * get_next_format - gets the next format specifier in a string
 *
 * @format: string to search
 * @i: index to start searching from
 * Return: index of next format specifier, or -1 if none found
 */
int get_next_format(const char *format, int i)
{
	while (format[i])
	{
		if (is_format(format[i]))
			return (i);
		i++;
	}
	return (-1);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s;

	va_start(ap, format);
	while (format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				printf("%s", s == NULL ? "(nil)" : s);
				break;
			default:
				i++;
				continue;
		}
		i = get_next_format(format, i + 1);
		if (i == -1)
			break;
		printf(", ");
	}
	printf("\n");
	va_end(ap);
}

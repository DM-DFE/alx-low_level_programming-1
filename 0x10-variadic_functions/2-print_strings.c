#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	for (i = 0; i < n; i++)
	{
		va_start(ap, n);
		str = va_arg(ap, char *);
		printf("%s%s", str == NULL ? "(nil)" : str,
			   (i < n - 1 && separator != NULL) ? separator : "");
	}
	printf("\n");
	va_end(ap);
}

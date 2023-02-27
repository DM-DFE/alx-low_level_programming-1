#include "../main.h"

/**
 * main - tests the rev_string function
 * Return: 0
 */
int main(void)
{
	char c[10] = "My school";

	printf("%s\n", c);
	rev_string(c);
	printf("%s\n", c);

	return (0);
}

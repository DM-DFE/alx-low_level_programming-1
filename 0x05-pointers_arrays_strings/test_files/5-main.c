#include "../main.h"

/**
 * main - tests the rev_string function
 * Return: 0
 */
int main(void)
{
	char c[10] = "My school";
	char c2[10] = "Holberton";
	char c3[446] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	char c4[10] = "";

	printf("%s\n", c);
	rev_string(c);
	printf("%s\n", c);

	printf("%s\n", c2);
	rev_string(c2);
	printf("%s\n", c2);

	printf("%s\n", c3);
	rev_string(c3);
	printf("%s\n", c3);

	printf("%s\n", c4);
	rev_string(c4);
	printf("%s\n", c4);

	return (0);
}

#include "../main.h"

/**
 * main - Test the _strlen function.
 * Return: 0
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);

	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	len = _strlen(str);
	printf("%d\n", len);

	str = "";
	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}

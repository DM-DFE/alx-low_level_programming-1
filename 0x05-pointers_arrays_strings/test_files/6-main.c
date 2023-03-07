#include "main.h"

/**
 * main - Test the function puts2
 * Return: Always 0
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);

	str = "Alx School";
	puts2(str);

	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	puts2(str);

	str = "";
	puts2(str);

	return (0);
}

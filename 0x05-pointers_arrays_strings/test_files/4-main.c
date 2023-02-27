#include "../main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	printf("Length: %lu\n", strlen(str));
	print_rev(str);

	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	printf("Length: %lu\n", strlen(str));
	print_rev(str);

	str = "";
	printf("Length: %lu\n", strlen(str));
	print_rev(str);

	str = "Holberton!";
	printf("Length: %lu\n", strlen(str));
	print_rev(str);

	return (0);
}

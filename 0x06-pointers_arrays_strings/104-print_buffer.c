#include "main.h"

/**
* print_buffer - prints a buffer
 * @b: the address of the memory to print
 * @size: the size of the memory to print
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			(i + j < size) ? printf("%02x", b[i + j]) : printf("  ");
			(j % 2) ? printf(" ") : 0;
		}
		printf(" ");
		for (k = 0; k < 10; k++)
			(i + k < size) ? printf("%c", (b[i + k] >= 32 && b[i + k] <= 126) ?
				b[i + k] : '.') : 0;
		printf("\n");
	}
	(size <= 0) ? printf("\n") : 0;
}

#include "main.h"

/**
* print_buffer - prints a buffer
 * @b: the address of the memory to print
 * @size: the size of the memory to print
 */
void print_buffer(char *b, int size)
{
	int offset, byte_index, char_index;

	for (offset = 0; offset < size; offset += 10)
	{
		printf("%08x: ", offset);
		for (byte_index = 0; byte_index < 10; byte_index++)
		{
			if (offset + byte_index >= size)
				printf("  ");
			else
				printf("%02x", b[offset + byte_index]);
			if (byte_index % 2 && byte_index)
				printf(" ");
		}
		for (char_index = 0; char_index < 10; char_index++)
		{
			if (offset + char_index < size)
			{
				if (b[offset + char_index] >= 32 && b[offset + char_index] <= 126)
					printf("%c", b[offset + char_index]);
				else
					printf(".");
			}
			if (offset >= size)
				continue;
			printf("\n");
		}
	}
	if (size <= 0)
		printf("\n");
}

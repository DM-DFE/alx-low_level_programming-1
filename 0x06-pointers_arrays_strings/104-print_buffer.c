#include "main.h"

/**
 * print_offset - prints the offset of a buffer
 * @offset: the offset of the memory to print
 */
void print_offset(int offset)
{
	printf("%08x: ", offset);
}

/**
 * print_hex - prints the hex of a buffer
 * @b: the address of the memory to print
 * @size: the size of the memory to print
 * @offset: the offset of the memory to print
 */
void print_hex(char *b, const int *size, const int *offset)
{
	int byte_index;

	for (byte_index = 0; byte_index < 10; byte_index++)
	{
		(*offset + byte_index < *size) ? printf("%02x", b[*offset + byte_index])
									 : printf("  ");
		(byte_index % 2) ? printf(" ") : 0;
	}
}

/**
 * print_content - prints the content of a buffer
 * @b: the address of the memory to print
 * @size: the size of the memory to print
 * @offset: the offset of the memory to print
 */
void print_content(char *b, const int *size, const int *offset)
{
	int char_index;

	for (char_index = 0; char_index < 10; char_index++)
	{
		if (*offset + char_index < *size)
		{
			if (b[*offset + char_index] >= 32 && b[*offset + char_index] <= 126)
				printf("%c", b[*offset + char_index]);
			else
				printf(".");
		}
	}
}

/**
* print_buffer - prints a buffer
 * @b: the address of the memory to print
 * @size: the size of the memory to print
 */
void print_buffer(char *b, int size)
{
	int offset;

	if (b == NULL)
		return;

	for (offset = 0; offset < size; offset += 10)
	{
		print_offset(offset);
		print_hex(b, &size, &offset);
		print_content(b, &size, &offset);
		printf("\n");
	}
	(size <= 0) ? printf("\n") : 0;
}

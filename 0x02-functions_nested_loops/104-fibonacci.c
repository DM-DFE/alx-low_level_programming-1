#include <stdio.h>

/*
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/
int main(void)
{
	int i;
	size_t prev = 1, curr = 1, next;

	for (i = 0; i < 98; i++)
	{
		printf("%lu%s", curr, i == 97 ? "\n": ", ");
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	return (0);
}

#include <unistd.h>

/**
 * main - A program that prints a string without using printf or puts.
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\",", 32);
	write(STDERR_FILENO, " - Dora Korpar, 2015-10-19\n", 26);

	return (1);
}

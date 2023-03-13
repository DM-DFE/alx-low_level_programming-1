#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height);
char **free_grid(char **grid, int height);
void print_grid(char **grid, int width, int height);

/**
 * main - test alloc_grid
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	print_grid(grid, 6, 4);
	free_grid(grid, 6);

	grid = alloc_grid(0, 0);
	if (grid == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	print_grid(grid, 0, 0);
	free_grid(grid, 0);

	grid = alloc_grid(128, 128);
	if (grid == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	print_grid(grid, 128, 128);
	free_grid(grid, 128);

	grid = alloc_grid(48, 48);
	if (grid == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	print_grid(grid, 48, 48);
	free_grid(grid, 48);

	grid = alloc_grid(-1, -1);
	if (grid == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	print_grid(grid, -1, -1);
	free_grid(grid, -1);

	return (0);
}

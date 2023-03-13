#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int, int);
void free_grid(int **, int);

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;
	int h;
	int w;

	h = 100;
	w = 200;
	grid = alloc_grid(w, h);
	if (grid == NULL)
	{
		return (1);
	}
	free_grid(grid, h);

	grid = alloc_grid(20, 10);
	if (grid == NULL)
		return (1);
	free_grid(grid, 10);

	grid = alloc_grid(200, 100);
	if (grid == NULL)
		return (1);
	free_grid(grid, 100);

	grid = alloc_grid(1, 1);
	if (grid == NULL)
		return (1);
	free_grid(grid, 1);

	free_grid(NULL, 0);
	printf("OK\n");

	return (0);
}

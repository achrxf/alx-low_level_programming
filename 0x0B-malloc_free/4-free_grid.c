#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid.
 * @grid: int
 * @height: int
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

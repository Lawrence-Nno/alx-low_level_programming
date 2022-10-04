#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Is a func that frees 2 dimensional grids
 * @grid: The gird to free
 * @height: Height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

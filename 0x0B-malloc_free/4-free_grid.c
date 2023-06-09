#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 ** free_grid - Function that frees a 2 dimensional grid previously created
 ** @grid: grid to free up
 ** @height: the height of the grid
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

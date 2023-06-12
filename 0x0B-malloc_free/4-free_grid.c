#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a created 2D array, alloc_grid.c
 * @grid: the grid to be freed
 * @height: height of the grid
 * Returns: void
 */
void free_grid(int **grid, int height)
{
	int mem;

	for (mem = 0; mem < height; mem++)
	{
		free(grid[mem]);
	}
	free(grid);
}

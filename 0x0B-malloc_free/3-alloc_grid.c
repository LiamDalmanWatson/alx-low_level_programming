#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2D array of int
 * @width: width of the grid
 * @height: of the grid
 * Return: ptr to 2D array, or NULL if width or height is 0 or neg or failure
 */
int **alloc_grid(int width, int height)
{
	int wdth, hght, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (hght = 0; hght < height; hght++)
	{
		grid[hght] = malloc(sizeof(int) * width);
		if (grid[hght] == NULL)
		{
			for (; hght >= 0; hght--)
			{
				free(grid[hght]);
			}
			free(grid);
			return (NULL);
		}
		for (wdth = 0; wdth < height; wdth++)
		{
		grid[hght][wdth] = 0;
		}
	}
	return (grid);
}

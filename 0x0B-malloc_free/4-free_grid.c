#include <stdlib.h>

/**
 * free_grid - free memory allocated for a 2D grid
 * @grid: the 2D grid to be freed
 * @height: the height of the grid
 *
 * Return: No return value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}


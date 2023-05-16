#include "main.h"

/**
 * free_grid - free 2d array
 * @grid: 2d array
 * @height: height
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

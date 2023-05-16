#include "main.h"

/**
 * free_2d - free 2d array
 * @array: 2d array
 * @height: height
 */
void free_2d(int **array, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(array[i]);
	}
	free(array);
}

/**
 * alloc_grid - alloc 2d array
 * @width: width
 * @height: height
 *Return: allocated grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * (height));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (!grid[i])
		{
			free_2d(grid, i);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}


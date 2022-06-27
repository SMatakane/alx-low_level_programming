#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - some tron stuff
 * @width: math
 * @height: math
 * Return: f=ma ptr
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}

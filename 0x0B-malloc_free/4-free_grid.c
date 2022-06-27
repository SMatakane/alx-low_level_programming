#include "main.h"
#include <stdlib.h>

/**
 * free_grid - son of flynn
 * @grid: tensor
 * @height: math
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

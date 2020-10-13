#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - this functions freed a grid.
 * @grid: the grid.
 * @height: the height of the grid.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

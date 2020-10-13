#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - this function allocate a grid.
 * @width: width of the grid.
 * @height: Height oghe grid.
 * Return: the grid.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			for (b = 0; b <= a; b++)
			{
				free (array[b]);
			}
			free (array);
			return (NULL);
		}
	}
	return (array);
}

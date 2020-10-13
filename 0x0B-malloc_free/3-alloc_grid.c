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
			return (NULL);
		}
	}
	return (array);
}

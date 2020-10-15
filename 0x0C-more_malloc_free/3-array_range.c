#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - this function creates a range array
 * @min: the min number.
 * @max: the max number.
 * Return: the range array.
 */
int *array_range(int min, int max)
{
	int *a;
	int b, c, d;

	c = 0;
	d = 0;
	if (min > max)
	{
		return (NULL);
	}
	for (b = min; b <= max; b++)
	{
		c++;
	}
	a = malloc((c) * sizeof(int));
		if (a == NULL)
		{
			return (NULL);
		}
	for (b = min; b <= max; b++)
	{
		a[d] = b;
		d++;
	}
	return (a);
}

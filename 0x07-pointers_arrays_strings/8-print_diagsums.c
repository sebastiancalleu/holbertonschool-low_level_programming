#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - this function prints the diagonals
 * @a: it is the matriz.
 * @size: is the size of the matriz.
 *
 */
void print_diagsums(int *a, int size)
{
	int d, b, c;

	b = 0;
	c = 0;
	for (d = 0; d <= size * size; d = d + size + 1)
	{
		b = b + a[d];
	}
	for (d = size - 1; d < size * size - 1; d = d + size - 1)
	{
		c = c + a[d];
	}
	printf("%d, %d\n", b, c);
}

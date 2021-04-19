#include "search_algos.h"

/**
 * printarr - function that prints the array.
 * @array: the array
 * @bottom: the down limit.
 * @top: the top limit.
 */

void printarr(int *array, unsigned int bottom, unsigned int top)
{
	printf("Searching in array: ");
	while (bottom < top)
	{
		if (bottom == top - 1)
			printf("%d\n", array[bottom]);
		else
			printf("%d, ", array[bottom]);
		bottom++;
	}
}

/**
 * inferior - function that select the lower array.
 * @middle: the middle index.
 * @top: the top index.
 * @bottom: the bottom index.
 */

void inferior(unsigned int *middle, unsigned int *top, unsigned int *bottom)
{
	int diff;

	*top = *middle;
	diff = *top - *bottom;
	if (diff % 2 == 0)
		*middle = diff / 2 + *bottom - 1;
	else
		*middle = diff / 2 + *bottom;
}

/**
 * superior - function that select the higher array.
 * @middle: the middle index.
 * @top: the top index.
 * @bottom: the bottom index.
 */

void superior(unsigned int *middle, unsigned int *top, unsigned int *bottom)
{
	int diff;

	*bottom = *middle + 1;
	diff = *top - *bottom;
	if (diff % 2 == 0)
		*middle = diff / 2 + *bottom - 1;
	else
		*middle = diff / 2 + *bottom;
}

/**
 * binary_search - function that finds the index of a value
 * @array: the array
 * @size: the size of the array
 * @value: the value to find.
 * Return: the index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int middle, top, bottom = 0;

	top = size;
	if (top % 2 == 0)
		middle = top / 2 - 1;
	else
		middle = top / 2;
	printarr(array, bottom, top);
	while (1 < 2)
	{
		if ((middle == bottom) && (array[middle] != value) && (middle + 1 == top))
			return (-1);
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
		{
			printarr(array, bottom, middle);
			inferior(&middle, &top, &bottom);
		}
		else
		{
			printarr(array, (middle + 1), top);
			superior(&middle, &top, &bottom);
		}
	}
}

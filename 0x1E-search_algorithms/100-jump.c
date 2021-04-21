#include "search_algos.h"

/**
 * jump_search - function to search a index.
 * @array: the array.
 * @size: the size of the array.
 * @value: the value of the array.
 * Return: the index.
 */
/*
int jump_search(int *array, size_t size, int value)
{
	int counter, root, init;

	if (array == NULL)
		return (-1);
	root = sqrt((int)size);
	for (counter = 0; counter < (int)size; counter += root)
	{
		printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
		if (array[counter + root] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			counter, counter + root);
			break;
		}
	}
	init = counter;
	for (; counter <= (init + root); counter++)
	{
		if ((counter == size - 1) && (array[counter] != value))
			return (-1);
		printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
	}
	return (-1);
}
*/
int jump_search(int *array, size_t size, int value)
{
	int prev = 0, jump = sqrt((int)size), pos = 0;

	if (array == NULL)
		return (-1);
	for (; prev <= (int)size - 1; prev += jump)
	{
		if (array[prev] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	pos = prev - jump;
	printf("Value found between indexes [%d] and [%d]\n", pos, prev);
	for (; pos <= prev; pos++)
	{
		if (pos < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
		}
	}
	return (-1);
}
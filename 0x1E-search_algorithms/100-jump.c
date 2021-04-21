#include "search_algos.h"

/**
 * jump_search - function to search a index.
 * @array: the array.
 * @size: the size of the array.
 * @value: the value of the array.
 * Return: the index.
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int counter, root, init;

	if (array == NULL)
		return (-1);
	root = sqrt(size);
	for (counter = 0; counter < size; counter = counter + root)
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
		printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
		if ((counter == size - 1) && (array[counter] != value))
			return (-1);
		if (array[counter] == value)
			return (counter);
	}
	return (-1);
}

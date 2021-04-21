#include "search_algos.h"

/**
 * linear_search - searching for a index in array
 * @array: the array
 * @size: the size of the array
 * @value: the value to find.
 * Return: the index when is found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int counter;

	if (array == NULL)
		return (-1);
	for (counter = 0; counter < size; counter++)
	{
	printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
	if (array[counter] == value)
	  return (counter);
	}
	return (-1);
}
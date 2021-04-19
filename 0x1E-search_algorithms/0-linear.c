#include "search_algos.h"
/**
 * linear_search - searching for a index in array
 * @array: the array
 * @size: the size of the array
 * @value: the value to find.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int counter;

	if (array == NULL)
		return(-1);
	for(counter = 0; counter < size; counter++)
	{
		printf("Value checked array[%d] = [%d]", counter, array[counter]);
		if (array[counter] == value)
			break;
	}
	if ((counter == size) && (array[counter] != value))
		return(-1);

	return(counter);
}
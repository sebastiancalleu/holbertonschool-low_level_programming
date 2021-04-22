#include "search_algos.h"

/**
 * interpolation_search - function to found the index of a value.
 * @array: the array.
 * @size: size of the array.
 * @value: value to search.
 * Return: the index.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	high = (int)size - 1;
	for (low = 0; low <= high;)
	{
		if ((low == high) && (array[low] != value))
			return (-1);
		pos = low + (((double)(high - low) / (array[high]
		- array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}

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
	int counter = 0, root, init;

	if (array == NULL)
		return (-1);
	root = sqrt((int)size);
	while (1)
	{
		if (counter > (int)size + root)
			return (-1);
		if (array[counter] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			counter - root, counter);
			init = counter - root;
			for (; init <= counter; init++)
			{
				if ((init == (int)size - 1) && (array[init] != value))
				{
					printf("Value checked array[%d] = [%d]\n", init, array[init]);
					return (-1);
				}
				printf("Value checked array[%d] = [%d]\n", init, array[init]);
				if (array[init] == value)
					return (init);
			}
		}
		else
			printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
		counter += root;
	}
	return (-1);
}

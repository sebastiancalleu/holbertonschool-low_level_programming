#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - this function print an array.
 * @array: the array.
 * @size: the size of the array.
 * @action: the function pointer.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

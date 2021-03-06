#include "function_pointers.h"
/**
 * int_index - this function search for a int inside and array
 * @array: the array.
 * @size: the size of the array.
 * @cmp: the function pointer.
 * Return: the index of the integer inside the array.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size > 0 && array && cmp)
	{
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	}
		return (-1);
}

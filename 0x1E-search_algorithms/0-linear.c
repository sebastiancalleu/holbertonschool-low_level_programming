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
  unsigned int i = 0;

  if (!array)
    return (-1);
  for (i = 0; i < size; i++)
  {
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    if (array[i] == value)
      return (i);
  }
  return (-1);
}

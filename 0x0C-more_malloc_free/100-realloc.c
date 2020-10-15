#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - this function realloc memory.
 * @ptr: the allocated memory.
 * @old_size: the old size.
 * @new_size: the new size.
 * Return: the new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && old_size > 0)
	{
		free(ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

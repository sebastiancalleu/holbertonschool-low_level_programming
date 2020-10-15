#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - this function allocate memory.
 * @b: size
 * Return: the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	else
	{
		return (a);
	}
}

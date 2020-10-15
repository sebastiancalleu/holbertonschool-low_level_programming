#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - this function allocates memory for an array.
 * @nmemb: elements number.
 * @size: size of the elements.
 * Return: the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	b = malloc(nmemb * size);
	if (b == NULL)
	{
	return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
	b[a] = '\0';
	}
	return (b);
}

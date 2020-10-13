#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array.
 * @size: size of the array.
 * @c: first character.
 * Return: the array.
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	b = malloc(sizeof(char) * size);

	if (b == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			b[a] = c;
		}
	}
	return (b);
}

#include "holberton.h"
#include "stdlib.h"
/**
 * _strdup - this function copy a string.
 * @str: the string.
 * Return: a pointer to a copy of the string.
 */
char *_strdup(char *str)
{
	unsigned int a;
	char *b;

	b = malloc((sizeof(str) + 1) * sizeof(char));
	if (b == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
	for (a = 0; str[a]; a++)
	{
		b[a] = str[a];
	}
	b[a] = '\0';
	return (b);
	}
}

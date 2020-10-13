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

	b = malloc(sizeof(str));
	if (sizeof(str) == 0 || b == NULL)
	{
		return (NULL);
	}
	else
	{
	for (a = 0; a <= sizeof(str); a++)
	{
		b[a] = str[a];
	}
	return (b);
	}
}

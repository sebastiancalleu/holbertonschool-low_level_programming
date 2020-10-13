#include "holberton.h"
#include "stdlib.h"
/**
 * _strdup - this function copy a string.
 * @str: the string.
 * Return: a pointer to a copy of the string.
 */
char *_strdup(char *str)
{
	int a, c;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; str[c]; c++)
	{
	}
	b = malloc((c + 1) * sizeof(char));
	if (b == NULL)
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

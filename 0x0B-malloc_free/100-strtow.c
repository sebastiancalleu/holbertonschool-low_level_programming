#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - this function splits a string by words.
 * @str: the string.
 * Return: the words.
 */
char **strtow(char *str)
{
	int a, c, d;
	char **w;

	c = 0;
	d = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
	{
		if (str[a] != ' ')
		{
			d++;
			if (str[a - 1] == ' ')
			{
				c++;
			}
		}
	}
	if (str[0] != ' ')
	{
		c++;
	}
	w = malloc(c * sizeof(char *));
	if (w == NULL)
	{
		return (NULL);
	}
	return (w);
}

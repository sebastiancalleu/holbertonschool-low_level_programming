#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - this function splits a string by words.
 * @str: the string.
 * Return: the words.
 */
char **strtow(char *str)
{
	int a, b, c, d, e, f;
	char **w;
	c = 0;
	d = 0;
	e = 0;
	f = 0;
	for (a = 0; str[a]; a++)
	{
		if (str[a] != ' ')
		{
			d++;
			if (str[a-1] == ' ')
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
	for (a = 0; a < c; a++)
	{
		w[a] = malloc(20 * sizeof(char));
		if (w == NULL)
		{
			for (b = 0; b <= a; b++)
			{
				free(w[b]);
			}
			free(w);
			return (NULL);
		}
	}
	for (a = 0; str[a]; a++)
	{
		if (str[a] != ' ')
		{
			for (b = a; str[b]; b++)
			{
				if (str[b] != ' ')
				{
					w[e][f] = str[b];
					f++;
				}
				else
				{
					w[e][f] = '\0';
					e++;
					a = b;
					f = 0;
					break;
				}
			}
		}	
	}
	return (w);
}

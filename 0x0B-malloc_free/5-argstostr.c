#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - this function prints the args of a function.
 * @ac: arguments counter.
 * @av: argument string.
 * Return: the string.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d, e, f;
	char *str;

	c = 0;
	d = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
		{
			d = d + 1;
		}
	}
	str = malloc((d + ac) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}


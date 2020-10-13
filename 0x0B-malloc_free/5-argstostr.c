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
	int a;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	str = malloc(1000);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		strcat(str, av[a]);
		strcat(str, "\n");
	}
	return (str);
}

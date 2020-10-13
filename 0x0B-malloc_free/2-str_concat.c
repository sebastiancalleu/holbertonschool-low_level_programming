#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - this function concatenate two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: the fusion string.
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, e, f;
	char *d;

	for (a = 0; s1[a]; a++)
	{
	}
	for (b = 0; s2[b]; b++)
	{
	}
	d = malloc((a + b + 1) * sizeof(char));
	if (d != NULL)
	{
	for (c = 0; s1[c]; c++)
	{
		d[c] = s1[c];
	}
	f = 0;
	for (e = c; s2[f]; e++)
	{
		d[e] = s2[f];
		f++;
	}
	d[e] = '\0';
	return (d);
	}
	else
	{
		return (NULL);
	}
}

#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - this function concat 2 strings with a parameter.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters to concat.
 * Return: the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, c;

	for (a = 0; s2[a]; a++)
	{
	}
	for (c = 0; s1[c]; c++)
	{
	}
	if (a > n)
		b = n;
	else
		b = a;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc((c + b + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < c; a++)
	{
		str[a] = s1[a];
	}
	for (c = 0; c < b; c++)
	{
		str[a] = s2[c];
		a++;
	}
	str[a] = '\0';
	return (str);
}

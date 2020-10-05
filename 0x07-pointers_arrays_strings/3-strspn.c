#include "holberton.h"
/**
 * _strspn - this function finds bytes.
 * @s: string to compare.
 * @accept: string to search.
 * Return: integer with the number of bytes accepted.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;

	c = 0;
	d = 0;
	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				c = c + 1;
			}
		}
		if (c != d)
		{
			d = c;
				}
		else
		{
			break;
				}
	}
	return (c);
}

#include "holberton.h"
/**
 * _strpbrk - this function locates bytes.
 * @s: string objetive
 * @accept: string that contains the characters to search.
 * Return: the pointer of s.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
do {
	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	{
		return (s);
	}
	}
} while (*s++);
return (0);
}

#include "holberton.h"
/**
 * _memset - this function modify the memory of a pointer.
 * @s: pointer to modify.
 * @b: character to insert.
 * @n: number of bytes to modify.
 * Return: modify buffer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*s[a] = b;
	return (s);
}

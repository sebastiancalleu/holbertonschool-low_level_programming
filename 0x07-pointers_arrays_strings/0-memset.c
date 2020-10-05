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
	while (n-- > 0)
		*s++ = b;
	return (s);
}

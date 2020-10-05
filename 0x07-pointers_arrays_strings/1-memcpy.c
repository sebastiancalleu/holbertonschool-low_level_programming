#include "holberton.h"
/**
 * _memcpy - this function copies an area from one source to a dest.
 * @dest: is the destination pointer.
 * @src: is the source pointer.
 * @n: is the number of bytes to copy.
 * Return: is the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

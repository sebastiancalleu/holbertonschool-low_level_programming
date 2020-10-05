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
	while (n--)
		*dest++ = *src++;
	return (dest);
}

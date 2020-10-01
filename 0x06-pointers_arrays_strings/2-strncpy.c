#include "holberton.h"
/**
 * _strncpy - this function copy n chars to a string
 * @dest: input string.
 * @src: input string.
 * @n: input integer.
 * Return: the result string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[a] = src[a];
}
for (; a < n; a++)
{
	dest[a] = '\0';
}
return (dest);
}

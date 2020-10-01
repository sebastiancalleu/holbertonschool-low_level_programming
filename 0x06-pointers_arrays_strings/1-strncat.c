#include "holberton.h"
/**
 * _strncat - this function copies a number of characteres from one string.
 * @dest: input string.
 * @src: input string.
 * @n: input integer.
 * Return: the result string.
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b, c, d;
d = 0;
for (a = 0; dest[a] != '\0'; a++)
{
}
for (b = 0; src[b] != '\0'; b++)
{
}
for (c = a; (c <= a + n - 1) && (src[d]); c++)
{
dest[c] = src[d];
d++;
}
return (dest);
}

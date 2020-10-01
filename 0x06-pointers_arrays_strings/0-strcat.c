#include "holberton.h"
/**
 * _strcat - this function concatenates two strings.
 * @dest: input string.
 * @src: input string.
 * Return: concatenate string.
 */
char *_strcat(char *dest, char *src)
{
int a, b, c, d;
d = 0;
for (a = 0; dest[a] != '\0'; a++)
{
}
for (b = 0; src[b] != '\0'; b++)
{
}
for (c = a; c <= a + b; c++)
{
dest[c] = src[d];
d++;
}
return (dest);
}

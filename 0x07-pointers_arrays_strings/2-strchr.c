#include "holberton.h"
/**
 * _strchr - this funtcion locates a character in a string.
 * @s: the string.
 * @c: the character to find.
 * Return: the character in the string.
 */
char *_strchr(char *s, char c)
{
do {
	if (*s == c)
	{
		return (s);
	}
} while (*s++);
return (0);
}

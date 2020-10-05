#include "holberton.h"
/**
 * _strstr - this function search for a substring in a string.
 * @haystack: the main string.
 * @needle: the sub string.
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (needle[0] == '\0')
	{
		return ('\0');
	}
	for (a = 0; haystack[a]; a++)
	{
		if (haystack[a] == needle[0])
		{
			return (haystack + a);
		}
	}
	if (haystack[0] == '\0')
	{
		return (haystack + a);
	}
	return ('\0');
}

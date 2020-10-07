#include "holberton.h"
/**
 * _strlen_recursion - this function prints the string lenght.
 * @s: input string.
 * Return: str lenght.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

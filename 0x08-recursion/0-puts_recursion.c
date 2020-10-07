#include "holberton.h"
/**
 * _puts_recursion - this function print a string with recursion.
 * @s: input string.
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
	s++;
	_puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	}
}
